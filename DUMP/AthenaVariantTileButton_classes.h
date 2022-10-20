// WidgetBlueprintGeneratedClass AthenaVariantTileButton.AthenaVariantTileButton_C
// Size: 0x1518 (Inherited: 0x1500)
struct UAthenaVariantTileButton_C : UFortVariantTileButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1500(0x08)
	struct UWidgetAnimation* WarningPulse; // 0x1508(0x08)
	struct UImage* Image_Conflict; // 0x1510(0x08)

	void OnListItemObjectSet(struct UObject* ListItemObject); // Function AthenaVariantTileButton.AthenaVariantTileButton_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnClicked(); // Function AthenaVariantTileButton.AthenaVariantTileButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_AthenaVariantTileButton(int32_t EntryPoint); // Function AthenaVariantTileButton.AthenaVariantTileButton_C.ExecuteUbergraph_AthenaVariantTileButton // (Final|UbergraphFunction) // @ game+0xd67374
};

