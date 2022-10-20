// AnimBlueprintGeneratedClass MANG_PatrolLayerAnimBP.MANG_PatrolLayerAnimBP_C
// Size: 0x11a0 (Inherited: 0x4c0)
struct UMANG_PatrolLayerAnimBP_C : UFortPatrolAnimLayer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4c0(0x08)
	struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables; // 0x4c8(0x48)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x510(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x518(0x08)
	struct FAnimNode_Root ; // 0x520(0x20)
	struct FAnimNode_LinkedInputPose ; // 0x540(0xc0)
	struct FAnimNode_Root ; // 0x600(0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x620(0xc0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x6e0(0x48)
	struct FAnimNode_TransitionResult ; // 0x728(0x28)
	struct FAnimNode_TransitionResult ; // 0x750(0x28)
	struct FAnimNode_TransitionResult ; // 0x778(0x28)
	struct FAnimNode_TransitionResult ; // 0x7a0(0x28)
	struct FAnimNode_TransitionResult ; // 0x7c8(0x28)
	struct FAnimNode_TransitionResult ; // 0x7f0(0x28)
	struct FAnimNode_TransitionResult ; // 0x818(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x840(0x28)
	struct FAnimNode_BlendSpacePlayer ; // 0x868(0x68)
	struct FAnimNode_LayeredBoneBlend ; // 0x8d0(0xe0)
	struct FAnimNode_UseCachedPose ; // 0x9b0(0x28)
	struct FAnimNode_StateResult ; // 0x9d8(0x20)
	struct FAnimNode_UseCachedPose ; // 0x9f8(0x28)
	struct FAnimNode_StateResult ; // 0xa20(0x20)
	struct FAnimNode_BlendSpacePlayer ; // 0xa40(0x68)
	struct FAnimNode_ApplyAdditive ; // 0xaa8(0xc8)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0xb70(0xe0)
	struct FAnimNode_UseCachedPose ; // 0xc50(0x28)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0xc78(0x68)
	struct FAnimNode_StateResult ; // 0xce0(0x20)
	struct FAnimNode_UseCachedPose ; // 0xd00(0x28)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0xd28(0xc8)
	struct FAnimNode_SequencePlayer ; // 0xdf0(0x40)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0xe30(0x20)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xe50(0xc8)
	struct FAnimNode_SaveCachedPose ; // 0xf18(0x100)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x1018(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1040(0x40)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x1080(0x100)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x1180(0x20)

	void CharacterSkeletalControlPostLegIK(struct FPoseLink InPosePostLegIK, struct FPoseLink& CharacterSkeletalControlPostLegIK); // Function MANG_PatrolLayerAnimBP.MANG_PatrolLayerAnimBP_C.CharacterSkeletalControlPostLegIK // (HasOutParms|BlueprintCallable) // @ game+0xd67374
	void FullBodyOverride(struct FPoseLink PassThroughFullBodyPose, struct FPoseLink& FullBodyOverride); // Function MANG_PatrolLayerAnimBP.MANG_PatrolLayerAnimBP_C.FullBodyOverride // (HasOutParms|BlueprintCallable) // @ game+0xd67374
	void AnimGraph(struct FPoseLink& AnimGraph); // Function MANG_PatrolLayerAnimBP.MANG_PatrolLayerAnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_MANG_PatrolLayerAnimBP(int32_t EntryPoint); // Function MANG_PatrolLayerAnimBP.MANG_PatrolLayerAnimBP_C.ExecuteUbergraph_MANG_PatrolLayerAnimBP // (Final|UbergraphFunction) // @ game+0xd67374
};

