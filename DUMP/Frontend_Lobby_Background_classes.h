// BlueprintGeneratedClass Frontend_Lobby_Background.Frontend_Lobby_Background_C
// Size: 0x3e0 (Inherited: 0x2a0)
struct AFrontend_Lobby_Background_C : AFortLevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	float FadeIn_Fade_3606FDF647A6577B9DAC47B89146CD85; // 0x2a8(0x04)
	enum class ETimelineDirection FadeIn__Direction_3606FDF647A6577B9DAC47B89146CD85; // 0x2ac(0x01)
	char pad_2AD[0x3]; // 0x2ad(0x03)
	struct UTimelineComponent* FadeIn; // 0x2b0(0x08)
	float FadeOut_Fade_44D3B05B49031FA3891648AB32F57584; // 0x2b8(0x04)
	enum class ETimelineDirection FadeOut__Direction_44D3B05B49031FA3891648AB32F57584; // 0x2bc(0x01)
	char pad_2BD[0x3]; // 0x2bd(0x03)
	struct UTimelineComponent* FadeOut; // 0x2c0(0x08)
	double FadetoBlackFloor; // 0x2c8(0x08)
	double FadeGrid; // 0x2d0(0x08)
	double FadeGrid_Targetvalue; // 0x2d8(0x08)
	double FadetoBlackFloor_TargetValue; // 0x2e0(0x08)
	struct FString PresetEnvironment; // 0x2e8(0x10)
	struct UTexture* Texture; // 0x2f8(0x08)
	struct UMaterialInstance* Material; // 0x300(0x08)
	struct UMaterialInstance* PreBlueMaterial; // 0x308(0x08)
	struct TMap<struct FString, struct FFrontendBackgroundData> Backgrounds; // 0x310(0x50)
	struct ABP_FrontendBackPlate_C* 6_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x360(0x08)
	struct AEmitter* P_Storm_Rain_01_5_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x368(0x08)
	struct AEmitter* P_Snow_Ambient_Lobby_2_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x370(0x08)
	struct ANiagaraActor* NS_SideWays_Volume_InFrontEnd_2_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x378(0x08)
	struct AFortStaticMeshActor* SM_Sideways_Smoke_FrontEnd_159_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x380(0x08)
	struct AFortStaticMeshActor* SM_Mother_Crash_BlinkingLights_01_3_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x388(0x08)
	struct ANiagaraActor* NiagaraActor_3_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x390(0x08)
	struct AFortStaticMeshActor* SM_Sideways_Smoke_FrontEnd_0_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x398(0x08)
	struct ANiagaraActor* NiagaraActor_1_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x3a0(0x08)
	struct ANiagaraActor* NiagaraActor_2_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x3a8(0x08)
	struct ANiagaraActor* NiagaraActor_4_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x3b0(0x08)
	struct ABP_FrontendBackPlate_C* 6_EdGraph_2_RefProperty; // 0x3b8(0x08)
	struct ABP_FrontendBackPlate_C* 6_EdGraph_4_RefProperty; // 0x3c0(0x08)
	struct ABP_FrontendBackPlate_C* 6_EdGraph_5_RefProperty; // 0x3c8(0x08)
	struct ABP_FrontendBackPlate_C* 6_EdGraph_6_RefProperty; // 0x3d0(0x08)
	struct ABP_FrontendBackPlate_C* 6_EdGraph_7_RefProperty; // 0x3d8(0x08)

	void SetupSpecialEventBackgroundDataWithRenderTarget(bool EnableRealtimeUpdate, double InFadeGridTargetValue, double InFadeToBlackFloorTargetValue); // Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.SetupSpecialEventBackgroundDataWithRenderTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetupBasicBackgroundDataWithRenderTarget(bool EnableRealtimeUpdate, double InFadeGridTargetValue, double InFadeToBlackFloorTargetValue); // Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.SetupBasicBackgroundDataWithRenderTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetupSpecialEventBackgroundData(bool EnableRealtimeUpdate, double InFadeGridTargetValue, double InFadeToBlackFloorTargetValue); // Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.SetupSpecialEventBackgroundData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetupGalileo(); // Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.SetupGalileo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void LoadBackgroundData(); // Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.LoadBackgroundData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Setup Basic Background Data(bool EnableRealtimeUpdate, double InFadeGridTargetValue, double InFadeToBlackFloorTargetValue); // Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.Setup Basic Background Data // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetShowPedestalSparkles(bool Show); // Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.SetShowPedestalSparkles // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateFade(double FadeValue, double FadeFloorToBlack, double InFadeGrid); // Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.UpdateFade // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void FadeIn__FinishedFunc(); // Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.FadeIn__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void FadeIn__UpdateFunc(); // Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.FadeIn__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void FadeOut__FinishedFunc(); // Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.FadeOut__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void FadeOut__UpdateFunc(); // Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.FadeOut__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void OnLoaded_7B16DAE04937EECB604410A2EC352CE3(struct UObject* Loaded); // Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.OnLoaded_7B16DAE04937EECB604410A2EC352CE3 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnLoaded_D6DC1C6545F1A19E2FFC1B9CDACD5E99(struct UObject* Loaded); // Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.OnLoaded_D6DC1C6545F1A19E2FFC1B9CDACD5E99 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnLoaded_E5F1E80A4DD36718D41FF68F137C4775(struct UObject* Loaded); // Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.OnLoaded_E5F1E80A4DD36718D41FF68F137C4775 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnLoaded_1CC0D8274FA1EFC9AE28C89FDF518A70(struct UObject* Loaded); // Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.OnLoaded_1CC0D8274FA1EFC9AE28C89FDF518A70 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature(struct FString PresetEnvironmentName); // Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature(struct UTexture* BackgroundImage); // Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void TestDynColor(); // Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.TestDynColor // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void FadeFromBlue(); // Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.FadeFromBlue // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void LoadAssets(struct TSoftObjectPtr<UTexture> InTexture, struct TSoftObjectPtr<UMaterialInstance> InMaterial, struct TSoftObjectPtr<UMaterialInstance> InPreBlurMaterial); // Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.LoadAssets // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ContinueBackgroundSetup(); // Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.ContinueBackgroundSetup // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_Frontend_Lobby_Background(int32_t EntryPoint); // Function Frontend_Lobby_Background.Frontend_Lobby_Background_C.ExecuteUbergraph_Frontend_Lobby_Background // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

