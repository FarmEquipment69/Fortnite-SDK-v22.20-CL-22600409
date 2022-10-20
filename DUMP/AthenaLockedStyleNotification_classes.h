// WidgetBlueprintGeneratedClass AthenaLockedStyleNotification.AthenaLockedStyleNotification_C
// Size: 0x379 (Inherited: 0x338)
struct UAthenaLockedStyleNotification_C : UAthenaCosmeticUnlockingInfo {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UWidgetAnimation* DataUpdate; // 0x340(0x08)
	struct UWidgetAnimation* Intro; // 0x348(0x08)
	struct USizeBox* SizeBox_ProgressInfo; // 0x350(0x08)
	struct USizeBox* SizeBox_StaticText; // 0x358(0x08)
	struct UWidgetSwitcher* Switcher_LockedInfo; // 0x360(0x08)
	struct FTimerHandle AutoHideTimer; // 0x368(0x08)
	double HideDelayTime; // 0x370(0x08)
	bool AutoHide; // 0x378(0x01)

	void OnUnlockingInfoSet(bool bShowProgression); // Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.OnUnlockingInfoSet // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void RequestUpdateAnim(); // Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.RequestUpdateAnim // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void RequestIntroAnim(); // Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.RequestIntroAnim // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void RequestOutroAnim(); // Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.RequestOutroAnim // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OutroFinished(); // Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.OutroFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_AthenaLockedStyleNotification(int32_t EntryPoint); // Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.ExecuteUbergraph_AthenaLockedStyleNotification // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

