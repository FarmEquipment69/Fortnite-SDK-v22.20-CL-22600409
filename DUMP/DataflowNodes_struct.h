// ScriptStruct DataflowNodes.GetSkeletalMeshDataflowNode
// Size: 0x68 (Inherited: 0x48)
struct FGetSkeletalMeshDataflowNode : FDataflowNode {
	struct USkeletalMesh* SkeletalMesh; // 0x48(0x08)
	struct FName PropertyName; // 0x50(0x04)
	char pad_54[0x14]; // 0x54(0x14)
};

// ScriptStruct DataflowNodes.SkeletalMeshBoneDataflowNode
// Size: 0x70 (Inherited: 0x48)
struct FSkeletalMeshBoneDataflowNode : FDataflowNode {
	struct FName BoneName; // 0x48(0x04)
	char pad_4C[0x24]; // 0x4c(0x24)
};

// ScriptStruct DataflowNodes.GetStaticMeshDataflowNode
// Size: 0x68 (Inherited: 0x48)
struct FGetStaticMeshDataflowNode : FDataflowNode {
	struct UStaticMesh* StaticMesh; // 0x48(0x08)
	struct FName PropertyName; // 0x50(0x04)
	char pad_54[0x14]; // 0x54(0x14)
};

