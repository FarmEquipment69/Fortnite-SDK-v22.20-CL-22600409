// WidgetBlueprintGeneratedClass BacchusLockerTab.BacchusLockerTab_C
// Size: 0xfc8 (Inherited: 0xdf8)
struct UBacchusLockerTab_C : UAthenaCustomizationScreenBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xdf8(0x08)
	struct UWidgetAnimation* ; // 0xe00(0x08)
	struct UWidgetAnimation* LoopingRandomEnabled; // 0xe08(0x08)
	struct UWidgetAnimation* ; // 0xe10(0x08)
	struct UWidgetAnimation* ; // 0xe18(0x08)
	struct UWidgetAnimation* PresetAppliedToast; // 0xe20(0x08)
	struct UWidgetAnimation* RandomDisabledDisclaimer; // 0xe28(0x08)
	struct UWidgetAnimation* RandomEnabledDisclaimer; // 0xe30(0x08)
	struct UWidgetAnimation* ItemInfoIntroOutro; // 0xe38(0x08)
	struct UAthenaCustomizationSlotButton_C* BackpackButton; // 0xe40(0x08)
	struct USoloButton_C* Button_ChangeName; // 0xe48(0x08)
	struct UAthenaCustomizationSlotButton_C* CharacterButton; // 0xe50(0x08)
	struct ULoadoutSaveConfirmation_C* Confirmation_Save; // 0xe58(0x08)
	struct UAthenaCustomizationSlotButton_C* DanceButton1; // 0xe60(0x08)
	struct UAthenaCustomizationSlotButton_C* DanceButton2; // 0xe68(0x08)
	struct UAthenaCustomizationSlotButton_C* DanceButton3; // 0xe70(0x08)
	struct UAthenaCustomizationSlotButton_C* DanceButton4; // 0xe78(0x08)
	struct UAthenaCustomizationSlotButton_C* DanceButton5; // 0xe80(0x08)
	struct UAthenaCustomizationSlotButton_C* DanceButton6; // 0xe88(0x08)
	struct UImage* Image; // 0xe90(0x08)
	struct UImage* ; // 0xe98(0x08)
	struct UImage* ; // 0xea0(0x08)
	struct UImage* ; // 0xea8(0x08)
	struct UAthenaCustomizationSlotButton_C* ItemWrapButton1; // 0xeb0(0x08)
	struct UAthenaCustomizationSlotButton_C* ItemWrapButton2; // 0xeb8(0x08)
	struct UAthenaCustomizationSlotButton_C* ItemWrapButton3; // 0xec0(0x08)
	struct UAthenaCustomizationSlotButton_C* ItemWrapButton4; // 0xec8(0x08)
	struct UAthenaCustomizationSlotButton_C* ItemWrapButton5; // 0xed0(0x08)
	struct UAthenaCustomizationSlotButton_C* ItemWrapButton6; // 0xed8(0x08)
	struct UAthenaCustomizationSlotButton_C* ItemWrapButton7; // 0xee0(0x08)
	struct ULockerBuiltInEmoteWidget_C* LockerBuiltInEmoteWidget; // 0xee8(0x08)
	struct ULockerBuiltInEmoteWidget_C* ; // 0xef0(0x08)
	struct UAthenaCustomizationSlotButton_C* MusicPackButton; // 0xef8(0x08)
	struct UCommonTextBlock* NextRandom; // 0xf00(0x08)
	struct USizeBox* Random_Disclaimer; // 0xf08(0x08)
	struct UCommonRichTextBlock* RandomDisclaimerText_Enabled; // 0xf10(0x08)
	struct USafeZone* ; // 0xf18(0x08)
	struct USafeZone* ; // 0xf20(0x08)
	struct USafeZone* SafeZone_BackButton; // 0xf28(0x08)
	struct USafeZone* SafeZone_iteminfo; // 0xf30(0x08)
	struct USizeBox* SizeBox_nextrando; // 0xf38(0x08)
	struct USizeBox* SmallBang; // 0xf40(0x08)
	struct UCommonTextBlock* Text_HoldForRandom; // 0xf48(0x08)
	struct UCommonTextBlock* ; // 0xf50(0x08)
	struct UVerticalBox* VerticalBox_Buttons; // 0xf58(0x08)
	struct USoloButton_C* xButton_Loadouts; // 0xf60(0x08)
	struct USoloButton_C* xButton_RandomPresets; // 0xf68(0x08)
	struct USoloButton_C* xButton_SavePreset; // 0xf70(0x08)
	struct TArray<struct UAthenaCustomizationSlotButtonWrapper_C*> AllSlots; // 0xf78(0x10)
	enum class EAthenaCustomizationCategory CurrentCustomizationType; // 0xf88(0x01)
	char pad_F89[0x3]; // 0xf89(0x03)
	int32_t CurrentSubslotIndex; // 0xf8c(0x04)
	struct UAthenaItemCustomizationSelector_C* ItemCustomizationSelector; // 0xf90(0x08)
	struct UAthenaCustomizationSlotButton_C* CustomizationSlotButtonToPlayConfirmationOn; // 0xf98(0x08)
	struct FTimerHandle AutoHideDetailsForDances; // 0xfa0(0x08)
	struct UAthenaCustomizationSlotButtonWrapper_C* FirstSlotInMenu; // 0xfa8(0x08)
	struct UWidget* ; // 0xfb0(0x08)
	struct TArray<struct UAthenaCustomizationSlotButtonWrapper_C*> AnimBoundSlotArray; // 0xfb8(0x10)

	void AnimShowRandomDisclaimerEnabled(bool Show); // Function BacchusLockerTab.BacchusLockerTab_C.AnimShowRandomDisclaimerEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdatePresetButtonStyles(enum class ECommonInputType InputPin); // Function BacchusLockerTab.BacchusLockerTab_C.UpdatePresetButtonStyles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlaySlotAnimationAndCenterSlot(); // Function BacchusLockerTab.BacchusLockerTab_C.PlaySlotAnimationAndCenterSlot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlayEquippedLockerMusic_STW(); // Function BacchusLockerTab.BacchusLockerTab_C.PlayEquippedLockerMusic_STW // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlaySlotClickedAnimation(struct UAthenaCustomizationSlotButton_C* SlotToPlayAnimOn); // Function BacchusLockerTab.BacchusLockerTab_C.PlaySlotClickedAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BeginPickingCustomization(struct UCommonButtonLegacy* WidgetToReturnFocusTo, struct FAthenaCustomizationParams CustomizationParams); // Function BacchusLockerTab.BacchusLockerTab_C.BeginPickingCustomization // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnBeginPickingCustomizationSlot(struct UAthenaCustomizationSlotSelectorButton* SlotButton); // Function BacchusLockerTab.BacchusLockerTab_C.OnBeginPickingCustomizationSlot // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnBeginSavingLoadouts(); // Function BacchusLockerTab.BacchusLockerTab_C.OnBeginSavingLoadouts // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnBeginPickingLoadouts(); // Function BacchusLockerTab.BacchusLockerTab_C.OnBeginPickingLoadouts // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function BacchusLockerTab.BacchusLockerTab_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void (enum class ECommonInputType bNewInputType); // Function BacchusLockerTab.BacchusLockerTab_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnDeactivated(); // Function BacchusLockerTab.BacchusLockerTab_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnRefreshForNewLoadout(struct FString LoadoutName, bool bIsShuffleTile); // Function BacchusLockerTab.BacchusLockerTab_C.OnRefreshForNewLoadout // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnActivated(); // Function BacchusLockerTab.BacchusLockerTab_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void TriggerRandomLoopingAnim(); // Function BacchusLockerTab.BacchusLockerTab_C.TriggerRandomLoopingAnim // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BacchusLockerTab(int32_t EntryPoint); // Function BacchusLockerTab.BacchusLockerTab_C.ExecuteUbergraph_BacchusLockerTab // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

