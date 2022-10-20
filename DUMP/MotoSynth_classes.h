// Class MotoSynth.MotoSynthPreset
// Size: 0x160 (Inherited: 0x28)
struct UMotoSynthPreset : UObject {
	struct FMotoSynthRuntimeSettings Settings; // 0x28(0x138)
};

// Class MotoSynth.MotoSynthSource
// Size: 0xf8 (Inherited: 0x28)
struct UMotoSynthSource : UObject {
	bool bConvertTo8Bit; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float DownSampleFactor; // 0x2c(0x04)
	struct FRuntimeFloatCurve RpmCurve; // 0x30(0x88)
	struct TArray<float> SourceData; // 0xb8(0x10)
	struct TArray<int16_t> SourceDataPCM; // 0xc8(0x10)
	int32_t SourceSampleRate; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct TArray<struct FGrainTableEntry> GrainTable; // 0xe0(0x10)
	char pad_F0[0x8]; // 0xf0(0x08)
};

// Class MotoSynth.SynthComponentMoto
// Size: 0x920 (Inherited: 0x780)
struct USynthComponentMoto : USynthComponent {
	struct UMotoSynthPreset* MotoSynthPreset; // 0x780(0x08)
	float RPM; // 0x788(0x04)
	char pad_78C[0x194]; // 0x78c(0x194)

	void SetSettings(struct FMotoSynthRuntimeSettings& InSettings); // Function MotoSynth.SynthComponentMoto.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x640e360
	void SetRPM(float InRPM, float InTimeSec); // Function MotoSynth.SynthComponentMoto.SetRPM // (Final|Native|Public|BlueprintCallable) // @ game+0x640e29c
	bool IsEnabled(); // Function MotoSynth.SynthComponentMoto.IsEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x640e280
	void GetRPMRange(float& OutMinRPM, float& OutMaxRPM); // Function MotoSynth.SynthComponentMoto.GetRPMRange // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x640e1a8
};

