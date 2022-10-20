// WidgetBlueprintGeneratedClass BattlePassSeasonHeading.BattlePassSeasonHeading_C
// Size: 0x338 (Inherited: 0x2e8)
struct UBattlePassSeasonHeading_C : UBattlePassSeasonHeading {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* Intro; // 0x2f0(0x08)
	struct UFortLazyImage* HeaderImage; // 0x2f8(0x08)
	struct UImage* Image_Glow; // 0x300(0x08)
	struct UCommonRichTextBlock* Text_BattlePassTitle; // 0x308(0x08)
	struct TSoftObjectPtr<UTexture2D> BattlePassStarImage; // 0x310(0x28)

	void PreConstruct(bool IsDesignTime); // Function BattlePassSeasonHeading.BattlePassSeasonHeading_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void EventPlayIntro(); // Function BattlePassSeasonHeading.BattlePassSeasonHeading_C.EventPlayIntro // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BattlePassSeasonHeading(int32_t EntryPoint); // Function BattlePassSeasonHeading.BattlePassSeasonHeading_C.ExecuteUbergraph_BattlePassSeasonHeading // (Final|UbergraphFunction) // @ game+0xd67374
};

