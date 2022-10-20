// WidgetBlueprintGeneratedClass BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C
// Size: 0x369 (Inherited: 0x308)
struct UBattlePassPageUnlockedToast_C : UFortToastWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UWidgetAnimation* Outro_New; // 0x310(0x08)
	struct UWidgetAnimation* Intro; // 0x318(0x08)
	struct UCommonBorder* B_NotificationImage; // 0x320(0x08)
	struct UCommonBorder* B_NotificationImageExtended; // 0x328(0x08)
	struct UCommonBorder* CommonBorder_MainWidget; // 0x330(0x08)
	struct UCommonTextBlock* Description; // 0x338(0x08)
	struct UFortLazyImage* NotificationImage; // 0x340(0x08)
	struct UCommonTextBlock* Title; // 0x348(0x08)
	struct FMulticastInlineDelegate OnFinishedToast; // 0x350(0x10)
	struct FTimerHandle AnimationDelayTimer; // 0x360(0x08)
	bool bActionTaken; // 0x368(0x01)

	void SetupAnimBindings(bool Unbind); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.SetupAnimBindings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ApplyAdditionalStyling(); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.ApplyAdditionalStyling // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetImage(); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.SetImage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	enum class ESlateVisibility GetOpenButtonVisibility(); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.GetOpenButtonVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void StartIntro(); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.StartIntro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateToast(struct UFortUINotification* Notification); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.UpdateToast // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleOutroFinished(); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.HandleOutroFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlayOutro(); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.PlayOutro // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void HandleIntroFinished(); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.HandleIntroFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Destruct(); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnPlayOpenAnimation(); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.OnPlayOpenAnimation // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnNotificationSet(struct UFortUINotification* Notification); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.OnNotificationSet // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnNotificationUpdated(struct UFortUINotification* Notification); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.OnNotificationUpdated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BattlePassPageUnlockedToast(int32_t EntryPoint); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.ExecuteUbergraph_BattlePassPageUnlockedToast // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void OnFinishedToast__DelegateSignature(); // Function BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.OnFinishedToast__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

