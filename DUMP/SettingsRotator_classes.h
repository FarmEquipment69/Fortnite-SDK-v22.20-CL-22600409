// WidgetBlueprintGeneratedClass SettingsRotator.SettingsRotator_C
// Size: 0x14a0 (Inherited: 0x1490)
struct USettingsRotator_C : UFortSettingsRotator {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1490(0x08)
	struct UBorder* Background; // 0x1498(0x08)

	void BP_OnOptionsPopulated(int32_t Count); // Function SettingsRotator.SettingsRotator_C.BP_OnOptionsPopulated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnOptionSelected(int32_t Index); // Function SettingsRotator.SettingsRotator_C.BP_OnOptionSelected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnDefaultOptionSpecified(int32_t DefaultOptionIndex); // Function SettingsRotator.SettingsRotator_C.BP_OnDefaultOptionSpecified // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SettingsRotator(int32_t EntryPoint); // Function SettingsRotator.SettingsRotator_C.ExecuteUbergraph_SettingsRotator // (Final|UbergraphFunction) // @ game+0xd67374
};

