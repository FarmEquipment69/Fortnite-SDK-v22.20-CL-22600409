// WidgetBlueprintGeneratedClass DivisionIconButton.DivisionIconButton_C
// Size: 0x14a8 (Inherited: 0x1490)
struct UDivisionIconButton_C : UFortShowdownDivisionRankButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1490(0x08)
	struct UWidgetAnimation* Selected; // 0x1498(0x08)
	struct UImage* Image_Hover; // 0x14a0(0x08)

	void OnRankButtonSelected(bool bIsSelected); // Function DivisionIconButton.DivisionIconButton_C.OnRankButtonSelected // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function DivisionIconButton.DivisionIconButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function DivisionIconButton.DivisionIconButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_DivisionIconButton(int32_t EntryPoint); // Function DivisionIconButton.DivisionIconButton_C.ExecuteUbergraph_DivisionIconButton // (Final|UbergraphFunction) // @ game+0xd67374
};

