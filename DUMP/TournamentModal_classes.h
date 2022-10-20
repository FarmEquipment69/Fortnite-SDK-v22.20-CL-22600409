// WidgetBlueprintGeneratedClass TournamentModal.TournamentModal_C
// Size: 0x588 (Inherited: 0x570)
struct UTournamentModal_C : UFortTournamentModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x570(0x08)
	struct UWidgetAnimation* Intro; // 0x578(0x08)
	struct UImage* Image_BG; // 0x580(0x08)

	void BP_OnActivated(); // Function TournamentModal.TournamentModal_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnTournamentSet(struct FLinearColor LeftColor, struct FLinearColor RightColor); // Function TournamentModal.TournamentModal_C.OnTournamentSet // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_TournamentModal(int32_t EntryPoint); // Function TournamentModal.TournamentModal_C.ExecuteUbergraph_TournamentModal // (Final|UbergraphFunction) // @ game+0xd67374
};

