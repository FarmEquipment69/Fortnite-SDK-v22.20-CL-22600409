// WidgetBlueprintGeneratedClass NoInputActionPipButton.NoInputActionPipButton_C
// Size: 0x1548 (Inherited: 0x1520)
struct UNoInputActionPipButton_C : UFortTextButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1520(0x08)
	struct UWidgetAnimation* Hover; // 0x1528(0x08)
	struct UWidgetAnimation* Selected; // 0x1530(0x08)
	struct UImage* BacchusMobileShadow; // 0x1538(0x08)
	struct UImage* PIP; // 0x1540(0x08)

	void BP_OnDeselected(); // Function NoInputActionPipButton.NoInputActionPipButton_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnSelected(); // Function NoInputActionPipButton.NoInputActionPipButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function NoInputActionPipButton.NoInputActionPipButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function NoInputActionPipButton.NoInputActionPipButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Set Pip Colors(struct FLinearColor Base Color, struct FLinearColor Hover Color, struct FLinearColor Select Color); // Function NoInputActionPipButton.NoInputActionPipButton_C.Set Pip Colors // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_NoInputActionPipButton(int32_t EntryPoint); // Function NoInputActionPipButton.NoInputActionPipButton_C.ExecuteUbergraph_NoInputActionPipButton // (Final|UbergraphFunction) // @ game+0xd67374
};

