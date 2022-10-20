// BlueprintGeneratedClass LoginCamera_Blueprint.LoginCamera_Blueprint_C
// Size: 0x9f8 (Inherited: 0x9e0)
struct ALoginCamera_Blueprint_C : AFortCameraBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9e0(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x9e8(0x08)
	struct UCameraComponent* ; // 0x9f0(0x08)

	void BP_OnActivated(struct AFortPlayerController* PlayerController); // Function LoginCamera_Blueprint.LoginCamera_Blueprint_C.BP_OnActivated // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_LoginCamera_Blueprint(int32_t EntryPoint); // Function LoginCamera_Blueprint.LoginCamera_Blueprint_C.ExecuteUbergraph_LoginCamera_Blueprint // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

