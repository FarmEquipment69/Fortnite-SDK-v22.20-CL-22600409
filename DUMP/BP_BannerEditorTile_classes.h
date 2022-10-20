// WidgetBlueprintGeneratedClass BP_BannerEditorTile.BP_BannerEditorTile_C
// Size: 0x14e0 (Inherited: 0x1490)
struct UBP_BannerEditorTile_C : UFortPlayerProfileBannerEditorTile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1490(0x08)
	struct UImage* ColorImage; // 0x1498(0x08)
	struct UCommonWidgetSwitcherLegacy* ; // 0x14a0(0x08)
	struct UImage* IconImage; // 0x14a8(0x08)
	struct UCommonLoadGuard* IconLoadGuard; // 0x14b0(0x08)
	struct UImage* Image_BannerEditBorder; // 0x14b8(0x08)
	struct UNormalBangWrapper_C* NormalBangWrapper; // 0x14c0(0x08)
	struct UMaterialInstanceDynamic* ColorMID; // 0x14c8(0x08)
	struct FMulticastInlineDelegate BannerTileBangUpdated; // 0x14d0(0x10)

	void Mark Item As Seen(); // Function BP_BannerEditorTile.BP_BannerEditorTile_C.Mark Item As Seen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Update Bang State(); // Function BP_BannerEditorTile.BP_BannerEditorTile_C.Update Bang State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function BP_BannerEditorTile.BP_BannerEditorTile_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function BP_BannerEditorTile.BP_BannerEditorTile_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void HandleBannerIconLoadGuardFinished(struct UObject* Object); // Function BP_BannerEditorTile.BP_BannerEditorTile_C.HandleBannerIconLoadGuardFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnSelected(); // Function BP_BannerEditorTile.BP_BannerEditorTile_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function BP_BannerEditorTile.BP_BannerEditorTile_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BP_BannerEditorTile(int32_t EntryPoint); // Function BP_BannerEditorTile.BP_BannerEditorTile_C.ExecuteUbergraph_BP_BannerEditorTile // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void BannerTileBangUpdated__DelegateSignature(); // Function BP_BannerEditorTile.BP_BannerEditorTile_C.BannerTileBangUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

