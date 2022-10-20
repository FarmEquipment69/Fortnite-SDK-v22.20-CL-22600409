// BlueprintGeneratedClass FrontendCamera_Inspect.FrontendCamera_Inspect_C
// Size: 0x9f0 (Inherited: 0x9e0)
struct AFrontendCamera_Inspect_C : AFortCameraBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9e0(0x08)
	struct UCameraComponent* ; // 0x9e8(0x08)

	void BP_OnActivated(struct AFortPlayerController* PlayerController); // Function FrontendCamera_Inspect.FrontendCamera_Inspect_C.BP_OnActivated // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnDeactivated(struct AFortPlayerController* PlayerController); // Function FrontendCamera_Inspect.FrontendCamera_Inspect_C.BP_OnDeactivated // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_FrontendCamera_Inspect(int32_t EntryPoint); // Function FrontendCamera_Inspect.FrontendCamera_Inspect_C.ExecuteUbergraph_FrontendCamera_Inspect // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

