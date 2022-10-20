// WidgetBlueprintGeneratedClass BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C
// Size: 0x529 (Inherited: 0x478)
struct UBattlePassCrewPurchaseContainer_C : UBattlePassCrewPurchaseContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x478(0x08)
	struct UWidgetAnimation* TransitionLeft; // 0x480(0x08)
	struct UWidgetAnimation* TransitionRight; // 0x488(0x08)
	struct UCrewBenefitsAnim_C* CrewBenefitsAnim; // 0x490(0x08)
	struct UCrewPurchaseScreen_C* CrewPurchaseScreen; // 0x498(0x08)
	struct UCrewSeasonLaunchScreen_C* CrewSeasonLaunchScreen; // 0x4a0(0x08)
	struct UImage* Image_BackgroundFill; // 0x4a8(0x08)
	struct UImage* Image_Blackout; // 0x4b0(0x08)
	struct UImage* Image_Blackout_quickintro; // 0x4b8(0x08)
	struct UImage* Image_BPEmblem; // 0x4c0(0x08)
	struct UImage* Image_IntroBG; // 0x4c8(0x08)
	struct UImage* Image_Sparks; // 0x4d0(0x08)
	struct UImage* Image_Transition; // 0x4d8(0x08)
	struct UWidgetAnimation* LastPlayedAnimation; // 0x4e0(0x08)
	struct UBattlePassPurchaseScreen_C* As Battle Pass Purchase Screen; // 0x4e8(0x08)
	struct FTimerHandle MusicControllerHandle; // 0x4f0(0x08)
	struct USoundMix* BattlePassMix; // 0x4f8(0x08)
	struct ABattlepass_MusicController_Quartz_C* MusicController_Quartz; // 0x500(0x08)
	struct UAudioComponent* BattlepassSplashAudio; // 0x508(0x08)
	struct UAudioComponent* CrewSplashAudio; // 0x510(0x08)
	double TransitionLeftAlpha; // 0x518(0x08)
	double TransitionRightAlpha; // 0x520(0x08)
	enum class EBattlePassCrewContentState BPState; // 0x528(0x01)

	void (); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void (); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void (); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C. // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SequenceEvent__ENTRYPOINTBattlePassCrewPurchaseContainer(); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C.SequenceEvent__ENTRYPOINTBattlePassCrewPurchaseContainer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnTransitionRightEvaluated(); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C.OnTransitionRightEvaluated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnTransitionLeftEvaluated(); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C.OnTransitionLeftEvaluated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void StopAllBattlePassMusic(); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C.StopAllBattlePassMusic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpSellMusic(); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C.UpSellMusic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BattlePassMusic(); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C.BattlePassMusic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SubscriptionMusic(); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C.SubscriptionMusic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnContentStateUpdated(enum class EBattlePassCrewContentState InState, bool bInScreenOpened); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C.OnContentStateUpdated // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SequenceEvent_ToggleScreens(bool isLeft); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C.SequenceEvent_ToggleScreens // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnTriggerIntroAnimation(bool bCanClaimRewards); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C.OnTriggerIntroAnimation // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnActivated(); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnLastPlayedAnimationFinished(); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C.OnLastPlayedAnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void TriggerSubTransitionOut(enum class EBattlePassCrewContentState TransitionState); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C.TriggerSubTransitionOut // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void TriggerSubTransitionIn(enum class EBattlePassCrewContentState TransitionState); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C.TriggerSubTransitionIn // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ResetAnimations(); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C.ResetAnimations // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CallMusicController(); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C.CallMusicController // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlayBattlepassSplashAudio(); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C.PlayBattlepassSplashAudio // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlaySubscriptionSplashAudio(); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C.PlaySubscriptionSplashAudio // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnDeactivated(); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BattlePassCrewPurchaseContainer(int32_t EntryPoint); // Function BattlePassCrewPurchaseContainer.BattlePassCrewPurchaseContainer_C.ExecuteUbergraph_BattlePassCrewPurchaseContainer // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

