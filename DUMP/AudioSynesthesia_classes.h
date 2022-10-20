// Class AudioSynesthesia.AudioSynesthesiaSettings
// Size: 0x28 (Inherited: 0x28)
struct UAudioSynesthesiaSettings : UAudioAnalyzerSettings {
};

// Class AudioSynesthesia.AudioSynesthesiaNRTSettings
// Size: 0x28 (Inherited: 0x28)
struct UAudioSynesthesiaNRTSettings : UAudioAnalyzerNRTSettings {
};

// Class AudioSynesthesia.AudioSynesthesiaNRT
// Size: 0x78 (Inherited: 0x78)
struct UAudioSynesthesiaNRT : UAudioAnalyzerNRT {
};

// Class AudioSynesthesia.ConstantQNRTSettings
// Size: 0x48 (Inherited: 0x28)
struct UConstantQNRTSettings : UAudioSynesthesiaNRTSettings {
	float StartingFrequency; // 0x28(0x04)
	int32_t NumBands; // 0x2c(0x04)
	float NumBandsPerOctave; // 0x30(0x04)
	float AnalysisPeriod; // 0x34(0x04)
	bool bDownmixToMono; // 0x38(0x01)
	enum class EConstantQFFTSizeEnum FFTSize; // 0x39(0x01)
	enum class EFFTWindowType WindowType; // 0x3a(0x01)
	enum class EAudioSpectrumType SpectrumType; // 0x3b(0x01)
	float BandWidthStretch; // 0x3c(0x04)
	enum class EConstantQNormalizationEnum CQTNormalization; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float NoiseFloorDb; // 0x44(0x04)
};

// Class AudioSynesthesia.ConstantQNRT
// Size: 0x80 (Inherited: 0x78)
struct UConstantQNRT : UAudioSynesthesiaNRT {
	struct UConstantQNRTSettings* Settings; // 0x78(0x08)

	void GetNormalizedChannelConstantQAtTime(float InSeconds, int32_t InChannel, struct TArray<float>& OutConstantQ); // Function AudioSynesthesia.ConstantQNRT.GetNormalizedChannelConstantQAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x640ab44
	void GetChannelConstantQAtTime(float InSeconds, int32_t InChannel, struct TArray<float>& OutConstantQ); // Function AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x640a66c
};

// Class AudioSynesthesia.LoudnessSettings
// Size: 0x40 (Inherited: 0x28)
struct ULoudnessSettings : UAudioSynesthesiaSettings {
	float AnalysisPeriod; // 0x28(0x04)
	float MinimumFrequency; // 0x2c(0x04)
	float MaximumFrequency; // 0x30(0x04)
	enum class ELoudnessCurveTypeEnum CurveType; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float NoiseFloorDb; // 0x38(0x04)
	float ExpectedMaxLoudness; // 0x3c(0x04)
};

// Class AudioSynesthesia.LoudnessAnalyzer
// Size: 0xd8 (Inherited: 0x90)
struct ULoudnessAnalyzer : UAudioAnalyzer {
	struct ULoudnessSettings* Settings; // 0x90(0x08)
	struct FMulticastInlineDelegate OnOverallLoudnessResults; // 0x98(0x10)
	struct FMulticastInlineDelegate OnPerChannelLoudnessResults; // 0xa8(0x10)
	struct FMulticastInlineDelegate OnLatestOverallLoudnessResults; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnLatestPerChannelLoudnessResults; // 0xc8(0x10)
};

// Class AudioSynesthesia.LoudnessNRTSettings
// Size: 0x40 (Inherited: 0x28)
struct ULoudnessNRTSettings : UAudioSynesthesiaNRTSettings {
	float AnalysisPeriod; // 0x28(0x04)
	float MinimumFrequency; // 0x2c(0x04)
	float MaximumFrequency; // 0x30(0x04)
	enum class ELoudnessNRTCurveTypeEnum CurveType; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float NoiseFloorDb; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class AudioSynesthesia.LoudnessNRT
// Size: 0x80 (Inherited: 0x78)
struct ULoudnessNRT : UAudioSynesthesiaNRT {
	struct ULoudnessNRTSettings* Settings; // 0x78(0x08)

	void GetNormalizedLoudnessAtTime(float InSeconds, float& OutLoudness); // Function AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x640af48
	void GetNormalizedChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float& OutLoudness); // Function AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x640ac70
	void GetLoudnessAtTime(float InSeconds, float& OutLoudness); // Function AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x640aa70
	void GetChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float& OutLoudness); // Function AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x640a798
};

// Class AudioSynesthesia.MeterSettings
// Size: 0x40 (Inherited: 0x28)
struct UMeterSettings : UAudioSynesthesiaSettings {
	float AnalysisPeriod; // 0x28(0x04)
	enum class EMeterPeakType PeakMode; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	int32_t MeterAttackTime; // 0x30(0x04)
	int32_t MeterReleaseTime; // 0x34(0x04)
	int32_t PeakHoldTime; // 0x38(0x04)
	float ClippingThreshold; // 0x3c(0x04)
};

// Class AudioSynesthesia.MeterAnalyzer
// Size: 0x138 (Inherited: 0x90)
struct UMeterAnalyzer : UAudioAnalyzer {
	struct UMeterSettings* Settings; // 0x90(0x08)
	struct FMulticastInlineDelegate OnOverallMeterResults; // 0x98(0x10)
	char pad_A8[0x18]; // 0xa8(0x18)
	struct FMulticastInlineDelegate OnPerChannelMeterResults; // 0xc0(0x10)
	char pad_D0[0x18]; // 0xd0(0x18)
	struct FMulticastInlineDelegate OnLatestOverallMeterResults; // 0xe8(0x10)
	char pad_F8[0x18]; // 0xf8(0x18)
	struct FMulticastInlineDelegate OnLatestPerChannelMeterResults; // 0x110(0x10)
	char pad_120[0x18]; // 0x120(0x18)
};

// Class AudioSynesthesia.OnsetNRTSettings
// Size: 0x40 (Inherited: 0x28)
struct UOnsetNRTSettings : UAudioSynesthesiaNRTSettings {
	bool bDownmixToMono; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float GranularityInSeconds; // 0x2c(0x04)
	float Sensitivity; // 0x30(0x04)
	float MinimumFrequency; // 0x34(0x04)
	float MaximumFrequency; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class AudioSynesthesia.OnsetNRT
// Size: 0x80 (Inherited: 0x78)
struct UOnsetNRT : UAudioSynesthesiaNRT {
	struct UOnsetNRTSettings* Settings; // 0x78(0x08)

	void GetNormalizedChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, struct TArray<float>& OutOnsetTimestamps, struct TArray<float>& OutOnsetStrengths); // Function AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x640ad74
	void GetChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, struct TArray<float>& OutOnsetTimestamps, struct TArray<float>& OutOnsetStrengths); // Function AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x640a89c
};

