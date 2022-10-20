// WidgetBlueprintGeneratedClass PageNavigatorPipButton.PageNavigatorPipButton_C
// Size: 0x1558 (Inherited: 0x1520)
struct UPageNavigatorPipButton_C : UFortTextButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1520(0x08)
	struct UWidgetAnimation* Hover; // 0x1528(0x08)
	struct UWidgetAnimation* Selected; // 0x1530(0x08)
	struct UImage* BacchusMobileShadow; // 0x1538(0x08)
	struct UCommonActionWidget* CommonActionWidget_RightStick; // 0x1540(0x08)
	struct UImage* PIP; // 0x1548(0x08)
	struct UOverlay* RSContainer; // 0x1550(0x08)

	void BP_OnDeselected(); // Function PageNavigatorPipButton.PageNavigatorPipButton_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnSelected(); // Function PageNavigatorPipButton.PageNavigatorPipButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function PageNavigatorPipButton.PageNavigatorPipButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function PageNavigatorPipButton.PageNavigatorPipButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Set Pip Colors(struct FLinearColor Base Color, struct FLinearColor Hover Color, struct FLinearColor Select Color); // Function PageNavigatorPipButton.PageNavigatorPipButton_C.Set Pip Colors // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetRightStickIconAllowed(bool Allowed); // Function PageNavigatorPipButton.PageNavigatorPipButton_C.SetRightStickIconAllowed // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_PageNavigatorPipButton(int32_t EntryPoint); // Function PageNavigatorPipButton.PageNavigatorPipButton_C.ExecuteUbergraph_PageNavigatorPipButton // (Final|UbergraphFunction) // @ game+0xd67374
};

