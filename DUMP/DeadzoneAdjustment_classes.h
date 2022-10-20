// WidgetBlueprintGeneratedClass DeadzoneAdjustment.DeadzoneAdjustment_C
// Size: 0x2e1 (Inherited: 0x2b8)
struct UDeadzoneAdjustment_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UImage* Deadzone_Adjustment; // 0x2c0(0x08)
	struct UOptionsMenuSetting_C* Deadzone_Adjustment_Slider; // 0x2c8(0x08)
	struct UImage* Deadzone_Max; // 0x2d0(0x08)
	struct UIconTextButton_C* ResetButton; // 0x2d8(0x08)
	enum class ESettingType SettingType; // 0x2e0(0x01)

	struct UWidget* (enum class EUINavigation Navigation); // Function DeadzoneAdjustment.DeadzoneAdjustment_C. // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function DeadzoneAdjustment.DeadzoneAdjustment_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnValueChanged_Bind(float Value); // Function DeadzoneAdjustment.DeadzoneAdjustment_C.OnValueChanged_Bind // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_DeadzoneAdjustment(int32_t EntryPoint); // Function DeadzoneAdjustment.DeadzoneAdjustment_C.ExecuteUbergraph_DeadzoneAdjustment // (Final|UbergraphFunction) // @ game+0xd67374
};

