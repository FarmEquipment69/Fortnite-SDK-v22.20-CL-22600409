// WidgetBlueprintGeneratedClass PageNavigatorButton.PageNavigatorButton_C
// Size: 0x1491 (Inherited: 0x1440)
struct UPageNavigatorButton_C : UFortPageNavigationButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1440(0x08)
	struct UWidgetAnimation* FadeOutBacking; // 0x1448(0x08)
	struct UWidgetAnimation* Translate_Bottom; // 0x1450(0x08)
	struct UWidgetAnimation* Translate_Top; // 0x1458(0x08)
	struct UWidgetAnimation* Hover; // 0x1460(0x08)
	struct UImage* Backing; // 0x1468(0x08)
	struct UBorder* Border_button; // 0x1470(0x08)
	struct UBorder* BorderButton; // 0x1478(0x08)
	struct UBorder* GridBoundBorder; // 0x1480(0x08)
	struct UImage* IMG_Arrow; // 0x1488(0x08)
	bool bIsTop; // 0x1490(0x01)

	void Set colors(); // Function PageNavigatorButton.PageNavigatorButton_C.Set colors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function PageNavigatorButton.PageNavigatorButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function PageNavigatorButton.PageNavigatorButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function PageNavigatorButton.PageNavigatorButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Set Button colors(struct FLinearColor Color1, struct FLinearColor Color2, struct FLinearColor Color3, struct FLinearColor Color4, struct FLinearColor Color5); // Function PageNavigatorButton.PageNavigatorButton_C.Set Button colors // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_PageNavigatorButton(int32_t EntryPoint); // Function PageNavigatorButton.PageNavigatorButton_C.ExecuteUbergraph_PageNavigatorButton // (Final|UbergraphFunction) // @ game+0xd67374
};

