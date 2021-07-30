#ifndef _HELPERS_PHYSICS_H_
#define _HELPERS_PHYSICS_H_

#include "include/z64.h"
#include "Matrix.h"

typedef struct {
	s32   numLimbs;
	Vec3f headPos;
	Vec3s headRot;
	f32*  limbsLength;
	struct {
		Vec3f scale;  // Gfx scale
		u32   dlist;
		u8    segID;  // For matrix
		u8    noDraw; /* If there needs to be calculations
		                 to get in position before drawing */
	} gfx;

	struct {
		s32    num; // amount of spheres
		Vec3f* centers;
		f32    radius;
	} spheres;  // "collision" spheres

	struct {
		Vec2f rotLimit;     // DEG, limits rot to next limb in main calc
		f32   drawYawLimit; // DEG, limits rot on draw, smoothens output
	} constraint;

	struct {
		s32   num;    // How many limbs will be smoothed with push
		Vec3f push;   // direction Z, pushes based on rot[0]
		f32   mult;   // How much the pushing fill affect
		Vec2f rotAdd; // DEG, relative, used to control push direction
	} rigidity;

	/* Physics */
	f32 gravity;
	f32 floorY;       // world.pos.y, won't go through this
	f32 maxVel;       // Clamps velocity value
	f32 velStep;      // Values below 1.0f will give it spring like motion
	f32 velMult;      // Control the power of velocity
} PhysicsStrand;

void Physics_SetHead(PhysicsStrand* params) {
    Vec3f zero = { 0 };
	
    func_800D20CC(&sCurrentMatrix, &params->headRot, 0);
    Matrix_MultVec3f(&zero, &params->headPos);
}

