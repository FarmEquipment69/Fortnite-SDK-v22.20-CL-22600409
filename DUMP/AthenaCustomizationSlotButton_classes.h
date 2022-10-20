// WidgetBlueprintGeneratedClass AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C
// Size: 0x16e0 (Inherited: 0x1550)
struct UAthenaCustomizationSlotButton_C : UAthenaCustomizationSlotSelectorButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1550(0x08)
	struct UWidgetAnimation* WarningPulse; // 0x1558(0x08)
	struct UWidgetAnimation* OnBackedOutFromSelection; // 0x1560(0x08)
	struct UWidgetAnimation* OnConfirmedSelection; // 0x1568(0x08)
	struct UWidgetAnimation* OnSelected; // 0x1570(0x08)
	struct UWidgetAnimation* OnHover; // 0x1578(0x08)
	struct UImage* ConfirmSelectionFlash; // 0x1580(0x08)
	struct UImage* ConfirmSelectionShine; // 0x1588(0x08)
	struct UImage* ExclusiveFill; // 0x1590(0x08)
	struct UOverlay* ExclusiveWarningOvr; // 0x1598(0x08)
	struct UFortLazyImage* Image_Archived; // 0x15a0(0x08)
	struct UFortLazyImage* Image_empty; // 0x15a8(0x08)
	struct UImage* InactiveFilledSlot; // 0x15b0(0x08)
	struct UCommonTextBlock* Text_Plus; // 0x15b8(0x08)
	struct FText TooltipBody; // 0x15c0(0x18)
	struct FText TooltipHeader; // 0x15d8(0x18)
	bool ShowSubTypeIcon; // 0x15f0(0x01)
	char pad_15F1[0xf]; // 0x15f1(0x0f)
	struct FSlateBrush SubTypeIcon; // 0x1600(0xc0)
	bool bSuppressTooltip; // 0x16c0(0x01)
	char pad_16C1[0x7]; // 0x16c1(0x07)
	double TypeIconVerticalOffset; // 0x16c8(0x08)
	struct UMaterialInstanceDynamic* ImageEmptyMID; // 0x16d0(0x08)
	double WidthThreshold; // 0x16d8(0x08)

	void HandleWidthChanged(double Width); // Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.HandleWidthChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	struct FString GetSlotDebugName(); // Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.GetSlotDebugName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void HandleActiveStateChanged(bool CosmeticAvailable, bool Active); // Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.HandleActiveStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnCustomizationSlotActiveStateChanged(bool bInAttachableCosmeticAvailable, bool bInActive); // Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.OnCustomizationSlotActiveStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnCardImageAndWidthChanged(struct TSoftObjectPtr<UTexture2D>& Image, float Width); // Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.OnCardImageAndWidthChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnUpdateExclusiveWarning(bool bShouldWarn); // Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.OnUpdateExclusiveWarning // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnArchivedStatusUpdated(bool bArchived); // Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.OnArchivedStatusUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_AthenaCustomizationSlotButton(int32_t EntryPoint); // Function AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C.ExecuteUbergraph_AthenaCustomizationSlotButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

