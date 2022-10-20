// ScriptStruct SkeletalMerging.SkeletalMeshMergeParams
// Size: 0x40 (Inherited: 0x00)
struct FSkeletalMeshMergeParams {
	struct TArray<struct FSkelMeshMergeSectionMapping> MeshSectionMappings; // 0x00(0x10)
	struct TArray<struct FSkelMeshMergeMeshUVTransforms> UVTransformsPerMesh; // 0x10(0x10)
	struct TArray<struct USkeletalMesh*> MeshesToMerge; // 0x20(0x10)
	int32_t StripTopLODS; // 0x30(0x04)
	char bNeedsCpuAccess : 1; // 0x34(0x01)
	char bSkeletonBefore : 1; // 0x34(0x01)
	char pad_34_2 : 6; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct USkeleton* Skeleton; // 0x38(0x08)
};

// ScriptStruct SkeletalMerging.SkeletonMergeParams
// Size: 0x18 (Inherited: 0x00)
struct FSkeletonMergeParams {
	struct TArray<struct USkeleton*> SkeletonsToMerge; // 0x00(0x10)
	bool bMergeSockets; // 0x10(0x01)
	bool bMergeVirtualBones; // 0x11(0x01)
	bool bMergeCurveNames; // 0x12(0x01)
	bool bMergeBlendProfiles; // 0x13(0x01)
	bool bMergeAnimSlotGroups; // 0x14(0x01)
	bool bCheckSkeletonsCompatibility; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
};

