// WidgetBlueprintGeneratedClass SocialPanelView_UserLists.SocialPanelView_UserLists_C
// Size: 0x6c0 (Inherited: 0x600)
struct USocialPanelView_UserLists_C : UFortSocialPanelView_UserLists {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x600(0x08)
	struct UWidgetAnimation* WeGameButtonHovered; // 0x608(0x08)
	struct UWidgetAnimation* SwitcherTransition; // 0x610(0x08)
	struct UWidgetAnimation* NoFriendsArrowBounce; // 0x618(0x08)
	struct UWidgetAnimation* MenuAnchorItemOpen; // 0x620(0x08)
	struct UWidgetAnimation* ; // 0x628(0x08)
	struct UWidgetAnimation* Open; // 0x630(0x08)
	struct UImage* bckgrnd; // 0x638(0x08)
	struct UImage* CircularThrobber_UserSearch; // 0x640(0x08)
	struct UCommonRichTextBlock* ; // 0x648(0x08)
	struct UFortMobileImage* ; // 0x650(0x08)
	struct UImage* Image_MicDisabled; // 0x658(0x08)
	struct UFortMobileImage* Image_MicIcon; // 0x660(0x08)
	struct UFortMobileImage* ; // 0x668(0x08)
	struct UFortMobileImage* ; // 0x670(0x08)
	struct UImage* ; // 0x678(0x08)
	struct UFortMobileImage* Image_TitleIcon; // 0x680(0x08)
	struct UCommonRichTextBlock* RichText_LeavePlatformPartyTitle; // 0x688(0x08)
	struct UCommonRichTextBlock* RichText_VoiceChatDisabled; // 0x690(0x08)
	struct UCommonRichTextBlock* RichText_VoiceChatDisabledHeader; // 0x698(0x08)
	struct UCommonRichTextBlock* RichText_VoiceChatDisabledWarningMessage; // 0x6a0(0x08)
	struct URichTextBlock* ; // 0x6a8(0x08)
	struct USocialPanel_FriendLinkButton_C* SocialPanel_FriendLinkButton; // 0x6b0(0x08)
	struct UCommonTextBlock* Text_LowPowerMode; // 0x6b8(0x08)

	void BndEvt__Switcher_UserLists_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature(struct UWidget* ActiveWidget, int32_t ActiveWidgetIndex); // Function SocialPanelView_UserLists.SocialPanelView_UserLists_C.BndEvt__Switcher_UserLists_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void OnSetVoiceChannelButtonText(struct FText& ButtonText); // Function SocialPanelView_UserLists.SocialPanelView_UserLists_C.OnSetVoiceChannelButtonText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function SocialPanelView_UserLists.SocialPanelView_UserLists_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function SocialPanelView_UserLists.SocialPanelView_UserLists_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SocialPanelView_UserLists(int32_t EntryPoint); // Function SocialPanelView_UserLists.SocialPanelView_UserLists_C.ExecuteUbergraph_SocialPanelView_UserLists // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

