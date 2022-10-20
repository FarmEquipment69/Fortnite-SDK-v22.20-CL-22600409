// WidgetBlueprintGeneratedClass SettingsListEntry_ControllerButton.SettingsListEntry_ControllerButton_C
// Size: 0x350 (Inherited: 0x340)
struct USettingsListEntry_ControllerButton_C : UFortSettingsListEntrySetting_ControllerButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct USimpleCommonButton_C* Button_ControllerAction; // 0x348(0x08)

	void OnSettingAssigned(struct FText& ActionText); // Function SettingsListEntry_ControllerButton.SettingsListEntry_ControllerButton_C.OnSettingAssigned // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void BndEvt__Button_ControllerAction_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SettingsListEntry_ControllerButton.SettingsListEntry_ControllerButton_C.BndEvt__Button_ControllerAction_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SettingsListEntry_ControllerButton(int32_t EntryPoint); // Function SettingsListEntry_ControllerButton.SettingsListEntry_ControllerButton_C.ExecuteUbergraph_SettingsListEntry_ControllerButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

