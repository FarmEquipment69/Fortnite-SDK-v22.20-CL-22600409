// AnimBlueprintGeneratedClass Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C
// Size: 0x1818 (Inherited: 0x6f0)
struct UMechanical_Engineer_Female_AnimBP_C : UCustomCharacterPartAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6f0(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x6f8(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x700(0x08)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x708(0xc0)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x7c8(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x7e8(0x20)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x808(0x20)
	char pad_828[0x8]; // 0x828(0x08)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x830(0x510)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0xd40(0x990)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x16d0(0x128)
	struct FRotator gear_rot; // 0x17f8(0x18)
	struct USkeletalMeshComponent* skel_mesh; // 0x1810(0x08)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void BlueprintInitializeAnimation(); // Function Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP(int32_t EntryPoint); // Function Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C.ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP // (Final|UbergraphFunction) // @ game+0xd67374
};

