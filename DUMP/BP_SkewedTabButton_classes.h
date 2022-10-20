// WidgetBlueprintGeneratedClass BP_SkewedTabButton.BP_SkewedTabButton_C
// Size: 0x14e8 (Inherited: 0x14b0)
struct UBP_SkewedTabButton_C : UAthenaSkewedTabButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14b0(0x08)
	struct UWidgetAnimation* Unhovered; // 0x14b8(0x08)
	struct UWidgetAnimation* Hovered; // 0x14c0(0x08)
	struct UWidgetAnimation* Selected; // 0x14c8(0x08)
	struct UImage* No-Count-1; // 0x14d0(0x08)
	struct FLinearColor RGB1 Text Color; // 0x14d8(0x10)

	void SetTextColor(struct FLinearColor Color); // Function BP_SkewedTabButton.BP_SkewedTabButton_C.SetTextColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function BP_SkewedTabButton.BP_SkewedTabButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function BP_SkewedTabButton.BP_SkewedTabButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnSelected(); // Function BP_SkewedTabButton.BP_SkewedTabButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnDeselected(); // Function BP_SkewedTabButton.BP_SkewedTabButton_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function BP_SkewedTabButton.BP_SkewedTabButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BP_SkewedTabButton(int32_t EntryPoint); // Function BP_SkewedTabButton.BP_SkewedTabButton_C.ExecuteUbergraph_BP_SkewedTabButton // (Final|UbergraphFunction) // @ game+0xd67374
};

