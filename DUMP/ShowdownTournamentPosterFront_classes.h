// WidgetBlueprintGeneratedClass ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C
// Size: 0x856 (Inherited: 0x768)
struct UShowdownTournamentPosterFront_C : UFortShowdownDetailView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x768(0x08)
	struct UBorder* Border_Alert; // 0x770(0x08)
	struct UImage* Image_LockIcon; // 0x778(0x08)
	struct UImage* Image_LockIconWorldCup; // 0x780(0x08)
	struct UImage* Image_PosterShadow; // 0x788(0x08)
	struct UInvalidationBox* ; // 0x790(0x08)
	struct UInvalidationBox* ; // 0x798(0x08)
	struct UInvalidationBox* ; // 0x7a0(0x08)
	struct UInvalidationBox* ; // 0x7a8(0x08)
	struct UOverlay* OverlayEventLocked; // 0x7b0(0x08)
	struct UOverlay* OverlayEventLockedWorldCup; // 0x7b8(0x08)
	struct UScaleBox* ; // 0x7c0(0x08)
	struct UScaleBox* ; // 0x7c8(0x08)
	struct UShowdownPin_C* ShowdownPin; // 0x7d0(0x08)
	struct UVerticalBox* StandardLayout; // 0x7d8(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_PosterTextLayout; // 0x7e0(0x08)
	struct UCommonTextBlock* Text_EventAlert; // 0x7e8(0x08)
	struct UCommonTextBlock* TournamentDateText; // 0x7f0(0x08)
	struct UCommonTextBlock* TournamentDateTextWorldCup; // 0x7f8(0x08)
	struct UCommonTextBlock* TournamentTitle1; // 0x800(0x08)
	struct UCommonTextBlock* TournamentTitle1WorldCup; // 0x808(0x08)
	struct UCommonTextBlock* TournamentTitle2; // 0x810(0x08)
	struct UCommonTextBlock* TournamentTitle2WorldCup; // 0x818(0x08)
	struct UVerticalBox* WorldCupLayout; // 0x820(0x08)
	struct FSlateColor TitleColor; // 0x828(0x14)
	bool HiddenWhileLoading; // 0x83c(0x01)
	char pad_83D[0x3]; // 0x83d(0x03)
	struct FSlateColor SubColor; // 0x840(0x14)
	bool HidePin; // 0x854(0x01)
	enum class EStretch TournamentScaleboxStretch; // 0x855(0x01)

	void GetTournamentDateText(struct FText& TournamentDate); // Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.GetTournamentDateText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void RefreshDataBP(); // Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.RefreshDataBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void PreConstruct(bool IsDesignTime); // Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BndEvt__Image_PosterFront_K2Node_ComponentBoundEvent_1_onLoadingCompleted__DelegateSignature(); // Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.BndEvt__Image_PosterFront_K2Node_ComponentBoundEvent_1_onLoadingCompleted__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BP_ResetDetailView(); // Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.BP_ResetDetailView // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ShowdownTournamentPosterFront(int32_t EntryPoint); // Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.ExecuteUbergraph_ShowdownTournamentPosterFront // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

