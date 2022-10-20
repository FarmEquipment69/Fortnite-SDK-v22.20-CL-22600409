// Enum AudioWidgets.EAudioRadialSliderLayout
enum class EAudioRadialSliderLayout : uint8 {
	Layout_LabelTop = 0,
	Layout_LabelCenter = 1,
	Layout_LabelBottom = 2,
	Layout_MAX = 3
};

// ScriptStruct AudioWidgets.MeterChannelInfo
// Size: 0x0c (Inherited: 0x00)
struct FMeterChannelInfo {
	float MeterValue; // 0x00(0x04)
	float PeakValue; // 0x04(0x04)
	float ClippingValue; // 0x08(0x04)
};

// ScriptStruct AudioWidgets.AudioMeterStyle
// Size: 0x480 (Inherited: 0x08)
struct FAudioMeterStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FSlateBrush MeterValueImage; // 0x10(0xc0)
	struct FSlateBrush BackgroundImage; // 0xd0(0xc0)
	struct FSlateBrush MeterBackgroundImage; // 0x190(0xc0)
	struct FSlateBrush MeterValueBackgroundImage; // 0x250(0xc0)
	struct FSlateBrush MeterPeakImage; // 0x310(0xc0)
	struct FVector2D MeterSize; // 0x3d0(0x10)
	struct FVector2D MeterPadding; // 0x3e0(0x10)
	float MeterValuePadding; // 0x3f0(0x04)
	float PeakValueWidth; // 0x3f4(0x04)
	struct FVector2D ValueRangeDb; // 0x3f8(0x10)
	bool bShowScale; // 0x408(0x01)
	bool bScaleSide; // 0x409(0x01)
	char pad_40A[0x2]; // 0x40a(0x02)
	float ScaleHashOffset; // 0x40c(0x04)
	float ScaleHashWidth; // 0x410(0x04)
	float ScaleHashHeight; // 0x414(0x04)
	int32_t DecibelsPerHash; // 0x418(0x04)
	char pad_41C[0x4]; // 0x41c(0x04)
	struct FSlateFontInfo Font; // 0x420(0x58)
	char pad_478[0x8]; // 0x478(0x08)
};

// ScriptStruct AudioWidgets.AudioTextBoxStyle
// Size: 0xf0 (Inherited: 0x08)
struct FAudioTextBoxStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FSlateBrush BackgroundImage; // 0x10(0xc0)
	struct FSlateColor BackgroundColor; // 0xd0(0x14)
	char pad_E4[0xc]; // 0xe4(0x0c)
};

// ScriptStruct AudioWidgets.AudioSliderStyle
// Size: 0x6d0 (Inherited: 0x08)
struct FAudioSliderStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FSliderStyle SliderStyle; // 0x10(0x4a0)
	struct FAudioTextBoxStyle TextBoxStyle; // 0x4b0(0xf0)
	struct FSlateBrush WidgetBackgroundImage; // 0x5a0(0xc0)
	struct FSlateColor SliderBackgroundColor; // 0x660(0x14)
	char pad_674[0x4]; // 0x674(0x04)
	struct FVector2D SliderBackgroundSize; // 0x678(0x10)
	float LabelPadding; // 0x688(0x04)
	struct FSlateColor SliderBarColor; // 0x68c(0x14)
	struct FSlateColor SliderThumbColor; // 0x6a0(0x14)
	struct FSlateColor WidgetBackgroundColor; // 0x6b4(0x14)
	char pad_6C8[0x8]; // 0x6c8(0x08)
};

// ScriptStruct AudioWidgets.AudioRadialSliderStyle
// Size: 0x150 (Inherited: 0x08)
struct FAudioRadialSliderStyle : FSlateWidgetStyle {
	char pad_8[0x8]; // 0x08(0x08)
	struct FAudioTextBoxStyle TextBoxStyle; // 0x10(0xf0)
	struct FSlateColor CenterBackgroundColor; // 0x100(0x14)
	struct FSlateColor SliderBarColor; // 0x114(0x14)
	struct FSlateColor SliderProgressColor; // 0x128(0x14)
	float LabelPadding; // 0x13c(0x04)
	float DefaultSliderRadius; // 0x140(0x04)
	char pad_144[0xc]; // 0x144(0x0c)
};

