// Enum PointLight.EPointLightDeviceModes
enum class EPointLightDeviceModes : uint8 {
	Constant = 0,
	Flicker = 1,
	Wave = 2,
	ShortCircuit = 3,
	Party = 4,
	Windy = 5,
	Flash = 6,
	EPointLightDeviceModes_MAX = 7
};

// Enum PointLight.EPointLightDeviceLightType
enum class EPointLightDeviceLightType : uint8 {
	Point = 0,
	Spot = 1,
	EPointLightDeviceLightType_MAX = 2
};

// ScriptStruct PointLight.PointLightRhythmParameters
// Size: 0x38 (Inherited: 0x00)
struct FPointLightRhythmParameters {
	struct FLinearColor LightColor; // 0x00(0x10)
	struct ULightComponent* ActiveLight; // 0x10(0x08)
	struct UStaticMeshComponent* StaticMeshComponent; // 0x18(0x08)
	int32_t ColorBands; // 0x20(0x04)
	float RhythmFrequencyValue; // 0x24(0x04)
	float WindAmplitudeSpotLight; // 0x28(0x04)
	float FlashFactor; // 0x2c(0x04)
	float SizeBasedIntensity; // 0x30(0x04)
	enum class EPointLightDeviceLightType LightType; // 0x34(0x01)
	enum class EPointLightDeviceModes RhythmMode; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
};

