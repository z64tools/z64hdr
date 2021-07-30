#ifndef _HELPERS_PHYSICS_H_
#define _HELPERS_PHYSICS_H_

#include "../include/z64.h"
#include "Matrix.h"

typedef struct {
	s32   J; // Amount of strand limbs + 1
	Vec3f headPos;
	Vec3s headRot;
	f32*  lengthList;
	struct {
		f32 scale;  // Gfx scale
		u32 dlist;
		u8  segID;  // For matrix
		u8  noDraw; /* If there needs to be calculations
		               to get in position before drawing */
	} gfx;
	struct {
		s32    numVec;      // num of how many vec are used from vecList
		Vec3f* vecList;     // "collision" spheres
		f32    dist;        // XYZ distance from limb to vecList member
	} spheres;
	struct {
		Vec2f rotLimit;     // DEG, limits rot to next limb in main calc
		f32   drawYawLimit; // DEG, limits rot on draw, smoothens output
	} constraint;
	
	/* Physics */
	f32 gravity;
	f32 floor;        // world.pos.y, won't go through this
	f32 maxVel;       // Clamps velocity value
	f32 velStep;      // Values below 1.0f will give it spring like motion
	f32 velMult;      // Control the power of velocity
	
	/* Shape Push */
	s32   numPush;    // How many limbs will be smoothed with push
	Vec3f push;       // direction Z, pushes based on rot[0]
	f32   pushMult;   // How much the pushing fill affect
	Vec2f headRotAdd; // DEG, relative, used to control push direction
} PhysicParams;

void Physics_SetHead(PhysicParams* params) {
	MtxF mtx;
    Vec3f zero = { 0 };
	
	Matrix_Get(&mtx);
	func_800D20CC(&mtx, &params->headRot, 0);
    Matrix_MultVec3f(&zero, &params->headPos);
}

