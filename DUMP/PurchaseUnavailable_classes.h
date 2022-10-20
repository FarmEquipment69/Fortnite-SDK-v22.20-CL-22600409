// WidgetBlueprintGeneratedClass PurchaseUnavailable.PurchaseUnavailable_C
// Size: 0x598 (Inherited: 0x578)
struct UPurchaseUnavailable_C : UFortPurchaseUnavailableModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x578(0x08)
	struct UWidgetAnimation* Intro; // 0x580(0x08)
	struct UCommonRichTextBlock* RichText_Details; // 0x588(0x08)
	struct UCommonRichTextBlock* RichText_HeaderText; // 0x590(0x08)

	void OnUpdateTextStyle(struct FText& OfferDisplayName); // Function PurchaseUnavailable.PurchaseUnavailable_C.OnUpdateTextStyle // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_PurchaseUnavailable(int32_t EntryPoint); // Function PurchaseUnavailable.PurchaseUnavailable_C.ExecuteUbergraph_PurchaseUnavailable // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

