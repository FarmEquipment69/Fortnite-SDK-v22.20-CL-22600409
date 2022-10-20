// WidgetBlueprintGeneratedClass ProgressiveSetDetails.ProgressiveSetDetails_C
// Size: 0x368 (Inherited: 0x2e8)
struct UProgressiveSetDetails_C : UFortProgressiveSetDetailsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UProgressiveTagsBase_C* Tag_ItemSetState; // 0x2f0(0x08)
	struct UCommonTextBlock* Text_HeaderSetName; // 0x2f8(0x08)
	struct UCommonTextBlock* Text_NoTimeLimit; // 0x300(0x08)
	struct FText Text; // 0x308(0x18)
	struct FLinearColor Completed BG; // 0x320(0x10)
	struct FLinearColor Default BG; // 0x330(0x10)
	struct FSlateColor Completed FG; // 0x340(0x14)
	struct FSlateColor Default FG; // 0x354(0x14)

	void Update Tag(struct FText& Expiring Text, bool Completed); // Function ProgressiveSetDetails.ProgressiveSetDetails_C.Update Tag // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnUpdateSetDetails(struct FText& SetName, struct FText& ExpiringText, bool bCompleted); // Function ProgressiveSetDetails.ProgressiveSetDetails_C.BP_OnUpdateSetDetails // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ProgressiveSetDetails(int32_t EntryPoint); // Function ProgressiveSetDetails.ProgressiveSetDetails_C.ExecuteUbergraph_ProgressiveSetDetails // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

