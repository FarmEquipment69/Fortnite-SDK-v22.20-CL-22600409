// WidgetBlueprintGeneratedClass BPS22_LandingPages.BPS22_LandingPages_C
// Size: 0x630 (Inherited: 0x570)
struct UBPS22_LandingPages_C : UBattlePassLandingPageS22 {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x570(0x08)
	struct UWidgetAnimation* Intro; // 0x578(0x08)
	struct UHorizontalBox* HorizontalBox_OwnBP; // 0x580(0x08)
	struct UBPS22_SeasonalDataWidget_C* SeasonDataWidget; // 0x588(0x08)
	struct UCommonVisibilitySwitcher* Switcher_BottonButtons; // 0x590(0x08)
	struct FMulticastInlineDelegate On show BP character; // 0x598(0x10)
	struct FMulticastInlineDelegate On show Custo Character; // 0x5a8(0x10)
	struct FMulticastInlineDelegate On show Mystery Character; // 0x5b8(0x10)
	struct FMulticastInlineDelegate On show Bonus Character; // 0x5c8(0x10)
	struct FMulticastInlineDelegate On show Crew Character; // 0x5d8(0x10)
	struct FMulticastInlineDelegate On show Buy BP; // 0x5e8(0x10)
	struct FMulticastInlineDelegate On show Buy Level; // 0x5f8(0x10)
	struct FMulticastInlineDelegate On show Gift Battle Pass; // 0x608(0x10)
	bool BPOwned; // 0x618(0x01)
	bool CustomizationOwned; // 0x619(0x01)
	char pad_61A[0x6]; // 0x61a(0x06)
	struct FMulticastInlineDelegate OnShowButtonDetails; // 0x620(0x10)

