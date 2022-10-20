// Enum AudioModulation.ESoundModulationLFOShape
enum class ESoundModulationLFOShape : uint8 {
	Sine = 0,
	UpSaw = 1,
	DownSaw = 2,
	Square = 3,
	Triangle = 4,
	Exponential = 5,
	RandomSampleHold = 6,
	COUNT = 7,
	ESoundModulationLFOShape_MAX = 8
};

// Enum AudioModulation.ESoundModulatorCurve
enum class ESoundModulatorCurve : uint8 {
	Linear = 0,
	Exp = 1,
	Exp_Inverse = 2,
	Log = 3,
	Sin = 4,
	SCurve = 5,
	Shared = 6,
	Custom = 7,
	Count = 8,
	ESoundModulatorCurve_MAX = 9
};

// ScriptStruct AudioModulation.SoundControlBusMixStage
// Size: 0x28 (Inherited: 0x00)
struct FSoundControlBusMixStage {
	struct USoundControlBus* Bus; // 0x00(0x08)
	struct FSoundModulationMixValue Value; // 0x08(0x20)
};

// ScriptStruct AudioModulation.SoundModulationMixValue
// Size: 0x20 (Inherited: 0x00)
struct FSoundModulationMixValue {
	float TargetValue; // 0x00(0x04)
	float AttackTime; // 0x04(0x04)
	float ReleaseTime; // 0x08(0x04)
	char pad_C[0x14]; // 0x0c(0x14)
};

// ScriptStruct AudioModulation.EnvelopeFollowerGeneratorParams
// Size: 0x20 (Inherited: 0x00)
struct FEnvelopeFollowerGeneratorParams {
	bool bBypass; // 0x00(0x01)
	bool bInvert; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct UAudioBus* AudioBus; // 0x08(0x08)
	float Gain; // 0x10(0x04)
	float AttackTime; // 0x14(0x04)
	float ReleaseTime; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct AudioModulation.SoundModulationLFOParams
// Size: 0x14 (Inherited: 0x00)
struct FSoundModulationLFOParams {
	enum class ESoundModulationLFOShape Shape; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Amplitude; // 0x04(0x04)
	float Frequency; // 0x08(0x04)
	float Offset; // 0x0c(0x04)
	bool bLooping; // 0x10(0x01)
	bool bBypass; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
};

// ScriptStruct AudioModulation.SoundModulationParameterSettings
// Size: 0x04 (Inherited: 0x00)
struct FSoundModulationParameterSettings {
	float ValueNormalized; // 0x00(0x04)
};

// ScriptStruct AudioModulation.SoundControlModulationInput
// Size: 0xa0 (Inherited: 0x00)
struct FSoundControlModulationInput {
	char bSampleAndHold : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FSoundModulationTransform Transform; // 0x08(0x90)
	struct USoundControlBus* Bus; // 0x98(0x08)
};

// ScriptStruct AudioModulation.SoundModulationTransform
// Size: 0x90 (Inherited: 0x00)
struct FSoundModulationTransform {
	enum class ESoundModulatorCurve Curve; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Scalar; // 0x04(0x04)
	struct FRichCurve CurveCustom; // 0x08(0x80)
	struct UCurveFloat* CurveShared; // 0x88(0x08)
};

// ScriptStruct AudioModulation.SoundControlModulationPatch
// Size: 0x20 (Inherited: 0x00)
struct FSoundControlModulationPatch {
	bool bBypass; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct USoundModulationParameter* OutputParameter; // 0x08(0x08)
	struct TArray<struct FSoundControlModulationInput> Inputs; // 0x10(0x10)
};

