// AnimBlueprintGeneratedClass HighTower_Tapas_Axe_AnimBP.HighTower_Tapas_Axe_AnimBP_C
// Size: 0x1c40 (Inherited: 0x700)
struct UHighTower_Tapas_Axe_AnimBP_C : UCustomCharacterPartAnimInstance_HightowerTapasAxe {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x700(0x08)
	struct FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables; // 0x708(0x02)
	char pad_70A[0x6]; // 0x70a(0x06)
	struct FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess; // 0x710(0x08)
	struct FAnimSubsystemInstance AnimBlueprintExtension_Base; // 0x718(0x08)
	struct FAnimNode_ConvertLocalToComponentSpace ; // 0x720(0x20)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x740(0x1d0)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x910(0x20)
	struct FAnimNode_Trail AnimGraphNode_Trail; // 0x930(0x2a0)
	struct FAnimNode_ModifyBone ; // 0xbd0(0x128)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xcf8(0x48)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0xd40(0x990)
	struct FAnimNode_ConvertComponentToLocalSpace ; // 0x16d0(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace ; // 0x16f0(0x20)
	struct FAnimNode_SaveCachedPose ; // 0x1710(0x100)
	struct FAnimNode_UseCachedPose ; // 0x1810(0x28)
	struct FAnimNode_ConvertLocalToComponentSpace ; // 0x1838(0x20)
	struct FAnimNode_UseCachedPose ; // 0x1858(0x28)
	struct FAnimNode_UseCachedPose ; // 0x1880(0x28)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x18a8(0x128)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x19d0(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x19f0(0x20)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x1a10(0x48)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x1a58(0x100)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x1b58(0xc0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x1c18(0x28)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function HighTower_Tapas_Axe_AnimBP.HighTower_Tapas_Axe_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_HighTower_Tapas_Axe_AnimBP(int32_t EntryPoint); // Function HighTower_Tapas_Axe_AnimBP.HighTower_Tapas_Axe_AnimBP_C.ExecuteUbergraph_HighTower_Tapas_Axe_AnimBP // (Final|UbergraphFunction) // @ game+0xd67374
};

