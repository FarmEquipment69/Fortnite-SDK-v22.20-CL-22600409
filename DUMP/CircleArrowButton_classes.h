// WidgetBlueprintGeneratedClass CircleArrowButton.CircleArrowButton_C
// Size: 0x14fa (Inherited: 0x1480)
struct UCircleArrowButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1480(0x08)
	struct UWidgetAnimation* Click; // 0x1488(0x08)
	struct UWidgetAnimation* Hover; // 0x1490(0x08)
	struct UImage* Image_Arrow; // 0x1498(0x08)
	struct UImage* Image_Shadow; // 0x14a0(0x08)
	struct UOverlay* Overlay_ButtonContainer; // 0x14a8(0x08)
	struct USizeBox* Sizebox_InputAction; // 0x14b0(0x08)
	bool Flip; // 0x14b8(0x01)
	char pad_14B9[0x3]; // 0x14b9(0x03)
	struct FLinearColor ArrowColor; // 0x14bc(0x10)
	struct FLinearColor ShadowColor; // 0x14cc(0x10)
	char pad_14DC[0x4]; // 0x14dc(0x04)
	double EdgeSoftness; // 0x14e0(0x08)
	struct FLinearColor HoverColor; // 0x14e8(0x10)
	bool UseShadow; // 0x14f8(0x01)
	bool InputActionOnSide; // 0x14f9(0x01)

	void UpdateArrowColor(struct FLinearColor Color, struct FLinearColor HoverColor); // Function CircleArrowButton.CircleArrowButton_C.UpdateArrowColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function CircleArrowButton.CircleArrowButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function CircleArrowButton.CircleArrowButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function CircleArrowButton.CircleArrowButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnClicked(); // Function CircleArrowButton.CircleArrowButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_CircleArrowButton(int32_t EntryPoint); // Function CircleArrowButton.CircleArrowButton_C.ExecuteUbergraph_CircleArrowButton // (Final|UbergraphFunction) // @ game+0xd67374
};

