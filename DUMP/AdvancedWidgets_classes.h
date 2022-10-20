// Class AdvancedWidgets.RadialSlider
// Size: 0x770 (Inherited: 0x148)
struct URadialSlider : UWidget {
	float Value; // 0x148(0x04)
	struct FDelegate ValueDelegate; // 0x14c(0x0c)
	bool bUseCustomDefaultValue; // 0x158(0x01)
	char pad_159[0x3]; // 0x159(0x03)
	float CustomDefaultValue; // 0x15c(0x04)
	struct FRuntimeFloatCurve SliderRange; // 0x160(0x88)
	struct TArray<float> ValueTags; // 0x1e8(0x10)
	float SliderHandleStartAngle; // 0x1f8(0x04)
	float SliderHandleEndAngle; // 0x1fc(0x04)
	float AngularOffset; // 0x200(0x04)
	char pad_204[0x4]; // 0x204(0x04)
	struct FVector2D HandStartEndRatio; // 0x208(0x10)
	char pad_218[0x8]; // 0x218(0x08)
	struct FSliderStyle WidgetStyle; // 0x220(0x4a0)
	struct FLinearColor SliderBarColor; // 0x6c0(0x10)
	struct FLinearColor SliderProgressColor; // 0x6d0(0x10)
	struct FLinearColor SliderHandleColor; // 0x6e0(0x10)
	struct FLinearColor CenterBackgroundColor; // 0x6f0(0x10)
	bool Locked; // 0x700(0x01)
	bool MouseUsesStep; // 0x701(0x01)
	bool RequiresControllerLock; // 0x702(0x01)
	char pad_703[0x1]; // 0x703(0x01)
	float StepSize; // 0x704(0x04)
	bool IsFocusable; // 0x708(0x01)
	bool UseVerticalDrag; // 0x709(0x01)
	bool ShowSliderHandle; // 0x70a(0x01)
	bool ShowSliderHand; // 0x70b(0x01)
	char pad_70C[0x4]; // 0x70c(0x04)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x710(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x720(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x730(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x740(0x10)
	struct FMulticastInlineDelegate OnValueChanged; // 0x750(0x10)
	char pad_760[0x10]; // 0x760(0x10)

	void SetValueTags(struct TArray<float>& InValueTags); // Function AdvancedWidgets.RadialSlider.SetValueTags // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xa1c2650
	void SetValue(float InValue); // Function AdvancedWidgets.RadialSlider.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0xa1c25cc
	void SetUseVerticalDrag(bool InUseVerticalDrag); // Function AdvancedWidgets.RadialSlider.SetUseVerticalDrag // (Final|Native|Public|BlueprintCallable) // @ game+0xa1c2544
	void SetStepSize(float InValue); // Function AdvancedWidgets.RadialSlider.SetStepSize // (Final|Native|Public|BlueprintCallable) // @ game+0xa1c24c0
	void SetSliderRange(struct FRuntimeFloatCurve& InSliderRange); // Function AdvancedWidgets.RadialSlider.SetSliderRange // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xa1c2380
	void SetSliderProgressColor(struct FLinearColor InValue); // Function AdvancedWidgets.RadialSlider.SetSliderProgressColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xa1c22e4
	void SetSliderHandleStartAngle(float InValue); // Function AdvancedWidgets.RadialSlider.SetSliderHandleStartAngle // (Final|Native|Public|BlueprintCallable) // @ game+0xa1c2260
	void SetSliderHandleEndAngle(float InValue); // Function AdvancedWidgets.RadialSlider.SetSliderHandleEndAngle // (Final|Native|Public|BlueprintCallable) // @ game+0xa1c21dc
	void SetSliderHandleColor(struct FLinearColor InValue); // Function AdvancedWidgets.RadialSlider.SetSliderHandleColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xa1c2140
	void SetSliderBarColor(struct FLinearColor InValue); // Function AdvancedWidgets.RadialSlider.SetSliderBarColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xa1c20a4
	void SetShowSliderHandle(bool InShowSliderHandle); // Function AdvancedWidgets.RadialSlider.SetShowSliderHandle // (Final|Native|Public|BlueprintCallable) // @ game+0xa1c201c
	void SetShowSliderHand(bool InShowSliderHand); // Function AdvancedWidgets.RadialSlider.SetShowSliderHand // (Final|Native|Public|BlueprintCallable) // @ game+0xa1c1f94
	void SetLocked(bool InValue); // Function AdvancedWidgets.RadialSlider.SetLocked // (Final|Native|Public|BlueprintCallable) // @ game+0xa1c1f14
	void SetHandStartEndRatio(struct FVector2D InValue); // Function AdvancedWidgets.RadialSlider.SetHandStartEndRatio // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xa1c1e88
	void SetCustomDefaultValue(float InValue); // Function AdvancedWidgets.RadialSlider.SetCustomDefaultValue // (Final|Native|Public|BlueprintCallable) // @ game+0xa1c1e04
	void SetCenterBackgroundColor(struct FLinearColor InValue); // Function AdvancedWidgets.RadialSlider.SetCenterBackgroundColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xa1c1d68
	void SetAngularOffset(float InValue); // Function AdvancedWidgets.RadialSlider.SetAngularOffset // (Final|Native|Public|BlueprintCallable) // @ game+0xa1c1cd8
	float GetValue(); // Function AdvancedWidgets.RadialSlider.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa1c1cb0
	float GetNormalizedSliderHandlePosition(); // Function AdvancedWidgets.RadialSlider.GetNormalizedSliderHandlePosition // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa1c1c78
	float GetCustomDefaultValue(); // Function AdvancedWidgets.RadialSlider.GetCustomDefaultValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa1c1c50
};

