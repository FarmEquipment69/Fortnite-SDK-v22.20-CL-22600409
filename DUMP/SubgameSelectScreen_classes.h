// WidgetBlueprintGeneratedClass SubgameSelectScreen.SubgameSelectScreen_C
// Size: 0x4b4 (Inherited: 0x480)
struct USubgameSelectScreen_C : UFortSubgameSelectScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x480(0x08)
	struct UOverlay* ModeSelect; // 0x488(0x08)
	struct UProgressModalWidget_C* LeavingMatchmakingDialog; // 0x490(0x08)
	struct UMaterialInstanceDynamic* MID-Keyart; // 0x498(0x08)
	struct TArray<struct UTexture*> TextureCycle; // 0x4a0(0x10)
	int32_t TextureCycleIndex; // 0x4b0(0x04)

	void IsMinorShutdownWarningEnabled(bool& Enabled); // Function SubgameSelectScreen.SubgameSelectScreen_C.IsMinorShutdownWarningEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	bool IsBusyMatchmaking(); // Function SubgameSelectScreen.SubgameSelectScreen_C.IsBusyMatchmaking // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void AdvanceTextureCycle(); // Function SubgameSelectScreen.SubgameSelectScreen_C.AdvanceTextureCycle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void InitializeTextureCycle(); // Function SubgameSelectScreen.SubgameSelectScreen_C.InitializeTextureCycle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnEventEnded_57187EC14A536D0960088EB25BDF39E5(struct FString EventName, struct FTimespan TimeUntilEnd, struct FTimespan TimeSinceBegin, float TimespanRatio); // Function SubgameSelectScreen.SubgameSelectScreen_C.OnEventEnded_57187EC14A536D0960088EB25BDF39E5 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnEventUpdated_57187EC14A536D0960088EB25BDF39E5(struct FString EventName, struct FTimespan TimeUntilEnd, struct FTimespan TimeSinceBegin, float TimespanRatio); // Function SubgameSelectScreen.SubgameSelectScreen_C.OnEventUpdated_57187EC14A536D0960088EB25BDF39E5 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnEventActive_57187EC14A536D0960088EB25BDF39E5(struct FString EventName, struct FTimespan TimeUntilEnd, struct FTimespan TimeSinceBegin, float TimespanRatio); // Function SubgameSelectScreen.SubgameSelectScreen_C.OnEventActive_57187EC14A536D0960088EB25BDF39E5 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnActivated(); // Function SubgameSelectScreen.SubgameSelectScreen_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SubgameSelectScreen(int32_t EntryPoint); // Function SubgameSelectScreen.SubgameSelectScreen_C.ExecuteUbergraph_SubgameSelectScreen // (Final|UbergraphFunction) // @ game+0xd67374
};

