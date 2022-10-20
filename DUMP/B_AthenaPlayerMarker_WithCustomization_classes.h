// BlueprintGeneratedClass B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C
// Size: 0x700 (Inherited: 0x680)
struct AB_AthenaPlayerMarker_WithCustomization_C : AB_AthenaMapMarkerBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x680(0x08)
	struct AFortMapMarkerTopperActor* TopperClass; // 0x688(0x08)
	struct AFortMapMarkerTopperActor* TopperInstance; // 0x690(0x08)
	char pad_698[0x8]; // 0x698(0x08)
	struct FTransform TopperTransform; // 0x6a0(0x60)

	void OnLoaded_8A042AD24DC8A8C0E9D8E0B4BF3B6C37(struct UObject* Loaded); // Function B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C.OnLoaded_8A042AD24DC8A8C0E9D8E0B4BF3B6C37 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnSetupMarker(struct FFortWorldMarkerData& MarkerData); // Function B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C.OnSetupMarker // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnMarkerHidden(); // Function B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C.OnMarkerHidden // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void UpdateTopper(); // Function B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C.UpdateTopper // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnMarkerPlaced(); // Function B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C.OnMarkerPlaced // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization(int32_t EntryPoint); // Function B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C.ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

