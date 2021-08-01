#ifndef _HELPERS_PHYSICS_H_
#define _HELPERS_PHYSICS_H_

#ifndef _Z64HDR_HELPER_PREFIX_
#define _Z64HDR_HELPER_PREFIX_
#endif

#include "include/z64.h"
#include "Matrix.h"

typedef void(*PhysicCallback)(s32 limbIndex, void*, void*);

typedef struct {
	Vec3f pos;
	Vec3f rot;
	Vec3f vel;
} PhysicsJoint;

typedef struct {
	s32 numLimbs;
	f32 gravity;
	f32 floorY;  // world.pos.y, won't go through this
	f32 maxVel;  // Clamps velocity value
	f32 velStep; // Values below 1.0f will give it spring like motion
	f32 velMult; // Control the power of velocity
} PhysicsInfo;

typedef struct {
	Vec3f pos;
	Vec3s rot;
	MtxF* mtxF;
} PhysicsHead;

typedef struct {
	u32   dlist;
	Vec3f scale;  // Gfx scale
	u8    segID;  // For matrix
	u8    noDraw; /* If there needs to be calculations
	                 to get in position before drawing */
} PhysicsGfx;

typedef struct {
	s32    num; // amount of spheres
	Vec3f* centers;
	f32    radius;
} PhysicsSpheres; // "collision" spheres, pushes limbs away

typedef struct {
	u8    lockRoot;    // Prevent physics rotating root limb
	Vec2f rotStepCalc; // DEG, limits rot to next limb in main calc
	Vec2f rotStepDraw; // DEG, limits rot on draw, smoothens output
} PhysicsConstraint;

typedef struct {
	s32   num;  // How many limbs will be smoothed with push
	Vec3f push; // direction Z, pushes based on rot[0]
	f32   mult; // How much the pushing fill affect
	Vec3f rot;  // DEG, rigids towards, relative rot
} PhysicsRigidity;

typedef struct {
	PhysicsInfo       info;
	PhysicsHead       head;
	PhysicsGfx        gfx;
	PhysicsSpheres    spheres;
	PhysicsConstraint constraint;
	PhysicsRigidity   rigidity;
	f32 limbsLength[];
} PhysicsStrandInit;

typedef struct {
	PhysicsInfo       info;
	PhysicsHead       head;
	PhysicsGfx        gfx;
	PhysicsSpheres    spheres;
	PhysicsConstraint constraint;
	PhysicsRigidity   rigidity;
	f32* limbsLength;
} PhysicsStrand;

_Z64HDR_HELPER_PREFIX_
void Physics_GetHeadProperties(PhysicsStrand* params, Vec3f* mult, s32 flag) {
	static MtxF mtxF;
	Vec3f zero = { 0 };
	
	Matrix_Get(&mtxF);
	params->head.mtxF = &mtxF;
	func_800D20CC(&mtxF, &params->head.rot, flag);
	if (mult == NULL) {
		Matrix_MultVec3f(&zero, &params->head.pos);
		
		return;
	}
	Matrix_MultVec3f(mult, &params->head.pos);
}

_Z64HDR_HELPER_PREFIX_
void Physics_SetPhysicsStrand(PhysicsStrandInit* init, PhysicsStrand* dest, f32* lengthDest, Vec3f* sphereCenters) {
	dest->info = init->info;
	dest->head = init->head;
	dest->gfx = init->gfx;
	dest->spheres = init->spheres;
	dest->constraint = init->constraint;
	dest->rigidity = init->rigidity;
	
	for (s32 i = 0; i < init->info.numLimbs + 1; i++) {
		lengthDest[i] = init->limbsLength[i];
	}
	dest->limbsLength = lengthDest;
	dest->spheres.centers = sphereCenters;
}