void Physics_DrawDynamicStrand(GraphicsContext* gfxCtx, Gfx** dispType, Vec3f* pos, Vec3f* rot, Vec3f* vel, PhysicParams* param) {
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
	
	for (i = 0; i < param->J; i++) {
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
	if (param->headRotAdd.y)
		Matrix_RotateY_f(param->headRotAdd.y, MTXMODE_APPLY);
	if (param->headRotAdd.x)
		Matrix_RotateX_f(param->headRotAdd.x, MTXMODE_APPLY);
	Matrix_MultVec3f(&param->push, &shapeVec);
	
	Vec3f* pPos = &pos[1];
	Vec3f* pPrevPos = pos;
	Vec3f* pVel = &vel[1];
	Vec3f* pPrevRot = rot;
	
	// Main calculation loop
	for (i = 1; i < param->J; i++, pPos++, pPrevPos++, pVel++, pPrevRot++) {
		// Smoothens curve at the start of the limb array
		shapePush = (Vec3f) { 0 };
		if (i < param->numPush) {
			shapePush.x = ((param->numPush - i) * shapeVec.x) * param->pushMult;
			shapePush.y = ((param->numPush - i) * shapeVec.y) * param->pushMult;
			shapePush.z = ((param->numPush - i) * shapeVec.z) * param->pushMult;
		}
		
		workVec.x = pPos->x + pVel->x - pPrevPos->x + shapePush.x;
		tempY = pPos->y + pVel->y - ABS(param->gravity) + shapePush.y;
		workVec.z = pPos->z + pVel->z - pPrevPos->z + shapePush.z;
		
		// FLOOR, also gets rid of the shapePush
		if (tempY < param->floor + 10.0f) {
			workVec.x -= shapePush.x;
			workVec.z -= shapePush.z;
			if (i != param->J && tempY < param->floor)
				tempY = CLAMP_MIN(tempY, param->floor);
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
		Matrix_MultZ(ABS(param->lengthList[i]), &posAdd);
		
		// Pushes limbs away from selected Vec3f points
		for (s32 i = 0; i < param->spheres.numVec; i++) {
			Vec3f tempPosAdd = {
				pPrevPos->x + posAdd.x,
				pPrevPos->y + posAdd.y,
				pPrevPos->z + posAdd.z
			};
			f32 distTo = Math_Vec3f_DistXYZ(&tempPosAdd, &param->spheres.vecList[i]);
			
			if (distTo < param->spheres.dist) {
				s16 yaw = Math_Vec3f_Yaw(&param->spheres.vecList[i], &tempPosAdd);
				s16 pitch = Math_Vec3f_Pitch(&param->spheres.vecList[i], &tempPosAdd);
				posAdd.x += Math_SinS(headRotY + 0x8000) * (param->spheres.dist - distTo) * 0.5f;
				posAdd.z += Math_CosS(headRotY + 0x8000) * (param->spheres.dist - distTo) * 0.5f;
				// posAdd.y += Math_SinS((-RADF_TO_BINANG(angX))) * (param->spheres.dist - distTo) * 0.5;
				velAdj.x += Math_SinS(headRotY + 0x8000) * (param->spheres.dist - distTo) * 0.5f;
				velAdj.z += Math_CosS(headRotY + 0x8000) * (param->spheres.dist - distTo) * 0.5f;
				
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
	
	if (param->gfx.noDraw == true) {
		Matrix_Pull();
		
		return;
	}
	
	Gfx* disp = *dispType;
	Mtx* matrix = Graph_Alloc(gfxCtx, param->J * sizeof(Mtx));
	s16 y = RADF_TO_BINANG(rot[0].y);
	Vec3f* pRot = &rot[0];
	
	gDPPipeSync(disp++);
	gSPSegment(disp++, param->gfx.segID, matrix);
	pPos = &pos[0];
	
	for (i = 0; i < param->J - 1; i++, pPos++, pRot++) {
		Matrix_Translate(pPos->x, pPos->y, pPos->z, MTXMODE_NEW);
		if (param->constraint.drawYawLimit) {
			Math_SmoothStepToS(&y, RADF_TO_BINANG(rot[i].y), 3, DEGF_TO_BINANG(param->constraint.drawYawLimit), 1);
			Matrix_RotateY(BINANG_TO_RAD(y), MTXMODE_APPLY);
		} else {
			Matrix_RotateY(rot[i].y, MTXMODE_APPLY);
		}
		Matrix_RotateX(rot[i].x, MTXMODE_APPLY);
		if (param->lengthList[i] < 0)
			Matrix_Scale(param->gfx.scale, param->gfx.scale, -param->gfx.scale, MTXMODE_APPLY);
		else
			Matrix_Scale(param->gfx.scale, param->gfx.scale, param->gfx.scale, MTXMODE_APPLY);
		Matrix_ToMtx(&matrix[i], 0, 0);
	}
	
	gSPDisplayList(disp++, param->gfx.dlist);
	Matrix_Pull();
	*dispType = disp;
}

#if 0 // Example

#define PONYTAIL_LIMBS 8 + 1
#define SKELANIME_NUMBONES 19 + 1

typedef struct {
	Vec3f rot[PONYTAIL_LIMBS]; // Set same amount to these as for .J in PhysicParams
	Vec3f pos[PONYTAIL_LIMBS];
	Vec3f vel[PONYTAIL_LIMBS]; 
} PonytailPhysics;

typedef struct {
    Actor     actor;
    SkelAnime skelAnime;
    Vec3s     jointTable[SKELANIME_NUMBONES];
	Vec3s     morphTable[SKELANIME_NUMBONES];
    PonytailPhysics phy;
    Vec3f bodyPartPos[3];
} EnNPC;

// Length multiplied with scale
f32 sLength[] = {
	-934.1f              * 0.0055f,
	(-1534.0f - 934.1f)  * 0.0055f,
	(-2165.0f - 1534.0f) * 0.0055f,
	(-3156.0f - 2165.0f) * 0.0055f,
	(-4092.0f - 3156.0f) * 0.0055f,
	(-5195.0f - 4092.0f) * 0.0055f,
	(-6072.0f - 5195.0f) * 0.0055f,
	(-6816.0f - 6072.0f) * 0.0055f,
	(-400.0f)            * 0.0055f,
};

PhysicParams sPhysicParams = {
	.J = PONYTAIL_LIMBS,
	.lengthList = sLength,
	.gfx = {
		.scale = 0.0055f,
		.dlist = DL_PONYTAIL,
		.segID = 0x0B,
		.noDraw = true,
	},
	.spheres = {
		.numVec = 3,
		.vecList = NULL, // Set in Init
		.dist = 4.0f
	},
	.constraint = {
		.rotLimit = {
			.x = 45.0f,
			.y = 45.0f,
		},
		.drawYawLimit = 25.0f,
	},
	
	/* Physics */
	.gravity = 2.0f,
	.floor = 2.0f,
	.maxVel = 64.0f,
	.velStep = 0.7f,
	.velMult = 0.9f,
	
	/* Shape Push */
	.numPush = 5,
	.push = {
		0,
		0.2f,
		-3.0f
	},
	.pushMult = 0.2f,
	.headRotAdd = {
		65.0f,
		0,
	}
};

void EnNPC_Init(EnNPC* this, GlobalContext* globalCtx) {
    SkelAnime_InitFlex(globalCtx, &this->skelAnime, SKELETON, ANIM, this->limbDrawTable, this->transitionDrawTable, SKELANIME_NUMBONES);
    sPhysicParams.spheres.vecList = this->bodyPartsPos;
}

void EnNPC_PostDraw(GlobalContext* globalCtx, u8 limbID, u32* dlistPtr, Vec3s* rot, EnNPC* this) {
	Vec3f zero = { 0 };

    switch (limbID) {
        case HEAD:
            Physics_SetHead(&sPhysicParams);
            break;
	    case UPPERARM_L:
		    Matrix_MultVec3f(&zero, &this->bodyPartsPos[0]);
		    break;
	    case UPPERARM_R:
		    Matrix_MultVec3f(&zero, &this->bodyPartsPos[1]);
		    break;
	    case UPPERBODY:
		    Matrix_MultVec3f(&zero, &this->bodyPartsPos[2]);
		    break;
    }
}

void EnNPC_Draw(EnNPC* this, GlobalContext* globalCtx) {
    SkelAnime_DrawFlexOpa(
		globalCtx,
		this->skelAnime.skeleton,
		this->skelAnime.jointTable,
		this->skelAnime.dListCount,
		NULL,
		EnNPC_PostDraw,
		&this->actor
	);

    // Run without drawing to get limbs in position
	if (sPhysicParams.gfx.noDraw == true) {
		for (s32 i = 0; i < 60; i++)
			Physics_DrawDynamicStrand(
                globalCtx->state.gfxCtx, 
                &POLY_OPA_DISP, 
                this->phy.pos, 
                this->phy.rot, 
                this->phy.vel, 
                &sPhysicParams
            );
		sPhysicParams.gfx.noDraw = false;
	}
	
    Physics_DrawDynamicStrand(
        globalCtx->state.gfxCtx, 
        &POLY_OPA_DISP, 
        this->phy.pos, 
        this->phy.rot, 
        this->phy.vel, 
        &sPhysicParams
    );
}

#endif
#endif