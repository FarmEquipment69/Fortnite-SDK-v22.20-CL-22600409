// WidgetBlueprintGeneratedClass AthenaFloatSliderVariantPicker.AthenaFloatSliderVariantPicker_C
// Size: 0x3b0 (Inherited: 0x398)
struct UAthenaFloatSliderVariantPicker_C : UFortFloatSliderVariantPicker {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x398(0x08)
	struct UOverlay* Panel_Value; // 0x3a0(0x08)
	struct USimpleMaterialProgressBar_C* Progress; // 0x3a8(0x08)

	void OnUpdateValue(float NormalizedValue, bool bIsLocked); // Function AthenaFloatSliderVariantPicker.AthenaFloatSliderVariantPicker_C.OnUpdateValue // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_AthenaFloatSliderVariantPicker(int32_t EntryPoint); // Function AthenaFloatSliderVariantPicker.AthenaFloatSliderVariantPicker_C.ExecuteUbergraph_AthenaFloatSliderVariantPicker // (Final|UbergraphFunction) // @ game+0xd67374
};

