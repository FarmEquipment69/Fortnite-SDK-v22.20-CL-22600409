// WidgetBlueprintGeneratedClass ImportFriends.ImportFriends_C
// Size: 0x738 (Inherited: 0x5d8)
struct UImportFriends_C : UFortSocialImportPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5d8(0x08)
	struct UWidgetAnimation* Intro_V2; // 0x5e0(0x08)
	struct UWidgetAnimation* ArrowPulse; // 0x5e8(0x08)
	struct UWidgetAnimation* Intro; // 0x5f0(0x08)
	struct UCommonTextBlock* AddFriendsDescription; // 0x5f8(0x08)
	struct UCommonTextBlock* ; // 0x600(0x08)
	struct UCommonTextBlock* CT_AddFriendsDescription; // 0x608(0x08)
	struct UCommonTextBlock* CT_ChangeInSettingsText; // 0x610(0x08)
	struct UCommonTextBlock* CT_LimitedTimeHeader; // 0x618(0x08)
	struct UCommonTextBlock* CT_TakenToLauncher; // 0x620(0x08)
	struct UImage* ; // 0x628(0x08)
	struct UItemInfoWidget_C* ItemInfoWidget; // 0x630(0x08)
	struct USafeZone* ; // 0x638(0x08)
	struct UScaleBox* SBox_AddFriendButtonScaleBox; // 0x640(0x08)
	struct UScaleBox* ScaleBoxDescription; // 0x648(0x08)
	struct UScaleBox* ScaleBoxHeader; // 0x650(0x08)
	struct UFortItemDefinition* PreviewItemDef; // 0x658(0x08)
	double HeartbeatDelayIntroAnimation; // 0x660(0x08)
	bool bHasReward; // 0x668(0x01)
	char pad_669[0x7]; // 0x669(0x07)
	struct FText FacebookHeader; // 0x670(0x18)
	struct FText VKHeader; // 0x688(0x18)
	struct FText SteamHeader; // 0x6a0(0x18)
	struct FText PlaystationHeader; // 0x6b8(0x18)
	struct FText XboxHeader; // 0x6d0(0x18)
	enum class ESocialImportPanelPlatform SocialPlatform; // 0x6e8(0x01)
	char pad_6E9[0x3]; // 0x6e9(0x03)
	int32_t WrapHeaderAt; // 0x6ec(0x04)
	struct FText XboxDescriptionText; // 0x6f0(0x18)
	struct FText PSNDescriptionText; // 0x708(0x18)
	struct FText SwitchDescriptionText; // 0x720(0x18)

	void ScaleTextButton(int32_t CharThreshold, struct UScaleBox* ContainingScaleBox, struct UIconTextButton_C* Button); // Function ImportFriends.ImportFriends_C.ScaleTextButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ScaleTextboxWithWrappingWorkaround(struct UScaleBox* ContainingScaleBox, int32_t CharLimitThreshold, struct UCommonTextBlock* TargetText, int32_t WrapAtHorrizontal); // Function ImportFriends.ImportFriends_C.ScaleTextboxWithWrappingWorkaround // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleHeaderText(); // Function ImportFriends.ImportFriends_C.HandleHeaderText // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleDescriptionText(); // Function ImportFriends.ImportFriends_C.HandleDescriptionText // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function ImportFriends.ImportFriends_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnPanelTypeSet(enum class ESocialImportPanelType NewType); // Function ImportFriends.ImportFriends_C.OnPanelTypeSet // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnIncentivizedSet(bool bIncentivized); // Function ImportFriends.ImportFriends_C.OnIncentivizedSet // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_796_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function ImportFriends.ImportFriends_C.BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_796_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BP_OnActivated(); // Function ImportFriends.ImportFriends_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ImportFriends(int32_t EntryPoint); // Function ImportFriends.ImportFriends_C.ExecuteUbergraph_ImportFriends // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

