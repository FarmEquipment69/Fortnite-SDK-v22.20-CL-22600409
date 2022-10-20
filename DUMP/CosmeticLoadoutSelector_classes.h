// WidgetBlueprintGeneratedClass CosmeticLoadoutSelector.CosmeticLoadoutSelector_C
// Size: 0x328 (Inherited: 0x308)
struct UCosmeticLoadoutSelector_C : UFortCosmeticLoadoutSelector {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UBorder* Background; // 0x310(0x08)
	struct UCommonActionWidget* Left_InputActionDisplay; // 0x318(0x08)
	struct UCommonActionWidget* Right_InputActionDisplay; // 0x320(0x08)

	void OnLoadoutSet(int32_t Selection); // Function CosmeticLoadoutSelector.CosmeticLoadoutSelector_C.OnLoadoutSet // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnNumLoadoutsFound(int32_t NumLoadouts); // Function CosmeticLoadoutSelector.CosmeticLoadoutSelector_C.OnNumLoadoutsFound // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_CosmeticLoadoutSelector(int32_t EntryPoint); // Function CosmeticLoadoutSelector.CosmeticLoadoutSelector_C.ExecuteUbergraph_CosmeticLoadoutSelector // (Final|UbergraphFunction) // @ game+0xd67374
};

