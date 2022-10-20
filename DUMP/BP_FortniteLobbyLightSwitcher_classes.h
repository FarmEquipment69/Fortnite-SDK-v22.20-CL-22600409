// BlueprintGeneratedClass BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C
// Size: 0x314 (Inherited: 0x288)
struct ABP_FortniteLobbyLightSwitcher_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)
	struct ADirectionalLight* DirectionLight; // 0x298(0x08)
	struct ASkyLight* SkyLight; // 0x2a0(0x08)
	struct TArray<struct APointLight*> Pointlights; // 0x2a8(0x10)
	struct AExponentialHeightFog* ExponentialHeightFog; // 0x2b8(0x08)
	struct ADirectionalLight* DirectionalLight_LowDetailMode; // 0x2c0(0x08)
	struct TArray<struct AEmitter*> ParticleSystems; // 0x2c8(0x10)
	bool IsActive; // 0x2d8(0x01)
	bool DebugLOWQualityLighting; // 0x2d9(0x01)
	char pad_2DA[0x6]; // 0x2da(0x06)
	struct ASkyLight* SkyLight_LowDetailMode; // 0x2e0(0x08)
	struct AExponentialHeightFog* ExponentialHeightfog_LowDetailMode; // 0x2e8(0x08)
	bool LOW_FX_Setting_Use_MobileLighting; // 0x2f0(0x01)
	bool IsLightalreadyActive; // 0x2f1(0x01)
	char pad_2F2[0x2]; // 0x2f2(0x02)
	struct FLinearColor MPC-ManualSunlightVector; // 0x2f4(0x10)
	struct FLinearColor MPC-ManualSunlightColor; // 0x304(0x10)

	void SetVisiblityofDetailSpecificMeshes(); // Function BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.SetVisiblityofDetailSpecificMeshes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetVisiblityofSceneLighting(bool Activate); // Function BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.SetVisiblityofSceneLighting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UserConstructionScript(); // Function BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void EnableLobbySetLighting(); // Function BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.EnableLobbySetLighting // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void DisableLobbySetLighting(); // Function BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.DisableLobbySetLighting // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateSettings(); // Function BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.UpdateSettings // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BP_FortniteLobbyLightSwitcher(int32_t EntryPoint); // Function BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.ExecuteUbergraph_BP_FortniteLobbyLightSwitcher // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

