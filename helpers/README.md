
# Z64 Helpers

By default these aren't set `static inline`. To do this, you can `#define` `_Z64HDR_HELPER_PREFIX_` to achieve this.
```c
#define _Z64HDR_HELPER_PREFIX_ static inline
#include <helpers/Helper.h>
```
---
### List of content
1. [MATRIX](#matrix)
	1. [Matrix Multiply](#matrix-mult)
	1. [Matrix Macros](#matrix-macros)
1. [PHYSICS](#physics)
	1. [PhysicsStrand Struct](#physicsstrand-struct)
		1. [PhysicsInfo](#physicsinfo)
		1. [PhysicsHead](#physicshead)
		1. [PhysicsGfx](#physicsgfx)
		1. [PhysicsSpheres](#physicsspheres)
		1. [PhysicsConstraint](#physicsconstraint)
		1. [PhysicsRigidity](#physicsrigidity)
    1. [Examples](#examples)
        1. [PhysicsStrand](#physicsstrand)
        1. [ActorInit](#actorinit)
        1. [OverridePostDraw](#overridepostdraw)
		1. [PhysicCallback](#physiccallback)
        1. [ActorDraw](#actordraw)
1. [Credits](#credits)
---
# Matrix
## Matrix Mult
```c
void Matrix_MultX(f32 scale, Vec3f* dst);
void Matrix_MultY(f32 scale, Vec3f* dst);
void Matrix_MultZ(f32 scale, Vec3f* dst);
```
[Back to top](#list-of-content)

---
## Matrix Macros
```c
#define Matrix_RotateY_s(binang, A) Matrix_RotateY(BINANG_TO_RAD(binang), A)
#define Matrix_RotateX_s(binang, A) Matrix_RotateX(BINANG_TO_RAD(binang), A)
#define Matrix_RotateZ_s(binang, A) Matrix_RotateZ(BINANG_TO_RAD(binang), A)

#define Matrix_RotateY_f(degf, A)   Matrix_RotateY(DEGF_TO_RADF(degf), A)
#define Matrix_RotateX_f(degf, A)   Matrix_RotateX(DEGF_TO_RADF(degf), A)
#define Matrix_RotateZ_f(degf, A)   Matrix_RotateZ(DEGF_TO_RADF(degf), A)
```
[Back to top](#list-of-content)

---
# Physics
---
## PhysicsStrand Struct
```md
typedef struct {
	PhysicsInfo       info;
	PhysicsHead       head;
	PhysicsGfx        gfx;
	PhysicsSpheres    spheres; // "collision" spheres
	PhysicsConstraint constraint;
	PhysicsRigidity   rigidity;
	f32 limbsLength[];
} PhysicsStrandInit;

typedef struct {
	PhysicsInfo       info;
	PhysicsHead       head;
	PhysicsGfx        gfx;
	PhysicsSpheres    spheres; // "collision" spheres
	PhysicsConstraint constraint;
	PhysicsRigidity   rigidity;
	f32* limbsLength;
} PhysicsStrand;
```
Difference between `PhysicsStrand` and `PhysicsStrandInit` is like how `Zelda 64` games handle `Colliders`.

[Back to top](#list-of-content)

---
### PhysicsInfo
```c
typedef struct {
	s32 numLimbs;
	f32 gravity;
	f32 floorY;  // world.pos.y, won't go through this
	f32 maxVel;  // Clamps velocity value
	f32 velStep; // Values below 1.0f will give it spring like motion
	f32 velMult; // Control the power of velocity
} PhysicsInfo;
```
[Back to top](#list-of-content)

---
### PhysicsHead
```c
typedef struct {
	Vec3f pos;
	Vec3s rot;
	MtxF* mtxF;
} PhysicsHead;
```
[Back to top](#list-of-content)

---
### PhysicsGfx
```c
typedef struct {
	u32   dlist;
	Vec3f scale;  // Gfx scale
	u8    segID;  // For matrix
	u8    noDraw; /* If there needs to be calculations
	                 to get in position before drawing */
} PhysicsGfx;
```
[Back to top](#list-of-content)

---
### PhysicsSpheres
```c
typedef struct {
	s32    num; // amount of spheres
	Vec3f* centers;
	f32    radius;
} PhysicsSpheres;
```
[Back to top](#list-of-content)

---
### PhysicsConstraint
```c
typedef struct {
	u8    lockRoot;    // Prevent physics rotating root limb
	Vec2f rotStepCalc; // DEG, limits rot to next limb in main calc
	Vec2f rotStepDraw; // DEG, limits rot on draw, smoothens output
} PhysicsConstraint;
```
[Back to top](#list-of-content)

---
### PhysicsRigidity
```c
typedef struct {
	s32   num;  // How many limbs will be smoothed with push
	Vec3f push; // direction Z, pushes based on rot[0]
	f32   mult; // How much the pushing fill affect
	Vec3f rot;  // DEG, rigids towards, relative rot
} PhysicsRigidity;
```
[Back to top](#list-of-content)

---
## Examples
Here you set the arrays for physics to store/read values from. In this specific example the substruct is named `PonytailPhysics`, but you can name it whatever you like.

```c

typedef struct {
	Actor         actor;
	SkelAnime     skelAnime;
	Vec3s         jointTable[SKEL_NPC_NUMBONES_DT];
	Vec3s         morphTable[SKEL_NPC_NUMBONES_DT];
	PhysicsStrand phyPonytail;
	f32           phyJointLength[10]; // Number of limbs + 1
	PhysicsJoint  phyJointTable[10];  // Number of limbs + 1
	Vec3f         bodyPartsPos[6];
	Vec3f         tailEnd;
} EnNPC;
```
[Back to top](#list-of-content)

---
### PhysicsStrand
Here are all the options that affect how the strand will be processed. These could also be stored in Actors struct, if these are set into it in init.
```c
PhysicsStrandInit sPonytailInit = {
	.info = {
		.numLimbs = 9,
		.gravity = -2.0f,
		.floorY = 2.0f,
		.maxVel = 64.0f,
		.velStep = 0.7f,
		.velMult = 0.9f,
	},
	.gfx = {
		.dlist = DL_PONYTAIL,
		.scale = {
			0.0055f,
			0.0055f,
			0.0055f
		},
		.segID = 0x0B,
		.noDraw = true,
	},
	.spheres = {
		.num = 6,
		.centers = NULL,
		.radius = 4.0f
	},
	.constraint = {
		.lockRoot = false,
		.rotStepCalc = {
			.x = 45.0f,
			.y = 45.0f,
		},
		.rotStepDraw = {
			.y = 25.0f,
			.x = 0.0f,
		},
	},
	.rigidity = {
		.num = 5,
		.push = {
			0,
			0.2f,
			-3.0f
		},
		.mult = 0.2f,
		.rot = {
			.x = 50.0f,
			.y = 0.0f,
			.z = 0.0f,
		},
	},
	.limbsLength = {
		-930.0f,
		-1530.0f +  930.0f,
		-2160.0f + 1530.0f,
		-3150.0f + 2160.0f,
		-4090.0f + 3150.0f,
		-5190.0f + 4090.0f,
		-6070.0f + 5190.0f,
		-6810.0f + 6070.0f,
		-400.0f,
	},
};
```
[Back to top](#list-of-content)

---
### ActorInit
```c
void EnNpc_Init(EnNpc* this, GlobalContext* globalCtx) {
	Actor_SetScale(&this->actor, 0.0055f);
	SkelAnime_InitFlex(globalCtx, &this->skelAnime, SKEL_NPC, ANIM_IDLE, this->jointTable, this->morphTable, SKEL_NPC_NUMBONES_DT);
	
	Physics_SetPhysicsStrand(&sPonytailInit, &this->phyPonytail, this->phyJointLength, this->bodyPartsPos);
}
```
[Back to top](#list-of-content)

---
### OverridePostDraw
In `SkelAnime` PostDraw you can get the "sphere" collision centers like so. This will prevent the limbs of the strand go through them.
```c
void EnNpc_PostDraw(GlobalContext* globalCtx, s32 limbIndex, Gfx** dList, Vec3s* rot, void* thisx) {
	EnNpc* this = (EnNpc*)thisx;
	Vec3f zero = { 0 };
	
	switch (limbIndex) {
		case NpcLimb_Head:
			Matrix_MultVec3f(&zero, &this->actor.focus.pos);
			break;
		case NpcLimb_Ponytail1:
			Physics_GetHeadProperties(&this->phyPonytail, &zero, 0);
			break;
	    case NpcLimb_Upperbody:
		    Matrix_MultVec3f(&zero, &this->bodyPartsPos[0]);
		    break;
	    case NpcLimb_Upperarm_R:
		    Matrix_MultVec3f(&zero, &this->bodyPartsPos[1]);
		    break;
	    case NpcLimb_Thigh_R:
		    Matrix_MultVec3f(&zero, &this->bodyPartsPos[2]);
		    break;
	    case NpcLimb_Waist:
		    Matrix_MultVec3f(&zero, &this->bodyPartsPos[3]);
		    break;
	    case NpcLimb_Upperarm_L:
		    Matrix_MultVec3f(&zero, &this->bodyPartsPos[4]);
		    break;
	    case NpcLimb_Thigh_L:
		    Matrix_MultVec3f(&zero, &this->bodyPartsPos[5]);
		    break;
	}
}
```
[Back to top](#list-of-content)

---
### PhysicCallback
This callback can have up to two `pointers` of your choice. Type of the pointers are declared in this callback function itself and then assigned to the `Physics_DrawDynamicStrand` function if used.
```c
void EnNpc_PhysicsCallback(s32 limbIndex, GlobalContext* globalCtx, void* arg2) {
	Vec3f zero = { 0.0f, 100.0f, 0.0f };

	if (limbIndex == LIMB_END)
		Matrix_MultVec3f(&zero, &this->tailEnd);
}
```
[Back to top](#list-of-content)

---
### ActorDraw
In draw you can do a `for loop` to get the positions calculated instantly. Also remember to use the extra arguments if you're going to use `PhysicCallback`.
```c
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
	
	if (this->phyPonytail.gfx.noDraw == true) {
		for (s32 i = 0; i < 60; i++) {
			Physics_DrawDynamicStrand(
				globalCtx->state.gfxCtx,
				&POLY_OPA,
				this->phyJointTable,
				&this->phyPonytail,
				0,
				0,
				0
			);
		}
		this->phyPonytail.gfx.noDraw = false;
	}
	
	Physics_DrawDynamicStrand(
		globalCtx->state.gfxCtx,
		&POLY_OPA,
		this->phyJointTable,
		&this->phyPonytail,
		EnNpc_PhysicsCallback,
		globalCtx,
		0
	);
}
```
[Back to top](#list-of-content)

---
# Credits
```
Rankaisija - Coding Physics helpers
/Zel/ - Decompiling Boss07 - Majora whip function for reference
```
[Back to top](#list-of-content)