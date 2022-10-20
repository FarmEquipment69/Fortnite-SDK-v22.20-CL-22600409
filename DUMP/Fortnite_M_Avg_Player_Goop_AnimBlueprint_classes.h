// AnimBlueprintGeneratedClass Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C
// Size: 0x1c30 (Inherited: 0x670)
struct UFortnite_M_Avg_Player_Goop_AnimBlueprint_C : UFortGoopAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x670(0x08)
	struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables; // 0x678(0x70)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x6e8(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x6f0(0x08)
	struct FAnimNode_Root ; // 0x6f8(0x20)
	struct FAnimNode_LinkedInputPose ; // 0x718(0xc0)
	struct FAnimNode_Root ; // 0x7d8(0x20)
	struct FAnimNode_LinkedInputPose ; // 0x7f8(0xc0)
	struct FAnimNode_Root ; // 0x8b8(0x20)
	struct FAnimNode_Root ; // 0x8d8(0x20)
	struct FAnimNode_Root ; // 0x8f8(0x20)
	struct FAnimNode_Root ; // 0x918(0x20)
	struct FAnimNode_Root ; // 0x938(0x20)
	struct FAnimNode_BlendListByBool ; // 0x958(0x48)
	struct FAnimNode_BlendListByBool ; // 0x9a0(0x48)
	struct FAnimNode_SequencePlayer ; // 0x9e8(0x40)
	struct FAnimNode_SequencePlayer ; // 0xa28(0x40)
	struct FAnimNode_SequencePlayer ; // 0xa68(0x40)
	struct FAnimNode_SequencePlayer ; // 0xaa8(0x40)
	struct FAnimNode_BlendListByEnum ; // 0xae8(0x48)
	struct FAnimNode_Root ; // 0xb30(0x20)
	struct FAnimNode_BlendListByBool ; // 0xb50(0x48)
	struct FAnimNode_BlendListByBool ; // 0xb98(0x48)
	struct FAnimNode_SequencePlayer ; // 0xbe0(0x40)
	struct FAnimNode_SequencePlayer ; // 0xc20(0x40)
	struct FAnimNode_SequencePlayer ; // 0xc60(0x40)
	struct FAnimNode_SequencePlayer ; // 0xca0(0x40)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0xce0(0x48)
	struct FAnimNode_Root ; // 0xd28(0x20)
	struct FAnimNode_Root ; // 0xd48(0x20)
	struct FAnimNode_LinkedInputPose ; // 0xd68(0xc0)
	struct FAnimNode_Root ; // 0xe28(0x20)
	struct FAnimNode_LinkedInputPose ; // 0xe48(0xc0)
	struct FAnimNode_Root ; // 0xf08(0x20)
	struct FAnimNode_Root ; // 0xf28(0x20)
	struct FAnimNode_Root ; // 0xf48(0x20)
	struct FAnimNode_Root ; // 0xf68(0x20)
	struct FAnimNode_Root ; // 0xf88(0x20)
	struct FAnimNode_Root ; // 0xfa8(0x20)
	struct FAnimNode_LinkedInputPose ; // 0xfc8(0xc0)
	struct FAnimNode_Root ; // 0x1088(0x20)
	struct FAnimNode_LinkedInputPose ; // 0x10a8(0xc0)
	struct FAnimNode_LinkedInputPose ; // 0x1168(0xc0)
	struct FAnimNode_Root ; // 0x1228(0x20)
	struct FAnimNode_LinkedInputPose ; // 0x1248(0xc0)
	struct FAnimNode_Root ; // 0x1308(0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x1328(0xc0)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x13e8(0x20)
	struct FAnimNode_TransitionResult ; // 0x1408(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1430(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1458(0x40)
	struct FAnimNode_ApplyAdditive ; // 0x1498(0xc8)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1560(0x48)
	struct FAnimNode_BlendSpacePlayer ; // 0x15a8(0x68)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x1610(0x28)
	struct FAnimNode_ApplyAdditive ; // 0x1638(0xc8)
	struct FAnimNode_BlendSpacePlayer ; // 0x1700(0x68)
	struct FAnimNode_StateResult ; // 0x1768(0x20)
	struct FAnimNode_LinkedAnimLayer ; // 0x1788(0xc8)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x1850(0xc8)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x1918(0x68)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1980(0x20)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x19a0(0xc8)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x1a68(0x100)
	struct FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer; // 0x1b68(0xc8)

	void ItemUpperBody(struct FPoseLink InPoseUpperBody, struct FFortAnimInput_AdjustedAim InputParam, struct FPoseLink& ItemUpperBody); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemUpperBody // (HasOutParms|BlueprintCallable) // @ game+0xd67374
	void ItemFullBodySprint(struct FPoseLink InPoseSprint, struct FPoseLink& ItemFullBodySprint); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemFullBodySprint // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ItemIdleAdditive(struct FPoseLink InPoseIdleAdditive, struct FPoseLink& ItemIdleAdditive); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemIdleAdditive // (HasOutParms|BlueprintCallable) // @ game+0xd67374
	void ItemCrouchTurningAdditive(struct FPoseLink& ItemCrouchTurningAdditive); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemCrouchTurningAdditive // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ItemSlopeSliding(struct FPoseLink& ItemSlopeSliding); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemSlopeSliding // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ItemJumpUpAdditive(struct FPoseLink& ItemJumpUpAdditive); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemJumpUpAdditive // (HasOutParms|BlueprintCallable) // @ game+0xd67374
	void ItemJumpLoopAdditive(struct FPoseLink& ItemJumpLoopAdditive); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemJumpLoopAdditive // (HasOutParms|BlueprintCallable) // @ game+0xd67374
	void ItemFallAdditive(struct FPoseLink& ItemFallAdditive); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemFallAdditive // (HasOutParms|BlueprintCallable) // @ game+0xd67374
	void ItemFallLandAdditive(struct FPoseLink& ItemFallLandAdditive); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemFallLandAdditive // (HasOutParms|BlueprintCallable) // @ game+0xd67374
	void ItemJetPackStartAdditive(struct FPoseLink& ItemJetPackStartAdditive); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemJetPackStartAdditive // (HasOutParms|BlueprintCallable) // @ game+0xd67374
	void ItemJetPackJumpAdditive(struct FPoseLink& ItemJetPackJumpAdditive); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemJetPackJumpAdditive // (HasOutParms|BlueprintCallable) // @ game+0xd67374
	void ItemZipLineStartAdditive(struct FPoseLink& ItemZipLineStartAdditive); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemZipLineStartAdditive // (HasOutParms|BlueprintCallable) // @ game+0xd67374
	void ItemFlyModeStartAdditive(struct FPoseLink& ItemFlyModeStartAdditive); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemFlyModeStartAdditive // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ItemFlyModeLoopAdditive(struct FPoseLink& ItemFlyModeLoopAdditive); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemFlyModeLoopAdditive // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ItemJogStartAdditive(struct FPoseLink InPoseJogStartAdditive, struct FPoseLink& ItemJogStartAdditive); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemJogStartAdditive // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ItemJogStopAdditive(struct FPoseLink InPoseJogStopAdditive, struct FPoseLink& ItemJogStopAdditive); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemJogStopAdditive // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ItemJogPrePivotAdditive(struct FPoseLink InPosePrePivotAdditive, struct FPoseLink& ItemJogPrePivotAdditive); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemJogPrePivotAdditive // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ItemJogPostPivotAdditive(struct FPoseLink InPosePostPivotAdditive, struct FPoseLink& ItemJogPostPivotAdditive); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemJogPostPivotAdditive // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ItemLowerBodyMovement(struct FPoseLink InPoseLowerBodyMovement, struct FPoseLink& ItemLowerBodyMovement); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemLowerBodyMovement // (HasOutParms|BlueprintCallable) // @ game+0xd67374
	void ItemLowerBodyLeanAdditive(struct FPoseLink InPoseLowerBodyLeanAdditive, struct FPoseLink& ItemLowerBodyLeanAdditive); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemLowerBodyLeanAdditive // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ItemLowerBodyJogStart(struct FPoseLink InPoseLowerBodyJogStart, struct FPoseLink& ItemLowerBodyJogStart); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemLowerBodyJogStart // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ItemLowerBodyJogStop(struct FPoseLink InPoseLowerBodyJogStop, struct FPoseLink& ItemLowerBodyJogStop); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemLowerBodyJogStop // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ItemLowerBodyJogPrePivot(struct FPoseLink InPoseLowerBodyJogPrePivot, struct FPoseLink& ItemLowerBodyJogPrePivot); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemLowerBodyJogPrePivot // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ItemLowerBodyJogPostPivot(struct FPoseLink InPoseLowerBodyJogPostPivot, struct FPoseLink& ItemLowerBodyJogPostPivot); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemLowerBodyJogPostPivot // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ItemRelaxedEntry(struct FPoseLink InPoseRelaxedEntry, struct FPoseLink& ItemRelaxedEntry); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemRelaxedEntry // (HasOutParms|BlueprintCallable) // @ game+0xd67374
	void ItemSwimJumpStart(struct FPoseLink& ItemSwimJumpStart); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemSwimJumpStart // (HasOutParms|BlueprintCallable) // @ game+0xd67374
	void ItemSwimJumpStartLoop(struct FPoseLink& ItemSwimJumpStartLoop); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemSwimJumpStartLoop // (HasOutParms|BlueprintCallable) // @ game+0xd67374
	void ItemSwimJumpFallLoop(struct FPoseLink& ItemSwimJumpFallLoop); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemSwimJumpFallLoop // (HasOutParms|BlueprintCallable) // @ game+0xd67374
	void ItemSwimJumpSurfaceLoop(struct FPoseLink& ItemSwimJumpSurfaceLoop); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemSwimJumpSurfaceLoop // (HasOutParms|BlueprintCallable) // @ game+0xd67374
	void ItemSwimJumpSurfaceEnd(struct FPoseLink& ItemSwimJumpSurfaceEnd); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemSwimJumpSurfaceEnd // (HasOutParms|BlueprintCallable) // @ game+0xd67374
	void ItemSkeletalControl(struct FPoseLink InPose, struct FPoseLink& ItemSkeletalControl); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemSkeletalControl // (HasOutParms|BlueprintCallable) // @ game+0xd67374
	void ItemAimOffset(struct FPoseLink InPose_AimOffset, double AimOffsetAlpha, double Yaw, double Pitch, struct FPoseLink InPose_UpperLowerPreMeleeAO, struct FPoseLink& ItemAimOffset); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemAimOffset // (HasOutParms|BlueprintCallable) // @ game+0xd67374
	void ItemFullBodyOverride(struct FPoseLink InPoseFullBody, struct FPoseLink& ItemFullBodyOverride); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemFullBodyOverride // (HasOutParms|BlueprintCallable) // @ game+0xd67374
	void ItemPreIK(struct FPoseLink InPose_PreIK, struct FPoseLink& ItemPreIK); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ItemPreIK // (HasOutParms|BlueprintCallable) // @ game+0xd67374
	void AnimGraph(struct FPoseLink& AnimGraph); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_Fortnite_M_Avg_Player_Goop_AnimBlueprint(int32_t EntryPoint); // Function Fortnite_M_Avg_Player_Goop_AnimBlueprint.Fortnite_M_Avg_Player_Goop_AnimBlueprint_C.ExecuteUbergraph_Fortnite_M_Avg_Player_Goop_AnimBlueprint // (Final|UbergraphFunction) // @ game+0xd67374
};

