// Class PapayaTimedEvents.PapayaTimedEvents
// Size: 0x460 (Inherited: 0x288)
struct APapayaTimedEvents : AActor {
	struct TMap<struct FString, struct UMediaPlayer*> MediaPlayerMap; // 0x288(0x50)
	struct UPapayaTimedEventsResponderComponent* MeshEventResponder; // 0x2d8(0x08)
	struct TArray<struct AActor*> TimedEventActorTargets; // 0x2e0(0x10)
	char pad_2F0[0x8]; // 0x2f0(0x08)
	struct FMediaTimeEventArray TimedEventsArray; // 0x2f8(0x118)
	char pad_410[0x18]; // 0x410(0x18)
	struct FString ScreenName; // 0x428(0x10)
	char pad_438[0x28]; // 0x438(0x28)

	void ShutdownTimedEvents_Native(); // Function PapayaTimedEvents.PapayaTimedEvents.ShutdownTimedEvents_Native // (Final|Native|Public|BlueprintCallable) // @ game+0x68968ac
	void SetupTimedEvents_Native(struct FString ScreenName); // Function PapayaTimedEvents.PapayaTimedEvents.SetupTimedEvents_Native // (Final|Native|Public|BlueprintCallable) // @ game+0x6896758
	void ResetTimedEvents_Native(); // Function PapayaTimedEvents.PapayaTimedEvents.ResetTimedEvents_Native // (Final|Native|Public|BlueprintCallable) // @ game+0x6896744
	void OnRep_TimedEventsArray(struct FMediaTimeEventArray& PreviousValue); // Function PapayaTimedEvents.PapayaTimedEvents.OnRep_TimedEventsArray // (Final|Native|Private|HasOutParms) // @ game+0x6896640
	void OnRep_ScreenName(struct FString PreviousValue); // Function PapayaTimedEvents.PapayaTimedEvents.OnRep_ScreenName // (Final|Native|Private) // @ game+0x6896488
	void AddTimedEvent_Native(struct FString EventName, int64_t Time, struct FString EventParam); // Function PapayaTimedEvents.PapayaTimedEvents.AddTimedEvent_Native // (Final|Native|Public|BlueprintCallable) // @ game+0x68961e8
};

// Class PapayaTimedEvents.PapayaTimedEventsResponderComponent
// Size: 0x160 (Inherited: 0xe8)
struct UPapayaTimedEventsResponderComponent : UFortEventResponderComponent {
	char pad_E8[0x78]; // 0xe8(0x78)
};

