// WidgetBlueprintGeneratedClass MultipleSubscriptionAlertModal.MultipleSubscriptionAlertModal_C
// Size: 0x520 (Inherited: 0x4d0)
struct UMultipleSubscriptionAlertModal_C : UCrewMultiSubscriptionAlertModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4d0(0x08)
	struct UCloseButton_C* Button_CloseMobile; // 0x4d8(0x08)
	struct UImage* Containment; // 0x4e0(0x08)
	struct USafeZone* ContentSZ; // 0x4e8(0x08)
	struct UImage* Image_BackgroundBottomBar; // 0x4f0(0x08)
	struct UImage* Lightbox_HitTestBlocker; // 0x4f8(0x08)
	struct USafeZone* MobileClose; // 0x500(0x08)
	struct UScrollBox* PrimaryScrollBox; // 0x508(0x08)
	struct UCommonRichTextBlock* Text_Check; // 0x510(0x08)
	struct UCommonRichTextBlock* Text_MoreInfo; // 0x518(0x08)

	void OnSetHowToCancelURL(struct FString MoreInfoUrl); // Function MultipleSubscriptionAlertModal.MultipleSubscriptionAlertModal_C.OnSetHowToCancelURL // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_MultipleSubscriptionAlertModal(int32_t EntryPoint); // Function MultipleSubscriptionAlertModal.MultipleSubscriptionAlertModal_C.ExecuteUbergraph_MultipleSubscriptionAlertModal // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

