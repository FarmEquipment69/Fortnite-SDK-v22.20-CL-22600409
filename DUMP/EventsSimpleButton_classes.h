// WidgetBlueprintGeneratedClass EventsSimpleButton.EventsSimpleButton_C
// Size: 0x1560 (Inherited: 0x1480)
struct UEventsSimpleButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1480(0x08)
	struct UWidgetAnimation* Pressed; // 0x1488(0x08)
	struct UWidgetAnimation* Hover; // 0x1490(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget; // 0x1498(0x08)
	struct UCommonBorder* CommonBorder_VariablePadding; // 0x14a0(0x08)
	struct UImage* Image_ButtonTop; // 0x14a8(0x08)
	struct UImage* Image_Shadow; // 0x14b0(0x08)
	struct UOverlay* Overlay_ButtonBG; // 0x14b8(0x08)
	bool ToUpper; // 0x14c0(0x01)
	bool XL; // 0x14c1(0x01)
	char pad_14C2[0x6]; // 0x14c2(0x06)
	struct FText ButtonNameText; // 0x14c8(0x18)
	struct TMap<struct FString, struct FLinearColor> Color; // 0x14e0(0x50)
	struct FLinearColor GamepadButtonTextColor; // 0x1530(0x10)
	struct FLinearColor DefaultTextColor; // 0x1540(0x10)
	struct FVector2D ButtonPadding; // 0x1550(0x10)

	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function EventsSimpleButton.EventsSimpleButton_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function EventsSimpleButton.EventsSimpleButton_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function EventsSimpleButton.EventsSimpleButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function EventsSimpleButton.EventsSimpleButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function EventsSimpleButton.EventsSimpleButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnClicked(); // Function EventsSimpleButton.EventsSimpleButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad); // Function EventsSimpleButton.EventsSimpleButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function EventsSimpleButton.EventsSimpleButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void InputTypeChanged(bool bUsingGamepad); // Function EventsSimpleButton.EventsSimpleButton_C.InputTypeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateColor(struct FString ParameterName, struct FLinearColor New Color); // Function EventsSimpleButton.EventsSimpleButton_C.UpdateColor // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_EventsSimpleButton(int32_t EntryPoint); // Function EventsSimpleButton.EventsSimpleButton_C.ExecuteUbergraph_EventsSimpleButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

