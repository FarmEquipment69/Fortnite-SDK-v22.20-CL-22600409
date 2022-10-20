// WidgetBlueprintGeneratedClass SidebarLfgState_Image.SidebarLfgState_Image_C
// Size: 0x308 (Inherited: 0x2b8)
struct USidebarLfgState_Image_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UImage* LFG_Icon; // 0x2c0(0x08)
	struct TSoftObjectPtr<UMaterialInterface> LFG_Material; // 0x2c8(0x28)
	struct FLinearColor LFG_Color; // 0x2f0(0x10)
	struct UMaterialInstanceDynamic* LFG_DynamicMaterial; // 0x300(0x08)

	void SetColor(struct FLinearColor InColorAndOpacity); // Function SidebarLfgState_Image.SidebarLfgState_Image_C.SetColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetMaterial(struct TSoftObjectPtr<UMaterialInterface> SoftMaterial); // Function SidebarLfgState_Image.SidebarLfgState_Image_C.SetMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function SidebarLfgState_Image.SidebarLfgState_Image_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnInitialized(); // Function SidebarLfgState_Image.SidebarLfgState_Image_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SidebarLfgState_Image(int32_t EntryPoint); // Function SidebarLfgState_Image.SidebarLfgState_Image_C.ExecuteUbergraph_SidebarLfgState_Image // (Final|UbergraphFunction) // @ game+0xd67374
};

