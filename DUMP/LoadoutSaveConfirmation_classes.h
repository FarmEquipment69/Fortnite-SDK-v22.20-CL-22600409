// WidgetBlueprintGeneratedClass LoadoutSaveConfirmation.LoadoutSaveConfirmation_C
// Size: 0x628 (Inherited: 0x5b8)
struct ULoadoutSaveConfirmation_C : UFortLoadoutSaveConfirmation {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5b8(0x08)
	struct UImage* ; // 0x5c0(0x08)
	struct UImage* Image_Separator_Down; // 0x5c8(0x08)
	struct UImage* Image_Separator_Up; // 0x5d0(0x08)
	struct ULightbox_C* Lightbox; // 0x5d8(0x08)
	struct USafeZone* ; // 0x5e0(0x08)
	struct UWidgetSwitcher* SwitcherExplanation; // 0x5e8(0x08)
	struct UWidgetSwitcher* SwitcherTitle; // 0x5f0(0x08)
	struct UCommonTextBlock* TextBlockCREATE; // 0x5f8(0x08)
	struct UCommonRichTextBlock* TextBlockExplanation; // 0x600(0x08)
	struct UCommonRichTextBlock* TextBlockExplanation_SaveOnly; // 0x608(0x08)
	struct UCommonTextBlock* TextBlockOR; // 0x610(0x08)
	struct UCommonTextBlock* TextBlockTitle; // 0x618(0x08)
	struct UCommonTextBlock* TextBlockTitle_SaveOnly; // 0x620(0x08)

	void Toggle Save as New Visibility(bool CanSaveAsNew); // Function LoadoutSaveConfirmation.LoadoutSaveConfirmation_C.Toggle Save as New Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnCanSaveAsNew(bool bCanSaveAsNew); // Function LoadoutSaveConfirmation.LoadoutSaveConfirmation_C.OnCanSaveAsNew // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_LoadoutSaveConfirmation(int32_t EntryPoint); // Function LoadoutSaveConfirmation.LoadoutSaveConfirmation_C.ExecuteUbergraph_LoadoutSaveConfirmation // (Final|UbergraphFunction) // @ game+0xd67374
};

