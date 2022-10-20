// BlueprintGeneratedClass BattlePassVaultWorld.BattlePassVaultWorld_C
// Size: 0x3e0 (Inherited: 0x341)
struct ABattlePassVaultWorld_C : AVaultWorld_C {
	char pad_341[0x7]; // 0x341(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UStaticMeshComponent* floor; // 0x350(0x08)
	float Background_Effects_SetStreaks_50767E4640E86998EC96B7B2D57E5E27; // 0x358(0x04)
	enum class ETimelineDirection Background_Effects__Direction_50767E4640E86998EC96B7B2D57E5E27; // 0x35c(0x01)
	char pad_35D[0x3]; // 0x35d(0x03)
	struct UTimelineComponent* Background-Effects; // 0x360(0x08)
	float IconDissolve_NewTrack_0_983A4DA644BE5CFAED0C378063FC66FC; // 0x368(0x04)
	enum class ETimelineDirection IconDissolve__Direction_983A4DA644BE5CFAED0C378063FC66FC; // 0x36c(0x01)
	char pad_36D[0x3]; // 0x36d(0x03)
	struct UTimelineComponent* IconDissolve; // 0x370(0x08)
	float ItemDetails_Icon_X_Offset_F4D1C4E246C708FA1F53EDA5A3FEE781; // 0x378(0x04)
	float ItemDetails_X_Offset_F4D1C4E246C708FA1F53EDA5A3FEE781; // 0x37c(0x04)
	enum class ETimelineDirection ItemDetails__Direction_F4D1C4E246C708FA1F53EDA5A3FEE781; // 0x380(0x01)
	char pad_381[0x7]; // 0x381(0x07)
	struct UTimelineComponent* ItemDetails; // 0x388(0x08)
	float Floor_Visibility_FloorMask_CE7E338346E82397065B65AA77823F50; // 0x390(0x04)
	enum class ETimelineDirection Floor_Visibility__Direction_CE7E338346E82397065B65AA77823F50; // 0x394(0x01)
	char pad_395[0x3]; // 0x395(0x03)
	struct UTimelineComponent* Floor-Visibility; // 0x398(0x08)
	float TransitionForward_FX_Transition_Fade_46DACBD74D0A8B2278950785C007984A; // 0x3a0(0x04)
	float TransitionForward_Pre_TransitionOffset_46DACBD74D0A8B2278950785C007984A; // 0x3a4(0x04)
	float TransitionForward_Forward_46DACBD74D0A8B2278950785C007984A; // 0x3a8(0x04)
	enum class ETimelineDirection TransitionForward__Direction_46DACBD74D0A8B2278950785C007984A; // 0x3ac(0x01)
	char pad_3AD[0x3]; // 0x3ad(0x03)
	struct UTimelineComponent* TransitionForward; // 0x3b0(0x08)
	float TransitionBackward_fx_Transition_fade_7073CD0840227233D3A64795A5A1B1B8; // 0x3b8(0x04)
	float TransitionBackward_Pre_Transition_Offset_7073CD0840227233D3A64795A5A1B1B8; // 0x3bc(0x04)
	float TransitionBackward_Backward_7073CD0840227233D3A64795A5A1B1B8; // 0x3c0(0x04)
	enum class ETimelineDirection TransitionBackward__Direction_7073CD0840227233D3A64795A5A1B1B8; // 0x3c4(0x01)
	char pad_3C5[0x3]; // 0x3c5(0x03)
	struct UTimelineComponent* TransitionBackward; // 0x3c8(0x08)
	struct UMaterialInstance* FloorMI; // 0x3d0(0x08)
	struct UMaterialInstanceDynamic* FloorMID; // 0x3d8(0x08)

	void TransitionBackgroundBackward(double Backward, double PreTransitionOffset, double FXTransitionFade, struct UMaterialInstanceDynamic* Mid); // Function BattlePassVaultWorld.BattlePassVaultWorld_C.TransitionBackgroundBackward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void TransitionBackgroundForward(double Forward, double PreTransitionOffset, double FXTransitionFade, struct UMaterialInstanceDynamic* Mid); // Function BattlePassVaultWorld.BattlePassVaultWorld_C.TransitionBackgroundForward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetupBackgroundMaterial(struct UTexture2D*& TextureBackground, struct FTrackDynamicBackground& BackgroundInfo, struct UMaterialInstanceDynamic* Mid); // Function BattlePassVaultWorld.BattlePassVaultWorld_C.SetupBackgroundMaterial // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UserConstructionScript(); // Function BattlePassVaultWorld.BattlePassVaultWorld_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void TransitionForward__FinishedFunc(); // Function BattlePassVaultWorld.BattlePassVaultWorld_C.TransitionForward__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void TransitionForward__UpdateFunc(); // Function BattlePassVaultWorld.BattlePassVaultWorld_C.TransitionForward__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void TransitionBackward__FinishedFunc(); // Function BattlePassVaultWorld.BattlePassVaultWorld_C.TransitionBackward__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void TransitionBackward__UpdateFunc(); // Function BattlePassVaultWorld.BattlePassVaultWorld_C.TransitionBackward__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void Background-Effects__FinishedFunc(); // Function BattlePassVaultWorld.BattlePassVaultWorld_C.Background-Effects__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void Background-Effects__UpdateFunc(); // Function BattlePassVaultWorld.BattlePassVaultWorld_C.Background-Effects__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void Floor-Visibility__FinishedFunc(); // Function BattlePassVaultWorld.BattlePassVaultWorld_C.Floor-Visibility__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void Floor-Visibility__UpdateFunc(); // Function BattlePassVaultWorld.BattlePassVaultWorld_C.Floor-Visibility__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void ItemDetails__FinishedFunc(); // Function BattlePassVaultWorld.BattlePassVaultWorld_C.ItemDetails__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void ItemDetails__UpdateFunc(); // Function BattlePassVaultWorld.BattlePassVaultWorld_C.ItemDetails__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void IconDissolve__FinishedFunc(); // Function BattlePassVaultWorld.BattlePassVaultWorld_C.IconDissolve__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void IconDissolve__UpdateFunc(); // Function BattlePassVaultWorld.BattlePassVaultWorld_C.IconDissolve__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function BattlePassVaultWorld.BattlePassVaultWorld_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnTransitionBackground(bool bPlayForward); // Function BattlePassVaultWorld.BattlePassVaultWorld_C.OnTransitionBackground // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnSetupBackground(struct UTexture2D* LoadedBackgroundTexture, struct FTrackDynamicBackground& BackgroundInfo); // Function BattlePassVaultWorld.BattlePassVaultWorld_C.OnSetupBackground // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnUpdateDisplay(bool bShowFloor, bool bShowEffects); // Function BattlePassVaultWorld.BattlePassVaultWorld_C.OnUpdateDisplay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnInitialBackgroundTransition(); // Function BattlePassVaultWorld.BattlePassVaultWorld_C.OnInitialBackgroundTransition // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnTransitionItemDetails(bool bShowItemDetails); // Function BattlePassVaultWorld.BattlePassVaultWorld_C.OnTransitionItemDetails // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BattlePassVaultWorld(int32_t EntryPoint); // Function BattlePassVaultWorld.BattlePassVaultWorld_C.ExecuteUbergraph_BattlePassVaultWorld // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

