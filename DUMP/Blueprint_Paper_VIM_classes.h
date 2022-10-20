// AnimBlueprintGeneratedClass Blueprint_Paper_VIM.Blueprint_Paper_VIM_C
// Size: 0x19f0 (Inherited: 0x540)
struct UBlueprint_Paper_VIM_C : UFortAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x548(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x550(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x558(0x20)
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0x578(0x10)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x588(0x20)
	char pad_5A8[0x8]; // 0x5a8(0x08)
	struct FAnimNode_AnimDynamics ; // 0x5b0(0x510)
	struct FAnimNode_AnimDynamics ; // 0xac0(0x510)
	struct FAnimNode_AnimDynamics ; // 0xfd0(0x510)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x14e0(0x510)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_9E5EF2534AF35AEF656F7798016DF75B(); // Function Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_9E5EF2534AF35AEF656F7798016DF75B // (BlueprintEvent) // @ game+0xd67374
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_3AF159404BD341EBBF1D83916A014149(); // Function Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_3AF159404BD341EBBF1D83916A014149 // (BlueprintEvent) // @ game+0xd67374
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_ADC4973B4FF994FAB62509B5C600BF73(); // Function Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_ADC4973B4FF994FAB62509B5C600BF73 // (BlueprintEvent) // @ game+0xd67374
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_BCA43E284168E0AB05BB9E98D217441B(); // Function Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Blueprint_Paper_VIM_AnimGraphNode_AnimDynamics_BCA43E284168E0AB05BB9E98D217441B // (BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_Blueprint_Paper_VIM(int32_t EntryPoint); // Function Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.ExecuteUbergraph_Blueprint_Paper_VIM // (Final|UbergraphFunction) // @ game+0xd67374
};

