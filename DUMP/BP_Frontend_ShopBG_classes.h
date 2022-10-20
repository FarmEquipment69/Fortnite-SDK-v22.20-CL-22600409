// BlueprintGeneratedClass BP_Frontend_ShopBG.BP_Frontend_ShopBG_C
// Size: 0x3a8 (Inherited: 0x288)
struct ABP_Frontend_ShopBG_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UStaticMeshComponent* StandardBackgroundPlane1; // 0x290(0x08)
	struct UStaticMeshComponent* StandardBackgroundPlane; // 0x298(0x08)
	struct UStaticMeshComponent* Cone; // 0x2a0(0x08)
	struct UStaticMeshComponent* Plane; // 0x2a8(0x08)
	struct USceneComponent* Scene; // 0x2b0(0x08)
	struct UStaticMeshComponent* BackgroundTexturePlane; // 0x2b8(0x08)
	struct UStaticMeshComponent* VeryLargeBackgroundPlane; // 0x2c0(0x08)
	struct USceneComponent* Scene_Signal; // 0x2c8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2d0(0x08)
	struct FRotator Rot_Intro; // 0x2d8(0x18)
	struct FRotator NextRot; // 0x2f0(0x18)
	struct FRotator ; // 0x308(0x18)
	struct FRotator ; // 0x320(0x18)
	double PlayRate; // 0x338(0x08)
	struct FRotator Rot_IntroStart; // 0x340(0x18)
	bool bHasEvent; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	double YInitial; // 0x360(0x08)
	double YEnd; // 0x368(0x08)
	struct UMaterialInstanceDynamic* Mid; // 0x370(0x08)
	struct ACMSLobbyDirector_C* CMSDirector; // 0x378(0x08)
	struct FString BPEnvName; // 0x380(0x10)
	bool ShopEntered; // 0x390(0x01)
	char pad_391[0x7]; // 0x391(0x07)
	struct FTimerHandle DonutSeqTimerHandle; // 0x398(0x08)
	struct AActor* DomeObstruction; // 0x3a0(0x08)

	void SetDynamicBG(struct UTexture* InTexture); // Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.SetDynamicBG // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EnableDynamicShopBG(); // Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.EnableDynamicShopBG // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void SetDynamicEnvironmentEvent(struct FString InPresetEnvName); // Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.SetDynamicEnvironmentEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void DebugShopBG(); // Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.DebugShopBG // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleRequestHide(); // Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.HandleRequestHide // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleItemShopEntered(); // Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.HandleItemShopEntered // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleStoreEntered(); // Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.HandleStoreEntered // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ResetDonut(); // Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.ResetDonut // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BP_Frontend_ShopBG(int32_t EntryPoint); // Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.ExecuteUbergraph_BP_Frontend_ShopBG // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

