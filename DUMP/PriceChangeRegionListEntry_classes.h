// WidgetBlueprintGeneratedClass PriceChangeRegionListEntry.PriceChangeRegionListEntry_C
// Size: 0x300 (Inherited: 0x2b8)
struct UPriceChangeRegionListEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UBorder* ; // 0x2c0(0x08)
	struct UCommonRichTextBlock* Column1Text; // 0x2c8(0x08)
	struct UCommonRichTextBlock* Column2Text; // 0x2d0(0x08)
	struct UCommonRichTextBlock* Column3Text; // 0x2d8(0x08)
	struct USizeBox* ; // 0x2e0(0x08)
	struct FText Text; // 0x2e8(0x18)

	void SetItem(struct FCrewTableRow CrewTableRow); // Function PriceChangeRegionListEntry.PriceChangeRegionListEntry_C.SetItem // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_PriceChangeRegionListEntry(int32_t EntryPoint); // Function PriceChangeRegionListEntry.PriceChangeRegionListEntry_C.ExecuteUbergraph_PriceChangeRegionListEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

