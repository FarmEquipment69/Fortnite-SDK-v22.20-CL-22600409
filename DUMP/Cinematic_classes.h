// WidgetBlueprintGeneratedClass Cinematic.Cinematic_C
// Size: 0x5f1 (Inherited: 0x598)
struct UCinematic_C : UFortUIStateWidget_NUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x598(0x08)
	struct UNamedSlot* LocalizedAudioOnlyMovieSlot; // 0x5a0(0x08)
	struct UCommonWidgetStackLegacy* MainContentStack; // 0x5a8(0x08)
	struct UNamedSlot* MovieSlot; // 0x5b0(0x08)
	struct UOverlay* OverlayMovieOverlay; // 0x5b8(0x08)
	struct USubtitles_C* Subtitles; // 0x5c0(0x08)
	struct UTeamMicStack_C* TeamMicStack; // 0x5c8(0x08)
	struct UBuildWatermark_C* Widget_BuildWatermark; // 0x5d0(0x08)
	struct ULegacy_MovieWidget_C* MovieWidget; // 0x5d8(0x08)
	struct UFortMediaSubtitlesPlayer* SubtitlesPlayer; // 0x5e0(0x08)
	struct UObject* CinematicMediaSoundWave; // 0x5e8(0x08)
	bool bFinished; // 0x5f0(0x01)

	void GetAudioTrackIndex(int32_t& AudioTrack); // Function Cinematic.Cinematic_C.GetAudioTrackIndex // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void StopAndClearSubtitles(); // Function Cinematic.Cinematic_C.StopAndClearSubtitles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ClearOldSubtitlesIfNecessary(bool NewSubtitlesExist, struct UFortMediaSubtitlesPlayer* NewSubtitles); // Function Cinematic.Cinematic_C.ClearOldSubtitlesIfNecessary // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetMoviePlaying(bool MoviePlaying); // Function Cinematic.Cinematic_C.SetMoviePlaying // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ClearMovieWidget(struct UFortMovieWidget*& MovieWidgetToClear); // Function Cinematic.Cinematic_C.ClearMovieWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ClearMovieSlot(); // Function Cinematic.Cinematic_C.ClearMovieSlot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	struct UWidget* PopContentWidgetInternal(struct FContentPushState State); // Function Cinematic.Cinematic_C.PopContentWidgetInternal // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SkipMovie(); // Function Cinematic.Cinematic_C.SkipMovie // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ClearMovie(); // Function Cinematic.Cinematic_C.ClearMovie // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Show Movie(struct UMediaPlayer* MediaPlayer, struct UMediaSource* MediaSource); // Function Cinematic.Cinematic_C.Show Movie // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function Cinematic.Cinematic_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void HandleClientEvent_QueueCinematic(struct UObject* EventSource, struct UObject* EventFocus, struct FFortClientEvent& ClientEvent); // Function Cinematic.Cinematic_C.HandleClientEvent_QueueCinematic // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Destruct(); // Function Cinematic.Cinematic_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void HandleEndReached(); // Function Cinematic.Cinematic_C.HandleEndReached // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleClientEvent_SkipCinematic(struct UObject* EventSource, struct UObject* EventFocus, struct FFortClientEvent& ClientEvent); // Function Cinematic.Cinematic_C.HandleClientEvent_SkipCinematic // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PushContentWidgetInternal(struct UWidget* Widget, struct FContentPushState State); // Function Cinematic.Cinematic_C.PushContentWidgetInternal // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnEnterState(enum class EFortUIState PreviousUIState); // Function Cinematic.Cinematic_C.OnEnterState // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnExitState(enum class EFortUIState NextUIState); // Function Cinematic.Cinematic_C.OnExitState // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_Cinematic(int32_t EntryPoint); // Function Cinematic.Cinematic_C.ExecuteUbergraph_Cinematic // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

