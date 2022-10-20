// WidgetBlueprintGeneratedClass MTXButton.MTXButton_C
// Size: 0x14d0 (Inherited: 0x1490)
struct UMTXButton_C : UFortMTXButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1490(0x08)
	struct UWidgetAnimation* Hover_Grow; // 0x1498(0x08)
	struct UWidgetAnimation* Hover_Bounce; // 0x14a0(0x08)
	struct UWidgetAnimation* Hover; // 0x14a8(0x08)
	struct UBorder* AmountColor; // 0x14b0(0x08)
	struct UImage* ButtonBacking; // 0x14b8(0x08)
	struct UImage* Image_Vbucks; // 0x14c0(0x08)
	struct USizeBox* VariableSize; // 0x14c8(0x08)

	void Construct(); // Function MTXButton.MTXButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function MTXButton.MTXButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function MTXButton.MTXButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_MTXButton(int32_t EntryPoint); // Function MTXButton.MTXButton_C.ExecuteUbergraph_MTXButton // (Final|UbergraphFunction) // @ game+0xd67374
};

