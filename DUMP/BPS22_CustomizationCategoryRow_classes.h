// WidgetBlueprintGeneratedClass BPS22_CustomizationCategoryRow.BPS22_CustomizationCategoryRow_C
// Size: 0x3bd (Inherited: 0x370)
struct UBPS22_CustomizationCategoryRow_C : UFortBattlePassCustomSkinCategoryTile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct UImage* Image_Lock; // 0x378(0x08)
	struct UImage* Image_Progress; // 0x380(0x08)
	struct UImage* Image_Progress_Locked; // 0x388(0x08)
	struct UProgressBar* ; // 0x390(0x08)
	struct UCommonVisibilitySwitcher* Switcher_State; // 0x398(0x08)
	struct UCommonRichTextBlock* Text_Progress; // 0x3a0(0x08)
	struct UCommonRichTextBlock* Text_Progress_Locked; // 0x3a8(0x08)
	struct UCommonRichTextBlock* Text_UnlockCondition; // 0x3b0(0x08)
	int32_t Number to unlock; // 0x3b8(0x04)
	bool Is locked; // 0x3bc(0x01)

	void OnOwnedTilesUpdated(int32_t CurrentlyOwnedRewards, int32_t TotalRewards, float CategoryProgress); // Function BPS22_CustomizationCategoryRow.BPS22_CustomizationCategoryRow_C.OnOwnedTilesUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnLockedProgressUpdated(int32_t CurrentlyOwnedBeforeCategory, int32_t TotalRewardsBeforeCategory, float LockedProgress); // Function BPS22_CustomizationCategoryRow.BPS22_CustomizationCategoryRow_C.OnLockedProgressUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnLockedStateChanged(bool bCategoryLocked); // Function BPS22_CustomizationCategoryRow.BPS22_CustomizationCategoryRow_C.OnLockedStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BPS22_CustomizationCategoryRow(int32_t EntryPoint); // Function BPS22_CustomizationCategoryRow.BPS22_CustomizationCategoryRow_C.ExecuteUbergraph_BPS22_CustomizationCategoryRow // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

