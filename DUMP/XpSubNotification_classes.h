// WidgetBlueprintGeneratedClass XpSubNotification.XpSubNotification_C
// Size: 0x400 (Inherited: 0x308)
struct UXpSubNotification_C : UXpEarnedSubNotification {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UWidgetAnimation* Reset; // 0x310(0x08)
	struct UWidgetAnimation* Intro; // 0x318(0x08)
	struct UImage* Image_Icon; // 0x320(0x08)
	struct UImage* ; // 0x328(0x08)
	struct UImage* Image_RarityColor_Glow; // 0x330(0x08)
	struct UImage* Image_Shadow; // 0x338(0x08)
	struct UImage* ; // 0x340(0x08)
	struct UImage* ImageBG_Bars; // 0x348(0x08)
	struct UImage* ImageBG_XP; // 0x350(0x08)
	struct UCommonBorder* LevelUp_Header; // 0x358(0x08)
	struct UOverlay* Overlay_GoldIcon; // 0x360(0x08)
	struct UOverlay* Overlay_XpiCON; // 0x368(0x08)
	struct USizeBox* SizeBox_LevelUP; // 0x370(0x08)
	struct UWidgetSwitcher* Switcher_BG; // 0x378(0x08)
	struct UCommonVisibilitySwitcher* Switcher_Icons; // 0x380(0x08)
	struct UCommonTextBlock* Text_RewardType; // 0x388(0x08)
	struct UCommonTextBlock* Text_XpValue; // 0x390(0x08)
	struct UWidgetSwitcher* ; // 0x398(0x08)
	struct FLinearColor BarsImageRarityGlowColor; // 0x3a0(0x10)
	struct FLinearColor XPImageRarityGlowColor; // 0x3b0(0x10)
	struct FLinearColor BarsImageBGColor; // 0x3c0(0x10)
	struct FLinearColor XPImageBGColor; // 0x3d0(0x10)
	struct FLinearColor BarsImageBGColor2; // 0x3e0(0x10)
	struct FLinearColor XPImageBGColor2; // 0x3f0(0x10)

	void PreConstruct(bool IsDesignTime); // Function XpSubNotification.XpSubNotification_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function XpSubNotification.XpSubNotification_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void FinishedXpDisplayAnim(); // Function XpSubNotification.XpSubNotification_C.FinishedXpDisplayAnim // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Reset render opacity(); // Function XpSubNotification.XpSubNotification_C.Reset render opacity // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Play Intro Sound(); // Function XpSubNotification.XpSubNotification_C.Play Intro Sound // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetRewardValue(int32_t RewardValue, enum class EFortEarnedSubRewardType RewardType); // Function XpSubNotification.XpSubNotification_C.SetRewardValue // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void StartNotificationIntro(); // Function XpSubNotification.XpSubNotification_C.StartNotificationIntro // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_XpSubNotification(int32_t EntryPoint); // Function XpSubNotification.XpSubNotification_C.ExecuteUbergraph_XpSubNotification // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

