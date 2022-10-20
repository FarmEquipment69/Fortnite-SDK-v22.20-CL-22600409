// BlueprintGeneratedClass FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C
// Size: 0xa51 (Inherited: 0x9e0)
struct AFortnitePartyBackdrop_Camera_C : AFortCameraBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9e0(0x08)
	struct UArrowComponent* Arrow; // 0x9e8(0x08)
	struct FTransform SavedTransform; // 0x9f0(0x60)
	bool Active; // 0xa50(0x01)

	void BP_OnActivated(struct AFortPlayerController* PlayerController); // Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.BP_OnActivated // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnDeactivated(struct AFortPlayerController* PlayerController); // Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.BP_OnDeactivated // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void Reset Location(); // Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.Reset Location // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ManualActivate(); // Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.ManualActivate // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_FortnitePartyBackdrop_Camera(int32_t EntryPoint); // Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.ExecuteUbergraph_FortnitePartyBackdrop_Camera // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

