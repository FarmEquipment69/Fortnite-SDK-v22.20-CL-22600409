// WidgetBlueprintGeneratedClass FortSocialEventRSVPWidget.FortSocialEventRSVPWidget_C
// Size: 0x2e1 (Inherited: 0x2b8)
struct UFortSocialEventRSVPWidget_C : UFortSocialEventRSVPWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UOverlay* Overlay_AdditionalEvents; // 0x2c0(0x08)
	struct UCommonTextBlock* Text_AdditionalEvents; // 0x2c8(0x08)
	struct UCommonTextBlock* Text_EventName; // 0x2d0(0x08)
	struct UCommonTextBlock* Text_MonthDay; // 0x2d8(0x08)
	enum class ESlateVisibility In Visibility; // 0x2e0(0x01)

	void Construct(); // Function FortSocialEventRSVPWidget.FortSocialEventRSVPWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnRefreshDisplay(struct FText& EventName, struct FText& Date, struct FText& AdditionalEvents); // Function FortSocialEventRSVPWidget.FortSocialEventRSVPWidget_C.OnRefreshDisplay // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_FortSocialEventRSVPWidget(int32_t EntryPoint); // Function FortSocialEventRSVPWidget.FortSocialEventRSVPWidget_C.ExecuteUbergraph_FortSocialEventRSVPWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

