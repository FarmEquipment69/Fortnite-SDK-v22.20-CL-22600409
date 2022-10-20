// WidgetBlueprintGeneratedClass ActivityBrowserLobbyTileButton.ActivityBrowserLobbyTileButton_C
// Size: 0x1588 (Inherited: 0x14f0)
struct UActivityBrowserLobbyTileButton_C : UFortActivityLobbyTile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14f0(0x08)
	struct UWidgetAnimation* SelectedMatchmaking; // 0x14f8(0x08)
	struct UWidgetAnimation* Hover; // 0x1500(0x08)
	struct UHorizontalBox* ButtonPromptHB; // 0x1508(0x08)
	struct UImage* Image_KeyArt; // 0x1510(0x08)
	struct UBorder* Panel_ChangeMode; // 0x1518(0x08)
	struct UScaleBox* ; // 0x1520(0x08)
	struct UCommonTextBlock* Text_ChangeModeLabel; // 0x1528(0x08)
	struct USizeBox* TileSize; // 0x1530(0x08)
	bool IsDisabled; // 0x1538(0x01)
	char pad_1539[0x3]; // 0x1539(0x03)
	struct FName KeyArtParameter; // 0x153c(0x04)
	struct FName MissingArtParameter; // 0x1540(0x04)
	char pad_1544[0x4]; // 0x1544(0x04)
	struct FMulticastInlineDelegate OnActivityChanged; // 0x1548(0x10)
	struct FMulticastInlineDelegate OnShowChildModeChangedNotification; // 0x1558(0x10)
	struct FMulticastInlineDelegate OnShowChildModeFirstTimeNotification; // 0x1568(0x10)
	struct FMulticastInlineDelegate OnHideChildModeFirstTimeNotification; // 0x1578(0x10)

	void OnUnSelectedMatchmakingCanceled(); // Function ActivityBrowserLobbyTileButton.ActivityBrowserLobbyTileButton_C.OnUnSelectedMatchmakingCanceled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Finished_839C1612477AFCFDCF8BB89840A6FFE3(); // Function ActivityBrowserLobbyTileButton.ActivityBrowserLobbyTileButton_C.Finished_839C1612477AFCFDCF8BB89840A6FFE3 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function ActivityBrowserLobbyTileButton.ActivityBrowserLobbyTileButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function ActivityBrowserLobbyTileButton.ActivityBrowserLobbyTileButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnPreviewImageChanged(bool bIsLoading, struct UTexture* Texture); // Function ActivityBrowserLobbyTileButton.ActivityBrowserLobbyTileButton_C.OnPreviewImageChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnSelectedMatchmaking(); // Function ActivityBrowserLobbyTileButton.ActivityBrowserLobbyTileButton_C.OnSelectedMatchmaking // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnDetailsUpdated(); // Function ActivityBrowserLobbyTileButton.ActivityBrowserLobbyTileButton_C.OnDetailsUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnShowChildActivityChangedNotification(struct FText& DisplayName); // Function ActivityBrowserLobbyTileButton.ActivityBrowserLobbyTileButton_C.OnShowChildActivityChangedNotification // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnShowChildActivityFirstTimeNotification(); // Function ActivityBrowserLobbyTileButton.ActivityBrowserLobbyTileButton_C.OnShowChildActivityFirstTimeNotification // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnHideChildActivityFirstTimeNotification(); // Function ActivityBrowserLobbyTileButton.ActivityBrowserLobbyTileButton_C.OnHideChildActivityFirstTimeNotification // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function ActivityBrowserLobbyTileButton.ActivityBrowserLobbyTileButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ActivityBrowserLobbyTileButton(int32_t EntryPoint); // Function ActivityBrowserLobbyTileButton.ActivityBrowserLobbyTileButton_C.ExecuteUbergraph_ActivityBrowserLobbyTileButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void OnHideChildModeFirstTimeNotification__DelegateSignature(); // Function ActivityBrowserLobbyTileButton.ActivityBrowserLobbyTileButton_C.OnHideChildModeFirstTimeNotification__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnShowChildModeFirstTimeNotification__DelegateSignature(); // Function ActivityBrowserLobbyTileButton.ActivityBrowserLobbyTileButton_C.OnShowChildModeFirstTimeNotification__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnShowChildModeChangedNotification__DelegateSignature(struct FText DisplayName); // Function ActivityBrowserLobbyTileButton.ActivityBrowserLobbyTileButton_C.OnShowChildModeChangedNotification__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnActivityChanged__DelegateSignature(); // Function ActivityBrowserLobbyTileButton.ActivityBrowserLobbyTileButton_C.OnActivityChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

