// BlueprintGeneratedClass FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C
// Size: 0xa00 (Inherited: 0x9e0)
struct AFortnitePartyHeroSelect_Camera_C : AFortCameraBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9e0(0x08)
	struct UCameraComponent* ; // 0x9e8(0x08)
	bool MouseDown; // 0x9f0(0x01)
	char pad_9F1[0x7]; // 0x9f1(0x07)
	struct AFortPlayerPawn* CachedPawn; // 0x9f8(0x08)

	void HandleMousePress(); // Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.HandleMousePress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HandleMouseRelease(); // Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.HandleMouseRelease // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void (struct FKey Key); // Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C. // (BlueprintEvent) // @ game+0xd67374
	void (struct FKey Key); // Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C. // (BlueprintEvent) // @ game+0xd67374
	void (struct FKey Key); // Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C. // (BlueprintEvent) // @ game+0xd67374
	void (struct FKey Key); // Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C. // (BlueprintEvent) // @ game+0xd67374
	void BP_OnActivated(struct AFortPlayerController* PlayerController); // Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.BP_OnActivated // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void BP_OnDeactivated(struct AFortPlayerController* PlayerController); // Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.BP_OnDeactivated // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ReceiveTick(float DeltaSeconds); // Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_FortnitePartyHeroSelect_Camera(int32_t EntryPoint); // Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.ExecuteUbergraph_FortnitePartyHeroSelect_Camera // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

