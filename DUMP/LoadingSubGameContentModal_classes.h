// WidgetBlueprintGeneratedClass LoadingSubGameContentModal.LoadingSubGameContentModal_C
// Size: 0x489 (Inherited: 0x440)
struct ULoadingSubGameContentModal_C : UFortLoadingOnDemandContentModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x440(0x08)
	struct UWidgetAnimation* Outro; // 0x448(0x08)
	struct UWidgetAnimation* Intro; // 0x450(0x08)
	struct UCommonTextBlock* CommonTextBlock_Title; // 0x458(0x08)
	struct UProgressBar* DownloadingProgressBar; // 0x460(0x08)
	struct ULightbox_C* Lightbox; // 0x468(0x08)
	struct UVerticalBox* Modal_VertBox; // 0x470(0x08)
	struct UCommonTextBlock* Text_Content; // 0x478(0x08)
	struct UCommonTextBlock* Text_Progress; // 0x480(0x08)
	bool HasPlayedAnim; // 0x488(0x01)

	void OnUpdatedProgress(float Percent); // Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.OnUpdatedProgress // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnInitialized(); // Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void SetCancelButtonText(struct FText& InText); // Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.SetCancelButtonText // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void BP_OnActivated(); // Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.OnAnimationFinished // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_LoadingSubGameContentModal(int32_t EntryPoint); // Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.ExecuteUbergraph_LoadingSubGameContentModal // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

