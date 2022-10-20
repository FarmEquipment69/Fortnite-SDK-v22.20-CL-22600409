// WidgetBlueprintGeneratedClass AthenaCustomizationPickerSortAndFilterBlade.AthenaCustomizationPickerSortAndFilterBlade_C
// Size: 0x3d0 (Inherited: 0x3b0)
struct UAthenaCustomizationPickerSortAndFilterBlade_C : UAthenaCustomizationPickerSortAndFilterBlade {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b0(0x08)
	struct UWidgetAnimation* Anim_Open; // 0x3b8(0x08)
	struct UCommonTextBlock* FilterByLabel; // 0x3c0(0x08)
	struct UCommonTextBlock* SortByLabel; // 0x3c8(0x08)

	struct UWidget* NavigateDownFromSortButtons(enum class EUINavigation Navigation); // Function AthenaCustomizationPickerSortAndFilterBlade.AthenaCustomizationPickerSortAndFilterBlade_C.NavigateDownFromSortButtons // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	struct UWidget* NavigateUpFromFilterButtons(enum class EUINavigation Navigation); // Function AthenaCustomizationPickerSortAndFilterBlade.AthenaCustomizationPickerSortAndFilterBlade_C.NavigateUpFromFilterButtons // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Finished_B61EB04E44460529171509A5523A917A(); // Function AthenaCustomizationPickerSortAndFilterBlade.AthenaCustomizationPickerSortAndFilterBlade_C.Finished_B61EB04E44460529171509A5523A917A // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnBladeOpen(); // Function AthenaCustomizationPickerSortAndFilterBlade.AthenaCustomizationPickerSortAndFilterBlade_C.BP_OnBladeOpen // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnBladeClose(); // Function AthenaCustomizationPickerSortAndFilterBlade.AthenaCustomizationPickerSortAndFilterBlade_C.BP_OnBladeClose // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnSortOrFilterButtonCreated(struct UCommonButtonBase* NewButton); // Function AthenaCustomizationPickerSortAndFilterBlade.AthenaCustomizationPickerSortAndFilterBlade_C.BP_OnSortOrFilterButtonCreated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_SetSortOrFilterButtonDisplayName(struct UCommonButtonBase* SortOrFilterButton, struct FText& DisplayName); // Function AthenaCustomizationPickerSortAndFilterBlade.AthenaCustomizationPickerSortAndFilterBlade_C.BP_SetSortOrFilterButtonDisplayName // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void BP_HighlightSortOrFilterButton(struct UCommonButtonBase* SortOrFilterButton, bool bHighlight); // Function AthenaCustomizationPickerSortAndFilterBlade.AthenaCustomizationPickerSortAndFilterBlade_C.BP_HighlightSortOrFilterButton // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnArchiveFilteringSet(bool bEnabled); // Function AthenaCustomizationPickerSortAndFilterBlade.AthenaCustomizationPickerSortAndFilterBlade_C.BP_OnArchiveFilteringSet // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void UpdateSortAndFilterButtons(bool bBladeOpen); // Function AthenaCustomizationPickerSortAndFilterBlade.AthenaCustomizationPickerSortAndFilterBlade_C.UpdateSortAndFilterButtons // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_AthenaCustomizationPickerSortAndFilterBlade(int32_t EntryPoint); // Function AthenaCustomizationPickerSortAndFilterBlade.AthenaCustomizationPickerSortAndFilterBlade_C.ExecuteUbergraph_AthenaCustomizationPickerSortAndFilterBlade // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

