// BlueprintGeneratedClass TVPostProcessBPAthena.TVPostProcessBPAthena_C
// Size: 0x2d0 (Inherited: 0x2a1)
struct ATVPostProcessBPAthena_C : ATVPostProcessBP_C {
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UPostProcessComponent* FullScreenTVPP-OnlyMaterialModified; // 0x2b0(0x08)
	float FrontEndCameraSwitchFadeAthena_SwipeLines_Animation_8828A7EA43DFA9153F986F805918F9F7; // 0x2b8(0x04)
	float FrontEndCameraSwitchFadeAthena_PostProcessVisibility_8828A7EA43DFA9153F986F805918F9F7; // 0x2bc(0x04)
	enum class ETimelineDirection FrontEndCameraSwitchFadeAthena__Direction_8828A7EA43DFA9153F986F805918F9F7; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct UTimelineComponent* FrontEndCameraSwitchFadeAthena; // 0x2c8(0x08)

	void IsEnabledForCurrentSubgame(bool& bEnabled); // Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.IsEnabledForCurrentSubgame // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void FrontEndCameraSwitchFadeAthena__FinishedFunc(); // Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.FrontEndCameraSwitchFadeAthena__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void FrontEndCameraSwitchFadeAthena__UpdateFunc(); // Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.FrontEndCameraSwitchFadeAthena__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void ExecuteCameraSwitch(); // Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.ExecuteCameraSwitch // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Camera_DisableEffects(); // Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.Camera_DisableEffects // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_TVPostProcessBPAthena(int32_t EntryPoint); // Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.ExecuteUbergraph_TVPostProcessBPAthena // (Final|UbergraphFunction) // @ game+0xd67374
};

