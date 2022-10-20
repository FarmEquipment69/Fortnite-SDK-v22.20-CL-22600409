// AnimBlueprintGeneratedClass Fortnite_M_Avg_Player_DBNO_AnimBP.Fortnite_M_Avg_Player_DBNO_AnimBP_C
// Size: 0xcf9 (Inherited: 0x460)
struct UFortnite_M_Avg_Player_DBNO_AnimBP_C : UFortDBNOAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables; // 0x468(0x18)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x480(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x488(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x490(0x20)
	struct FAnimNode_TransitionResult ; // 0x4b0(0x28)
	struct FAnimNode_TransitionResult ; // 0x4d8(0x28)
	struct FAnimNode_TransitionResult ; // 0x500(0x28)
	struct FAnimNode_TransitionResult ; // 0x528(0x28)
	struct FAnimNode_TransitionResult ; // 0x550(0x28)
	struct FAnimNode_TransitionResult ; // 0x578(0x28)
	struct FAnimNode_TransitionResult ; // 0x5a0(0x28)
	struct FAnimNode_TransitionResult ; // 0x5c8(0x28)
	struct FAnimNode_TransitionResult ; // 0x5f0(0x28)
	struct FAnimNode_TransitionResult ; // 0x618(0x28)
	struct FAnimNode_SequencePlayer ; // 0x640(0x40)
	struct FAnimNode_StateResult ; // 0x680(0x20)
	struct FAnimNode_SequencePlayer ; // 0x6a0(0x40)
	struct FAnimNode_StateResult ; // 0x6e0(0x20)
	struct FAnimNode_SequencePlayer ; // 0x700(0x40)
	struct FAnimNode_StateResult ; // 0x740(0x20)
	struct FAnimNode_BlendSpacePlayer ; // 0x760(0x68)
	struct FAnimNode_StateResult ; // 0x7c8(0x20)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x7e8(0x40)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x828(0x20)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x848(0x28)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x870(0xc8)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x938(0xc8)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0xa00(0x68)
	struct FAnimNode_ModifyBone ; // 0xa68(0x128)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xb90(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xbb0(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xbd0(0x128)
	bool AdjustLargeBody; // 0xcf8(0x01)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function Fortnite_M_Avg_Player_DBNO_AnimBP.Fortnite_M_Avg_Player_DBNO_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_DBNO_AnimBP_AnimGraphNode_ModifyBone_F28F19494706BFB6D2F74181D211D9E5(); // Function Fortnite_M_Avg_Player_DBNO_AnimBP.Fortnite_M_Avg_Player_DBNO_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_DBNO_AnimBP_AnimGraphNode_ModifyBone_F28F19494706BFB6D2F74181D211D9E5 // (BlueprintEvent) // @ game+0xd67374
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_DBNO_AnimBP_AnimGraphNode_ModifyBone_5F4823B441208B2FBDD3F9A03D4F08DD(); // Function Fortnite_M_Avg_Player_DBNO_AnimBP.Fortnite_M_Avg_Player_DBNO_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_DBNO_AnimBP_AnimGraphNode_ModifyBone_5F4823B441208B2FBDD3F9A03D4F08DD // (BlueprintEvent) // @ game+0xd67374
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function Fortnite_M_Avg_Player_DBNO_AnimBP.Fortnite_M_Avg_Player_DBNO_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_Fortnite_M_Avg_Player_DBNO_AnimBP(int32_t EntryPoint); // Function Fortnite_M_Avg_Player_DBNO_AnimBP.Fortnite_M_Avg_Player_DBNO_AnimBP_C.ExecuteUbergraph_Fortnite_M_Avg_Player_DBNO_AnimBP // (Final|UbergraphFunction) // @ game+0xd67374
};

