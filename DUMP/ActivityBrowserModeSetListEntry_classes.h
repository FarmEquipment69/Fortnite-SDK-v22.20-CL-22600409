// WidgetBlueprintGeneratedClass ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C
// Size: 0x14df (Inherited: 0x1450)
struct UActivityBrowserModeSetListEntry_C : UFortActivityBrowserModeSetListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1450(0x08)
	struct UWidgetAnimation* SetDisabledColoration; // 0x1458(0x08)
	struct UWidgetAnimation* OnHoverUnhoverRehover; // 0x1460(0x08)
	struct UWidgetAnimation* OnImageLoaded; // 0x1468(0x08)
	struct UCategoryButton_C* CategoryButton; // 0x1470(0x08)
	struct UCommonTextBlock* DisabledWarningMessage; // 0x1478(0x08)
	struct UOverlay* Ovr_Primary; // 0x1480(0x08)
	struct UOverlay* OvrDisabledWarning; // 0x1488(0x08)
	struct USizeBox* SizeBox_Primary; // 0x1490(0x08)
	struct UImage* Thumbnail; // 0x1498(0x08)
	struct FName ThumbnailImageParam; // 0x14a0(0x04)
	struct FName ThumbnailAlphaParam; // 0x14a4(0x04)
	bool IsKeyArtValid; // 0x14a8(0x01)
	char pad_14A9[0x7]; // 0x14a9(0x07)
	struct UTexture* DefaultImage; // 0x14b0(0x08)
	double DisabledClickDuration; // 0x14b8(0x08)
	bool IsActivityValid; // 0x14c0(0x01)
	char pad_14C1[0x7]; // 0x14c1(0x07)
	struct FVector2D TileSize; // 0x14c8(0x10)
	struct FName ThumbnailOverlayOpacityParam; // 0x14d8(0x04)
	bool IsInHoveredState; // 0x14dc(0x01)
	bool Pad Left; // 0x14dd(0x01)
	bool Pad Right; // 0x14de(0x01)

	void ResetSetDisabledColorationAnimation(); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.ResetSetDisabledColorationAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void RefreshDisabledState(); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.RefreshDisabledState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnPreviewImageChanged(bool bIsLoading, struct UTexture* Texture); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.OnPreviewImageChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnActivityNameSet(struct FText& ActivityName); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.OnActivityNameSet // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnSavedActivitySet(bool IsSaved); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.OnSavedActivitySet // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void SetHoveredState(bool IsHovered); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.SetHoveredState // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnClicked(); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnPartySizeChanged(int32_t PartySize); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.OnPartySizeChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ActivityBrowserModeSetListEntry(int32_t EntryPoint); // Function ActivityBrowserModeSetListEntry.ActivityBrowserModeSetListEntry_C.ExecuteUbergraph_ActivityBrowserModeSetListEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

