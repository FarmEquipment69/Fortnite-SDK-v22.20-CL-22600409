// WidgetBlueprintGeneratedClass EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C
// Size: 0x658 (Inherited: 0x5d8)
struct UEnableMultiFactorAuthModalBP_C : UEnableMultiFactorModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5d8(0x08)
	struct UWidgetAnimation* Intro_V2; // 0x5e0(0x08)
	struct UWidgetAnimation* ArrowPulse; // 0x5e8(0x08)
	struct UWidgetAnimation* Intro; // 0x5f0(0x08)
	struct UCommonTextBlock* ConsoleTextBlock; // 0x5f8(0x08)
	struct UCommonTextBlock* CT_LimitedTimeHeader; // 0x600(0x08)
	struct UCommonTextBlock* CT_TakenToWebsite; // 0x608(0x08)
	struct UWidgetSwitcher* EnableButtonSwitcher; // 0x610(0x08)
	struct UImage* Image_GoToWebsite; // 0x618(0x08)
	struct UItemInfoWidget_C* ItemInfoWidget_FromSocialImport; // 0x620(0x08)
	struct UFortLazyImage* lazyImage; // 0x628(0x08)
	struct USafeZone* SafeZone; // 0x630(0x08)
	struct UScaleBox* ScaleBox_TitleHeader; // 0x638(0x08)
	double HeartbeatDelayIntroAnimation; // 0x640(0x08)
	bool bHasReward; // 0x648(0x01)
	char pad_649[0x7]; // 0x649(0x07)
	struct UCommonTextStyle* MobileLimitedTimeHeaderStyle; // 0x650(0x08)

	void ScaleTitleForCulture(); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.ScaleTitleForCulture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void AnimationFullyCompleteBP(); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.AnimationFullyCompleteBP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleSetScreenMode(); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.HandleSetScreenMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NavUp(); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.NavUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NavRight(); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.NavRight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnActivated(); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void HandleHeaderText(); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.HandleHeaderText // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnIncentivizedSet(bool bIncentivized); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.OnIncentivizedSet // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnSetExitButtonText(struct FText& NewButtonText); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.OnSetExitButtonText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnConsoleDisplayURLProvided(struct FText& UniquePlayerURLText); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.OnConsoleDisplayURLProvided // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnSetScreenConfiguration(bool bIsConsole); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.OnSetScreenConfiguration // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnInputModeChanged(bool bUsingGamepad); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.OnInputModeChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_EnableMultiFactorAuthModalBP(int32_t EntryPoint); // Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.ExecuteUbergraph_EnableMultiFactorAuthModalBP // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

