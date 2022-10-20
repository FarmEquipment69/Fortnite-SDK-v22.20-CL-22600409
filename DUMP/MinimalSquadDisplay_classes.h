// WidgetBlueprintGeneratedClass MinimalSquadDisplay.MinimalSquadDisplay_C
// Size: 0x300 (Inherited: 0x2f0)
struct UMinimalSquadDisplay_C : UAthenaTeamSquadEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UImage* SquadRibbon; // 0x2f8(0x08)

	void OnLoaded_1B34C3FE47597A4DBA2DA7AFCF8744FB(struct UObject* Loaded); // Function MinimalSquadDisplay.MinimalSquadDisplay_C.OnLoaded_1B34C3FE47597A4DBA2DA7AFCF8744FB // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnLoaded_86B795124D19C878C8559FA7E78726E0(struct UObject* Loaded); // Function MinimalSquadDisplay.MinimalSquadDisplay_C.OnLoaded_86B795124D19C878C8559FA7E78726E0 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnSquadAssigned(struct FAthenaTeamDisplayInfo& SquadStyle); // Function MinimalSquadDisplay.MinimalSquadDisplay_C.OnSquadAssigned // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnSquadIsEmptyChanged(bool bSquadIsEmpty, bool bMultipleSquadsPopulated); // Function MinimalSquadDisplay.MinimalSquadDisplay_C.OnSquadIsEmptyChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_MinimalSquadDisplay(int32_t EntryPoint); // Function MinimalSquadDisplay.MinimalSquadDisplay_C.ExecuteUbergraph_MinimalSquadDisplay // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

