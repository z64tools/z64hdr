
# Z64 Helpers

By default these aren't set `static inline`. To do this, you can `#define` `Z64HDR_HELPER_QUALIFIERS` to achieve this.
```c
#define Z64HDR_HELPER_QUALIFIERS static inline
#include <helpers/HelperOfYourChoice.h>
```
### Table of Content
 - [1. MATRIX](#matrix)
	 - [1.1 Matrix Multiply](#matrix-mult)
	 - [1.2 Matrix Macros](#matrix-macros)
 - [2. PHYSICS](#physics)
	- [2.1 PhysicsStrand Struct](#physicsstrand-struct)
		- [2.1.1 PhysicsInfo](#physicsinfo)
		- [2.1.2 PhysicsHead](#physicshead)
		- [2.1.3 PhysicsGfx](#physicsgfx)
		- [2.1.4 PhysicsSpheres](#physicsspheres)
		- [2.1.5 PhysicsConstraint](#physicsconstraint)
		- [2.1.6 PhysicsRigidity](#physicsrigidity)
	- [2.2 Examples](#examples)
		- [2.2.1 PhysicsStrandInit](#physicsstrandinit)
		- [2.2.2 Actor Init function](#actor-init-function)
		- [2.2.3 OverridePostDraw](#overridepostdraw)
		- [2.2.4 PhysicCallback](#physiccallback)
		- [2.2.5 Actor Draw function](#actor-draw-function)
- [3. Credits](#credits)
# Matrix
## Matrix Mult
These are pretty much the same as `Matrix_MultVec3f`, but instead of using Vec3f, these are for individual axes.
```c
void Matrix_MultX(f32 x, Vec3f* dst);
void Matrix_MultY(f32 y, Vec3f* dst);
void Matrix_MultZ(f32 z, Vec3f* dst);
```
[Back to Table of Content](#table-of-content)

## Matrix Macros

These macros are for using different units of rotations. By default `Matrix_Rotate` first argument is used with radians.
```c
#define Matrix_RotateY_s(binang, mtxMode) Matrix_RotateY(BINANG_TO_RAD(binang), mtxMode)
#define Matrix_RotateX_s(binang, mtxMode) Matrix_RotateX(BINANG_TO_RAD(binang), mtxMode)
#define Matrix_RotateZ_s(binang, mtxMode) Matrix_RotateZ(BINANG_TO_RAD(binang), mtxMode)

#define Matrix_RotateY_f(degf, mtxMode)   Matrix_RotateY(DEGF_TO_RADF(degf), mtxMode)
#define Matrix_RotateX_f(degf, mtxMode)   Matrix_RotateX(DEGF_TO_RADF(degf), mtxMode)
#define Matrix_RotateZ_f(degf, mtxMode)   Matrix_RotateZ(DEGF_TO_RADF(degf), mtxMode)
```

`DEGF` \
**f32** rotation value. - 90° would be equal to `90.0f`.

`BINANG` \
**s16** rotation value. - 90° would be equal to `0x4000`.

`RADF` \
**f32** rotation value. - 90° would be equal to `M_PI / 2.0f`.

[Back to Table of Content](#table-of-content)

# Physics
Physics takes care of doing calculations.

#### TODO:
- [x] ``Strand`` Uses one head, used for **hair**, **tails**, etc...
- [ ] ``Bridge`` Same as strand but instead would have two heads for head and tail.
- [ ] ``Cloth`` **Capes**, **dresses**, etc...

## PhysicsStrand Struct
These are the main structs for drawing dynamic strand. Think of them as ``settings``.

Difference between these is that `PhysicsStrandInit` has a `flexible array` at the end of it, which is perfect for initialization, if you want to keep your initial values stored.

Read more about the individual structs inside these from: \
[PhysicsInfo](#physicsinfo)\
[PhysicsHead](#physicshead)\
[PhysicsGfx](#physicsgfx)\
[PhysicsSpheres](#physicsspheres)\
[PhysicsConstraint](#physicsconstraint)\
[PhysicsRigidity](#physicsrigidity)
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
	PhysicsGfx        gfx;
	PhysicsSpheres    spheres;
	PhysicsConstraint constraint;
	PhysicsRigidity   rigidity;
	f32 limbsLength[]; // Flexible array
} PhysicsStrandInit;
```

[Back to Table of Content](#table-of-content)

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

``numLimbs`` \
is the amount of limbs you have for your strand. Basically how many bones you've set to it in Blender.

``gravity`` \
 as you'd think, affects how strongly it'll be pulled upwards or downwards.

``floorY`` \
is the world position, which will prevent the limbs going below that. Bot fear not, if the target goes below this, the limbs wont be stuck at this pos, but they just aim towards this ``Y`` location. This effect is utilized by ``Volvagia`` in Ocarina of Time. When Volvagia goes back into the hole, its mane has natural movement into the hole as well.

``maxVel`` \
clamps the velocity to certain value. If you're not sure what value to use here, safest value would be `50.0f`.


``velStep`` \
could be also called ___deceleration step___. It handles from stepping the velocity towards ``0.0f``. But it also works as a __dampening__ value. __velStep__ below ``1.0f`` will have spring like motion and above ``1.0f`` dampens it.


``velMult`` \
multiplies the calculation that gets the velocity. It is normally used to soften the velocity, as higher than ``1.0f`` _might_ become unstable. But going above ``1.0f`` isn't bad. Best way to find the results you want is to try.

[Back to PhysicsStrand struct](#physicsstrand-struct)\
[Back to Table of Content](#table-of-content)

### PhysicsHead
Values that are used in the **Physics_DrawDynamicStrand** to have the strand aligned to the head. These can be altered between **Physics_GetHeadProperties** and 
**Physics_DrawDynamicStrand**, and in some cases it's even necessary. Trial and error is definitely required if working with ``folded characters``.

```c
typedef struct {
	Vec3f pos;
	Vec3s rot;
	MtxF  mtxF;
} PhysicsHead;
```

If you'd like to alter position, use Physics_GetHeadProperties ``headPosModel`` to alter position in heads model space. The local axises depend on the `Head direction` in rest pose, the axes might not match being `X = X, Y = Y, Z = Z`.

```c
void Physics_GetHeadProperties(PhysicsStrand* strand, Vec3f* headPosModel);
```

If rotation mostly matches and you want to **adjust** rotation, check [rigidity](#physicsrigidity).


For ``folded characters``, it's very likely that the rotations aren't matching how you would think they would. For example `Player head` rotations would go like this: \
 RotX == PlayerRotZ \
 RotY == PlayerRotY \
 RotZ == PlayerRotX


[Back to PhysicsStrand struct](#physicsstrand-struct)\
[Back to Table of Content](#table-of-content)

### PhysicsGfx
Here we handle all that has to do with graphics.
```c
typedef struct {
	u32   dlist;
	Vec3f scale;  // Gfx scale
	u8    segID;  // For matrix
	u8    noDraw; /* If there needs to be calculations
	                 to get in position before drawing */
} PhysicsGfx;
```

``dlist`` \
For this you'll give the single __displaylist__ address that will be used to display the whole strand.

``scale`` \
Think of this like you think of `Actor_SetScale`

``segID`` \
Segment ID where the __matrix__ is allocated. `Physics_DrawDynamicStrand` allocates matrix and uses `gSPSegment` to this ID.

``noDraw`` \
Disables all that has to do with drawing your strand. Like mentioned in the comment, this can be used to have the positions ___"precalculated"___ for you. Example can be found in [Actor Draw function](#actor-draw-function). 

[Back to PhysicsStrand struct](#physicsstrand-struct) \
[Back to Table of Content](#table-of-content)

### PhysicsSpheres
"Collision" spheres, that push the pos of each limb away, if they are within the radius.
```c
typedef struct {
	s32    num; // amount of spheres
	Vec3f* centers;
	f32    radius;
} PhysicsSpheres;
```
``num`` \
Count of the `centers` array.

``centers`` \
Pointer to array, where the center positions are stored.

``radius`` \
Tests if `dist < radius` and pushes limbs based on that.

[Back to PhysicsStrand struct](#physicsstrand-struct)\
[Back to Table of Content](#table-of-content)

### PhysicsConstraint
Limits rotations, as it can get wild very easily.
```c
typedef struct {
	u8    lockRoot;    // Prevent physics rotating root limb
	Vec2f rotStepCalc; // DEG, limits rot to next limb in main calc
	Vec2f rotStepDraw; // DEG, limits rot on draw, smoothens output
} PhysicsConstraint;
```
``lockRoot`` \
Locks the first limb, ***root***, to the value it is already in. This is necessary if you want the **strand** to match exactly to something, like example **Link's hat**.

``rotStepCalc`` \
This limits the amount of rotation to next limb in `calculation`. If this isn't needed, set it to `zero`.

``rotStepDraw`` \
This limits the amount of rotation to next limb in `draw`. If this isn't needed, set it to `zero`.

[Back to PhysicsStrand struct](#physicsstrand-struct)\
[Back to Table of Content](#table-of-content)

### PhysicsRigidity
This helps getting the shape you want to have.
```c
typedef struct {
	s32   num;  // How many limbs will be smoothed with push
	Vec3f push; // direction Z, pushes based on rot[0]
	f32   mult; // How much the pushing fill affect
	Vec3f rot;  // DEG, rigids towards, relative rot
} PhysicsRigidity;
```
``num`` \
***num / info.num*** is processed to be shaped. So for example if you have ponytail that you want to have nice smooth shape at the beginning, you would ***probably*** use something like `num = 5` out of `9 total limbs`. 

***Do note*** that this is smoothened. There is a `for loop` used with this, and the closer it gets to the `num`, the less it affects the position.

``push`` \
Think of this kind of like a direction of where you want your strand to go to. For example if you're working on ponytail, `Z` should be negative value to shape it go behind your character. Using other axises isn't necessary but they're there if they are needed.

``mult`` \
Multiplys the amount of how much push affects. Recommended value is `0.2f`.

``rot`` \
This affects the rotation it pushes towards. This is additional on top of the `head rotation` so if you do not feel like you need it, keep it `zero`.

[Back to PhysicsStrand struct](#physicsstrand-struct)\
[Back to Table of Content](#table-of-content)

## Examples
Here's example of how to store necessary values in your `Entity Struct`.

```c
typedef struct {
	Actor         actor;
	SkelAnime     skelAnime;
	Vec3s         jointTable[SKEL_NPC_NUMBONES_DT];
	Vec3s         morphTable[SKEL_NPC_NUMBONES_DT];
	PhysicsStrand tailStrand;
	PhysicsLimb   tailLimb[10];  // Number of limbs + 1
	f32           tailLength[10]; // Number of limbs + 1
	Vec3f         bodyPartsPos[6];
	Vec3f         tailEnd;
} EnNPC;
```

`PhysicsStrand` \
Needs to be only 1 per strand.

`PhysicsLimb` \
Must have ``[NumberOfLimbs + 1]``. Otherwise the data will flow over.

`PhysicsLimbLength` \
f32 array, that also needs to have ``[NumberOfLimbs + 1]``.

``tailEnd`` \
Not necessary, but is here for example shown in [PhysicsCallback](#physicscallback).

[Back to Table of Content](#table-of-content)

### PhysicsStrandInit
If you're not completely sure how to fill this, you may use this as a reference.
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
		.num = 0,
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
[Back to Table of Content](#table-of-content)

### Actor Init function
```c
void EnNpc_Init(EnNpc* this, GlobalContext* globalCtx) {
	Actor_SetScale(&this->actor, 0.0055f);
	SkelAnime_InitFlex(globalCtx, &this->skelAnime, SKEL_NPC, ANIM_IDLE, this->jointTable, this->morphTable, SKEL_NPC_NUMBONES_DT);
	
	Physics_SetPhysicsStrand(&sPonytailInit, &this->tailStrand, this->tailLength, this->bodyPartsPos, ARRAY_COUNT(this->bodyPartsPos));
}
```

Arguments for ``Physics_SetPhysicsStrand``
 1. ``Pointer``, source **PhysicsStrandInit**,
 1. ``Pointer``, destination to **PhysicsStrand** where it will be initialized,
 1. ``Pointer``, destination for **limbLengths** from **PhysicsStrandInit**
 1. ``Pointer``, location of **sphere centers array** to read them from
 1. ``s32``, **ARRAY_COUNT(X)** of **sphere centers array**

[Back to Table of Content](#table-of-content)

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
			Physics_GetHeadProperties(&this->phyPonytail, &zero);
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
[Back to Table of Content](#table-of-content)

### PhysicCallback
Optional feature. \
This callback can have up to two ***pointers of your choice***. Type of the pointers are declared in this callback function itself and then assigned to the `Physics_DrawDynamicStrand` function if used.
```c
void EnNpc_PhysicsCallback(s32 limbIndex, GlobalContext* globalCtx, void* arg2) {
	Vec3f zero = { 0.0f, 100.0f, 0.0f };

	if (limbIndex == LIMB_END)
		Matrix_MultVec3f(&zero, &this->tailEnd);
}
```
[Back to Table of Content](#table-of-content)

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
				0, // No PhysicsCallback
				0, // No need for callback arguments
				0  // No need for callback arguments
			);
		}
		this->phyPonytail.gfx.noDraw = false;
	}
	
	Physics_DrawDynamicStrand(
		globalCtx->state.gfxCtx,
		&POLY_OPA,
		this->phyJointTable,
		&this->phyPonytail,
		EnNpc_PhysicsCallback, // Callback
		globalCtx, // Arguments sent to PhysicsCallback
		NULL       // Arguments sent to PhysicsCallback
	);
}
```
[Back to Table of Content](#table-of-content)

# Credits
```
Dragorn421
Improvement suggestions for Physics functions

Rankaisija
Physics functions

Thar0
Matrix functions

zel.
Decompiling Boss07 - Majora whip function for reference
Improvement suggestions for Physics functions
```
[Back to Table of Content](#table-of-content)
