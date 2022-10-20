// WidgetBlueprintGeneratedClass AthenaExclusiveRewardBanner.AthenaExclusiveRewardBanner_C
// Size: 0x351 (Inherited: 0x300)
struct UAthenaExclusiveRewardBanner_C : UAthenaExclusiveRewardBanner {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct UWidgetAnimation* InitializeOffScreen; // 0x308(0x08)
	struct UWidgetAnimation* Outro; // 0x310(0x08)
	struct UWidgetAnimation* AnimatePulse; // 0x318(0x08)
	struct UWidgetAnimation* Intro; // 0x320(0x08)
	struct UImage* Backing; // 0x328(0x08)
	struct UImage* BottomAngle; // 0x330(0x08)
	struct UOverlay* IconOvr; // 0x338(0x08)
	struct UImage* Pulse; // 0x340(0x08)
	struct UImage* TopAngle; // 0x348(0x08)
	bool Shown; // 0x350(0x01)

	void OnClearBanner(); // Function AthenaExclusiveRewardBanner.AthenaExclusiveRewardBanner_C.OnClearBanner // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void (); // Function AthenaExclusiveRewardBanner.AthenaExclusiveRewardBanner_C. // (BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function AthenaExclusiveRewardBanner.AthenaExclusiveRewardBanner_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnInitBannerIcon(struct UTexture2D* RewardIcon); // Function AthenaExclusiveRewardBanner.AthenaExclusiveRewardBanner_C.OnInitBannerIcon // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnInitBanner(); // Function AthenaExclusiveRewardBanner.AthenaExclusiveRewardBanner_C.OnInitBanner // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_AthenaExclusiveRewardBanner(int32_t EntryPoint); // Function AthenaExclusiveRewardBanner.AthenaExclusiveRewardBanner_C.ExecuteUbergraph_AthenaExclusiveRewardBanner // (Final|UbergraphFunction) // @ game+0xd67374
};

