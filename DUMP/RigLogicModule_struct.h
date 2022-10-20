// Enum RigLogicModule.EArchetype
enum class EArchetype : uint8 {
	Asian = 0,
	Black = 1,
	Caucasian = 2,
	Hispanic = 3,
	Alien = 4,
	Other = 5,
	EArchetype_MAX = 6
};

// Enum RigLogicModule.EGender
enum class EGender : uint8 {
	Male = 0,
	Female = 1,
	Other = 2,
	EGender_MAX = 3
};

// Enum RigLogicModule.ETranslationUnit
enum class ETranslationUnit : uint8 {
	CM = 0,
	M = 1,
	ETranslationUnit_MAX = 2
};

// Enum RigLogicModule.ERotationUnit
enum class ERotationUnit : uint8 {
	Degrees = 0,
	Radians = 1,
	ERotationUnit_MAX = 2
};

// Enum RigLogicModule.EDirection
enum class EDirection : uint8 {
	Left = 0,
	Right = 1,
	Up = 2,
	Down = 3,
	Front = 4,
	Back = 5,
	EDirection_MAX = 6
};

// Enum RigLogicModule.EDNADataLayer
enum class EDNADataLayer : uint8 {
	Descriptor = 0,
	Definition = 1,
	Behavior = 2,
	Geometry = 3,
	GeometryWithoutBlendShapes = 4,
	AllWithoutBlendShapes = 5,
	All = 6,
	EDNADataLayer_MAX = 7
};

// Enum RigLogicModule.ERigLogicCalculationType
enum class ERigLogicCalculationType : uint8 {
	Scalar = 0,
	SSE = 1,
	AVX = 2,
	ERigLogicCalculationType_MAX = 3
};

// ScriptStruct RigLogicModule.AnimNode_RigLogic
// Size: 0x58 (Inherited: 0x10)
struct FAnimNode_RigLogic : FAnimNode_Base {
	struct FPoseLink AnimSequence; // 0x10(0x10)
	char pad_20[0x38]; // 0x20(0x38)
};

// ScriptStruct RigLogicModule.CoordinateSystem
// Size: 0x03 (Inherited: 0x00)
struct FCoordinateSystem {
	enum class EDirection XAxis; // 0x00(0x01)
	enum class EDirection YAxis; // 0x01(0x01)
	enum class EDirection ZAxis; // 0x02(0x01)
};

// ScriptStruct RigLogicModule.MeshBlendShapeChannelMapping
// Size: 0x08 (Inherited: 0x00)
struct FMeshBlendShapeChannelMapping {
	int32_t MeshIndex; // 0x00(0x04)
	int32_t BlendShapeChannelIndex; // 0x04(0x04)
};

// ScriptStruct RigLogicModule.TextureCoordinate
// Size: 0x08 (Inherited: 0x00)
struct FTextureCoordinate {
	float U; // 0x00(0x04)
	float V; // 0x04(0x04)
};

// ScriptStruct RigLogicModule.VertexLayout
// Size: 0x0c (Inherited: 0x00)
struct FVertexLayout {
	int32_t Position; // 0x00(0x04)
	int32_t TextureCoordinate; // 0x04(0x04)
	int32_t Normal; // 0x08(0x04)
};

// ScriptStruct RigLogicModule.RigUnit_RigLogic_IntArray
// Size: 0x10 (Inherited: 0x00)
struct FRigUnit_RigLogic_IntArray {
	struct TArray<int32_t> Values; // 0x00(0x10)
};

// ScriptStruct RigLogicModule.RigUnit_RigLogic_Data
// Size: 0x88 (Inherited: 0x00)
struct FRigUnit_RigLogic_Data {
	struct TWeakObjectPtr<struct USkeletalMeshComponent> SkelMeshComponent; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)
	struct TArray<int32_t> InputCurveIndices; // 0x20(0x10)
	struct TArray<int32_t> HierarchyBoneIndices; // 0x30(0x10)
	struct TArray<struct FRigUnit_RigLogic_IntArray> MorphTargetCurveIndices; // 0x40(0x10)
	struct TArray<struct FRigUnit_RigLogic_IntArray> BlendShapeIndices; // 0x50(0x10)
	struct TArray<struct FRigUnit_RigLogic_IntArray> CurveElementIndicesForAnimMaps; // 0x60(0x10)
	struct TArray<struct FRigUnit_RigLogic_IntArray> RigLogicIndicesForAnimMaps; // 0x70(0x10)
	uint32_t CurrentLOD; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct RigLogicModule.RigUnit_RigLogic
// Size: 0xc0 (Inherited: 0x38)
struct FRigUnit_RigLogic : FRigUnitMutable {
	struct FRigUnit_RigLogic_Data Data; // 0x38(0x88)
};

