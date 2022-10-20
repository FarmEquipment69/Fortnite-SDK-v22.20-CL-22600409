// BlueprintGeneratedClass BP_FrontendBackPlate.BP_FrontendBackPlate_C
// Size: 0x3f9 (Inherited: 0x288)
struct ABP_FrontendBackPlate_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UStaticMeshComponent* SM_INvertedSphere; // 0x290(0x08)
	struct UParticleSystemComponent* P_DudeBro_MultiHomingProj_Trail; // 0x298(0x08)
	struct UParticleSystemComponent* ParticleSystem11; // 0x2a0(0x08)
	struct UParticleSystemComponent* ParticleSystem1; // 0x2a8(0x08)
	struct UStaticMeshComponent* SM_FrontendBackPlate_Floor; // 0x2b0(0x08)
	struct UStaticMeshComponent* StaticMesh_fog; // 0x2b8(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x2c0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2c8(0x08)
	float StopHyperSpeed_BlurControl_740818E745B3B8A476EC3CA79F88917D; // 0x2d0(0x04)
	float StopHyperSpeed_LessBrightFlash_740818E745B3B8A476EC3CA79F88917D; // 0x2d4(0x04)
	float StopHyperSpeed_Flash_740818E745B3B8A476EC3CA79F88917D; // 0x2d8(0x04)
	enum class ETimelineDirection StopHyperSpeed__Direction_740818E745B3B8A476EC3CA79F88917D; // 0x2dc(0x01)
	char pad_2DD[0x3]; // 0x2dd(0x03)
	struct UTimelineComponent* StopHyperSpeed; // 0x2e0(0x08)
	float HyperSpace_StarUVScale_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x2e8(0x04)
	float HyperSpace_StarFieldFade_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x2ec(0x04)
	float HyperSpace_StarBloom_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x2f0(0x04)
	float HyperSpace_NumStarLoops_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x2f4(0x04)
	float HyperSpace_UVScale_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x2f8(0x04)
	float HyperSpace_ShowStarLines_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x2fc(0x04)
	float HyperSpace_bloom_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x300(0x04)
	float HyperSpace_Tunnel_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x304(0x04)
	float HyperSpace_flash_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x308(0x04)
	float HyperSpace_starlines_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x30c(0x04)
	enum class ETimelineDirection HyperSpace__Direction_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x310(0x01)
	char pad_311[0x7]; // 0x311(0x07)
	struct UTimelineComponent* HyperSpace; // 0x318(0x08)
	float UISpecailEventTransition_UsingUISpecialEventColors_26FA49894E4D045B21346598A2D837C2; // 0x320(0x04)
	enum class ETimelineDirection UISpecailEventTransition__Direction_26FA49894E4D045B21346598A2D837C2; // 0x324(0x01)
	char pad_325[0x3]; // 0x325(0x03)
	struct UTimelineComponent* UISpecailEventTransition; // 0x328(0x08)
	struct UTexture* BackgroundTexture; // 0x330(0x08)
	struct UMaterialInterface* Material_background; // 0x338(0x08)
	struct UMaterialInterface* Material_Fog; // 0x340(0x08)
	struct UMaterialInstanceDynamic* BlurMaterial; // 0x348(0x08)
	struct UTextureRenderTarget2D* RenderTarget; // 0x350(0x08)
	bool UpdateFoginRealTime; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	struct UMaterialInstanceDynamic* MID_Floor; // 0x360(0x08)
	struct UMaterialInterface* PreBlurMaterial; // 0x368(0x08)
	struct UTextureRenderTarget2D* RenderTarget_preblur; // 0x370(0x08)
	struct UMaterialInstanceDynamic* MID_Background; // 0x378(0x08)
	struct UMaterialInstanceDynamic* MID_Preblur; // 0x380(0x08)
	struct FMulticastInlineDelegate BeginRockyRidge; // 0x388(0x10)
	struct FMulticastInlineDelegate OnRockyRidgeFinished; // 0x398(0x10)
	struct FMulticastInlineDelegate HidePlayer; // 0x3a8(0x10)
	struct FMulticastInlineDelegate RequestLobbyColorChanges; // 0x3b8(0x10)
	struct FLinearColor CurrentUIColorScheme; // 0x3c8(0x10)
	bool bHasUIColorOverride; // 0x3d8(0x01)
	char pad_3D9[0x7]; // 0x3d9(0x07)
	struct TArray<struct AActor*> FloatingShapes; // 0x3e0(0x10)
	struct UAudioComponent* LoopingAudio; // 0x3f0(0x08)
	bool AllowMatchmakingInteraction; // 0x3f8(0x01)

	void HasMatcmakingInteraction(bool& HasInteraction); // Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.HasMatcmakingInteraction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CreateUniqueMaterialName(struct FString PostFix, struct FString& UniqueString); // Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.CreateUniqueMaterialName // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void SetFloatingShapeVisibility(bool Show); // Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.SetFloatingShapeVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetSpecialEventUIColorScheme(bool SetUIPanelColors, struct FLinearColor Backing, struct FLinearColor Backing_Hover, struct FLinearColor Backing_Selection, bool SetFontColors, struct FLinearColor Primary, struct FLinearColor Secondary, struct FLinearColor Tertiary, struct FLinearColor Quaternary); // Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.SetSpecialEventUIColorScheme // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HasUIColorOverride(bool& HasUIColorOverride); // Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.HasUIColorOverride // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void ResetUIColorScheme(); // Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.ResetUIColorScheme // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetUIColorScheme(struct FLinearColor& colorscheme, bool& bHasOverride); // Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.GetUIColorScheme // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void RequestUIColorScheme(struct FLinearColor MainUIColor); // Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.RequestUIColorScheme // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateRenderTargetRealtime(); // Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.UpdateRenderTargetRealtime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EnableRealtimeUpdate(bool Enabled); // Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.EnableRealtimeUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateRenderTarget(); // Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.UpdateRenderTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetBackgroundTexture(struct UTexture* InTexture, struct UMaterialInterface* InMaterial, struct UMaterialInterface* InPreBlurMaterial); // Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.SetBackgroundTexture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UserConstructionScript(); // Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UISpecailEventTransition__FinishedFunc(); // Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.UISpecailEventTransition__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void UISpecailEventTransition__UpdateFunc(); // Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.UISpecailEventTransition__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void HyperSpace__FinishedFunc(); // Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.HyperSpace__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void HyperSpace__UpdateFunc(); // Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.HyperSpace__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void StopHyperSpeed__FinishedFunc(); // Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.StopHyperSpeed__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void StopHyperSpeed__UpdateFunc(); // Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.StopHyperSpeed__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void UpdateSettings(); // Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.UpdateSettings // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetEnableBlackMondayFX(bool IsEnabled); // Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.SetEnableBlackMondayFX // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlayUISpecialEventTransition(bool bTransitionToSpecialEvent); // Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.PlayUISpecialEventTransition // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveTick(float DeltaSeconds); // Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void PlayEnterMatchmakingAnim(); // Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.PlayEnterMatchmakingAnim // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ResetMatchmakingAnim(); // Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.ResetMatchmakingAnim // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetAllowMatchmakingInteraction(bool AllowInteraction); // Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.SetAllowMatchmakingInteraction // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void TestBlur(); // Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.TestBlur // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleSpecialEventAudioOnMatchmakingEnd(bool Success); // Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.HandleSpecialEventAudioOnMatchmakingEnd // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void MatchmakingEnded(bool bWasSuccess); // Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.MatchmakingEnded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EnteringMatchmaking(); // Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.EnteringMatchmaking // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BP_FrontendBackPlate(int32_t EntryPoint); // Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.ExecuteUbergraph_BP_FrontendBackPlate // (Final|UbergraphFunction) // @ game+0xd67374
	void RequestLobbyColorChanges__DelegateSignature(struct FLinearColor Color_A, bool UseDefaultScheme); // Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.RequestLobbyColorChanges__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HidePlayer__DelegateSignature(); // Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.HidePlayer__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnRockyRidgeFinished__DelegateSignature(); // Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.OnRockyRidgeFinished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BeginRockyRidge__DelegateSignature(); // Function BP_FrontendBackPlate.BP_FrontendBackPlate_C.BeginRockyRidge__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

