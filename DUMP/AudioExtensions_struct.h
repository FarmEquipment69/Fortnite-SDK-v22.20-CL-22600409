// Enum AudioExtensions.EAudioParameterType
enum class EAudioParameterType : uint8 {
	None = 0,
	Boolean = 1,
	Integer = 2,
	Float = 3,
	String = 4,
	Object = 5,
	NoneArray = 6,
	BooleanArray = 7,
	IntegerArray = 8,
	FloatArray = 9,
	StringArray = 10,
	ObjectArray = 11,
	COUNT = 12,
	EAudioParameterType_MAX = 13
};

// Enum AudioExtensions.EPcmBitDepthConversion
enum class EPcmBitDepthConversion : uint8 {
	SameAsSource = 0,
	Int16 = 1,
	Float32 = 2,
	EPcmBitDepthConversion_MAX = 3
};

// ScriptStruct AudioExtensions.AudioParameter
// Size: 0x90 (Inherited: 0x00)
struct FAudioParameter {
	struct FName ParamName; // 0x00(0x04)
	float FloatParam; // 0x04(0x04)
	bool BoolParam; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t IntParam; // 0x0c(0x04)
	struct UObject* ObjectParam; // 0x10(0x08)
	struct FString StringParam; // 0x18(0x10)
	struct TArray<float> ArrayFloatParam; // 0x28(0x10)
	struct TArray<bool> ArrayBoolParam; // 0x38(0x10)
	struct TArray<int32_t> ArrayIntParam; // 0x48(0x10)
	struct TArray<struct UObject*> ArrayObjectParam; // 0x58(0x10)
	struct TArray<struct FString> ArrayStringParam; // 0x68(0x10)
	enum class EAudioParameterType ParamType; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	struct FName TypeName; // 0x7c(0x04)
	char pad_80[0x10]; // 0x80(0x10)
};

