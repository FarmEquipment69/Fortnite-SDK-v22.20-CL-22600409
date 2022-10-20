// WidgetBlueprintGeneratedClass AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C
// Size: 0x3a8 (Inherited: 0x2e0)
struct UAthenaCustomizationSlotButtonWrapper_C : UCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UWidgetAnimation* Populate; // 0x2e8(0x08)
	struct UAthenaCustomizationSlotButton_C* SlotButton; // 0x2f0(0x08)
	struct FText BannerDisplayName; // 0x2f8(0x18)
	enum class EAthenaCustomizationCategory CustomizationType; // 0x310(0x01)
	char pad_311[0x7]; // 0x311(0x07)
	struct FMulticastInlineDelegate OnSlotClicked; // 0x318(0x10)
	struct FMulticastInlineDelegate OnSlotHovered; // 0x328(0x10)
	struct FText CategoryDescription; // 0x338(0x18)
	struct FMulticastInlineDelegate OnSlotUnhovered; // 0x350(0x10)
	int32_t SubslotIndex; // 0x360(0x04)
	bool bAllowUnownedItems; // 0x364(0x01)
	bool bOneItemPerSlot; // 0x365(0x01)
	char pad_366[0x2]; // 0x366(0x02)
	struct UMaterialInstance* OverrideSlotImage; // 0x368(0x08)
	struct FGameplayTag RequiredSlotTag; // 0x370(0x04)
	char pad_374[0x4]; // 0x374(0x04)
	double SlottedItemCardWidth; // 0x378(0x08)
	struct TSoftObjectPtr<UTexture2D> emptytexture; // 0x380(0x28)

	void ResetPopulateAnimVisual(); // Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.ResetPopulateAnimVisual // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetCustomizationSlotActiveState(bool& bCosmeticAvaialble, bool& bActive); // Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.GetCustomizationSlotActiveState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BndEvt__SlotButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__SlotButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void AnimPopulateInternal(int32_t ButtonIndex); // Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.AnimPopulateInternal // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper(int32_t EntryPoint); // Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void OnSlotUnhovered__DelegateSignature(); // Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.OnSlotUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnSlotHovered__DelegateSignature(struct UAthenaCustomizationSlotButtonWrapper_C* ButtonWrapper, enum class EAthenaCustomizationCategory CustomizationType, struct FText BannerLabel, struct FText CustomizationDescription, int32_t SubslotIndex); // Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.OnSlotHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnSlotClicked__DelegateSignature(struct UCommonButtonLegacy* Button, struct FAthenaCustomizationParams CustomizationParams); // Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.OnSlotClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

