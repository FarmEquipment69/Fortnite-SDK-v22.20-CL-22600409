// WidgetBlueprintGeneratedClass MatchmakingRegionAndPool.MatchmakingRegionAndPool_C
// Size: 0x2e8 (Inherited: 0x2c0)
struct UMatchmakingRegionAndPool_C : UMatchmakingRegionAndPoolBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UCommonTextBlock* ClassicModeText; // 0x2c8(0x08)
	struct UWidgetSwitcher* IBMSwitcher; // 0x2d0(0x08)
	struct UHorizontalBox* InputRegion; // 0x2d8(0x08)
	struct UCommonTextBlock* RegionText; // 0x2e0(0x08)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function MatchmakingRegionAndPool.MatchmakingRegionAndPool_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_MatchmakingRegionAndPool(int32_t EntryPoint); // Function MatchmakingRegionAndPool.MatchmakingRegionAndPool_C.ExecuteUbergraph_MatchmakingRegionAndPool // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

