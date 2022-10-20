// Class CorruptionGameplayCodeUI.FortPowerupReticleExtensionWidget
// Size: 0x338 (Inherited: 0x330)
struct UFortPowerupReticleExtensionWidget : UFortWeaponReticleExtensionWidgetBase {
	enum class EPowerupHeatState LastPowerupHeatState; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)

	float GetOverheatingMaxValue(); // Function CorruptionGameplayCodeUI.FortPowerupReticleExtensionWidget.GetOverheatingMaxValue // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x66efd58
	float GetCurrentOverheatValue(); // Function CorruptionGameplayCodeUI.FortPowerupReticleExtensionWidget.GetCurrentOverheatValue // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x66efd30
	float GetCurrentOverheatPercent(); // Function CorruptionGameplayCodeUI.FortPowerupReticleExtensionWidget.GetCurrentOverheatPercent // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x66efd08
};

