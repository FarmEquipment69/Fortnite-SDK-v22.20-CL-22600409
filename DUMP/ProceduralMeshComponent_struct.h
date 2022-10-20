// Enum ProceduralMeshComponent.EProcMeshSliceCapOption
enum class EProcMeshSliceCapOption : uint8 {
	NoCap = 0,
	CreateNewSectionForCap = 1,
	UseLastSectionForCap = 2,
	EProcMeshSliceCapOption_MAX = 3
};

// ScriptStruct ProceduralMeshComponent.ProcMeshTangent
// Size: 0x20 (Inherited: 0x00)
struct FProcMeshTangent {
	struct FVector TangentX; // 0x00(0x18)
	bool bFlipTangentY; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct ProceduralMeshComponent.ProcMeshVertex
// Size: 0x98 (Inherited: 0x00)
struct FProcMeshVertex {
	struct FVector Position; // 0x00(0x18)
	struct FVector Normal; // 0x18(0x18)
	struct FProcMeshTangent Tangent; // 0x30(0x20)
	struct FColor Color; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FVector2D UV0; // 0x58(0x10)
	struct FVector2D UV1; // 0x68(0x10)
	struct FVector2D UV2; // 0x78(0x10)
	struct FVector2D UV3; // 0x88(0x10)
};

// ScriptStruct ProceduralMeshComponent.ProcMeshSection
// Size: 0x60 (Inherited: 0x00)
struct FProcMeshSection {
	struct TArray<struct FProcMeshVertex> ProcVertexBuffer; // 0x00(0x10)
	struct TArray<uint32_t> ProcIndexBuffer; // 0x10(0x10)
	struct FBox SectionLocalBox; // 0x20(0x38)
	bool bEnableCollision; // 0x58(0x01)
	bool bSectionVisible; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)
};

