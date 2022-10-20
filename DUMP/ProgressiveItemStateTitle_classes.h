// WidgetBlueprintGeneratedClass ProgressiveItemStateTitle.ProgressiveItemStateTitle_C
// Size: 0x394 (Inherited: 0x2b8)
struct UProgressiveItemStateTitle_C : UFortProgressiveItemStateTitleWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UCrewCrown_Animated_C* CrewCrown_Animated; // 0x2c0(0x08)
	struct UProgressiveTagsBase_C* ProgressiveTags_Benefits; // 0x2c8(0x08)
	struct UProgressiveTagsBase_C* ProgressiveTags_Stages; // 0x2d0(0x08)
	struct UProgressiveTagsBase_C* ProgressiveTags_Subscribed; // 0x2d8(0x08)
	struct UCommonTextBlock* Text_Subheading; // 0x2e0(0x08)
	struct UCommonTextBlock* Text_Title; // 0x2e8(0x08)
	struct FLinearColor Subbed Dark Green; // 0x2f0(0x10)
	struct FText Text; // 0x300(0x18)
	bool Show Multi-Benefits tag; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)
	struct FText Title Text; // 0x320(0x18)
	struct FSlateColor Unsubscribed Subheader Color; // 0x338(0x14)
	struct FSlateColor Subscibed Subheader Color; // 0x34c(0x14)
	struct FSlateColor Unsubbed White; // 0x360(0x14)
	struct FLinearColor Subbed Light Green; // 0x374(0x10)
	struct FLinearColor Unsubbed Pink BG; // 0x384(0x10)

	void Update Subscribed Tag(bool Subscribed); // Function ProgressiveItemStateTitle.ProgressiveItemStateTitle_C.Update Subscribed Tag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Update Subheading(struct FText Text, bool Subscribed); // Function ProgressiveItemStateTitle.ProgressiveItemStateTitle_C.Update Subheading // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Update Title Text(); // Function ProgressiveItemStateTitle.ProgressiveItemStateTitle_C.Update Title Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Update MultiBenefits Tag(bool Index); // Function ProgressiveItemStateTitle.ProgressiveItemStateTitle_C.Update MultiBenefits Tag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Update Stages Tag(bool Subscribed, int32_t Current Stage, int32_t Max Stage); // Function ProgressiveItemStateTitle.ProgressiveItemStateTitle_C.Update Stages Tag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnSetHeaderInfo(struct FText& Subheading, bool bSubscribed, int32_t UnlockedStages, int32_t MaxStages); // Function ProgressiveItemStateTitle.ProgressiveItemStateTitle_C.BP_OnSetHeaderInfo // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function ProgressiveItemStateTitle.ProgressiveItemStateTitle_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ProgressiveItemStateTitle(int32_t EntryPoint); // Function ProgressiveItemStateTitle.ProgressiveItemStateTitle_C.ExecuteUbergraph_ProgressiveItemStateTitle // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

