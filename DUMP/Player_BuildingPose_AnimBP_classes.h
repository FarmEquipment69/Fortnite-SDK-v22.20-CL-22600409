// AnimBlueprintGeneratedClass Player_BuildingPose_AnimBP.Player_BuildingPose_AnimBP_C
// Size: 0x900 (Inherited: 0x450)
struct UPlayer_BuildingPose_AnimBP_C : UFortPlayerBuildingAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables; // 0x458(0x05)
	char pad_45D[0x3]; // 0x45d(0x03)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x460(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x468(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x470(0x20)
	struct FAnimNode_TransitionResult ; // 0x490(0x28)
	struct FAnimNode_TransitionResult ; // 0x4b8(0x28)
	struct FAnimNode_TransitionResult ; // 0x4e0(0x28)
	struct FAnimNode_TransitionResult ; // 0x508(0x28)
	struct FAnimNode_BlendListByBool ; // 0x530(0x48)
	struct FAnimNode_SequencePlayer ; // 0x578(0x40)
	struct FAnimNode_BlendListByEnum ; // 0x5b8(0x48)
	struct FAnimNode_SequencePlayer ; // 0x600(0x40)
	struct FAnimNode_SequencePlayer ; // 0x640(0x40)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x680(0x48)
	struct FAnimNode_SequencePlayer ; // 0x6c8(0x40)
	struct FAnimNode_StateResult ; // 0x708(0x20)
	struct FAnimNode_SequencePlayer ; // 0x728(0x40)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x768(0x40)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x7a8(0x48)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x7f0(0x20)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x810(0x28)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x838(0xc8)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function Player_BuildingPose_AnimBP.Player_BuildingPose_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_Player_BuildingPose_AnimBP(int32_t EntryPoint); // Function Player_BuildingPose_AnimBP.Player_BuildingPose_AnimBP_C.ExecuteUbergraph_Player_BuildingPose_AnimBP // (Final|UbergraphFunction) // @ game+0xd67374
};

