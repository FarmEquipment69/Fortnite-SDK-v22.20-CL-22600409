// WidgetBlueprintGeneratedClass ShowdownEventTileInfo.ShowdownEventTileInfo_C
// Size: 0x868 (Inherited: 0x768)
struct UShowdownEventTileInfo_C : UFortShowdownDetailView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x768(0x08)
	struct UWidgetAnimation* FocusPin; // 0x770(0x08)
	struct UWidgetAnimation* HideSocketShadow_Past; // 0x778(0x08)
	struct UWidgetAnimation* HideSocketShadow; // 0x780(0x08)
	struct UWidgetAnimation* Focus; // 0x788(0x08)
	struct UWidgetAnimation* Focus_Ended; // 0x790(0x08)
	struct UWidgetAnimation* TransitionSize; // 0x798(0x08)
	struct UCommonBorder* CommonBorder_Date; // 0x7a0(0x08)
	struct UCommonBorder* CommonBorder_Score; // 0x7a8(0x08)
	struct UCommonTextBlock* CommonTextBlock_pts; // 0x7b0(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_EventPinState; // 0x7b8(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_TimeFormat; // 0x7c0(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_TimeFormatTitle; // 0x7c8(0x08)
	struct UVerticalBox* Content_Score; // 0x7d0(0x08)
	struct UCommonTextBlock* DateText; // 0x7d8(0x08)
	struct UImage* Image_Lock; // 0x7e0(0x08)
	struct UImage* Image_Socket; // 0x7e8(0x08)
	struct UScaleBox* ScaleBoxPin; // 0x7f0(0x08)
	struct UCommonTextBlock* ScoreValue; // 0x7f8(0x08)
	struct UShowdownPin_C* ShowdownPin; // 0x800(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_EventWindowUnlockState; // 0x808(0x08)
	struct UCommonTextBlock* TimeDescriptionText; // 0x810(0x08)
	struct UCommonTextBlock* TimeDescriptionTextRelative; // 0x818(0x08)
	struct FMulticastInlineDelegate SetEventState; // 0x820(0x10)
	bool isEnded; // 0x830(0x01)
	bool isPin; // 0x831(0x01)
	char pad_832[0x6]; // 0x832(0x06)
	struct FMulticastInlineDelegate SetDisplayInfo; // 0x838(0x10)
	struct UMaterialInstanceDynamic* TextFontMaterial; // 0x848(0x08)
	struct UMaterialInstanceDynamic* PointFontMaterial; // 0x850(0x08)
	struct FMulticastInlineDelegate MultiRoundSession; // 0x858(0x10)

	void RefreshDataBP(); // Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.RefreshDataBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void EventAnimFocus(bool In); // Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.EventAnimFocus // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EventStyleSocket(); // Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.EventStyleSocket // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EventAnimHover(bool In); // Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.EventAnimHover // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void EventColorize(); // Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.EventColorize // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ShowdownEventTileInfo(int32_t EntryPoint); // Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.ExecuteUbergraph_ShowdownEventTileInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void MultiRoundSession__DelegateSignature(); // Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.MultiRoundSession__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetDisplayInfo__DelegateSignature(struct FFortTournamentDisplayInfo DisplayInfo); // Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.SetDisplayInfo__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetEventState__DelegateSignature(enum class EFortShowdownEventState EventState); // Function ShowdownEventTileInfo.ShowdownEventTileInfo_C.SetEventState__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

