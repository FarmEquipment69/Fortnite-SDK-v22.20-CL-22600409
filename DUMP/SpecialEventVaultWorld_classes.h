// BlueprintGeneratedClass SpecialEventVaultWorld.SpecialEventVaultWorld_C
// Size: 0x3c8 (Inherited: 0x341)
struct ASpecialEventVaultWorld_C : AVaultWorld_C {
	char pad_341[0x7]; // 0x341(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UStaticMeshComponent* floor; // 0x350(0x08)
	float ItemDetails_X_Offset_1EDCEF5F41216A9DADD25897C8B68493; // 0x358(0x04)
	enum class ETimelineDirection ItemDetails__Direction_1EDCEF5F41216A9DADD25897C8B68493; // 0x35c(0x01)
	char pad_35D[0x3]; // 0x35d(0x03)
	struct UTimelineComponent* ItemDetails; // 0x360(0x08)
	float Floor_Visibility_FloorMask_37382717410D795E9E7E0990FC3EFCC2; // 0x368(0x04)
	enum class ETimelineDirection Floor_Visibility__Direction_37382717410D795E9E7E0990FC3EFCC2; // 0x36c(0x01)
	char pad_36D[0x3]; // 0x36d(0x03)
	struct UTimelineComponent* Floor-Visibility; // 0x370(0x08)
	float Background_Effects_SetStreaks_7B5688E44724D9F68D3C20A520093829; // 0x378(0x04)
	enum class ETimelineDirection Background_Effects__Direction_7B5688E44724D9F68D3C20A520093829; // 0x37c(0x01)
	char pad_37D[0x3]; // 0x37d(0x03)
	struct UTimelineComponent* Background-Effects; // 0x380(0x08)
	float TransitionForward_FX_Transition_Fade_FDB9DC244ED5578954F07A87EDA84CA5; // 0x388(0x04)
	float TransitionForward_Pre_TransitionOffset_FDB9DC244ED5578954F07A87EDA84CA5; // 0x38c(0x04)
	float TransitionForward_Forward_FDB9DC244ED5578954F07A87EDA84CA5; // 0x390(0x04)
	enum class ETimelineDirection TransitionForward__Direction_FDB9DC244ED5578954F07A87EDA84CA5; // 0x394(0x01)
	char pad_395[0x3]; // 0x395(0x03)
	struct UTimelineComponent* TransitionForward; // 0x398(0x08)
	float TransitionBackward_fx_Transition_fade_9CCDE9524354AF859735079DD2ED12AA; // 0x3a0(0x04)
	float TransitionBackward_Pre_Transition_Offset_9CCDE9524354AF859735079DD2ED12AA; // 0x3a4(0x04)
	float TransitionBackward_Backward_9CCDE9524354AF859735079DD2ED12AA; // 0x3a8(0x04)
	enum class ETimelineDirection TransitionBackward__Direction_9CCDE9524354AF859735079DD2ED12AA; // 0x3ac(0x01)
	char pad_3AD[0x3]; // 0x3ad(0x03)
	struct UTimelineComponent* TransitionBackward; // 0x3b0(0x08)
	struct UMaterialInstance* FloorMI; // 0x3b8(0x08)
	struct UMaterialInstanceDynamic* FloorMID; // 0x3c0(0x08)

	void TransitionBackgroundBackward(double Backward, double PreTransitionOffset, double FXTransitionFade, struct UMaterialInstanceDynamic* Mid); // Function SpecialEventVaultWorld.SpecialEventVaultWorld_C.TransitionBackgroundBackward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void TransitionBackgroundForward(double Forward, double PreTransitionOffset, double FXTransitionFade, struct UMaterialInstanceDynamic* Mid); // Function SpecialEventVaultWorld.SpecialEventVaultWorld_C.TransitionBackgroundForward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetupBackgroundMaterial(struct UTexture2D*& TextureBackground, struct FTrackDynamicBackground& BackgroundInfo, struct UMaterialInstanceDynamic* Mid); // Function SpecialEventVaultWorld.SpecialEventVaultWorld_C.SetupBackgroundMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UserConstructionScript(); // Function SpecialEventVaultWorld.SpecialEventVaultWorld_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void TransitionForward__FinishedFunc(); // Function SpecialEventVaultWorld.SpecialEventVaultWorld_C.TransitionForward__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void TransitionForward__UpdateFunc(); // Function SpecialEventVaultWorld.SpecialEventVaultWorld_C.TransitionForward__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void TransitionBackward__FinishedFunc(); // Function SpecialEventVaultWorld.SpecialEventVaultWorld_C.TransitionBackward__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void TransitionBackward__UpdateFunc(); // Function SpecialEventVaultWorld.SpecialEventVaultWorld_C.TransitionBackward__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void Background-Effects__FinishedFunc(); // Function SpecialEventVaultWorld.SpecialEventVaultWorld_C.Background-Effects__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void Background-Effects__UpdateFunc(); // Function SpecialEventVaultWorld.SpecialEventVaultWorld_C.Background-Effects__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void Floor-Visibility__FinishedFunc(); // Function SpecialEventVaultWorld.SpecialEventVaultWorld_C.Floor-Visibility__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void Floor-Visibility__UpdateFunc(); // Function SpecialEventVaultWorld.SpecialEventVaultWorld_C.Floor-Visibility__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void ItemDetails__FinishedFunc(); // Function SpecialEventVaultWorld.SpecialEventVaultWorld_C.ItemDetails__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void ItemDetails__UpdateFunc(); // Function SpecialEventVaultWorld.SpecialEventVaultWorld_C.ItemDetails__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function SpecialEventVaultWorld.SpecialEventVaultWorld_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnTransitionBackground(bool bPlayForward); // Function SpecialEventVaultWorld.SpecialEventVaultWorld_C.OnTransitionBackground // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnSetupBackground(struct UTexture2D* LoadedBackgroundTexture, struct FTrackDynamicBackground& BackgroundInfo); // Function SpecialEventVaultWorld.SpecialEventVaultWorld_C.OnSetupBackground // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnUpdateDisplay(bool bShowFloor, bool bShowEffects); // Function SpecialEventVaultWorld.SpecialEventVaultWorld_C.OnUpdateDisplay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnInitialBackgroundTransition(); // Function SpecialEventVaultWorld.SpecialEventVaultWorld_C.OnInitialBackgroundTransition // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnTransitionItemDetails(bool bShowItemDetails); // Function SpecialEventVaultWorld.SpecialEventVaultWorld_C.OnTransitionItemDetails // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnUpdateMaterialIndex(int32_t MaterialIndex); // Function SpecialEventVaultWorld.SpecialEventVaultWorld_C.OnUpdateMaterialIndex // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SpecialEventVaultWorld(int32_t EntryPoint); // Function SpecialEventVaultWorld.SpecialEventVaultWorld_C.ExecuteUbergraph_SpecialEventVaultWorld // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

