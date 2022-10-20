// Class AudioAnalyzer.AudioAnalyzerAssetBase
// Size: 0x28 (Inherited: 0x28)
struct UAudioAnalyzerAssetBase : UObject {
};

// Class AudioAnalyzer.AudioAnalyzerSettings
// Size: 0x28 (Inherited: 0x28)
struct UAudioAnalyzerSettings : UAudioAnalyzerAssetBase {
};

// Class AudioAnalyzer.AudioAnalyzerNRTSettings
// Size: 0x28 (Inherited: 0x28)
struct UAudioAnalyzerNRTSettings : UAudioAnalyzerAssetBase {
};

// Class AudioAnalyzer.AudioAnalyzerNRT
// Size: 0x78 (Inherited: 0x28)
struct UAudioAnalyzerNRT : UAudioAnalyzerAssetBase {
	struct USoundWave* sound; // 0x28(0x08)
	float DurationInSeconds; // 0x30(0x04)
	char pad_34[0x44]; // 0x34(0x44)
};

// Class AudioAnalyzer.AudioAnalyzer
// Size: 0x90 (Inherited: 0x28)
struct UAudioAnalyzer : UObject {
	struct UAudioBus* AudioBus; // 0x28(0x08)
	char pad_30[0x8]; // 0x30(0x08)
	struct UAudioAnalyzerSubsystem* AudioAnalyzerSubsystem; // 0x38(0x08)
	char pad_40[0x50]; // 0x40(0x50)

	void StopAnalyzing(struct UObject* WorldContextObject); // Function AudioAnalyzer.AudioAnalyzer.StopAnalyzing // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0xa1ab10c
	void StartAnalyzing(struct UObject* WorldContextObject, struct UAudioBus* AudioBusToAnalyze); // Function AudioAnalyzer.AudioAnalyzer.StartAnalyzing // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0xa1aae30
};

// Class AudioAnalyzer.AudioAnalyzerSubsystem
// Size: 0x50 (Inherited: 0x30)
struct UAudioAnalyzerSubsystem : UEngineSubsystem {
	struct TArray<struct UAudioAnalyzer*> AudioAnalyzers; // 0x30(0x10)
	char pad_40[0x10]; // 0x40(0x10)
};

