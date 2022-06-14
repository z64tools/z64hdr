typedef s32 (*ColChkResetFunc)(PlayState*, Collider*);

typedef void (*ColChkBloodFunc)(PlayState*, Collider*, Vec3f*);

typedef void (*ColChkApplyFunc)(PlayState*, CollisionCheckContext*, Collider*);

typedef void (*ColChkVsFunc)(PlayState*, CollisionCheckContext*, Collider*, Collider*);

typedef s32 (*ColChkLineFunc)(PlayState*, CollisionCheckContext*, Collider*, Vec3f*, Vec3f*);

typedef struct {
    /* 0 */ u8 blood;
    /* 1 */ u8 effect;
} HitInfo;

typedef enum {
    /* 0 */ BLOOD_NONE,
    /* 1 */ BLOOD_BLUE,
    /* 2 */ BLOOD_GREEN,
    /* 3 */ BLOOD_WATER,
    /* 4 */ BLOOD_RED,
    /* 5 */ BLOOD_RED2
} ColChkBloodType;

typedef enum {
    /* 0 */ HIT_WHITE,
    /* 1 */ HIT_DUST,
    /* 2 */ HIT_RED,
    /* 3 */ HIT_SOLID,
    /* 4 */ HIT_WOOD,
    /* 5 */ HIT_NONE
} ColChkHitType;

typedef enum {
    /* 0 */ MASSTYPE_IMMOVABLE,
    /* 1 */ MASSTYPE_HEAVY,
    /* 2 */ MASSTYPE_NORMAL
} ColChkMassType;

