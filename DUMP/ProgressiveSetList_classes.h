// WidgetBlueprintGeneratedClass ProgressiveSetList.ProgressiveSetList_C
// Size: 0x488 (Inherited: 0x478)
struct UProgressiveSetList_C : UFortProgressiveSetList {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x478(0x08)
	struct UFortDynamicEntryBox* EntryBox_SetTiles; // 0x480(0x08)

	struct UFortProgressiveSetTile* AddSetTile(); // Function ProgressiveSetList.ProgressiveSetList_C.AddSetTile // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ClearSetTiles(); // Function ProgressiveSetList.ProgressiveSetList_C.ClearSetTiles // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ProgressiveSetList(int32_t EntryPoint); // Function ProgressiveSetList.ProgressiveSetList_C.ExecuteUbergraph_ProgressiveSetList // (Final|UbergraphFunction) // @ game+0xd67374
};

