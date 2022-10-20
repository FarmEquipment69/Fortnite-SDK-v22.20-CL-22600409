// AnimBlueprintGeneratedClass Player_FullBody_AnimBP_Template.Player_FullBody_AnimBP_Template_C
// Size: 0x508 (Inherited: 0x350)
struct UPlayer_FullBody_AnimBP_Template_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x358(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x360(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x368(0x20)
	struct FAnimNode_LinkedInputPose ; // 0x388(0xc0)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x448(0xc0)

	void AnimGraph(struct FPoseLink UpperAndLowerBodyInPose, struct FPoseLink UpperBodyInPose, struct FPoseLink& AnimGraph); // Function Player_FullBody_AnimBP_Template.Player_FullBody_AnimBP_Template_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_Player_FullBody_AnimBP_Template(int32_t EntryPoint); // Function Player_FullBody_AnimBP_Template.Player_FullBody_AnimBP_Template_C.ExecuteUbergraph_Player_FullBody_AnimBP_Template // (Final|UbergraphFunction) // @ game+0xd67374
};

