// WidgetBlueprintGeneratedClass AthenaGlobalCash.AthenaGlobalCash_C
// Size: 0x350 (Inherited: 0x340)
struct UAthenaGlobalCash_C : UFortGlobalCashWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct UVerticalBox* VBox_Content; // 0x348(0x08)

	void OnQueryStarted(); // Function AthenaGlobalCash.AthenaGlobalCash_C.OnQueryStarted // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnQueryCompletedSuccessfully(int32_t GlobalCashBalance); // Function AthenaGlobalCash.AthenaGlobalCash_C.OnQueryCompletedSuccessfully // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_AthenaGlobalCash(int32_t EntryPoint); // Function AthenaGlobalCash.AthenaGlobalCash_C.ExecuteUbergraph_AthenaGlobalCash // (Final|UbergraphFunction) // @ game+0xd67374
};

