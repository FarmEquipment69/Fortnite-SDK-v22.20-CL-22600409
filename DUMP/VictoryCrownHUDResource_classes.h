// WidgetBlueprintGeneratedClass VictoryCrownHUDResource.VictoryCrownHUDResource_C
// Size: 0x374 (Inherited: 0x320)
struct UVictoryCrownHUDResource_C : UFortHUDElementWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* Anim_ShowCrown; // 0x328(0x08)
	struct UImage* burst; // 0x330(0x08)
	struct UOverlay* ; // 0x338(0x08)
	struct UOverlay* OverlayFX; // 0x340(0x08)
	struct UImage* RedGlow; // 0x348(0x08)
	struct UImage* SmallTriangles_Left; // 0x350(0x08)
	struct FText VictoryCrownsTotalText; // 0x358(0x18)
	int32_t TotalVictoryRoyales; // 0x370(0x04)

	void Construct(); // Function VictoryCrownHUDResource.VictoryCrownHUDResource_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnVictoryCrownStatusChanged(struct AFortPlayerControllerAthena* FortPlayerControllerAthena, struct UFortItem* CrownItem); // Function VictoryCrownHUDResource.VictoryCrownHUDResource_C.OnVictoryCrownStatusChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function VictoryCrownHUDResource.VictoryCrownHUDResource_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_VictoryCrownHUDResource(int32_t EntryPoint); // Function VictoryCrownHUDResource.VictoryCrownHUDResource_C.ExecuteUbergraph_VictoryCrownHUDResource // (Final|UbergraphFunction) // @ game+0xd67374
};

