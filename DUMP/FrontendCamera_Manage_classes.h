// BlueprintGeneratedClass FrontendCamera_Manage.FrontendCamera_Manage_C
// Size: 0x9f0 (Inherited: 0x9e0)
struct AFrontendCamera_Manage_C : AFortCameraBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9e0(0x08)
	struct UCameraComponent* ; // 0x9e8(0x08)

	void BP_OnActivated(struct AFortPlayerController* PlayerController); // Function FrontendCamera_Manage.FrontendCamera_Manage_C.BP_OnActivated // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnDeactivated(struct AFortPlayerController* PlayerController); // Function FrontendCamera_Manage.FrontendCamera_Manage_C.BP_OnDeactivated // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_FrontendCamera_Manage(int32_t EntryPoint); // Function FrontendCamera_Manage.FrontendCamera_Manage_C.ExecuteUbergraph_FrontendCamera_Manage // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

