// BlueprintGeneratedClass B_Pickups_Default.B_Pickups_Default_C
// Size: 0x5a8 (Inherited: 0x57c)
struct AB_Pickups_Default_C : AB_Pickups_Parent_C {
	char pad_57C[0x4]; // 0x57c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x580(0x08)
	struct UStaticMeshComponent* Background; // 0x588(0x08)
	struct UFXSystemComponent* ParticleSystem; // 0x590(0x08)
	struct UStaticMeshComponent* rarePickupFXMesh; // 0x598(0x08)
	struct USpotLightComponent* SpotLightComp; // 0x5a0(0x08)

	void initializeSpotlightComponent(); // Function B_Pickups_Default.B_Pickups_Default_C.initializeSpotlightComponent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void AddRareFX(); // Function B_Pickups_Default.B_Pickups_Default_C.AddRareFX // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Set Initial BKGD Param(struct UMaterialInstanceDynamic* Mid); // Function B_Pickups_Default.B_Pickups_Default_C.Set Initial BKGD Param // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HideBackgroundAndSpotlight(); // Function B_Pickups_Default.B_Pickups_Default_C.HideBackgroundAndSpotlight // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnPickedUp(struct AFortPawn* PickupTarget); // Function B_Pickups_Default.B_Pickups_Default_C.OnPickedUp // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function B_Pickups_Default.B_Pickups_Default_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnTossed(); // Function B_Pickups_Default.B_Pickups_Default_C.OnTossed // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_B_Pickups_Default(int32_t EntryPoint); // Function B_Pickups_Default.B_Pickups_Default_C.ExecuteUbergraph_B_Pickups_Default // (Final|UbergraphFunction) // @ game+0xd67374
};

