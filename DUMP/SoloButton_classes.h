// WidgetBlueprintGeneratedClass SoloButton.SoloButton_C
// Size: 0x14ea (Inherited: 0x1480)
struct USoloButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1480(0x08)
	struct UWidgetAnimation* Pressed; // 0x1488(0x08)
	struct UWidgetAnimation* Hover; // 0x1490(0x08)
	struct UBorder* Border_Container; // 0x1498(0x08)
	struct UImage* ButtonBacking; // 0x14a0(0x08)
	struct USizeBox* SizeBox_Control; // 0x14a8(0x08)
	struct UCommonTextBlock* Text_ButtonAction; // 0x14b0(0x08)
	struct FText Button Description; // 0x14b8(0x18)
	bool FontSizeOveride; // 0x14d0(0x01)
	char pad_14D1[0x3]; // 0x14d1(0x03)
	int32_t FontSize; // 0x14d4(0x04)
	struct FMargin Padding Overide; // 0x14d8(0x10)
	bool PaddingOveride; // 0x14e8(0x01)
	bool IsDisabled; // 0x14e9(0x01)

	void SetText(struct FText Text); // Function SoloButton.SoloButton_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleSize(); // Function SoloButton.SoloButton_C.HandleSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function SoloButton.SoloButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function SoloButton.SoloButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function SoloButton.SoloButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function SoloButton.SoloButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnClicked(); // Function SoloButton.SoloButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnDisabled(); // Function SoloButton.SoloButton_C.BP_OnDisabled // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnEnabled(); // Function SoloButton.SoloButton_C.BP_OnEnabled // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SoloButton(int32_t EntryPoint); // Function SoloButton.SoloButton_C.ExecuteUbergraph_SoloButton // (Final|UbergraphFunction) // @ game+0xd67374
};

