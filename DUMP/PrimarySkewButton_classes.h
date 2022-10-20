// WidgetBlueprintGeneratedClass PrimarySkewButton.PrimarySkewButton_C
// Size: 0x14d0 (Inherited: 0x1480)
struct UPrimarySkewButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1480(0x08)
	struct UWidgetAnimation* Pressed; // 0x1488(0x08)
	struct UWidgetAnimation* Hover; // 0x1490(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget; // 0x1498(0x08)
	struct UImage* Image_ButtonTop; // 0x14a0(0x08)
	struct UImage* Image_Shadow; // 0x14a8(0x08)
	bool ToUpper; // 0x14b0(0x01)
	bool XL; // 0x14b1(0x01)
	char pad_14B2[0x6]; // 0x14b2(0x06)
	struct FText ButtonNameText; // 0x14b8(0x18)

	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function PrimarySkewButton.PrimarySkewButton_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function PrimarySkewButton.PrimarySkewButton_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function PrimarySkewButton.PrimarySkewButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function PrimarySkewButton.PrimarySkewButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function PrimarySkewButton.PrimarySkewButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnClicked(); // Function PrimarySkewButton.PrimarySkewButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad); // Function PrimarySkewButton.PrimarySkewButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function PrimarySkewButton.PrimarySkewButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_PrimarySkewButton(int32_t EntryPoint); // Function PrimarySkewButton.PrimarySkewButton_C.ExecuteUbergraph_PrimarySkewButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

