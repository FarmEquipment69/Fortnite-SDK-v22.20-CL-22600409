// WidgetBlueprintGeneratedClass SortAndFilterButton.SortAndFilterButton_C
// Size: 0x14d3 (Inherited: 0x1480)
struct USortAndFilterButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1480(0x08)
	struct UWidgetAnimation* ShowPipOutline; // 0x1488(0x08)
	struct UWidgetAnimation* Deselected; // 0x1490(0x08)
	struct UWidgetAnimation* Selected; // 0x1498(0x08)
	struct UWidgetAnimation* Hover; // 0x14a0(0x08)
	struct UBorder* Border_Highlight; // 0x14a8(0x08)
	struct UCommonTextBlock* Text_ButtonAction; // 0x14b0(0x08)
	struct FText Button Description; // 0x14b8(0x18)
	bool IsSelected; // 0x14d0(0x01)
	bool bLastVisibleSelectedValue; // 0x14d1(0x01)
	bool bIsBladeIsOpen; // 0x14d2(0x01)

	void SetHighlightBorderVisibility(bool bVisible); // Function SortAndFilterButton.SortAndFilterButton_C.SetHighlightBorderVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SnapToEndOfAnimation(struct UWidgetAnimation* Animation, enum class EUMGSequencePlayMode PlayMode); // Function SortAndFilterButton.SortAndFilterButton_C.SnapToEndOfAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ResetAnimations(); // Function SortAndFilterButton.SortAndFilterButton_C.ResetAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetText(struct FText Text); // Function SortAndFilterButton.SortAndFilterButton_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function SortAndFilterButton.SortAndFilterButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function SortAndFilterButton.SortAndFilterButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnSelected(); // Function SortAndFilterButton.SortAndFilterButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnDeselected(); // Function SortAndFilterButton.SortAndFilterButton_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function SortAndFilterButton.SortAndFilterButton_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function SortAndFilterButton.SortAndFilterButton_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void HandleBladeOpenChanged(bool bBladeOpen); // Function SortAndFilterButton.SortAndFilterButton_C.HandleBladeOpenChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SortAndFilterButton(int32_t EntryPoint); // Function SortAndFilterButton.SortAndFilterButton_C.ExecuteUbergraph_SortAndFilterButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

