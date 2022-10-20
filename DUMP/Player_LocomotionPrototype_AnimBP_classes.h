// AnimBlueprintGeneratedClass Player_LocomotionPrototype_AnimBP.Player_LocomotionPrototype_AnimBP_C
// Size: 0x1658 (Inherited: 0x1610)
struct UPlayer_LocomotionPrototype_AnimBP_C : UFortPlayerPrototypeAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1610(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x1618(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x1620(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x1628(0x20)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x1648(0x10)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function Player_LocomotionPrototype_AnimBP.Player_LocomotionPrototype_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_Player_LocomotionPrototype_AnimBP(int32_t EntryPoint); // Function Player_LocomotionPrototype_AnimBP.Player_LocomotionPrototype_AnimBP_C.ExecuteUbergraph_Player_LocomotionPrototype_AnimBP // (Final|UbergraphFunction) // @ game+0xd67374
};