_Z64HDR_HELPER_PREFIX_
void Physics_DrawDynamicStrand(GraphicsContext* gfxCtx, TwoHeadGfxArena* disp, PhysicsJoint* jointTable, PhysicsStrand* param, void* callback, void* callbackArg1, void* callbackArg2) {
	s32 i;
	f32 tempY;
	f32 angX;
	f32 angY;
	Vec3f workVec;
	Vec3f posAdd;
	Vec3f rigidity, smoothedRigid;
	Vec3f velAdj = { 0 };
	s16 headRotY = param->head.rot.y;
	Vec3f* pPos;
	Vec3f* pRot;
	Vec3f* pVel;
	Vec3f* pPrevPos;
	Vec3f* pPrevRot;
	
	Matrix_Push();
	
	jointTable[0].pos.x = param->head.pos.x;
	jointTable[0].pos.y = param->head.pos.y;
	jointTable[0].pos.z = param->head.pos.z;
	
	for (i = 1; i < param->info.numLimbs + 1; i++) {
		Math_ApproachF(&jointTable[i].vel.x, 0.0f, 1.0f, param->info.velStep);
		Math_ApproachF(&jointTable[i].vel.y, 0.0f, 1.0f, param->info.velStep);
		Math_ApproachF(&jointTable[i].vel.z, 0.0f, 1.0f, param->info.velStep);
	}
	
	Matrix_RotateX_s(param->head.rot.x, MTXMODE_NEW);
	Matrix_RotateY_s(param->head.rot.y, MTXMODE_APPLY);
	Matrix_RotateZ_s(param->head.rot.z, MTXMODE_APPLY);
	if (param->rigidity.rot.x) Matrix_RotateX_f(param->rigidity.rot.x, MTXMODE_APPLY);
	if (param->rigidity.rot.y) Matrix_RotateY_f(param->rigidity.rot.y, MTXMODE_APPLY);
	if (param->rigidity.rot.z) Matrix_RotateZ_f(param->rigidity.rot.z, MTXMODE_APPLY);
	Matrix_MultVec3f(&param->rigidity.push, &rigidity);
	
	// Main calculation loop
	for (i = 1; i < param->info.numLimbs + 1; i++) {
		pPos = &jointTable[i].pos;
		pVel = &jointTable[i].vel;
		pPrevPos = &jointTable[i - 1].pos;
		pPrevRot = &jointTable[i - 1].rot;
		
		// Smoothens curve at the start of the limb array
		smoothedRigid = (Vec3f) { 0 };
		if (i < param->rigidity.num) {
			smoothedRigid.x = ((param->rigidity.num - i) * rigidity.x) * param->rigidity.mult;
			smoothedRigid.y = ((param->rigidity.num - i) * rigidity.y) * param->rigidity.mult;
			smoothedRigid.z = ((param->rigidity.num - i) * rigidity.z) * param->rigidity.mult;
		}
		
		workVec.x = pPos->x + pVel->x - pPrevPos->x + smoothedRigid.x;
		tempY = pPos->y + pVel->y + param->info.gravity + smoothedRigid.y;
		workVec.z = pPos->z + pVel->z - pPrevPos->z + smoothedRigid.z;
		
		// FLOOR, also gets rid of the smoothedRigid
		if (tempY < param->info.floorY + 10.0f) {
			workVec.x -= smoothedRigid.x;
			workVec.z -= smoothedRigid.z;
			if (i != param->info.numLimbs + 1 && tempY < param->info.floorY)
				tempY = CLAMP_MIN(tempY, param->info.floorY);
		}
		
		workVec.y = tempY - pPrevPos->y;
		
		angY = Math_Atan2F(workVec.z, workVec.x);
		angX = -Math_Atan2F(sqrtf(SQ(workVec.x) + SQ(workVec.z)), workVec.y);
		pPrevRot->y = angY;
		pPrevRot->x = angX;
		
		// Handle constraints if they are set
		if (param->constraint.rotStepCalc.x || param->constraint.rotStepCalc.y || param->constraint.lockRoot) {
			s16 rootAngleX, rootAngleY;
			s16 workAngleX, workAngleY;
			s16 tempAngleX, tempAngleY;
			
			// Handle root rotations differently
			if (i == 1) {
				if (param->constraint.lockRoot) {
					pPrevRot->x = angX = -Math_Atan2F(sqrtf(SQ(rigidity.x) + SQ(rigidity.z)), rigidity.y);
					pPrevRot->y = angY = Math_Atan2F(rigidity.z, rigidity.x);
				} else {
					if (param->constraint.rotStepCalc.x) {
						rootAngleX = RADF_TO_BINANG(-Math_Atan2F(sqrtf(SQ(rigidity.x) + SQ(rigidity.z)), rigidity.y));
						workAngleX = RADF_TO_BINANG(-Math_Atan2F(sqrtf(SQ(workVec.x) + SQ(workVec.z)), workVec.y));
						Math_SmoothStepToS(&rootAngleX, workAngleX, 1, DEGF_TO_BINANG(param->constraint.rotStepCalc.x), 1);
						angX = BINANG_TO_RAD(rootAngleX);
						pPrevRot->x = angX;
					}
					if (param->constraint.rotStepCalc.y) {
						rootAngleY = RADF_TO_BINANG(Math_Atan2F(rigidity.z, rigidity.x));
						workAngleY = RADF_TO_BINANG(Math_Atan2F(workVec.z, workVec.x));
						Math_SmoothStepToS(&rootAngleY, workAngleY, 1, DEGF_TO_BINANG(param->constraint.rotStepCalc.y), 1);
						angY = BINANG_TO_RAD(rootAngleY);
						pPrevRot->y = angY;
					}
				}
			} else {
				if (param->constraint.rotStepCalc.x) {
					tempAngleX = RADF_TO_BINANG(jointTable[i - 2].rot.x);
					workAngleX = RADF_TO_BINANG(-Math_Atan2F(sqrtf(SQ(workVec.x) + SQ(workVec.z)), workVec.y));
					Math_SmoothStepToS(&tempAngleX, workAngleX, 1, DEGF_TO_BINANG(param->constraint.rotStepCalc.x), 1);
					angX = BINANG_TO_RAD(tempAngleX);
					pPrevRot->x = angX;
				}
				if (param->constraint.rotStepCalc.y) {
					tempAngleY = RADF_TO_BINANG(jointTable[i - 2].rot.y);
					workAngleY = RADF_TO_BINANG(Math_Atan2F(workVec.z, workVec.x));
					Math_SmoothStepToS(&tempAngleY, workAngleY, 1, DEGF_TO_BINANG(param->constraint.rotStepCalc.y), 1);
					angY = BINANG_TO_RAD(tempAngleY);
					pPrevRot->y = angY;
				}
			}
		}
		
		Matrix_RotateY(angY, MTXMODE_NEW);
		Matrix_RotateX(angX, MTXMODE_APPLY);
		Matrix_MultZ(ABS(param->limbsLength[i]) * param->gfx.scale.z, &posAdd);
		
		// Pushes limbs away from selected Vec3f points
		for (s32 i = 0; i < param->spheres.num; i++) {
			Vec3f tempPosAdd = {
				pPrevPos->x + posAdd.x,
				pPrevPos->y + posAdd.y,
				pPrevPos->z + posAdd.z
			};
			f32 radiusTo = Math_Vec3f_DistXYZ(&tempPosAdd, &param->spheres.centers[i]);
			
			if (radiusTo < param->spheres.radius) {
				s16 yaw = Math_Vec3f_Yaw(&param->spheres.centers[i], &tempPosAdd);
				s16 pitch = Math_Vec3f_Pitch(&param->spheres.centers[i], &tempPosAdd);
				posAdd.x += Math_SinS(headRotY + 0x8000) * (param->spheres.radius - radiusTo) * 0.5f;
				posAdd.z += Math_CosS(headRotY + 0x8000) * (param->spheres.radius - radiusTo) * 0.5f;
				velAdj.x += Math_SinS(headRotY + 0x8000) * (param->spheres.radius - radiusTo) * 0.5f;
				velAdj.z += Math_CosS(headRotY + 0x8000) * (param->spheres.radius - radiusTo) * 0.5f;
				
				pPrevRot->y = angY =  Math_Atan2F(posAdd.z, posAdd.x);
				pPrevRot->x = angX = -Math_Atan2F(sqrtf(SQ(posAdd.x) + SQ(posAdd.z)), posAdd.y);
			}
		}
		
		workVec.x = pPos->x;
		workVec.y = pPos->y;
		workVec.z = pPos->z;
		
		pPos->x = pPrevPos->x + posAdd.x;
		pPos->y = pPrevPos->y + posAdd.y;
		pPos->z = pPrevPos->z + posAdd.z;
		
		pVel->x = (pPos->x - workVec.x + velAdj.x) * param->info.velMult;
		pVel->y = (pPos->y - workVec.y + velAdj.y) * param->info.velMult;
		pVel->z = (pPos->z - workVec.z + velAdj.z) * param->info.velMult;
		
		jointTable[i].vel = (Vec3f) {
			CLAMP(pVel->x, -param->info.maxVel, param->info.maxVel),
			CLAMP(pVel->y, -param->info.maxVel, param->info.maxVel),
			CLAMP(pVel->z, -param->info.maxVel, param->info.maxVel),
		};
	}
	
	if (param->gfx.noDraw) {
		Matrix_Pull();
		
		return;
	}
	
	Mtx* matrix = Graph_Alloc(gfxCtx, param->info.numLimbs * sizeof(Mtx));
	s16 y = RADF_TO_BINANG(jointTable[0].rot.y);
	s16 x = RADF_TO_BINANG(jointTable[0].rot.x);
	
	for (i = 0; i < param->info.numLimbs; i++) {
		pPos = &jointTable[i].pos;
		pRot = &jointTable[i].rot;
		
		Matrix_Translate(pPos->x, pPos->y, pPos->z, MTXMODE_NEW);
		
		if (param->constraint.rotStepDraw.y) {
			Math_SmoothStepToS(&y, RADF_TO_BINANG(pRot->y), 3, DEGF_TO_BINANG(param->constraint.rotStepDraw.y), 1);
			Matrix_RotateY(BINANG_TO_RAD(y), MTXMODE_APPLY);
		} else {
			Matrix_RotateY(pRot->y, MTXMODE_APPLY);
		}
		
		if (param->constraint.rotStepDraw.x) {
			Math_SmoothStepToS(&x, RADF_TO_BINANG(pRot->x), 3, DEGF_TO_BINANG(param->constraint.rotStepDraw.x), 1);
			Matrix_RotateX(BINANG_TO_RAD(x), MTXMODE_APPLY);
		} else {
			Matrix_RotateX(pRot->x, MTXMODE_APPLY);
		}
		
		if (param->limbsLength[i] < 0)
			Matrix_Scale(param->gfx.scale.x, param->gfx.scale.y, -param->gfx.scale.z, MTXMODE_APPLY);
		else
			Matrix_Scale(param->gfx.scale.x, param->gfx.scale.y, param->gfx.scale.z, MTXMODE_APPLY);
		
		if(callback) {
			((PhysicCallback)callback)(i, callbackArg1, callbackArg2);
		}
		Matrix_ToMtx(&matrix[i], __FILE__, __LINE__);
	}
	
	gDPPipeSync(disp->p++);
	gSPSegment(disp->p++, param->gfx.segID, matrix);
	gSPDisplayList(disp->p++, param->gfx.dlist);
	Matrix_Pull();
}

#endif
