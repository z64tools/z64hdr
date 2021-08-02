
# Z64 Helpers

By default these aren't set `static inline`. To do this, you can `#define` `_Z64HDR_HELPER_PREFIX_` to achieve this.
```c
#define _Z64HDR_HELPER_PREFIX_ static inline
#include <helpers/Helper.h>
```
---
### List of content
 - [<span style="color:red">1. MATRIX](#matrix)
	 - [<span style="color:red">1.1 Matrix Multiply](#matrix-mult)
	 - [<span style="color:red">1.2 Matrix Macros](#matrix-macros)
 - [<span style="color:red">2. PHYSICS](#physics)
	- [<span style="color:red">2.1 PhysicsStrand Struct](#physicsstrand-struct)
		- [<span style="color:red">2.1.1 PhysicsInfo](#physicsinfo)
		- [<span style="color:red">2.1.2 PhysicsHead](#physicshead)
		- [<span style="color:red">2.1.3 PhysicsGfx](#physicsgfx)
		- [<span style="color:red">2.1.4 PhysicsSpheres](#physicsspheres)
		- [<span style="color:red">2.1.5 PhysicsConstraint](#physicsconstraint)
		- [<span style="color:red">2.1.6 PhysicsRigidity](#physicsrigidity)
	- [<span style="color:red">2.2 Examples](#examples)
		- [<span style="color:red">2.2.1 PhysicsStrand](#physicsstrand)
		- [<span style="color:red">2.2.2 Actor Init function](#actor-init-function)
		- [<span style="color:red">2.2.3 OverridePostDraw](#overridepostdraw)
		- [<span style="color:red">2.2.4 PhysicCallback](#physiccallback)
		- [<span style="color:red">2.2.5 Actor Draw function](#actor-draw-function)
- [<span style="color:red">3. Credits](#credits)
---
---
# Matrix
## Matrix Mult
These are pretty much same as `Matrix_MultVec3f`, but instead of using Vec3f, these are for individual axises.
```c
void Matrix_MultX(f32 x, Vec3f* dst);
void Matrix_MultY(f32 y, Vec3f* dst);
void Matrix_MultZ(f32 z, Vec3f* dst);
```
[<span style="color:red">Back to list](#list-of-content)

---
## Matrix Macros

These macros are for using different format of rotations. By default `Matrix_Rotate` first argument is used with radiance.
```c
#define Matrix_RotateY_s(binang, mtxMode) Matrix_RotateY(BINANG_TO_RAD(binang), mtxMode)
#define Matrix_RotateX_s(binang, mtxMode) Matrix_RotateX(BINANG_TO_RAD(binang), mtxMode)
#define Matrix_RotateZ_s(binang, mtxMode) Matrix_RotateZ(BINANG_TO_RAD(binang), mtxMode)

#define Matrix_RotateY_f(degf, mtxMode)   Matrix_RotateY(DEGF_TO_RADF(degf), mtxMode)
#define Matrix_RotateX_f(degf, mtxMode)   Matrix_RotateX(DEGF_TO_RADF(degf), mtxMode)
#define Matrix_RotateZ_f(degf, mtxMode)   Matrix_RotateZ(DEGF_TO_RADF(degf), mtxMode)
```

>`DEGF` \
`f32` value that is the most readable of these, using degrees to rotate.

>`BINANG` \
`s16` rotation value.

>`RADF` \
``f32`` rotation value.

[<span style="color:red">Back to list](#list-of-content)

---
---
# Physics
---
## PhysicsStrand Struct
These are the main struct for drawing dynamic strand. Think of as ``settings``.

Difference between these is that `PhysicsStrandInit` has `flexible array` at the bottom of it, which is perfect for initialization, if you want to keep your initial values stored.

Read more about the individual structs inside these from: \
[<span style="color:red">PhysicsInfo](#physicsinfo)\
[<span style="color:red">PhysicsHead](#physicshead)\
[<span style="color:red">PhysicsGfx](#physicsgfx)\
[<span style="color:red">PhysicsSpheres](#physicsspheres)\
[<span style="color:red">PhysicsConstraint](#physicsconstraint)\
[<span style="color:red">PhysicsRigidity](#physicsrigidity)
```c
typedef struct {
	PhysicsInfo       info;
	PhysicsHead       head;
	PhysicsGfx        gfx;
	PhysicsSpheres    spheres;
	PhysicsConstraint constraint;
	PhysicsRigidity   rigidity;
	f32* limbsLength;
} PhysicsStrand;
```
```c
typedef struct {
	PhysicsInfo       info;
	PhysicsHead       head;
	PhysicsGfx        gfx;
	PhysicsSpheres    spheres;
	PhysicsConstraint constraint;
	PhysicsRigidity   rigidity;
	f32 limbsLength[]; // Flexible array
} PhysicsStrandInit;
```

[<span style="color:red">Back to list](#list-of-content)

---
### PhysicsInfo
Here we have the "settings" for how the physics behave.

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

>``numLimbs`` \
is the amount of limbs you have for your strand. Basically how many bones you've set to it in Blender.

>``gravity`` \
 as you'd think, affects how strongly it'll be pulled upwards or downwards.

>``floorY`` \
is the world position, which will prevent the limbs going below that. Bot fear not, if the target goes below this, the limbs wont be stuck at this pos, but they just aim towards this ``Y`` location. This effect is utilized by ``Volvagia`` in Ocarina of Time. When Volvagia goes back into the hole, its mane has natural movement into the hole as well.

>``maxVel`` \
clamps the velocity to certain value. If you're not sure what value to use here, safest value would be `50.0f`.


>``velStep`` \
could be also called ___deacceleration step___. It handles from stepping the velocity towards ``0.0f``. But it also works as a __dampening__ value. __velStep__ below ``1.0f`` will have spring like motion and above ``1.0f`` dampens it.


>``velMult`` \
multiplies the calculation that gets the velocity. It is normally used to soften the velocity, as higher than ``1.0f`` _might_ become unstable. But going above ``1.0f`` isn't bad. Best way to find the results you want is to try.

[<span style="color:red">Back to PhysicsStrand struct](#physicsstrand-struct)\
[<span style="color:red">Back to list](#list-of-content)

---
### PhysicsHead
Values that are used in the **Physics_DrawDynamicStrand** to have the strand aligned to the head. These can be altered between **Physics_GetHeadProperties** and 
**Physics_DrawDynamicStrand**, and in some cases it's even necessary. Trial and error is definitely required if working with ``folder characters``.

```c
typedef struct {
	Vec3f pos;
	Vec3s rot;
	MtxF  mtxF;
} PhysicsHead;
```

If you'd like to alter position, use Physics_GetHeadProperties ``arg2`` to alter position in heads model space.

```c
void Physics_GetHeadProperties(PhysicsStrand* strand, Vec3f* headPosModel, s32 flag);
```

If rotation mostly matches and you want to **adjust** rotation, check [<span style="color:red">rigidity](#physicsrigidity).


For ``folded characters``, it's very likely that the rotations aren't matching how you would think they would. For example `Player head` rotations would go like this:
 - RotX - PlayerRotZ
 - RotY - PlayerRotY
 - RotZ - PlayerRotX


[<span style="color:red">Back to PhysicsStrand struct](#physicsstrand-struct)\
[<span style="color:red">Back to list](#list-of-content)

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
[<span style="color:red">Back to PhysicsStrand struct](#physicsstrand-struct)\
[<span style="color:red">Back to list](#list-of-content)

---
### PhysicsSpheres
```c
typedef struct {
	s32    num; // amount of spheres
	Vec3f* centers;
	f32    radius;
} PhysicsSpheres;
```
[<span style="color:red">Back to PhysicsStrand struct](#physicsstrand-struct)\
[<span style="color:red">Back to list](#list-of-content)

---
### PhysicsConstraint
```c
typedef struct {
	u8    lockRoot;    // Prevent physics rotating root limb
	Vec2f rotStepCalc; // DEG, limits rot to next limb in main calc
	Vec2f rotStepDraw; // DEG, limits rot on draw, smoothens output
} PhysicsConstraint;
```
[<span style="color:red">Back to PhysicsStrand struct](#physicsstrand-struct)\
[<span style="color:red">Back to list](#list-of-content)

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
[<span style="color:red">Back to PhysicsStrand struct](#physicsstrand-struct)\
[<span style="color:red">Back to list](#list-of-content)

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
[<span style="color:red">Back to list](#list-of-content)

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
[<span style="color:red">Back to list](#list-of-content)

---
### Actor Init function
```c
void EnNpc_Init(EnNpc* this, GlobalContext* globalCtx) {
	Actor_SetScale(&this->actor, 0.0055f);
	SkelAnime_InitFlex(globalCtx, &this->skelAnime, SKEL_NPC, ANIM_IDLE, this->jointTable, this->morphTable, SKEL_NPC_NUMBONES_DT);
	
	Physics_SetPhysicsStrand(&sPonytailInit, &this->phyPonytail, this->phyJointLength, this->bodyPartsPos);
}
```
[<span style="color:red">Back to list](#list-of-content)

---
### OverridePostDraw
In `SkelAnime` PostDraw you can update the "sphere" collision centers like so (`bodyPartsPos`). This will prevent the limbs of the strand from going through the skeleton limbs.
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
[<span style="color:red">Back to list](#list-of-content)

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
[<span style="color:red">Back to list](#list-of-content)

---
### Actor Draw function
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
		NULL
	);
}
```
[<span style="color:red">Back to list](#list-of-content)

---
# Credits
```
Dragorn421
Improvement suggestions for Physics helpers

Rankaisija
Coding Physics helpers

zel.
Decompiling Boss07 - Majora whip function for reference
Improvement suggestions for Physics helpers
```
[<span style="color:red">Back to list](#list-of-content)
