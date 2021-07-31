
# Z64 Helpers
### List of content
1. [Physics](#physics)
    1. [ActorHeader](#actorheader)
    1. [ActorCode](#actorcode)
        1. [LimbLength](#limblength)
        1. [PhysicsStrand](#physicsstrand)
        1. [ActorInit](#actorinit)
        1. [OverridePostDraw](#overridepostdraw)
		1. [PhysicCallback](#physiccallback)
        1. [ActorDraw](#actordraw)
1. [Credits](#credits)

# Physics
## ActorHeader
Here you set the arrays for physics to store/read values from. In this specific example the substruct is named `PonytailPhysics`, but you can name it whatever you like.

```c
typedef struct {
	Vec3f rot[10];
	Vec3f pos[10];
	Vec3f vel[10];
    Vec3f bodyPartsPos[7];
} PonytailPhysics;

typedef struct {
	Actor     actor;
	SkelAnime skelAnime;
	Vec3s     jointTable[SKEL_NPC_NUMBONES_DT];
	Vec3s     morphTable[SKEL_NPC_NUMBONES_DT];
	PonytailPhysics tail;
	Vec3f     tailEnd;
} EnNPC;
```
[Back to top](#list-of-content)
## ActorCode
### LimbLength
Firstly we initialize some variables. `sLimbLength` is the length from limb to next. This value should be in the `normal scale`. To get these values you need to check position units from your bones in `Blender`. Also adjust the scale for the values based on what scale you're using with `z64convert`.
```c
f32 sLimbLength[] = {
	 -930.0f,
	-1530.0f +  930.0f,
	-2160.0f + 1530.0f,
	-3150.0f + 2160.0f,
	-4090.0f + 3150.0f,
	-5190.0f + 4090.0f,
	-6070.0f + 5190.0f,
	-6810.0f + 6070.0f,
	 -400.0f,
};
```
[Back to top](#list-of-content)
### PhysicsStrand
Here are all the options that affect how the strand will be processed. These could also be stored in Actors struct, if these are set into it in init.
```c
PhysicsStrand sPonytailPhysics = {
	.numLimbs = 9,
	.limbsLength = sLength,
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
	.gravity = -2.0f,
	.floorY = 2.0f,
	.maxVel = 64.0f,
	.velStep = 0.7f,
	.velMult = 0.9f,
};
```
[Back to top](#list-of-content)
### ActorInit
In init you assign the pointer to `sphere centers`.
```c
void EnNPC_Init(EnNPC* this, GlobalContext* globalCtx) {
	Actor_SetScale(&this->actor, 0.0055f);
	Collider_SetCylinder(globalCtx, &this->collider, &this->actor, &sCylInit);
	SkelAnime_InitFlex(globalCtx, &this->skelAnime, SKELETONHEADER, ANIM_IDLE, this->jointTable, this->morphTable, SKEL_NPC_NUMBONES_DT);
	
	sPonytailPhysics.spheres.centers = this->tail.bodyPartsPos;
}
```
[Back to top](#list-of-content)
### OverridePostDraw
In `SkelAnime` PostDraw you can get the "sphere" collision centers like so. This will prevent the limbs of the strand go through them.
```c
void EnNPC_PostDraw(GlobalContext* globalCtx, s32 limbIndex, Gfx** dList, Vec3s* rot, void* thisx) {
	EnNPC* this = (EnNPC*)thisx;
	Vec3f zero = { 0 };
	
	switch (limbIndex) {
	    case Head:
	        Physics_GetHeadProperties(&sPonytailPhysics, &zero, 0);
	        break;
	    case Upperbody:
		    Matrix_MultVec3f(&zero, &this->tail.bodyPartsPos[0]);
		    break;
	    case Root:
		    Matrix_MultVec3f(&zero, &this->tail.bodyPartsPos[1]);
		    break;
	    case Upperarm_R:
		    Matrix_MultVec3f(&zero, &this->tail.bodyPartsPos[2]);
		    break;
	    case Thigh_R:
		    Matrix_MultVec3f(&zero, &this->tail.bodyPartsPos[3]);
		    break;
	    case Waist:
		    Matrix_MultVec3f(&zero, &this->tail.bodyPartsPos[4]);
		    break;
	    case Upperarm_L:
		    Matrix_MultVec3f(&zero, &this->tail.bodyPartsPos[5]);
		    break;
	    case Thigh_L:
		    Matrix_MultVec3f(&zero, &this->tail.bodyPartsPos[6]);
		    break;
	}
}
```
### PhysicCallback
This callback can have up to two `pointers` of your choice. Type of the pointers are declared in this callback function itself and then assigned to the `Physics_DrawDynamicStrand` function if used.
```c
void EnNPC_PhysicsCallback(s32 limbIndex, EnNPC* this) {
	Vec3f zero = { 0.0f, 100.0f, 0.0f };

	if (limbIndex == LIMB_END)
		Matrix_MultVec3f(&zero, &this->tailEnd);
}
```
[Back to top](#list-of-content)
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
	
	if (sPonytailPhysics.gfx.noDraw) {
		for (s32 i = 0; i < 60; i++)
			Physics_DrawDynamicStrand(
				globalCtx->state.gfxCtx,
				&POLY_OPA,
				this->tail.pos,
				this->tail.rot,
				this->tail.vel,
				&sPonytailPhysics
			);
		
		sPonytailPhysics.gfx.noDraw = false;
	}
	
	Physics_DrawDynamicStrand(
		globalCtx->state.gfxCtx,
		&POLY_OPA,
		this->tail.pos,
		this->tail.rot,
		this->tail.vel,
		&sPonytailPhysics,
		EnNPC_PhysicsCallback,
		this
	);
}
```
[Back to top](#list-of-content)
# Credits
```
Rankaisija - Coding Physics helpers
/Zel/ - Decompiling Boss07 - Majora whip function for reference
```
[Back to top](#list-of-content)