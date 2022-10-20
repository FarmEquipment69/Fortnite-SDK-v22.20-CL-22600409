// WidgetBlueprintGeneratedClass TeamMemberManage.TeamMemberManage_C
// Size: 0x638 (Inherited: 0x5e8)
struct UTeamMemberManage_C : UFortTeamMemberManage {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5e8(0x08)
	struct UBP_LocalPlayerBannerEditor_C* BP_LocalPlayerBannerEditor; // 0x5f0(0x08)
	struct UPanelButton_C* CloseButton; // 0x5f8(0x08)
	struct UIconTextButton_C* CloseProfileButton; // 0x600(0x08)
	struct UCommonWidgetSwitcherLegacy* ContentSwitcher; // 0x608(0x08)
	struct UImage* ; // 0x610(0x08)
	struct UImage* ; // 0x618(0x08)
	struct ULightbox_C* Lightbox; // 0x620(0x08)
	struct UOverlay* OverlayCloseButton; // 0x628(0x08)
	struct USizeBox* TeamMemberManageOptions; // 0x630(0x08)

	void BndEvt__CloseProfileButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function TeamMemberManage.TeamMemberManage_C.BndEvt__CloseProfileButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void OnParticipationChanged(bool bIsParticipating); // Function TeamMemberManage.TeamMemberManage_C.OnParticipationChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnActivated(); // Function TeamMemberManage.TeamMemberManage_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_1_CloseBannerEditor__DelegateSignature(struct FName IconId, struct FName ColorId); // Function TeamMemberManage.TeamMemberManage_C.BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_1_CloseBannerEditor__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BP_OnDeactivated(); // Function TeamMemberManage.TeamMemberManage_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BndEvt__ContentSwitcher_K2Node_ComponentBoundEvent_2_OnActiveWidgetChanged__DelegateSignature(struct UWidget* ActiveWidget, int32_t ActiveWidgetIndex); // Function TeamMemberManage.TeamMemberManage_C.BndEvt__ContentSwitcher_K2Node_ComponentBoundEvent_2_OnActiveWidgetChanged__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void OpenBannerEditor(); // Function TeamMemberManage.TeamMemberManage_C.OpenBannerEditor // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_TeamMemberManage(int32_t EntryPoint); // Function TeamMemberManage.TeamMemberManage_C.ExecuteUbergraph_TeamMemberManage // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

