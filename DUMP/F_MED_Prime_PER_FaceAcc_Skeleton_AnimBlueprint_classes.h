// AnimBlueprintGeneratedClass F_MED_Prime_PER_FaceAcc_Skeleton_AnimBlueprint.F_MED_Prime_PER_FaceAcc_Skeleton_AnimBlueprint_C
// Size: 0x1530 (Inherited: 0x6f0)
struct UF_MED_Prime_PER_FaceAcc_Skeleton_AnimBlueprint_C : UCustomCharacterPartAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6f0(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x6f8(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x700(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x708(0x20)
	char pad_728[0x8]; // 0x728(0x08)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x730(0x990)
	struct FAnimNode_ModifyBone ; // 0x10c0(0x128)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x11e8(0x128)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1310(0x20)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x1330(0x1d0)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x1500(0x20)
	double headBack; // 0x1520(0x08)
	double clavicleDelta; // 0x1528(0x08)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function F_MED_Prime_PER_FaceAcc_Skeleton_AnimBlueprint.F_MED_Prime_PER_FaceAcc_Skeleton_AnimBlueprint_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function F_MED_Prime_PER_FaceAcc_Skeleton_AnimBlueprint.F_MED_Prime_PER_FaceAcc_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_F_MED_Prime_PER_FaceAcc_Skeleton_AnimBlueprint(int32_t EntryPoint); // Function F_MED_Prime_PER_FaceAcc_Skeleton_AnimBlueprint.F_MED_Prime_PER_FaceAcc_Skeleton_AnimBlueprint_C.ExecuteUbergraph_F_MED_Prime_PER_FaceAcc_Skeleton_AnimBlueprint // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

