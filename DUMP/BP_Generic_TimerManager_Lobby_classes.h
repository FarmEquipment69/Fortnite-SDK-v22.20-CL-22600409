// BlueprintGeneratedClass BP_Generic_TimerManager_Lobby.BP_Generic_TimerManager_Lobby_C
// Size: 0x2e0 (Inherited: 0x288)
struct ABP_Generic_TimerManager_Lobby_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)
	double TotalSecondsAtEvent; // 0x298(0x08)
	struct FTimespan TimeUntilCountdownEnd; // 0x2a0(0x08)
	struct FString CalendarEventName; // 0x2a8(0x10)
	struct FTimerHandle CountdownTimerHandle; // 0x2b8(0x08)
	double Phase3VisualDuration; // 0x2c0(0x08)
	struct FTimerHandle AccuracyTimer; // 0x2c8(0x08)
	struct FTimespan TimeSinceCountdownBegin; // 0x2d0(0x08)
	double TimespanRatio; // 0x2d8(0x08)

	void OnEventEnded_2CA6194447CC90E72CA40FB1A2CD843E(struct FString EventName, struct FTimespan TimeUntilEnd, struct FTimespan TimeSinceBegin, float TimespanRatio); // Function BP_Generic_TimerManager_Lobby.BP_Generic_TimerManager_Lobby_C.OnEventEnded_2CA6194447CC90E72CA40FB1A2CD843E // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnEventUpdated_2CA6194447CC90E72CA40FB1A2CD843E(struct FString EventName, struct FTimespan TimeUntilEnd, struct FTimespan TimeSinceBegin, float TimespanRatio); // Function BP_Generic_TimerManager_Lobby.BP_Generic_TimerManager_Lobby_C.OnEventUpdated_2CA6194447CC90E72CA40FB1A2CD843E // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnEventActive_2CA6194447CC90E72CA40FB1A2CD843E(struct FString EventName, struct FTimespan TimeUntilEnd, struct FTimespan TimeSinceBegin, float TimespanRatio); // Function BP_Generic_TimerManager_Lobby.BP_Generic_TimerManager_Lobby_C.OnEventActive_2CA6194447CC90E72CA40FB1A2CD843E // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CountdownTimer_New(); // Function BP_Generic_TimerManager_Lobby.BP_Generic_TimerManager_Lobby_C.CountdownTimer_New // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void VisualUpdateEverySecond(); // Function BP_Generic_TimerManager_Lobby.BP_Generic_TimerManager_Lobby_C.VisualUpdateEverySecond // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ContinueClockCountdown(); // Function BP_Generic_TimerManager_Lobby.BP_Generic_TimerManager_Lobby_C.ContinueClockCountdown // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ClearTimerVisuals(); // Function BP_Generic_TimerManager_Lobby.BP_Generic_TimerManager_Lobby_C.ClearTimerVisuals // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CountDownTimer_AccuracyFix(); // Function BP_Generic_TimerManager_Lobby.BP_Generic_TimerManager_Lobby_C.CountDownTimer_AccuracyFix // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function BP_Generic_TimerManager_Lobby.BP_Generic_TimerManager_Lobby_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BP_Generic_TimerManager_Lobby(int32_t EntryPoint); // Function BP_Generic_TimerManager_Lobby.BP_Generic_TimerManager_Lobby_C.ExecuteUbergraph_BP_Generic_TimerManager_Lobby // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

