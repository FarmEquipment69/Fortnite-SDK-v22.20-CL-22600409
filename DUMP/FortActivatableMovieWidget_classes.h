// WidgetBlueprintGeneratedClass FortActivatableMovieWidget.FortActivatableMovieWidget_C
// Size: 0x6e9 (Inherited: 0x6c0)
struct UFortActivatableMovieWidget_C : UFortActivatableMovieWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6c0(0x08)
	struct UWidgetAnimation* WholeFade; // 0x6c8(0x08)
	struct UWidgetAnimation* ColorFade; // 0x6d0(0x08)
	struct USafeZone* MainSafeZone; // 0x6d8(0x08)
	struct USafeZone* ; // 0x6e0(0x08)
	bool ; // 0x6e8(0x01)

	void Finished_67F0D773400E13ABEB8A0DB143879F1C(); // Function FortActivatableMovieWidget.FortActivatableMovieWidget_C.Finished_67F0D773400E13ABEB8A0DB143879F1C // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Finished_54C0D3BF443750D753CECD9EE06086EA(); // Function FortActivatableMovieWidget.FortActivatableMovieWidget_C.Finished_54C0D3BF443750D753CECD9EE06086EA // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function FortActivatableMovieWidget.FortActivatableMovieWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void StartWholeFade(bool bReverse); // Function FortActivatableMovieWidget.FortActivatableMovieWidget_C.StartWholeFade // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnActivated(); // Function FortActivatableMovieWidget.FortActivatableMovieWidget_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void PreEnded(); // Function FortActivatableMovieWidget.FortActivatableMovieWidget_C.PreEnded // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void MediaStarted(); // Function FortActivatableMovieWidget.FortActivatableMovieWidget_C.MediaStarted // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnDeactivated(); // Function FortActivatableMovieWidget.FortActivatableMovieWidget_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void StartFadeFromColor(bool bEnd, enum class UFortActivatablePrePostRollStates Reason, bool bReverse); // Function FortActivatableMovieWidget.FortActivatableMovieWidget_C.StartFadeFromColor // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_FortActivatableMovieWidget(int32_t EntryPoint); // Function FortActivatableMovieWidget.FortActivatableMovieWidget_C.ExecuteUbergraph_FortActivatableMovieWidget // (Final|UbergraphFunction) // @ game+0xd67374
};