void Physics_DrawDynamicStrand(GraphicsContext* gfxCtx, Gfx** dispType, Vec3f* pos, Vec3f* rot, Vec3f* vel, PhysicsStrand* param) {
	s16 i;
	f32 tempY;
	f32 angX = 0;
	f32 angY = 0;
	Vec3f workVec;
	Vec3f posAdd;
	Vec3f shapeVec, shapePush;
	Vec3f velAdj = { 0 };
	s16 headRotY = param->headRot.y;
	
	Matrix_Push();
	
	for (i = 0; i < param->numLimbs + 1; i++) {
		if (i == 0) {
			pos[0].x = param->headPos.x;
			pos[0].y = param->headPos.y;
			pos[0].z = param->headPos.z;
		} else {
			Math_ApproachF(&vel[i].x, 0.0f, 1.0f, param->velStep);
			Math_ApproachF(&vel[i].y, 0.0f, 1.0f, param->velStep);
			Math_ApproachF(&vel[i].z, 0.0f, 1.0f, param->velStep);
		}
	}
	
	Matrix_RotateY_s(param->headRot.y, MTXMODE_NEW);
	Matrix_RotateX_s(param->headRot.x, MTXMODE_APPLY);
	if (param->rigidity.rotAdd.y)
		Matrix_RotateY_f(param->rigidity.rotAdd.y, MTXMODE_APPLY);
	if (param->rigidity.rotAdd.x)
		Matrix_RotateX_f(param->rigidity.rotAdd.x, MTXMODE_APPLY);
	Matrix_MultVec3f(&param->rigidity.push, &shapeVec);
	
	Vec3f* pPos = &pos[1];
	Vec3f* pPrevPos = pos;
	Vec3f* pVel = &vel[1];
	Vec3f* pPrevRot = rot;
	
	// Main calculation loop
	for (i = 1; i < param->numLimbs + 1; i++, pPos++, pPrevPos++, pVel++, pPrevRot++) {
		// Smoothens curve at the start of the limb array
		shapePush = (Vec3f) { 0 };
		if (i < param->rigidity.num) {
			shapePush.x = ((param->rigidity.num - i) * shapeVec.x) * param->rigidity.mult;
			shapePush.y = ((param->rigidity.num - i) * shapeVec.y) * param->rigidity.mult;
			shapePush.z = ((param->rigidity.num - i) * shapeVec.z) * param->rigidity.mult;
		}
		
		workVec.x = pPos->x + pVel->x - pPrevPos->x + shapePush.x;
		tempY = pPos->y + pVel->y - ABS(param->gravity) + shapePush.y;
		workVec.z = pPos->z + pVel->z - pPrevPos->z + shapePush.z;
		
		// FLOOR, also gets rid of the shapePush
		if (tempY < param->floorY + 10.0f) {
			workVec.x -= shapePush.x;
			workVec.z -= shapePush.z;
			if (i != param->numLimbs + 1 && tempY < param->floorY)
				tempY = CLAMP_MIN(tempY, param->floorY);
		}
		
		workVec.y = tempY - pPrevPos->y;
		
		// Handle constraints if they are set
		if (param->constraint.rotLimit.x || param->constraint.rotLimit.y) {
			s16 rootAngleX, rootAngleY;
			s16 workAngleX, workAngleY;
			s16 tempAngleX, tempAngleY;
			
			// Handle HeadRot differently
			if (i == 1) {
				if (param->constraint.rotLimit.x) {
					rootAngleX = RADF_TO_BINANG(-Math_Atan2F(sqrtf(SQ(shapeVec.x) + SQ(shapeVec.z)), shapeVec.y));
					workAngleX = RADF_TO_BINANG(-Math_Atan2F(sqrtf(SQ(workVec.x) + SQ(workVec.z)), workVec.y));
					Math_SmoothStepToS(&rootAngleX, workAngleX, 1, DEGF_TO_BINANG(param->constraint.rotLimit.x), 1);
					angX = BINANG_TO_RAD(rootAngleX);
					pPrevRot->x = angX;
				}
				if (param->constraint.rotLimit.y) {
					rootAngleY = RADF_TO_BINANG(Math_Atan2F(shapeVec.z, shapeVec.x));
					workAngleY = RADF_TO_BINANG(Math_Atan2F(workVec.z, workVec.x));
					Math_SmoothStepToS(&rootAngleY, workAngleY, 1, DEGF_TO_BINANG(param->constraint.rotLimit.y), 1);
					angY = BINANG_TO_RAD(rootAngleY);
					pPrevRot->y = angY;
				}
			} else {
				if (param->constraint.rotLimit.x) {
					tempAngleX = RADF_TO_BINANG(rot[i - 2].x);
					workAngleX = RADF_TO_BINANG(-Math_Atan2F(sqrtf(SQ(workVec.x) + SQ(workVec.z)), workVec.y));
					Math_SmoothStepToS(&tempAngleX, workAngleX, 1, DEGF_TO_BINANG(param->constraint.rotLimit.x), 1);
					angX = BINANG_TO_RAD(tempAngleX);
					pPrevRot->x = angX;
				}
				if (param->constraint.rotLimit.y) {
					tempAngleY = RADF_TO_BINANG(rot[i - 2].y);
					workAngleY = RADF_TO_BINANG(Math_Atan2F(workVec.z, workVec.x));
					Math_SmoothStepToS(&tempAngleY, workAngleY, 1, DEGF_TO_BINANG(param->constraint.rotLimit.y), 1);
					angY = BINANG_TO_RAD(tempAngleY);
					pPrevRot->y = angY;
				}
			}
		} else {
			angY = Math_Atan2F(workVec.z, workVec.x);
			angX = -Math_Atan2F(sqrtf(SQ(workVec.x) + SQ(workVec.z)), workVec.y);
			pPrevRot->y = angY;
			pPrevRot->x = angX;
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
		
		pVel->x = (pPos->x - workVec.x + velAdj.x) * param->velMult;
		pVel->y = (pPos->y - workVec.y + velAdj.y) * param->velMult;
		pVel->z = (pPos->z - workVec.z + velAdj.z) * param->velMult;
		
		vel[i] = (Vec3f) {
			CLAMP(pVel->x, -param->maxVel, param->maxVel),
			CLAMP(pVel->y, -param->maxVel, param->maxVel),
			CLAMP(pVel->z, -param->maxVel, param->maxVel),
		};
	}
	
	if (param->gfx.noDraw) {
		Matrix_Pull();
		
		return;
	}
	
	Mtx* matrix = Graph_Alloc(gfxCtx, param->numLimbs * sizeof(Mtx));
	Gfx* disp = *dispType;
	s16 y = RADF_TO_BINANG(rot[0].y);
	Vec3f* pRot = &rot[0];
	
	gDPPipeSync(disp++);
	gSPSegment(disp++, param->gfx.segID, matrix);
	pPos = &pos[0];
	
	for (i = 0; i < param->numLimbs; i++, pPos++, pRot++) {
		Matrix_Translate(pPos->x, pPos->y, pPos->z, MTXMODE_NEW);
		if (param->constraint.drawYawLimit) {
			Math_SmoothStepToS(&y, RADF_TO_BINANG(rot[i].y), 3, DEGF_TO_BINANG(param->constraint.drawYawLimit), 1);
			Matrix_RotateY(BINANG_TO_RAD(y), MTXMODE_APPLY);
		} else {
			Matrix_RotateY(rot[i].y, MTXMODE_APPLY);
		}
		Matrix_RotateX(rot[i].x, MTXMODE_APPLY);
		if (param->limbsLength[i] < 0)
			Matrix_Scale(param->gfx.scale.x, param->gfx.scale.y, -param->gfx.scale.z, MTXMODE_APPLY);
		else
			Matrix_Scale(param->gfx.scale.x, param->gfx.scale.y, param->gfx.scale.z, MTXMODE_APPLY);
		Matrix_ToMtx(&matrix[i], "Physics_DrawDynamicStrand", 0);
	}
	
	gSPDisplayList(disp++, param->gfx.dlist);
	Matrix_Pull();
	*dispType = disp;
}

#endif
