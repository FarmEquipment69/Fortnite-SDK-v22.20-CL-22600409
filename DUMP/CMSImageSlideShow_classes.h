// WidgetBlueprintGeneratedClass CMSImageSlideShow.CMSImageSlideShow_C
// Size: 0x2e0 (Inherited: 0x2b8)
struct UCMSImageSlideShow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UCommonWidgetCarousel* Images; // 0x2c0(0x08)
	double ScrollInterview; // 0x2c8(0x08)
	struct FMulticastInlineDelegate CarouselIndexChanged; // 0x2d0(0x10)

	void SetMediaURLs(struct TArray<struct FString>& MediaURLs); // Function CMSImageSlideShow.CMSImageSlideShow_C.SetMediaURLs // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__Images_K2Node_ComponentBoundEvent_0_OnCurrentPageIndexChanged__DelegateSignature(struct UCommonWidgetCarousel* CarouselWidget, int32_t CurrentPageIndex); // Function CMSImageSlideShow.CMSImageSlideShow_C.BndEvt__Images_K2Node_ComponentBoundEvent_0_OnCurrentPageIndexChanged__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_CMSImageSlideShow(int32_t EntryPoint); // Function CMSImageSlideShow.CMSImageSlideShow_C.ExecuteUbergraph_CMSImageSlideShow // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void CarouselIndexChanged__DelegateSignature(int32_t CurrentPageIndex); // Function CMSImageSlideShow.CMSImageSlideShow_C.CarouselIndexChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

