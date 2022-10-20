// WidgetBlueprintGeneratedClass FeatTimelineListEntry.FeatTimelineListEntry_C
// Size: 0x3a9 (Inherited: 0x340)
struct UFeatTimelineListEntry_C : UAthenaFeatTimelineListEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct UWidgetAnimation* OnActivated; // 0x348(0x08)
	struct UWidgetAnimation* OnShowCompleted; // 0x350(0x08)
	struct UWidgetAnimation* OnHover; // 0x358(0x08)
	struct UBorder* AnimBoundTileBorder; // 0x360(0x08)
	struct UImage* burst; // 0x368(0x08)
	struct UImage* Default; // 0x370(0x08)
	struct UBorder* EntryVisbilityBorder; // 0x378(0x08)
	struct UCommonTextBlock* SeasonNumber; // 0x380(0x08)
	struct USizeBox* SizeBox_Contents; // 0x388(0x08)
	struct USizeBox* SizeBox_Date; // 0x390(0x08)
	double TimespanMaxWidth; // 0x398(0x08)
	double TimespanWidthPerDay; // 0x3a0(0x08)
	bool bWaitingForCompletedTimer; // 0x3a8(0x01)

	void SetSeasonStyle(); // Function FeatTimelineListEntry.FeatTimelineListEntry_C.SetSeasonStyle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnFeatInfoSet(int32_t NumFeatsOnDay, int32_t IdxOnDay); // Function FeatTimelineListEntry.FeatTimelineListEntry_C.OnFeatInfoSet // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnTimespanInfoSet(int32_t NumDays); // Function FeatTimelineListEntry.FeatTimelineListEntry_C.OnTimespanInfoSet // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function FeatTimelineListEntry.FeatTimelineListEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnFeatCompletedThisSession(); // Function FeatTimelineListEntry.FeatTimelineListEntry_C.OnFeatCompletedThisSession // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void (); // Function FeatTimelineListEntry.FeatTimelineListEntry_C. // (BlueprintEvent) // @ game+0xd67374
	void OnWaitingForCompletedTimer(); // Function FeatTimelineListEntry.FeatTimelineListEntry_C.OnWaitingForCompletedTimer // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BndEvt__SimpleButton_ClickArea_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function FeatTimelineListEntry.FeatTimelineListEntry_C.BndEvt__SimpleButton_ClickArea_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__SimpleButton_ClickArea_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function FeatTimelineListEntry.FeatTimelineListEntry_C.BndEvt__SimpleButton_ClickArea_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void HoverFeat(); // Function FeatTimelineListEntry.FeatTimelineListEntry_C.HoverFeat // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void UnHoverFeat(); // Function FeatTimelineListEntry.FeatTimelineListEntry_C.UnHoverFeat // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_FeatTimelineListEntry(int32_t EntryPoint); // Function FeatTimelineListEntry.FeatTimelineListEntry_C.ExecuteUbergraph_FeatTimelineListEntry // (Final|UbergraphFunction) // @ game+0xd67374
};

