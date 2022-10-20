// WidgetBlueprintGeneratedClass Tooltip-Basic-S.Tooltip-Basic-S_C
// Size: 0x368 (Inherited: 0x2e0)
struct UTooltip-Basic-S_C : UCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UImage* <hr>; // 0x2e8(0x08)
	struct UHorizontalBox* Body HBox; // 0x2f0(0x08)
	struct UHorizontalBox* Header HBox; // 0x2f8(0x08)
	struct UImage* Icon-Header; // 0x300(0x08)
	struct USpacer* Spacer-Icon; // 0x308(0x08)
	struct UCommonTextBlock* Text-Body; // 0x310(0x08)
	struct UCommonTextBlock* Text-Header; // 0x318(0x08)
	struct FText BodyText; // 0x320(0x18)
	struct FText HeaderText; // 0x338(0x18)
	struct USlateBrushAsset* Icon Brush; // 0x350(0x08)
	struct UCommonTextStyle* Body Style; // 0x358(0x08)
	struct UCommonTextStyle* Header Style; // 0x360(0x08)

	struct FSlateBrush Get Icon Brush(); // Function Tooltip-Basic-S.Tooltip-Basic-S_C.Get Icon Brush // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	struct FText Get Header Text(); // Function Tooltip-Basic-S.Tooltip-Basic-S_C.Get Header Text // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	struct FText Get Body Text(); // Function Tooltip-Basic-S.Tooltip-Basic-S_C.Get Body Text // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void Construct(); // Function Tooltip-Basic-S.Tooltip-Basic-S_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_Tooltip-Basic-S(int32_t EntryPoint); // Function Tooltip-Basic-S.Tooltip-Basic-S_C.ExecuteUbergraph_Tooltip-Basic-S // (Final|UbergraphFunction) // @ game+0xd67374
};