	void (struct UBPS22_LandingPage_SmallButton_C* Button_BuyBattlePass); // Function BPS22_LandingPages.BPS22_LandingPages_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void (struct UBPS22_LandingPage_SmallButton_C* Button_GiftBattlePass); // Function BPS22_LandingPages.BPS22_LandingPages_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void (struct UBPS22_LandingPage_SmallButton_C* Button_BuyResources); // Function BPS22_LandingPages.BPS22_LandingPages_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void (struct UBPS22_LandingPageButton_C* Button_JoinSubscription); // Function BPS22_LandingPages.BPS22_LandingPages_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void (struct UBPS22_LandingPageButton_C* Button_BonusRewards); // Function BPS22_LandingPages.BPS22_LandingPages_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void (struct UBPS22_LandingPageButton_C* Button_MysteryRewards); // Function BPS22_LandingPages.BPS22_LandingPages_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void (struct UBPS22_LandingPageButton_C* Button_CharacterCustomizer); // Function BPS22_LandingPages.BPS22_LandingPages_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SequenceEvent__ENTRYPOINTBPS22_LandingPages(struct UBPS22_LandingPageButton_C* Button_RewardOverview); // Function BPS22_LandingPages.BPS22_LandingPages_C.SequenceEvent__ENTRYPOINTBPS22_LandingPages // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Play intro(); // Function BPS22_LandingPages.BPS22_LandingPages_C.Play intro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void (struct UBPS22_LandingPageButton_C* Button_BonusRewards); // Function BPS22_LandingPages.BPS22_LandingPages_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void (struct UBPS22_LandingPageButton_C* Button_JoinSubscription); // Function BPS22_LandingPages.BPS22_LandingPages_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void (struct UBPS22_LandingPage_SmallButton_C* Button_BuyResources); // Function BPS22_LandingPages.BPS22_LandingPages_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void (struct UBPS22_LandingPage_SmallButton_C* Button_GiftBattlePass); // Function BPS22_LandingPages.BPS22_LandingPages_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void (struct UBPS22_LandingPage_SmallButton_C* Button_BuyBattlePass); // Function BPS22_LandingPages.BPS22_LandingPages_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnBattlePassOwned(); // Function BPS22_LandingPages.BPS22_LandingPages_C.OnBattlePassOwned // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void (struct UBPS22_LandingPageButton_C* Button_MysteryRewards); // Function BPS22_LandingPages.BPS22_LandingPages_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void On BattlePass completed(bool BPComplete); // Function BPS22_LandingPages.BPS22_LandingPages_C.On BattlePass completed // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnEnterSubPage(); // Function BPS22_LandingPages.BPS22_LandingPages_C.OnEnterSubPage // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void On Level Changed(int32_t Level); // Function BPS22_LandingPages.BPS22_LandingPages_C.On Level Changed // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnBattlePassGiftingAllowed(bool bGiftingAllowed); // Function BPS22_LandingPages.BPS22_LandingPages_C.OnBattlePassGiftingAllowed // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnBattlePassSubscriptionAllowed(bool bSubscriptionAllowed); // Function BPS22_LandingPages.BPS22_LandingPages_C.OnBattlePassSubscriptionAllowed // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void (struct UBPS22_LandingPageButton_C* Button_CharacterCustomizer); // Function BPS22_LandingPages.BPS22_LandingPages_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void (struct UBPS22_LandingPageButton_C* Button_RewardOverview); // Function BPS22_LandingPages.BPS22_LandingPages_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__BPS20_LandingPages_Button_Rewards_K2Node_ComponentBoundEvent_8_OnShowButtonDetails__DelegateSignature(struct FBattlePassLandingPageButtonDisplayDetails DisplayInfo); // Function BPS22_LandingPages.BPS22_LandingPages_C.BndEvt__BPS20_LandingPages_Button_Rewards_K2Node_ComponentBoundEvent_8_OnShowButtonDetails__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__BPS20_LandingPages_Button_CharacterCustomizer_K2Node_ComponentBoundEvent_9_OnShowButtonDetails__DelegateSignature(struct FBattlePassLandingPageButtonDisplayDetails DisplayInfo); // Function BPS22_LandingPages.BPS22_LandingPages_C.BndEvt__BPS20_LandingPages_Button_CharacterCustomizer_K2Node_ComponentBoundEvent_9_OnShowButtonDetails__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__BPS20_LandingPages_Button_Quests_K2Node_ComponentBoundEvent_10_OnShowButtonDetails__DelegateSignature(struct FBattlePassLandingPageButtonDisplayDetails DisplayInfo); // Function BPS22_LandingPages.BPS22_LandingPages_C.BndEvt__BPS20_LandingPages_Button_Quests_K2Node_ComponentBoundEvent_10_OnShowButtonDetails__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__BPS20_LandingPages_Button_BonusRewards_K2Node_ComponentBoundEvent_11_OnShowButtonDetails__DelegateSignature(struct FBattlePassLandingPageButtonDisplayDetails DisplayInfo); // Function BPS22_LandingPages.BPS22_LandingPages_C.BndEvt__BPS20_LandingPages_Button_BonusRewards_K2Node_ComponentBoundEvent_11_OnShowButtonDetails__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__BPS20_LandingPages_Button_JoinSubscription_K2Node_ComponentBoundEvent_12_OnShowButtonDetails__DelegateSignature(struct FBattlePassLandingPageButtonDisplayDetails DisplayInfo); // Function BPS22_LandingPages.BPS22_LandingPages_C.BndEvt__BPS20_LandingPages_Button_JoinSubscription_K2Node_ComponentBoundEvent_12_OnShowButtonDetails__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__BPS20_LandingPages_Button_BuyBattlePass_K2Node_ComponentBoundEvent_0_OnShowButtonDetails__DelegateSignature(struct FBattlePassLandingPageButtonDisplayDetails DisplayInfo); // Function BPS22_LandingPages.BPS22_LandingPages_C.BndEvt__BPS20_LandingPages_Button_BuyBattlePass_K2Node_ComponentBoundEvent_0_OnShowButtonDetails__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__BPS20_LandingPages_Button_BuyResources_K2Node_ComponentBoundEvent_1_OnShowButtonDetails__DelegateSignature(struct FBattlePassLandingPageButtonDisplayDetails DisplayInfo); // Function BPS22_LandingPages.BPS22_LandingPages_C.BndEvt__BPS20_LandingPages_Button_BuyResources_K2Node_ComponentBoundEvent_1_OnShowButtonDetails__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__BPS20_LandingPages_Button_GiftBattlePass_K2Node_ComponentBoundEvent_2_OnShowButtonDetails__DelegateSignature(struct FBattlePassLandingPageButtonDisplayDetails DisplayInfo); // Function BPS22_LandingPages.BPS22_LandingPages_C.BndEvt__BPS20_LandingPages_Button_GiftBattlePass_K2Node_ComponentBoundEvent_2_OnShowButtonDetails__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BPS22_LandingPages(int32_t EntryPoint); // Function BPS22_LandingPages.BPS22_LandingPages_C.ExecuteUbergraph_BPS22_LandingPages // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void OnShowButtonDetails__DelegateSignature(struct FBattlePassLandingPageButtonDisplayDetails DisplayInfo, bool bShowRewardCount); // Function BPS22_LandingPages.BPS22_LandingPages_C.OnShowButtonDetails__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void On show Gift Battle Pass__DelegateSignature(); // Function BPS22_LandingPages.BPS22_LandingPages_C.On show Gift Battle Pass__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void On show Buy Level__DelegateSignature(); // Function BPS22_LandingPages.BPS22_LandingPages_C.On show Buy Level__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void On show Buy BP__DelegateSignature(); // Function BPS22_LandingPages.BPS22_LandingPages_C.On show Buy BP__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void On show Crew Character__DelegateSignature(); // Function BPS22_LandingPages.BPS22_LandingPages_C.On show Crew Character__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void On show Bonus Character__DelegateSignature(); // Function BPS22_LandingPages.BPS22_LandingPages_C.On show Bonus Character__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void On show Mystery Character__DelegateSignature(); // Function BPS22_LandingPages.BPS22_LandingPages_C.On show Mystery Character__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void On show Custo Character__DelegateSignature(); // Function BPS22_LandingPages.BPS22_LandingPages_C.On show Custo Character__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void On show BP character__DelegateSignature(); // Function BPS22_LandingPages.BPS22_LandingPages_C.On show BP character__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

