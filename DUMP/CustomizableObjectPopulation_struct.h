// Enum CustomizableObjectPopulation.EPopulationConstraintType
enum class EPopulationConstraintType : uint8 {
	NONE = 0,
	BOOL = 1,
	DISCRETE = 2,
	DISCRETE_FLOAT = 3,
	DISCRETE_COLOR = 4,
	TAG = 5,
	RANGE = 6,
	CURVE = 7,
	CURVE_COLOR = 8,
	EPopulationConstraintType_MAX = 9
};

// Enum CustomizableObjectPopulation.ECurveColor
enum class ECurveColor : uint8 {
	RED = 0,
	GREEN = 1,
	BLUE = 2,
	ALPHA = 3,
	ECurveColor_MAX = 4
};

// ScriptStruct CustomizableObjectPopulation.ClassWeightPair
// Size: 0x10 (Inherited: 0x00)
struct FClassWeightPair {
	struct UCustomizableObjectPopulationClass* Class; // 0x00(0x08)
	int32_t ClassWeight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct CustomizableObjectPopulation.CustomizableObjectPopulationCharacteristic
// Size: 0x20 (Inherited: 0x00)
struct FCustomizableObjectPopulationCharacteristic {
	struct FString ParameterName; // 0x00(0x10)
	struct TArray<struct FCustomizableObjectPopulationConstraint> Constraints; // 0x10(0x10)
};

// ScriptStruct CustomizableObjectPopulation.CustomizableObjectPopulationConstraint
// Size: 0x70 (Inherited: 0x00)
struct FCustomizableObjectPopulationConstraint {
	enum class EPopulationConstraintType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ConstraintWeight; // 0x04(0x04)
	int32_t TrueWeight; // 0x08(0x04)
	int32_t FalseWeight; // 0x0c(0x04)
	struct FString DiscreteValue; // 0x10(0x10)
	struct FLinearColor DiscreteColor; // 0x20(0x10)
	struct TArray<struct FString> WhiteList; // 0x30(0x10)
	struct TArray<struct FString> Blacklist; // 0x40(0x10)
	struct TArray<struct FConstraintRanges> Ranges; // 0x50(0x10)
	struct UCurveBase* Curve; // 0x60(0x08)
	enum class ECurveColor CurveColor; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// ScriptStruct CustomizableObjectPopulation.ConstraintRanges
// Size: 0x0c (Inherited: 0x00)
struct FConstraintRanges {
	float MinimumValue; // 0x00(0x04)
	float MaximumValue; // 0x04(0x04)
	int32_t RangeWeight; // 0x08(0x04)
};

// ScriptStruct CustomizableObjectPopulation.PopulationClassParameterOptions
// Size: 0x10 (Inherited: 0x00)
struct FPopulationClassParameterOptions {
	struct TArray<struct FString> Tags; // 0x00(0x10)
};

// ScriptStruct CustomizableObjectPopulation.PopulationClassParameter
// Size: 0x60 (Inherited: 0x00)
struct FPopulationClassParameter {
	struct TArray<struct FString> Tags; // 0x00(0x10)
	struct TMap<struct FString, struct FPopulationClassParameterOptions> ParameterOptions; // 0x10(0x50)
};

