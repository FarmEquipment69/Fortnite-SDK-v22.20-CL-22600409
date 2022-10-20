// WidgetBlueprintGeneratedClass RichTextButton.RichTextButton_C
// Size: 0x14f1 (Inherited: 0x1480)
struct URichTextButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1480(0x08)
	struct UWidgetAnimation* Hover2; // 0x1488(0x08)
	struct UWidgetAnimation* Hover; // 0x1490(0x08)
	struct UBorder* Border_Material; // 0x1498(0x08)
	struct UCommonRichTextBlock* Rich_Text; // 0x14a0(0x08)
	struct FText Button text; // 0x14a8(0x18)
	struct FSlateColor Text Color; // 0x14c0(0x14)
	char pad_14D4[0x4]; // 0x14d4(0x04)
	struct UMaterialInterface* Material Brush; // 0x14d8(0x08)
	struct UTexture2D* Right Image; // 0x14e0(0x08)
	enum class ETextJustify Justifiction; // 0x14e8(0x01)
	bool Auto wrap text; // 0x14e9(0x01)
	bool SimpleHover; // 0x14ea(0x01)
	bool FontSizeOverride; // 0x14eb(0x01)
	int32_t FontSize; // 0x14ec(0x04)
	bool ShearText; // 0x14f0(0x01)

	void PreConstruct(bool IsDesignTime); // Function RichTextButton.RichTextButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_RichTextButton(int32_t EntryPoint); // Function RichTextButton.RichTextButton_C.ExecuteUbergraph_RichTextButton // (Final|UbergraphFunction) // @ game+0xd67374
};

