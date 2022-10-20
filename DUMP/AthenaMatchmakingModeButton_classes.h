// WidgetBlueprintGeneratedClass AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C
// Size: 0x14e0 (Inherited: 0x1480)
struct UAthenaMatchmakingModeButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1480(0x08)
	struct UWidgetAnimation* OnHover; // 0x1488(0x08)
	struct UWidgetAnimation* ConfirmSelection; // 0x1490(0x08)
	struct UImage* ConfirmSelectionFlash; // 0x1498(0x08)
	struct UImage* ConfirmSelectionShine; // 0x14a0(0x08)
	struct UImage* GameModeIcon; // 0x14a8(0x08)
	struct UCommonTextBlock* GameModeName; // 0x14b0(0x08)
	struct UImage* LTMModeSubIcon; // 0x14b8(0x08)
	struct UCommonTextBlock* SubGameModeName; // 0x14c0(0x08)
	struct UHorizontalBox* SubGameModeNameHB; // 0x14c8(0x08)
	bool FillSquad; // 0x14d0(0x01)
	char pad_14D1[0x7]; // 0x14d1(0x07)
	struct UFortPlaylistAthena* PlaylistData; // 0x14d8(0x08)

	void RefreshLimitedPoolWarning(bool IsCrossplayEnabled); // Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.RefreshLimitedPoolWarning // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void RefreshFillText(); // Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.RefreshFillText // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetSquadFillText(bool bFill); // Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.SetSquadFillText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlaylistChanged(struct UFortPlaylistAthena* NewPlaylist, struct FText OverrideName); // Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.PlaylistChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo); // Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.SetTabLabelInfo // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_AthenaMatchmakingModeButton(int32_t EntryPoint); // Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.ExecuteUbergraph_AthenaMatchmakingModeButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

