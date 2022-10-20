// WidgetBlueprintGeneratedClass RebootRallyEligiblePlayersOnboardingTooltip.RebootRallyEligiblePlayersOnboardingTooltip_C
// Size: 0x498 (Inherited: 0x458)
struct URebootRallyEligiblePlayersOnboardingTooltip_C : UFortSidebarOnboardTooltipWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x458(0x08)
	struct UWidgetAnimation* Reset; // 0x460(0x08)
	struct UWidgetAnimation* Outro; // 0x468(0x08)
	struct UWidgetAnimation* Pulse; // 0x470(0x08)
	struct UCommonRichTextBlock* ; // 0x478(0x08)
	struct UCommonRichTextBlock* ; // 0x480(0x08)
	struct UImage* Image_Arrow; // 0x488(0x08)
	struct UImage* ImageBurst; // 0x490(0x08)

	void Finished_8745633545D14FC376C81C8A09011F8C(); // Function RebootRallyEligiblePlayersOnboardingTooltip.RebootRallyEligiblePlayersOnboardingTooltip_C.Finished_8745633545D14FC376C81C8A09011F8C // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnShowTooltip(); // Function RebootRallyEligiblePlayersOnboardingTooltip.RebootRallyEligiblePlayersOnboardingTooltip_C.OnShowTooltip // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnEndTooltip(); // Function RebootRallyEligiblePlayersOnboardingTooltip.RebootRallyEligiblePlayersOnboardingTooltip_C.OnEndTooltip // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_RebootRallyEligiblePlayersOnboardingTooltip(int32_t EntryPoint); // Function RebootRallyEligiblePlayersOnboardingTooltip.RebootRallyEligiblePlayersOnboardingTooltip_C.ExecuteUbergraph_RebootRallyEligiblePlayersOnboardingTooltip // (Final|UbergraphFunction) // @ game+0xd67374
};

