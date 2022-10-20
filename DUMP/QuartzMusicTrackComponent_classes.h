// BlueprintGeneratedClass QuartzMusicTrackComponent.QuartzMusicTrackComponent_C
// Size: 0x17c (Inherited: 0xa0)
struct UQuartzMusicTrackComponent_C : UGameFrameworkComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa0(0x08)
	struct USoundCue* TrackSoundCue; // 0xa8(0x08)
	struct UMetaSoundSource* TrackMetaSound; // 0xb0(0x08)
	double TrackPriority; // 0xb8(0x08)
	struct UQuartzClockHandle* ClockInst; // 0xc0(0x08)
	struct FName ClockName; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	double ClockBPM; // 0xd0(0x08)
	struct FQuartzClockSettings ClockSettings; // 0xd8(0x20)
	struct ABP_QuartzMusicController_C* ControllerActor; // 0xf8(0x08)
	struct FQuartzQuantizationBoundary ClockQuantizationBoundary; // 0x100(0x20)
	bool bDebugEnabled; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
	struct UAudioComponent* AudioComponent; // 0x128(0x08)
	bool bQueueStop; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	double TrackFadeInTime; // 0x138(0x08)
	double TrackFadeOutTime; // 0x140(0x08)
	struct TArray<struct FName> TrackParameters; // 0x148(0x10)
	struct FGameplayTagContainer TrackDisableTags; // 0x158(0x20)
	struct FGameplayTag MusicEventTag; // 0x178(0x04)

	void GetTrackSound(struct USoundBase*& sound); // Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.GetTrackSound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void GetClockHandle(struct UQuartzClockHandle*& Clock Handle); // Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.GetClockHandle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void SetTrackParameter(int32_t ParameterIndex, double InFloat); // Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.SetTrackParameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetAudioComponent(struct UAudioComponent*& AudioComponent); // Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.GetAudioComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	enum class EAudioComponentPlayState GetPlayState(); // Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.GetPlayState // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void GetIsPlaying(bool& Is Playing); // Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.GetIsPlaying // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void OnQuartzQuantizationEvent(struct FName ClockName, enum class EQuartzCommandQuantization QuantizationType, int32_t NumBars, int32_t Beat, float BeatFraction); // Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.OnQuartzQuantizationEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnQuartzClockDelegate(enum class EQuartzCommandDelegateSubType EventType, struct FName Name); // Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.OnQuartzClockDelegate // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void QueueTrackStop(); // Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.QueueTrackStop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void QueueTrackStart(); // Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.QueueTrackStart // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetTrackPriority(double& Priority); // Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.GetTrackPriority // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void SetDebugEnabled(bool Debug); // Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.SetDebugEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void SetStemVolume(int32_t Index, double Value); // Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.SetStemVolume // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_QuartzMusicTrackComponent(int32_t EntryPoint); // Function QuartzMusicTrackComponent.QuartzMusicTrackComponent_C.ExecuteUbergraph_QuartzMusicTrackComponent // (Final|UbergraphFunction) // @ game+0xd67374
};

