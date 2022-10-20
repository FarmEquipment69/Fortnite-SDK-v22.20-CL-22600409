// WidgetBlueprintGeneratedClass SkewButton.SkewButton_C
// Size: 0x14e3 (Inherited: 0x1480)
struct USkewButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1480(0x08)
	struct UWidgetAnimation* Released; // 0x1488(0x08)
	struct UWidgetAnimation* Pressed; // 0x1490(0x08)
	struct UWidgetAnimation* Hover; // 0x1498(0x08)
	struct UImage* ImageButtonFill; // 0x14a0(0x08)
	struct UImage* ImageShadow; // 0x14a8(0x08)
	struct UNamedSlot* NamedSlot_ButtonContent; // 0x14b0(0x08)
	struct UOverlay* Overlay_SkewBrushes; // 0x14b8(0x08)
	struct FLinearColor ButtonColor; // 0x14c0(0x10)
	struct FLinearColor HoverColor; // 0x14d0(0x10)
	bool Chip; // 0x14e0(0x01)
	bool Skew; // 0x14e1(0x01)
	bool NoHoverColor; // 0x14e2(0x01)

	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function SkewButton.SkewButton_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function SkewButton.SkewButton_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function SkewButton.SkewButton_C.OnTouchEnded // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function SkewButton.SkewButton_C.OnTouchStarted // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function SkewButton.SkewButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function SkewButton.SkewButton_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function SkewButton.SkewButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function SkewButton.SkewButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function SkewButton.SkewButton_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void BP_OnClicked(); // Function SkewButton.SkewButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function SkewButton.SkewButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SkewButton(int32_t EntryPoint); // Function SkewButton.SkewButton_C.ExecuteUbergraph_SkewButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

