// WidgetBlueprintGeneratedClass PlayerVisited.PlayerVisited_C
// Size: 0x3d8 (Inherited: 0x380)
struct UPlayerVisited_C : UAthenaVisitedAreaDisplay {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x08)
	struct UWidgetAnimation* BriefShow; // 0x388(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_landmarkorPOI; // 0x390(0x08)
	struct UVerticalBox* MainBox; // 0x398(0x08)
	struct UCommonTextBlock* MainLocationText; // 0x3a0(0x08)
	struct FTimerHandle BriefShowFallbackTimerHandle; // 0x3a8(0x08)
	struct FText LastLocationVisited; // 0x3b0(0x18)
	double TimeLastLocationVisited; // 0x3c8(0x08)
	double LocationVisitedCooldown; // 0x3d0(0x08)

	void EndOfShow(); // Function PlayerVisited.PlayerVisited_C.EndOfShow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnNewVisited(struct FText& LocalizedLocationName, bool bIsNamedLocation); // Function PlayerVisited.PlayerVisited_C.OnNewVisited // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function PlayerVisited.PlayerVisited_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Brief Show Finished(); // Function PlayerVisited.PlayerVisited_C.Brief Show Finished // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnStompFailed(); // Function PlayerVisited.PlayerVisited_C.OnStompFailed // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnStompedByOtherWidget(); // Function PlayerVisited.PlayerVisited_C.OnStompedByOtherWidget // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnAnimBackupTimerFinished(); // Function PlayerVisited.PlayerVisited_C.OnAnimBackupTimerFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_OnBecomeActive(); // Function PlayerVisited.PlayerVisited_C.K2_OnBecomeActive // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_PlayerVisited(int32_t EntryPoint); // Function PlayerVisited.PlayerVisited_C.ExecuteUbergraph_PlayerVisited // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

