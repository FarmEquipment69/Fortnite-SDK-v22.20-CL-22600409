// WidgetBlueprintGeneratedClass OptionsMenu.OptionsMenu_C
// Size: 0x1038 (Inherited: 0x1020)
struct UOptionsMenu_C : UFortOptionsMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1020(0x08)
	struct UFortHUDElementWrapper_C* FortHUDElementWrapper; // 0x1028(0x08)
	struct UTabGamePadConfig_v3_C* TabGamepadConfig; // 0x1030(0x08)

	void LoadTabClasses(); // Function OptionsMenu.OptionsMenu_C.LoadTabClasses // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Handle Tab Gamepad Config Action Handler States_SAVE(); // Function OptionsMenu.OptionsMenu_C.Handle Tab Gamepad Config Action Handler States_SAVE // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void DialogResult_826C59EC4C294BC872A644878B35A13B(enum class EFortDialogResult Result, struct FName ResultName); // Function OptionsMenu.OptionsMenu_C.DialogResult_826C59EC4C294BC872A644878B35A13B // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void DialogResult_B31FF5BD4C0772716F27509EA83B418E(enum class EFortDialogResult Result, struct FName ResultName); // Function OptionsMenu.OptionsMenu_C.DialogResult_B31FF5BD4C0772716F27509EA83B418E // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnActivated(); // Function OptionsMenu.OptionsMenu_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleTabGamePadActionsNeedBinds(struct TArray<struct FText>& ScreenLabels); // Function OptionsMenu.OptionsMenu_C.HandleTabGamePadActionsNeedBinds // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleTabGamepadConfigActionHandlerStates(); // Function OptionsMenu.OptionsMenu_C.HandleTabGamepadConfigActionHandlerStates // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnSettingsTabListPopulated(); // Function OptionsMenu.OptionsMenu_C.OnSettingsTabListPopulated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BndEvt__TabList_Categories_K2Node_ComponentBoundEvent_0_OnTabButtonCreation__DelegateSignature(struct FName TabId, struct UCommonButtonBase* TabButton); // Function OptionsMenu.OptionsMenu_C.BndEvt__TabList_Categories_K2Node_ComponentBoundEvent_0_OnTabButtonCreation__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BP_OnDeactivated(); // Function OptionsMenu.OptionsMenu_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void On Override Reset Modal(bool bOverride); // Function OptionsMenu.OptionsMenu_C.On Override Reset Modal // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnShowResetToDefaultModal(); // Function OptionsMenu.OptionsMenu_C.OnShowResetToDefaultModal // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_OptionsMenu(int32_t EntryPoint); // Function OptionsMenu.OptionsMenu_C.ExecuteUbergraph_OptionsMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

