// BlueprintGeneratedClass BP_TimeSynthController_Base.BP_TimeSynthController_Base_C
// Size: 0x2f1 (Inherited: 0x288)
struct ABP_TimeSynthController_Base_C : AFortTimeSynthController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UTimeSynthComponent* TimeSynth; // 0x290(0x08)
	struct UBP_TimeSynthTrackComponent_C* CurrentTrack; // 0x298(0x08)
	int32_t TransitionBeats; // 0x2a0(0x04)
	bool TransitionActive; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	struct UBP_TimeSynthTrackComponent_C* QueuedTransitionTrack; // 0x2a8(0x08)
	struct TArray<struct UTimeSynthVolumeGroup*> VolumeGroups; // 0x2b0(0x10)
	struct TArray<struct FTimeSynthClipHandle> QueuedTransitions; // 0x2c0(0x10)
	struct TArray<struct UBP_TimeSynthTrackComponent_C*> QueuedTracks; // 0x2d0(0x10)
	bool IsPlaying; // 0x2e0(0x01)
	bool Debug; // 0x2e1(0x01)
	char pad_2E2[0x6]; // 0x2e2(0x06)
	struct UFortGameplayDataTrackerComponentManager* DataTrackerManager; // 0x2e8(0x08)
	bool IsStoppedPermenant; // 0x2f0(0x01)

	void OnTimeSynthTrackComponentRegistered(struct UBP_TimeSynthTrackComponent_C*& Track); // Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.OnTimeSynthTrackComponentRegistered // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetTimeSynthComponent(struct UTimeSynthComponent*& TimeSynth); // Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.GetTimeSynthComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void RegisterTrackComponents(); // Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.RegisterTrackComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetIsPlaying(bool& IsPlaying); // Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.GetIsPlaying // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void CalculateMaxClipDuration(struct UBP_TimeSynthTrackComponent_C* Track, int32_t& Duration); // Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.CalculateMaxClipDuration // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void QueueTrackStartInternal(struct UBP_TimeSynthTrackComponent_C* NewTrack); // Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.QueueTrackStartInternal // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnQuantizationBar(enum class ETimeSynthEventQuantization QuantizationType, int32_t NumBars, float Beat); // Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.OnQuantizationBar // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void FlushExtraClips(bool Exclude Current); // Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.FlushExtraClips // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnQuantizationBeat(enum class ETimeSynthEventQuantization QuantizationType, int32_t NumBars, float Beat); // Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.OnQuantizationBeat // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlayTransition(struct FTimeSynth_TransitionData Transition Data, struct UBP_TimeSynthTrackComponent_C* Queued Track); // Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.PlayTransition // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void StopAllMusic(bool Play Outro); // Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.StopAllMusic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ChangeTrack(struct UBP_TimeSynthTrackComponent_C* New Track); // Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.ChangeTrack // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void RequestTrackChange(struct UBP_TimeSynthTrackComponent_C* TrackRequesting, bool& CanChangeTrack); // Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.RequestTrackChange // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void SetVolumeGroup(int32_t Index, double Volume Multiplier); // Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.SetVolumeGroup // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BP_TimeSynthController_Base(int32_t EntryPoint); // Function BP_TimeSynthController_Base.BP_TimeSynthController_Base_C.ExecuteUbergraph_BP_TimeSynthController_Base // (Final|UbergraphFunction) // @ game+0xd67374
};

