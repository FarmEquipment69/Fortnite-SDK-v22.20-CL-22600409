// BlueprintGeneratedClass VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C
// Size: 0x2d8 (Inherited: 0x288)
struct AVaultWeaponPlacementHelper_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UStaticMeshComponent* CUBE; // 0x290(0x08)
	struct UParticleSystemComponent* PS-NoPlayer-Sparkle; // 0x298(0x08)
	struct UParticleSystemComponent* PS-NoPlayer-Swirl02; // 0x2a0(0x08)
	struct UParticleSystemComponent* PS-NoPlayer-Swirl01; // 0x2a8(0x08)
	struct UStaticMeshComponent* CharacterPlacement; // 0x2b0(0x08)
	struct USceneComponent* Root; // 0x2b8(0x08)
	struct UStaticMesh* Mesh; // 0x2c0(0x08)
	struct FMulticastInlineDelegate ; // 0x2c8(0x10)

	void GetFrontendAnimInstance(); // Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.GetFrontendAnimInstance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnFrontEndCameraChanged(enum class EFrontEndCamera NewCamera, enum class EFrontEndCamera OldCamera); // Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnFrontEndCameraChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Initialize(); // Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void InitializeContextEvents(); // Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.InitializeContextEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ItemRez(); // Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ItemRez // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_VaultWeaponPlacementHelper(int32_t EntryPoint); // Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ExecuteUbergraph_VaultWeaponPlacementHelper // (Final|UbergraphFunction) // @ game+0xd67374
	void NewEventDispatcher_0__DelegateSignature(); // Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.NewEventDispatcher_0__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

