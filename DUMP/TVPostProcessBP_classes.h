// BlueprintGeneratedClass TVPostProcessBP.TVPostProcessBP_C
// Size: 0x2a1 (Inherited: 0x288)
struct ATVPostProcessBP_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UBillboardComponent* Billboard; // 0x290(0x08)
	struct USceneComponent* Root; // 0x298(0x08)
	bool DisableOnStartup; // 0x2a0(0x01)

	void IsEnabledForCurrentSubgame(bool& bEnabled); // Function TVPostProcessBP.TVPostProcessBP_C.IsEnabledForCurrentSubgame // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void UserConstructionScript(); // Function TVPostProcessBP.TVPostProcessBP_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Camera_DisableEffects(); // Function TVPostProcessBP.TVPostProcessBP_C.Camera_DisableEffects // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void FrontEndCameraSwitch(); // Function TVPostProcessBP.TVPostProcessBP_C.FrontEndCameraSwitch // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteCameraSwitch(); // Function TVPostProcessBP.TVPostProcessBP_C.ExecuteCameraSwitch // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_TVPostProcessBP(int32_t EntryPoint); // Function TVPostProcessBP.TVPostProcessBP_C.ExecuteUbergraph_TVPostProcessBP // (Final|UbergraphFunction) // @ game+0xd67374
};

