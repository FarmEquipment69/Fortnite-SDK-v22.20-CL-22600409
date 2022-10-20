// WidgetBlueprintGeneratedClass CloseButton.CloseButton_C
// Size: 0x1509 (Inherited: 0x1490)
struct UCloseButton_C : UBacchusCloseButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1490(0x08)
	struct UWidgetAnimation* Unhover; // 0x1498(0x08)
	struct UWidgetAnimation* Pressed; // 0x14a0(0x08)
	struct UWidgetAnimation* Hover; // 0x14a8(0x08)
	struct UBorder* Border_Container; // 0x14b0(0x08)
	struct UImage* ButtonBacking; // 0x14b8(0x08)
	struct UImage* CloseIcon; // 0x14c0(0x08)
	struct USizeBox* SizeBox_Control; // 0x14c8(0x08)
	struct UCommonTextBlock* Text_ButtonAction; // 0x14d0(0x08)
	struct FText Button Description; // 0x14d8(0x18)
	bool FontSizeOveride; // 0x14f0(0x01)
	char pad_14F1[0x3]; // 0x14f1(0x03)
	int32_t FontSize; // 0x14f4(0x04)
	struct FMargin Padding Overide; // 0x14f8(0x10)
	bool PaddingOveride; // 0x1508(0x01)

	void SetText(struct FText Text); // Function CloseButton.CloseButton_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleSize(); // Function CloseButton.CloseButton_C.HandleSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function CloseButton.CloseButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function CloseButton.CloseButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_CloseButton(int32_t EntryPoint); // Function CloseButton.CloseButton_C.ExecuteUbergraph_CloseButton // (Final|UbergraphFunction) // @ game+0xd67374
};

