// Class TimeSynth.TimeSynthVolumeGroup
// Size: 0x30 (Inherited: 0x28)
struct UTimeSynthVolumeGroup : UObject {
	float DefaultVolume; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class TimeSynth.TimeSynthClip
// Size: 0x78 (Inherited: 0x28)
struct UTimeSynthClip : UObject {
	struct TArray<struct FTimeSynthClipSound> Sounds; // 0x28(0x10)
	struct FVector2D VolumeScaleDb; // 0x38(0x10)
	struct FVector2D PitchScaleSemitones; // 0x48(0x10)
	struct FTimeSynthTimeDef FadeInTime; // 0x58(0x08)
	bool bApplyFadeOut; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	struct FTimeSynthTimeDef FadeOutTime; // 0x64(0x08)
	struct FTimeSynthTimeDef ClipDuration; // 0x6c(0x08)
	enum class ETimeSynthEventClipQuantization ClipQuantization; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
};

// Class TimeSynth.TimeSynthComponent
// Size: 0x1210 (Inherited: 0x780)
struct UTimeSynthComponent : USynthComponent {
	struct FTimeSynthQuantizationSettings QuantizationSettings; // 0x780(0x14)
	char bEnableSpectralAnalysis : 1; // 0x794(0x01)
	char pad_794_1 : 7; // 0x794(0x01)
	char pad_795[0x3]; // 0x795(0x03)
	struct TArray<float> FrequenciesToAnalyze; // 0x798(0x10)
	enum class ETimeSynthFFTSize FFTSize; // 0x7a8(0x01)
	char pad_7A9[0x7]; // 0x7a9(0x07)
	struct FMulticastInlineDelegate OnPlaybackTime; // 0x7b0(0x10)
	char bIsFilterAEnabled : 1; // 0x7c0(0x01)
	char bIsFilterBEnabled : 1; // 0x7c0(0x01)
	char pad_7C0_2 : 6; // 0x7c0(0x01)
	char pad_7C1[0x3]; // 0x7c1(0x03)
	struct FTimeSynthFilterSettings FilterASettings; // 0x7c4(0x0c)
	struct FTimeSynthFilterSettings FilterBSettings; // 0x7d0(0x0c)
	char bIsEnvelopeFollowerEnabled : 1; // 0x7dc(0x01)
	char pad_7DC_1 : 7; // 0x7dc(0x01)
	char pad_7DD[0x3]; // 0x7dd(0x03)
	struct FTimeSynthEnvelopeFollowerSettings EnvelopeFollowerSettings; // 0x7e0(0x0c)
	int32_t MaxPoolSize; // 0x7ec(0x04)
	char pad_7F0[0xa20]; // 0x7f0(0xa20)

	void StopSoundsOnVolumeGroupWithFadeOverride(struct UTimeSynthVolumeGroup* InVolumeGroup, enum class ETimeSynthEventClipQuantization EventQuantization, struct FTimeSynthTimeDef& FadeTime); // Function TimeSynth.TimeSynthComponent.StopSoundsOnVolumeGroupWithFadeOverride // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6ffb69c
	void StopSoundsOnVolumeGroup(struct UTimeSynthVolumeGroup* InVolumeGroup, enum class ETimeSynthEventClipQuantization EventQuantization); // Function TimeSynth.TimeSynthComponent.StopSoundsOnVolumeGroup // (Final|Native|Public|BlueprintCallable) // @ game+0x6ffb5d8
	void StopClipWithFadeOverride(struct FTimeSynthClipHandle InClipHandle, enum class ETimeSynthEventClipQuantization EventQuantization, struct FTimeSynthTimeDef& FadeTime); // Function TimeSynth.TimeSynthComponent.StopClipWithFadeOverride // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6ffb4c8
	void StopClip(struct FTimeSynthClipHandle InClipHandle, enum class ETimeSynthEventClipQuantization EventQuantization); // Function TimeSynth.TimeSynthComponent.StopClip // (Final|Native|Public|BlueprintCallable) // @ game+0x6ffb400
	void SetVolumeGroup(struct UTimeSynthVolumeGroup* InVolumeGroup, float VolumeDb, float FadeTimeSec); // Function TimeSynth.TimeSynthComponent.SetVolumeGroup // (Final|Native|Public|BlueprintCallable) // @ game+0x6ffadf4
	void SetSeed(int32_t InSeed); // Function TimeSynth.TimeSynthComponent.SetSeed // (Final|Native|Public|BlueprintCallable) // @ game+0x6ffad70
	void SetQuantizationSettings(struct FTimeSynthQuantizationSettings& InQuantizationSettings); // Function TimeSynth.TimeSynthComponent.SetQuantizationSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6ffacc0
	void SetFilterSettings(enum class ETimeSynthFilter Filter, struct FTimeSynthFilterSettings& InSettings); // Function TimeSynth.TimeSynthComponent.SetFilterSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6ffabe8
	void SetFilterEnabled(enum class ETimeSynthFilter Filter, bool bIsEnabled); // Function TimeSynth.TimeSynthComponent.SetFilterEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x6ffaac0
	void SetFFTSize(enum class ETimeSynthFFTSize InFFTSize); // Function TimeSynth.TimeSynthComponent.SetFFTSize // (Final|Native|Public|BlueprintCallable) // @ game+0x6ffaa40
	void SetEnvelopeFollowerSettings(struct FTimeSynthEnvelopeFollowerSettings& InSettings); // Function TimeSynth.TimeSynthComponent.SetEnvelopeFollowerSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6ffa9ac
	void SetEnvelopeFollowerEnabled(bool bInIsEnabled); // Function TimeSynth.TimeSynthComponent.SetEnvelopeFollowerEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x6ffa8bc
	void SetBPM(float BeatsPerMinute); // Function TimeSynth.TimeSynthComponent.SetBPM // (Final|Native|Public|BlueprintCallable) // @ game+0x6ffa838
	void ResetSeed(); // Function TimeSynth.TimeSynthComponent.ResetSeed // (Final|Native|Public|BlueprintCallable) // @ game+0x6ffa81c
	struct FTimeSynthClipHandle PlayClip(struct UTimeSynthClip* InClip, struct UTimeSynthVolumeGroup* InVolumeGroup); // Function TimeSynth.TimeSynthComponent.PlayClip // (Final|Native|Public|BlueprintCallable) // @ game+0x6ffa750
	bool HasActiveClips(); // Function TimeSynth.TimeSynthComponent.HasActiveClips // (Final|Native|Public|BlueprintCallable) // @ game+0x6ffa72c
	struct TArray<struct FTimeSynthSpectralData> GetSpectralData(); // Function TimeSynth.TimeSynthComponent.GetSpectralData // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6ffa66c
	int32_t GetMaxActiveClipLimit(); // Function TimeSynth.TimeSynthComponent.GetMaxActiveClipLimit // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6ffa654
	float GetEnvelopeFollowerValue(); // Function TimeSynth.TimeSynthComponent.GetEnvelopeFollowerValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6ffa63c
	int32_t GetBPM(); // Function TimeSynth.TimeSynthComponent.GetBPM // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6ffa620
	void AddQuantizationEventDelegate(enum class ETimeSynthEventQuantization QuantizationType, struct FDelegate& OnQuantizationEvent); // Function TimeSynth.TimeSynthComponent.AddQuantizationEventDelegate // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6ffa534
};