s32 Collider_InitBase(PlayState* play, Collider* collider);
s32 Collider_DestroyBase(PlayState* play, Collider* collider);
s32 Collider_SetBaseToActor(PlayState* play, Collider* collider, ColliderInitToActor* src);
s32 Collider_SetBaseType1(PlayState* play, Collider* collider, Actor* actor, ColliderInitType1* src);
s32 Collider_SetBase(PlayState* play, Collider* collider, Actor* actor, ColliderInit* src);
void Collider_ResetATBase(PlayState* play, Collider* collider);
void Collider_ResetACBase(PlayState* play, Collider* collider);
void Collider_ResetOCBase(PlayState* play, Collider* collider);
s32 Collider_InitTouch(PlayState* play, ColliderTouch* touch);
s32 Collider_DestroyTouch(PlayState* play, ColliderTouch* touch);
s32 Collider_SetTouch(PlayState* play, ColliderTouch* dest, ColliderTouch* src);
void Collider_ResetATInfo_Unk(PlayState* play, ColliderInfo* info);
s32 Collider_InitBump(PlayState* play, ColliderBump* bump);
s32 Collider_DestroyBump(PlayState* play, ColliderBump* bump);
s32 Collider_SetBump(PlayState* play, ColliderBump* bump, ColliderBumpInit* init);
s32 Collider_InitInfo(PlayState* play, ColliderInfo* info);
s32 Collider_DestroyInfo(PlayState* play, ColliderInfo* info);
s32 Collider_SetInfo(PlayState* play, ColliderInfo* info, ColliderInfoInit* infoInit);
void Collider_ResetATInfo(PlayState* play, ColliderInfo* info);
void Collider_ResetACInfo(PlayState* play, ColliderInfo* info);
void Collider_ResetOCInfo(PlayState* play, ColliderInfo* info);
s32 Collider_InitJntSphElementDim(PlayState* play, ColliderJntSphElementDim* dim);
s32 Collider_DestroyJntSphElementDim(PlayState* play, ColliderJntSphElementDim* element);
s32 Collider_SetJntSphElementDim(PlayState* play, ColliderJntSphElementDim* dest, ColliderJntSphElementDimInit* src);
s32 Collider_InitJntSphElement(PlayState* play, ColliderJntSphElement* element);
s32 Collider_DestroyJntSphElement(PlayState* play, ColliderJntSphElement* element);
s32 Collider_SetJntSphElement(PlayState* play, ColliderJntSphElement* dest, ColliderJntSphElementInit* src);
s32 Collider_ResetJntSphElementAT(PlayState* play, ColliderJntSphElement* collider);
s32 Collider_ResetJntSphElementAC(PlayState* play, ColliderJntSphElement* collider);
s32 Collider_ResetJntSphElementOC(PlayState* play, ColliderJntSphElement* collider);
s32 Collider_InitCylinderDim(PlayState* play, Cylinder16* dim);
s32 Collider_DestroyCylinderDim(PlayState* play, Cylinder16* dim);
s32 Collider_SetCylinderDim(PlayState* play, Cylinder16* dest, Cylinder16* src);
s32 Collider_InitTrisElementDim(PlayState* play, TriNorm* dim);
s32 Collider_DestroyTrisElementDim(PlayState* play, TriNorm* dim);
s32 Collider_SetTrisElementDim(PlayState* play, TriNorm* dest, ColliderTrisElementDimInit* src);
s32 Collider_InitTrisElement(PlayState* play, ColliderTrisElement* collider);
s32 Collider_DestroyTrisElement(PlayState* play, ColliderTrisElement* collider);
s32 Collider_SetTrisElement(PlayState* play, ColliderTrisElement* dest, ColliderTrisElementInit* src);
s32 Collider_ResetTrisElementAT(PlayState* play, ColliderTrisElement* element);
s32 Collider_ResetTrisElementAC(PlayState* play, ColliderTrisElement* element);
s32 Collider_ResetTrisElementOC(PlayState* play, ColliderTrisElement* element);
s32 Collider_InitQuadDim(PlayState* play, ColliderQuadDim* dim);
s32 Collider_DestroyQuadDim(PlayState* play, ColliderQuadDim* dim);
s32 Collider_ResetQuadACDist(PlayState* play, ColliderQuadDim* dim);
void Collider_SetQuadMidpoints(ColliderQuadDim* dim);
s32 Collider_SetQuadDim(PlayState* play, ColliderQuadDim* dest, ColliderQuadDimInit* src);
s32 Collider_QuadSetNearestAC(PlayState* play, ColliderQuad* quad, Vec3f* hitPos);
s32 CollisionCheck_SkipTouch(ColliderInfo* info);
s32 CollisionCheck_SkipBump(ColliderInfo* info);
s32 CollisionCheck_NoSharedFlags(ColliderInfo* atInfo, ColliderInfo* acInfo);
void CollisionCheck_NoBlood(PlayState* play, Collider* collider, Vec3f* v);
void CollisionCheck_GreenBlood(PlayState* play, Collider* collider, Vec3f* v);
void CollisionCheck_WaterBurst(PlayState* play, Collider* collider, Vec3f* pos);
void CollisionCheck_RedBlood(PlayState* play, Collider* collider, Vec3f* v);
void CollisionCheck_RedBloodUnused(PlayState* play, Collider* collider, Vec3f* v);
void CollisionCheck_HitSolid(PlayState* play, ColliderInfo* info, Collider* collider, Vec3f* hitPos);
s32 CollisionCheck_SwordHitAudio(Collider* at, ColliderInfo* acInfo);
void CollisionCheck_HitEffects(PlayState* play, Collider* at, ColliderInfo* atInfo, Collider* ac, ColliderInfo* acInfo, Vec3f* hitPos);
void CollisionCheck_SetBounce(Collider* at, Collider* ac);
s32 CollisionCheck_SetATvsAC(PlayState* play, Collider* at, ColliderInfo* atInfo, Vec3f* atPos, Collider* ac, ColliderInfo* acInfo, Vec3f* acPos, Vec3f* hitPos);
void CollisionCheck_AC_JntSphVsJntSph(PlayState* play, CollisionCheckContext* colChkCtx, Collider* colAT, Collider* colAC);
void CollisionCheck_AC_JntSphVsCyl(PlayState* play, CollisionCheckContext* colChkCtx, Collider* colAT, Collider* colAC);
void CollisionCheck_AC_CylVsJntSph(PlayState* play, CollisionCheckContext* colChkCtx, Collider* colAT, Collider* colAC);
void CollisionCheck_AC_JntSphVsTris(PlayState* play, CollisionCheckContext* colChkCtx, Collider* colAT, Collider* colAC);
void CollisionCheck_AC_TrisVsJntSph(PlayState* play, CollisionCheckContext* colChkCtx, Collider* colAT, Collider* colAC);
void CollisionCheck_AC_JntSphVsQuad(PlayState* play, CollisionCheckContext* colChkCtx, Collider* colAT, Collider* colAC);
void CollisionCheck_AC_QuadVsJntSph(PlayState* play, CollisionCheckContext* colChkCtx, Collider* colAT, Collider* colAC);
void CollisionCheck_AC_CylVsCyl(PlayState* play, CollisionCheckContext* colChkCtx, Collider* colAT, Collider* colAC);
void CollisionCheck_AC_CylVsTris(PlayState* play, CollisionCheckContext* colChkCtx, Collider* colAT, Collider* colAC);
void CollisionCheck_AC_TrisVsCyl(PlayState* play, CollisionCheckContext* colChkCtx, Collider* colAT, Collider* colAC);
void CollisionCheck_AC_CylVsQuad(PlayState* play, CollisionCheckContext* colChkCtx, Collider* colAT, Collider* colAC);
void CollisionCheck_AC_QuadVsCyl(PlayState* play, CollisionCheckContext* colChkCtx, Collider* colAT, Collider* colAC);
void CollisionCheck_AC_TrisVsTris(PlayState* play, CollisionCheckContext* colChkCtx, Collider* colAT, Collider* colAC);
void CollisionCheck_AC_TrisVsQuad(PlayState* play, CollisionCheckContext* colChkCtx, Collider* colAT, Collider* colAC);
void CollisionCheck_AC_QuadVsTris(PlayState* play, CollisionCheckContext* colChkCtx, Collider* colAT, Collider* colAC);
void CollisionCheck_AC_QuadVsQuad(PlayState* play, CollisionCheckContext* colChkCtx, Collider* colAT, Collider* colAC);
void CollisionCheck_SetJntSphHitFX(PlayState* play, CollisionCheckContext* colChkCtx, Collider* collider);
void CollisionCheck_SetCylHitFX(PlayState* play, CollisionCheckContext* colChkCtx, Collider* collider);
void CollisionCheck_SetTrisHitFX(PlayState* play, CollisionCheckContext* colChkCtx, Collider* collider);
void CollisionCheck_SetQuadHitFX(PlayState* play, CollisionCheckContext* colChkCtx, Collider* collider);
void CollisionCheck_SetHitEffects(PlayState* play, CollisionCheckContext* colChkCtx);
void CollisionCheck_AC(PlayState* play, CollisionCheckContext* colChkCtx, Collider* colAT);
s32 CollisionCheck_GetMassType(u8 mass);
void CollisionCheck_SetOCvsOC(Collider* left, ColliderInfo* leftInfo, Vec3f* leftPos, Collider* right, ColliderInfo* rightInfo, Vec3f* rightPos, f32 overlap);
void CollisionCheck_OC_JntSphVsJntSph(PlayState* play, CollisionCheckContext* colChkCtx, Collider* l, Collider* r);
void CollisionCheck_OC_JntSphVsCyl(PlayState* play, CollisionCheckContext* colChkCtx, Collider* l, Collider* r);
void CollisionCheck_OC_CylVsJntSph(PlayState* play, CollisionCheckContext* colChkCtx, Collider* l, Collider* r);
void CollisionCheck_OC_CylVsCyl(PlayState* play, CollisionCheckContext* colChkCtx, Collider* l, Collider* r);
s32 CollisionCheck_SkipOC(Collider* collider);
s32 CollisionCheck_Incompatible(Collider* left, Collider* right);
void CollisionCheck_ApplyDamage(PlayState* play, CollisionCheckContext* colChkCtx, Collider* collider, ColliderInfo* info);
void CollisionCheck_ApplyDamageJntSph(PlayState* play, CollisionCheckContext* colChkCtx, Collider* collider);
void CollisionCheck_ApplyDamageCyl(PlayState* play, CollisionCheckContext* colChkCtx, Collider* collider);
void CollisionCheck_ApplyDamageTris(PlayState* play, CollisionCheckContext* colChkCtx, Collider* collider);
void CollisionCheck_ApplyDamageQuad(PlayState* play, CollisionCheckContext* colChkCtx, Collider* collider);
s32 CollisionCheck_LineOC_JntSph(PlayState* play, CollisionCheckContext* colChkCtx, Collider* collider, Vec3f* a, Vec3f* b);
s32 CollisionCheck_LineOC_Cyl(PlayState* play, CollisionCheckContext* colChkCtx, Collider* collider, Vec3f* a, Vec3f* b);