extern MtxF gSkinLimbMatrices[60];

void Skin_ApplyLimbModifications(GraphicsContext* gfxCtx, Skin* skin, s32 limbIndex, s32 arg3);
void Skin_DrawImpl(Actor* actor, PlayState* play, Skin* skin, SkinPostDraw postDraw, SkinOverrideLimbDraw overrideLimbDraw, s32 setTranslation, s32 arg6, s32 drawFlags);
