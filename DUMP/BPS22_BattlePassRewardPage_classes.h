// WidgetBlueprintGeneratedClass BPS22_BattlePassRewardPage.BPS22_BattlePassRewardPage_C
// Size: 0x5d0 (Inherited: 0x590)
struct UBPS22_BattlePassRewardPage_C : UBattlePassRewardPageS22 {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x590(0x08)
	struct UWidgetAnimation* Intro; // 0x598(0x08)
	struct UWidgetAnimation* Header_intro; // 0x5a0(0x08)
	struct UImage* ; // 0x5a8(0x08)
	struct USafeZone* ; // 0x5b0(0x08)
	struct UCommonTextBlock* Subtitle; // 0x5b8(0x08)
	struct UCommonTextBlock* Title; // 0x5c0(0x08)
	struct UVerticalBox* ; // 0x5c8(0x08)

	void SequenceEvent__ENTRYPOINTBPS22_BattlePassRewardPage(struct UPageNavigator_C* PageNavigator); // Function BPS22_BattlePassRewardPage.BPS22_BattlePassRewardPage_C.SequenceEvent__ENTRYPOINTBPS22_BattlePassRewardPage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void (struct UPageNavigator_C* PageNavigator); // Function BPS22_BattlePassRewardPage.BPS22_BattlePassRewardPage_C. // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnPageChanged(int32_t PageNumber); // Function BPS22_BattlePassRewardPage.BPS22_BattlePassRewardPage_C.OnPageChanged // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnActivated(); // Function BPS22_BattlePassRewardPage.BPS22_BattlePassRewardPage_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnInputMethodChanged(enum class ECommonInputType InputType); // Function BPS22_BattlePassRewardPage.BPS22_BattlePassRewardPage_C.OnInputMethodChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnInitForPageType(enum class ERewardPageType InRewardPageType); // Function BPS22_BattlePassRewardPage.BPS22_BattlePassRewardPage_C.OnInitForPageType // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BPS22_BattlePassRewardPage(int32_t EntryPoint); // Function BPS22_BattlePassRewardPage.BPS22_BattlePassRewardPage_C.ExecuteUbergraph_BPS22_BattlePassRewardPage // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

