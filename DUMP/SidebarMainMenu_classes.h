// WidgetBlueprintGeneratedClass SidebarMainMenu.SidebarMainMenu_C
// Size: 0x828 (Inherited: 0x590)
struct USidebarMainMenu_C : UFortBladeMenu_MainMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x590(0x08)
	struct UWidgetAnimation* Drill_In; // 0x598(0x08)
	struct UMainMenuButton_C* AthenaMainMenuClearPlayerDataButton; // 0x5a0(0x08)
	struct UMainMenuButton_C* Button_LegalInformation; // 0x5a8(0x08)
	struct UMainMenuButton_C* Button_MyIsland; // 0x5b0(0x08)
	struct UMainMenuButton_C* Button_ReportBugOrPlayer; // 0x5b8(0x08)
	struct UMainMenuButton_C* Button_SupportSubMenu; // 0x5c0(0x08)
	struct UMainMenuButton_C* ButtonBacchusHelp; // 0x5c8(0x08)
	struct UMainMenuButton_C* ButtonCredits; // 0x5d0(0x08)
	struct UMainMenuButton_C* ButtonHUDLayoutTool; // 0x5d8(0x08)
	struct UMainMenuButton_C* ButtonNews; // 0x5e0(0x08)
	struct UMainMenuButton_C* CheatsButton; // 0x5e8(0x08)
	struct UMainMenuButton_C* ConsoleButton; // 0x5f0(0x08)
	struct UMainMenuButton_C* DisableModeratorModeButton; // 0x5f8(0x08)
	struct UMainMenuButton_C* EnableModeratorModeButton; // 0x600(0x08)
	struct UMainMenuButton_C* ExportIslandButton; // 0x608(0x08)
	struct UMainMenuButton_C* Legal; // 0x610(0x08)
	struct ULiveStreamMenuButtonToggle_C* LiveStreamMenuButtonToggle; // 0x618(0x08)
	struct UMainMenuButton_C* LockerButton; // 0x620(0x08)
	struct UVerticalBox* ModeratorMode; // 0x628(0x08)
	struct UMainMenuButton_C* NewPlayerFeedback; // 0x630(0x08)
	struct UMainMenuButton_C* ParentalControlsButton; // 0x638(0x08)
	struct UMainMenuButton_C* RespawnButton; // 0x640(0x08)
	struct UMainMenuButton_C* ReturnOrCancelPurchase; // 0x648(0x08)
	struct USafeZone* SafeZone_Content; // 0x650(0x08)
	struct USafeZone* SafeZoneRatingIcons; // 0x658(0x08)
	struct UMainMenuButton_C* TeamSelectButton; // 0x660(0x08)
	struct UCommonTextBlock* Text_VoiceChatTitle; // 0x668(0x08)
	struct UCommonTextBlock* TextLowPowerMode; // 0x670(0x08)
	struct UVerticalBox* VBox_MainMenuButtons; // 0x678(0x08)
	struct UVerticalBox* VBox_MainMenuButtons_Legal; // 0x680(0x08)
	struct UVerticalBox* VBox_MainMenuButtons_Reporting; // 0x688(0x08)
	struct UVerticalBox* VBox_MainMenuButtons_SupportAndRefunds; // 0x690(0x08)
	struct UOptionsMenu_C* OptionsMenu; // 0x698(0x08)
	struct TSoftClassPtr<UObject> CreditsScreenClass; // 0x6a0(0x28)
	struct TSoftClassPtr<UObject> LegalInfoClass; // 0x6c8(0x28)
	struct TSoftClassPtr<UObject> RespawnClass; // 0x6f0(0x28)
	struct TSoftClassPtr<UObject> MobileControlsHelpClass; // 0x718(0x28)
	struct AFortMinigameSettingsBuilding* Machine; // 0x740(0x08)
	struct TSoftClassPtr<UObject> TeamSelectWidgetClass; // 0x748(0x28)
	struct FName SettingTabToOpen; // 0x770(0x04)
	char pad_774[0x4]; // 0x774(0x04)
	struct TSoftClassPtr<UObject> AthenaMOTDWidget; // 0x778(0x28)
	struct TSoftClassPtr<UObject> ParentalControlsClass_New; // 0x7a0(0x28)
	struct TSoftClassPtr<UObject> PlayerClearIslandDataClass; // 0x7c8(0x28)
	struct FText Player Clear Persistence Data Pregame Description; // 0x7f0(0x18)
	struct FText Player Clear Persistence Data in Progress Description; // 0x808(0x18)
	struct AFortMinigame* LastMinigame; // 0x820(0x08)

	void SwitchSubMenu(int32_t Index); // Function SidebarMainMenu.SidebarMainMenu_C.SwitchSubMenu // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Close(); // Function SidebarMainMenu.SidebarMainMenu_C.Close // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ShowMinigameButtons(struct AFortPlayerControllerAthena* Player, struct AFortGameStateAthena* FortGameStateAthena, bool& bResult); // Function SidebarMainMenu.SidebarMainMenu_C.ShowMinigameButtons // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void UpdateCreativeButtonsVisibility(); // Function SidebarMainMenu.SidebarMainMenu_C.UpdateCreativeButtonsVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateRespawnWidgetVisibility(); // Function SidebarMainMenu.SidebarMainMenu_C.UpdateRespawnWidgetVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Update Team Select Visibility(); // Function SidebarMainMenu.SidebarMainMenu_C.Update Team Select Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateButtons(); // Function SidebarMainMenu.SidebarMainMenu_C.UpdateButtons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetLegalButtonVisibility(); // Function SidebarMainMenu.SidebarMainMenu_C.SetLegalButtonVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetSupportButtonVisibility(); // Function SidebarMainMenu.SidebarMainMenu_C.SetSupportButtonVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Handle Low Power Mode(); // Function SidebarMainMenu.SidebarMainMenu_C.Handle Low Power Mode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateLowPowerMessage(bool PassThrough); // Function SidebarMainMenu.SidebarMainMenu_C.UpdateLowPowerMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void InitializeMainMenu(); // Function SidebarMainMenu.SidebarMainMenu_C.InitializeMainMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnComplete_A8101A2145286C49CFF50A97984010E3(struct UUserWidget* UserWidget); // Function SidebarMainMenu.SidebarMainMenu_C.OnComplete_A8101A2145286C49CFF50A97984010E3 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnComplete_D16AF2704BEFE18C7BD980843C02589F(struct UUserWidget* UserWidget); // Function SidebarMainMenu.SidebarMainMenu_C.OnComplete_D16AF2704BEFE18C7BD980843C02589F // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnComplete_C268EAF94DCFCF67F17632BDBF6AC40F(struct UUserWidget* UserWidget); // Function SidebarMainMenu.SidebarMainMenu_C.OnComplete_C268EAF94DCFCF67F17632BDBF6AC40F // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnComplete_6050D62B44E0DCCC7901A8A6F68E2DC5(struct UUserWidget* UserWidget); // Function SidebarMainMenu.SidebarMainMenu_C.OnComplete_6050D62B44E0DCCC7901A8A6F68E2DC5 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnComplete_5F00D0CF4D9E12AAB69866A846D583D6(struct UUserWidget* UserWidget); // Function SidebarMainMenu.SidebarMainMenu_C.OnComplete_5F00D0CF4D9E12AAB69866A846D583D6 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnComplete_CE01A3094981560CC63CA1B171C855B3(struct UUserWidget* UserWidget); // Function SidebarMainMenu.SidebarMainMenu_C.OnComplete_CE01A3094981560CC63CA1B171C855B3 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnComplete_611E1BC6484238364A9971999FE6F5A2(struct UUserWidget* UserWidget); // Function SidebarMainMenu.SidebarMainMenu_C.OnComplete_611E1BC6484238364A9971999FE6F5A2 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnComplete_0291153C4AC0D1156C271F9118E569A1(struct UUserWidget* UserWidget); // Function SidebarMainMenu.SidebarMainMenu_C.OnComplete_0291153C4AC0D1156C271F9118E569A1 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnComplete_B99DAD204A5DFFFB9673D086E81E1E79(struct UUserWidget* UserWidget); // Function SidebarMainMenu.SidebarMainMenu_C.OnComplete_B99DAD204A5DFFFB9673D086E81E1E79 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnComplete_647CD804498A28A84AB5E1BAA1B3B9CF(struct UUserWidget* UserWidget); // Function SidebarMainMenu.SidebarMainMenu_C.OnComplete_647CD804498A28A84AB5E1BAA1B3B9CF // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnComplete_7C6F207D4CDF21EB8BD8A0B2F614AA03(struct UUserWidget* UserWidget); // Function SidebarMainMenu.SidebarMainMenu_C.OnComplete_7C6F207D4CDF21EB8BD8A0B2F614AA03 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_1184_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SidebarMainMenu.SidebarMainMenu_C.BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_1184_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__Legal_K2Node_ComponentBoundEvent_146_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SidebarMainMenu.SidebarMainMenu_C.BndEvt__Legal_K2Node_ComponentBoundEvent_146_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__ButtonNews_K2Node_ComponentBoundEvent_376_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SidebarMainMenu.SidebarMainMenu_C.BndEvt__ButtonNews_K2Node_ComponentBoundEvent_376_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__TeamSelectButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SidebarMainMenu.SidebarMainMenu_C.BndEvt__TeamSelectButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__RespawnButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SidebarMainMenu.SidebarMainMenu_C.BndEvt__RespawnButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__ButtonBacchusHelp_K2Node_ComponentBoundEvent_294_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SidebarMainMenu.SidebarMainMenu_C.BndEvt__ButtonBacchusHelp_K2Node_ComponentBoundEvent_294_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__ButtonHUDLayoutTool_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SidebarMainMenu.SidebarMainMenu_C.BndEvt__ButtonHUDLayoutTool_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function SidebarMainMenu.SidebarMainMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BndEvt__MinigameButtons_K2Node_ComponentBoundEvent_3_StartButtonClicked__DelegateSignature(); // Function SidebarMainMenu.SidebarMainMenu_C.BndEvt__MinigameButtons_K2Node_ComponentBoundEvent_3_StartButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__MinigameButtons_K2Node_ComponentBoundEvent_4_EndButtonClicked__DelegateSignature(); // Function SidebarMainMenu.SidebarMainMenu_C.BndEvt__MinigameButtons_K2Node_ComponentBoundEvent_4_EndButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void UpdateMinigameButtons(); // Function SidebarMainMenu.SidebarMainMenu_C.UpdateMinigameButtons // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Bind To State Change Delegate(); // Function SidebarMainMenu.SidebarMainMenu_C.Bind To State Change Delegate // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnMinigameStateChanged(struct AFortMinigame* Minigame, enum class EFortMinigameState MinigameState); // Function SidebarMainMenu.SidebarMainMenu_C.OnMinigameStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__ParentalControlsButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SidebarMainMenu.SidebarMainMenu_C.BndEvt__ParentalControlsButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__CheatsButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SidebarMainMenu.SidebarMainMenu_C.BndEvt__CheatsButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__Button_BackToHub_1_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SidebarMainMenu.SidebarMainMenu_C.BndEvt__Button_BackToHub_1_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void OnOpenSettings(struct FName TabNameID, struct FString SettingToSelect); // Function SidebarMainMenu.SidebarMainMenu_C.OnOpenSettings // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BndEvt__LockerButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SidebarMainMenu.SidebarMainMenu_C.BndEvt__LockerButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__ExportIslandButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SidebarMainMenu.SidebarMainMenu_C.BndEvt__ExportIslandButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__NewPlayerFeedback_K2Node_ComponentBoundEvent_12_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SidebarMainMenu.SidebarMainMenu_C.BndEvt__NewPlayerFeedback_K2Node_ComponentBoundEvent_12_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__EnableModeratorModeButton_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SidebarMainMenu.SidebarMainMenu_C.BndEvt__EnableModeratorModeButton_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void Handle On Is Creative Moderator Mode Active Changed(bool bIsCreativeModeratorModeActive); // Function SidebarMainMenu.SidebarMainMenu_C.Handle On Is Creative Moderator Mode Active Changed // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Destruct(); // Function SidebarMainMenu.SidebarMainMenu_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BndEvt__EnableModeratorModeButton_1_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SidebarMainMenu.SidebarMainMenu_C.BndEvt__EnableModeratorModeButton_1_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__AthenaMainMenuClearPlayerDataButton_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SidebarMainMenu.SidebarMainMenu_C.BndEvt__AthenaMainMenuClearPlayerDataButton_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__ConsoleButton_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SidebarMainMenu.SidebarMainMenu_C.BndEvt__ConsoleButton_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void OnRefreshOptions(); // Function SidebarMainMenu.SidebarMainMenu_C.OnRefreshOptions // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void BndEvt__SidebarMainMenu_Button_Settings_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SidebarMainMenu.SidebarMainMenu_C.BndEvt__SidebarMainMenu_Button_Settings_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__SidebarMainMenu_Button_ReportBugOrPlayer_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SidebarMainMenu.SidebarMainMenu_C.BndEvt__SidebarMainMenu_Button_ReportBugOrPlayer_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__SidebarMainMenu_SidebarBackButton_K2Node_ComponentBoundEvent_19_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function SidebarMainMenu.SidebarMainMenu_C.BndEvt__SidebarMainMenu_SidebarBackButton_K2Node_ComponentBoundEvent_19_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__SidebarMainMenu_Button_LegalInformation_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SidebarMainMenu.SidebarMainMenu_C.BndEvt__SidebarMainMenu_Button_LegalInformation_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__SidebarMainMenu_Button_SupportLink_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SidebarMainMenu.SidebarMainMenu_C.BndEvt__SidebarMainMenu_Button_SupportLink_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__SidebarMainMenu_ReturnOrCancelPurchase_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SidebarMainMenu.SidebarMainMenu_C.BndEvt__SidebarMainMenu_ReturnOrCancelPurchase_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void FakeSidebarBackButtonClick(); // Function SidebarMainMenu.SidebarMainMenu_C.FakeSidebarBackButtonClick // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SidebarMainMenu(int32_t EntryPoint); // Function SidebarMainMenu.SidebarMainMenu_C.ExecuteUbergraph_SidebarMainMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

