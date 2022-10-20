// WidgetBlueprintGeneratedClass SettingsListEntry_Scalar.SettingsListEntry_Scalar_C
// Size: 0x360 (Inherited: 0x340)
struct USettingsListEntry_Scalar_C : UFortSettingsListEntrySetting_Scalar {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct UWidgetAnimation* OnHover; // 0x348(0x08)
	struct UImage* DefaultValueLayer; // 0x350(0x08)
	struct USimpleMaterialProgressBar_C* Progress; // 0x358(0x08)

	struct UWidget* GetPrimaryGamepadFocusWidget(); // Function SettingsListEntry_Scalar.SettingsListEntry_Scalar_C.GetPrimaryGamepadFocusWidget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnValueChanged(float Value); // Function SettingsListEntry_Scalar.SettingsListEntry_Scalar_C.OnValueChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnDefaultValueChanged(float DefaultValue); // Function SettingsListEntry_Scalar.SettingsListEntry_Scalar_C.OnDefaultValueChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function SettingsListEntry_Scalar.SettingsListEntry_Scalar_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function SettingsListEntry_Scalar.SettingsListEntry_Scalar_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SettingsListEntry_Scalar(int32_t EntryPoint); // Function SettingsListEntry_Scalar.SettingsListEntry_Scalar_C.ExecuteUbergraph_SettingsListEntry_Scalar // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

