// WidgetBlueprintGeneratedClass Tooltip-Custom-S.Tooltip-Custom-S_C
// Size: 0x328 (Inherited: 0x2b8)
struct UTooltip-Custom-S_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UImage* <hr>; // 0x2c0(0x08)
	struct UHorizontalBox* Body HBox; // 0x2c8(0x08)
	struct UNamedSlot* Content Slot; // 0x2d0(0x08)
	struct UHorizontalBox* Header HBox; // 0x2d8(0x08)
	struct UImage* Icon-Header; // 0x2e0(0x08)
	struct USpacer* Spacer-Header; // 0x2e8(0x08)
	struct USpacer* Spacer-Icon; // 0x2f0(0x08)
	struct UTextBlock* Text-Header; // 0x2f8(0x08)
	struct FText HeaderText; // 0x300(0x18)
	struct USlateBrushAsset* Icon Brush; // 0x318(0x08)
	struct UUserWidget* ContentWidget; // 0x320(0x08)

	struct FSlateBrush Get Icon Brush(); // Function Tooltip-Custom-S.Tooltip-Custom-S_C.Get Icon Brush // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	struct FText Get Header Text(); // Function Tooltip-Custom-S.Tooltip-Custom-S_C.Get Header Text // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	struct FText Get Body Text(); // Function Tooltip-Custom-S.Tooltip-Custom-S_C.Get Body Text // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void Construct(); // Function Tooltip-Custom-S.Tooltip-Custom-S_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_Tooltip-Custom-S(int32_t EntryPoint); // Function Tooltip-Custom-S.Tooltip-Custom-S_C.ExecuteUbergraph_Tooltip-Custom-S // (Final|UbergraphFunction) // @ game+0xd67374
};

