// BlueprintGeneratedClass Announce_EventCine.Announce_EventCine_C
// Size: 0x330 (Inherited: 0x308)
struct AAnnounce_EventCine_C : AFortClientAnnouncement_Cinematic {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x310(0x08)
	struct UMediaSource* EventMediaSource; // 0x318(0x08)
	bool AllowSkipping; // 0x320(0x01)
	char pad_321[0x7]; // 0x321(0x07)
	struct UFortMediaSubtitlesPlayer* EventSubtitlesPlayer; // 0x328(0x08)

	void OnClientAnnouncementStop(); // Function Announce_EventCine.Announce_EventCine_C.OnClientAnnouncementStop // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnPlayerSkippedCutscene(); // Function Announce_EventCine.Announce_EventCine_C.OnPlayerSkippedCutscene // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void HandleClientEvent_CinematicFinishedPlaying(struct UObject* EventSource, struct UObject* EventFocus, struct FFortClientEvent& ClientEvent); // Function Announce_EventCine.Announce_EventCine_C.HandleClientEvent_CinematicFinishedPlaying // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleAllowSkip(); // Function Announce_EventCine.Announce_EventCine_C.HandleAllowSkip // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnEnteredCinematicState(); // Function Announce_EventCine.Announce_EventCine_C.OnEnteredCinematicState // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_Announce_EventCine(int32_t EntryPoint); // Function Announce_EventCine.Announce_EventCine_C.ExecuteUbergraph_Announce_EventCine // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

