// WidgetBlueprintGeneratedClass PurchaseNavButton.PurchaseNavButton_C
// Size: 0x1552 (Inherited: 0x1430)
struct UPurchaseNavButton_C : UCommonButtonBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1430(0x08)
	struct UWidgetAnimation* Normal; // 0x1438(0x08)
	struct UWidgetAnimation* PeriodAlert; // 0x1440(0x08)
	struct UWidgetAnimation* Hover; // 0x1448(0x08)
	struct UBorder* BorderSwapDirection; // 0x1450(0x08)
	struct UImage* Image_AlertIcon; // 0x1458(0x08)
	struct UImage* Image_arcs; // 0x1460(0x08)
	struct UImage* Image_Arcs2; // 0x1468(0x08)
	struct UImage* Image_Arcs3; // 0x1470(0x08)
	struct UImage* Image_Arcs4; // 0x1478(0x08)
	struct UImage* Image_Arrow; // 0x1480(0x08)
	struct UImage* Image_BG; // 0x1488(0x08)
	struct UImage* Image_HazardGlow; // 0x1490(0x08)
	struct UImage* Image_IconGlow; // 0x1498(0x08)
	struct UImage* Image_Lightning1; // 0x14a0(0x08)
	struct UImage* Image_Sharplines; // 0x14a8(0x08)
	struct UImage* Image_Spinner; // 0x14b0(0x08)
	struct UOverlay* Overlay_IconEffects; // 0x14b8(0x08)
	struct UOverlay* Overlay_Lightning; // 0x14c0(0x08)
	struct USafeZone* ; // 0x14c8(0x08)
	struct UImage* Shadow; // 0x14d0(0x08)
	struct UCommonTextBlock* ; // 0x14d8(0x08)
	struct UCommonTextBlock* ; // 0x14e0(0x08)
	bool FlipArrow; // 0x14e8(0x01)
	char pad_14E9[0x7]; // 0x14e9(0x07)
	struct FMulticastInlineDelegate DispatchClicked; // 0x14f0(0x10)
	struct FText ButtonText; // 0x1500(0x18)
	struct FTimerHandle PeriodicAnim; // 0x1518(0x08)
	struct FDataTableRowHandle BackupInputAction; // 0x1520(0x10)
	bool toBP; // 0x1530(0x01)
	char pad_1531[0x7]; // 0x1531(0x07)
	struct USoundBase* Unhovered Sound; // 0x1538(0x08)
	struct USoundBase* Hovered Sound; // 0x1540(0x08)
	struct USoundBase* Selected Sound; // 0x1548(0x08)
	bool Pad Left; // 0x1550(0x01)
	bool Pad Right; // 0x1551(0x01)

	void UpdateTextSize(); // Function PurchaseNavButton.PurchaseNavButton_C.UpdateTextSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ResetHoverAnimation(); // Function PurchaseNavButton.PurchaseNavButton_C.ResetHoverAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function PurchaseNavButton.PurchaseNavButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function PurchaseNavButton.PurchaseNavButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnSelected(); // Function PurchaseNavButton.PurchaseNavButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void PlayPeriodicAnim(); // Function PurchaseNavButton.PurchaseNavButton_C.PlayPeriodicAnim // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EventSetupPeriodicTimer(); // Function PurchaseNavButton.PurchaseNavButton_C.EventSetupPeriodicTimer // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function PurchaseNavButton.PurchaseNavButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function PurchaseNavButton.PurchaseNavButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_PurchaseNavButton(int32_t EntryPoint); // Function PurchaseNavButton.PurchaseNavButton_C.ExecuteUbergraph_PurchaseNavButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void DispatchClicked__DelegateSignature(); // Function PurchaseNavButton.PurchaseNavButton_C.DispatchClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

