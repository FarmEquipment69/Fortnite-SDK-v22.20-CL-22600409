// WidgetBlueprintGeneratedClass SidebarLfgState2Widget.SidebarLfgState2Widget_C
// Size: 0x448 (Inherited: 0x420)
struct USidebarLfgState2Widget_C : UFortSidebarLfgState2Widget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x420(0x08)
	struct USidebarLfgState_Image_C* SidebarLfgState_Image; // 0x428(0x08)
	struct USidebarLfgState_RichText_C* SidebarLfgState_RichText; // 0x430(0x08)
	struct TArray<struct UTexture2D*> LfgStateTextureArray; // 0x438(0x10)

	void UpdateButtonVisibility(enum class ELfgState LfgState); // Function SidebarLfgState2Widget.SidebarLfgState2Widget_C.UpdateButtonVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetIcon(enum class ELfgState LfgState, enum class ESlateVisibility Icon Visiblity); // Function SidebarLfgState2Widget.SidebarLfgState2Widget_C.GetIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnStateChanged(enum class ELfgState NewLfgState, enum class ESlateVisibility BodyVisibility, struct FText& StateText, struct FText& StateButton); // Function SidebarLfgState2Widget.SidebarLfgState2Widget_C.OnStateChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnInitialized(); // Function SidebarLfgState2Widget.SidebarLfgState2Widget_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SidebarLfgState2Widget(int32_t EntryPoint); // Function SidebarLfgState2Widget.SidebarLfgState2Widget_C.ExecuteUbergraph_SidebarLfgState2Widget // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

