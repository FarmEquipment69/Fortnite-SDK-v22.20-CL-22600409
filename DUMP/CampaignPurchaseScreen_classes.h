// WidgetBlueprintGeneratedClass CampaignPurchaseScreen.CampaignPurchaseScreen_C
// Size: 0x4c4 (Inherited: 0x490)
struct UCampaignPurchaseScreen_C : UFortCampaignPurchaseScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct UWidgetAnimation* SwitchTextures; // 0x498(0x08)
	struct UMaterialInstanceDynamic* MID-Keyart; // 0x4a0(0x08)
	struct FTimerHandle CycleTimer; // 0x4a8(0x08)
	struct TArray<struct UTexture*> TextureCycle; // 0x4b0(0x10)
	int32_t TextureCycleIndex; // 0x4c0(0x04)

	void IsMinorShutdownWarningEnabled(bool& Enabled); // Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.IsMinorShutdownWarningEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void InitializeRedeemButton(); // Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.InitializeRedeemButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	bool IsBusyMatchmaking(); // Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.IsBusyMatchmaking // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void Update(); // Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void AdvanceTextureCycle(); // Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.AdvanceTextureCycle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void InitializeTextureCycle(); // Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.InitializeTextureCycle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ToggleTimer(bool Enabled); // Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.ToggleTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void Construct(); // Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnActivated(); // Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnImageCycleTimeElapsed(); // Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.OnImageCycleTimeElapsed // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnStoreScreenCreated(struct UFortMtxStoreRootBase* StoreScreen); // Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.OnStoreScreenCreated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_CampaignPurchaseScreen(int32_t EntryPoint); // Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.ExecuteUbergraph_CampaignPurchaseScreen // (Final|UbergraphFunction) // @ game+0xd67374
};

