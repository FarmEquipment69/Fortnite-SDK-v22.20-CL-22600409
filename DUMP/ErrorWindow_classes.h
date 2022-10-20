// WidgetBlueprintGeneratedClass ErrorWindow.ErrorWindow_C
// Size: 0x690 (Inherited: 0x610)
struct UErrorWindow_C : UFortErrorWindow {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x610(0x08)
	struct UWidgetAnimation* ; // 0x618(0x08)
	struct UWidgetAnimation* ; // 0x620(0x08)
	struct UWidgetAnimation* ; // 0x628(0x08)
	struct UWidgetAnimation* ; // 0x630(0x08)
	struct UErrorLlama_C* ; // 0x638(0x08)
	struct UErrorLlama_C* ; // 0x640(0x08)
	struct UErrorLlama_C* ; // 0x648(0x08)
	struct UImage* Image_Separator_Down; // 0x650(0x08)
	struct UImage* Image_Separator_Up; // 0x658(0x08)
	struct ULightbox_C* Lightbox; // 0x660(0x08)
	struct UWidgetAnimation* CurLlamaAnim; // 0x668(0x08)
	struct TArray<struct UErrorLlama_C*> LlamaArray; // 0x670(0x10)
	struct FTimerHandle LlamaReverseTimer; // 0x680(0x08)
	struct FTimerHandle AmbientLlamaPlayTimer; // 0x688(0x08)

	struct FEventReply OnAnalogValueChanged(struct FGeometry MyGeometry, struct FAnalogInputEvent InAnalogInputEvent); // Function ErrorWindow.ErrorWindow_C.OnAnalogValueChanged // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Initialize Close Button(); // Function ErrorWindow.ErrorWindow_C.Initialize Close Button // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function ErrorWindow.ErrorWindow_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void Destruct(); // Function ErrorWindow.ErrorWindow_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnBeginOutro(); // Function ErrorWindow.ErrorWindow_C.OnBeginOutro // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnBeginIntro(); // Function ErrorWindow.ErrorWindow_C.OnBeginIntro // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnActivated(); // Function ErrorWindow.ErrorWindow_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleLlamaAnimFinish(); // Function ErrorWindow.ErrorWindow_C.HandleLlamaAnimFinish // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void LlamaReverse(); // Function ErrorWindow.ErrorWindow_C.LlamaReverse // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleLlamaCycleFinished(); // Function ErrorWindow.ErrorWindow_C.HandleLlamaCycleFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlayRandomAmbientLlama(); // Function ErrorWindow.ErrorWindow_C.PlayRandomAmbientLlama // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void StartAmbientLlamaSequence(); // Function ErrorWindow.ErrorWindow_C.StartAmbientLlamaSequence // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ResetLlamas(); // Function ErrorWindow.ErrorWindow_C.ResetLlamas // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnOverrideCloseButtonText(struct FText& OverrideText); // Function ErrorWindow.ErrorWindow_C.OnOverrideCloseButtonText // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ErrorWindow(int32_t EntryPoint); // Function ErrorWindow.ErrorWindow_C.ExecuteUbergraph_ErrorWindow // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

