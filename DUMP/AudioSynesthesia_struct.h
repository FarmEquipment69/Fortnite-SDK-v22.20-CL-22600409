// Enum AudioSynesthesia.EConstantQNormalizationEnum
enum class EConstantQNormalizationEnum : uint8 {
	EqualEuclideanNorm = 0,
	EqualEnergy = 1,
	EqualAmplitude = 2,
	EConstantQNormalizationEnum_MAX = 3
};

// Enum AudioSynesthesia.EConstantQFFTSizeEnum
enum class EConstantQFFTSizeEnum : uint8 {
	Min = 0,
	XXSmall = 1,
	XSmall = 2,
	Small = 3,
	Medium = 4,
	Large = 5,
	XLarge = 6,
	XXLarge = 7,
	Max = 8
};

// Enum AudioSynesthesia.ELoudnessCurveTypeEnum
enum class ELoudnessCurveTypeEnum : uint8 {
	A = 0,
	B = 1,
	C = 2,
	D = 3,
	None = 4,
	ELoudnessCurveTypeEnum_MAX = 5
};

// Enum AudioSynesthesia.ELoudnessNRTCurveTypeEnum
enum class ELoudnessNRTCurveTypeEnum : uint8 {
	A = 0,
	B = 1,
	C = 2,
	D = 3,
	None = 4,
	ELoudnessNRTCurveTypeEnum_MAX = 5
};

// Enum AudioSynesthesia.EMeterPeakType
enum class EMeterPeakType : uint8 {
	MeanSquared = 0,
	RootMeanSquared = 1,
	Peak = 2,
	Count = 3,
	EMeterPeakType_MAX = 4
};

// ScriptStruct AudioSynesthesia.LoudnessResults
// Size: 0x10 (Inherited: 0x00)
struct FLoudnessResults {
	float Loudness; // 0x00(0x04)
	float NormalizedLoudness; // 0x04(0x04)
	float PerceptualEnergy; // 0x08(0x04)
	float TimeSeconds; // 0x0c(0x04)
};

// ScriptStruct AudioSynesthesia.MeterResults
// Size: 0x14 (Inherited: 0x00)
struct FMeterResults {
	float TimeSeconds; // 0x00(0x04)
	float MeterValue; // 0x04(0x04)
	float PeakValue; // 0x08(0x04)
	int32_t NumSamplesClipping; // 0x0c(0x04)
	float ClippingValue; // 0x10(0x04)
};

