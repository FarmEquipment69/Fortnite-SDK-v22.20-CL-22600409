// WidgetBlueprintGeneratedClass CrewPurchase_TileDetails.CrewPurchase_TileDetails_C
// Size: 0x341 (Inherited: 0x328)
struct UCrewPurchase_TileDetails_C : UCrewTileDetails {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UWidgetAnimation* Intro; // 0x330(0x08)
	struct USpacer* Spacer_LocShim; // 0x338(0x08)
	bool DevTestLoc; // 0x340(0x01)

	void EventIntro(); // Function CrewPurchase_TileDetails.CrewPurchase_TileDetails_C.EventIntro // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function CrewPurchase_TileDetails.CrewPurchase_TileDetails_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function CrewPurchase_TileDetails.CrewPurchase_TileDetails_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_CrewPurchase_TileDetails(int32_t EntryPoint); // Function CrewPurchase_TileDetails.CrewPurchase_TileDetails_C.ExecuteUbergraph_CrewPurchase_TileDetails // (Final|UbergraphFunction) // @ game+0xd67374
};

