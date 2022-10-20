// BlueprintGeneratedClass PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C
// Size: 0x4200 (Inherited: 0x4120)
struct APlayerPawn_Generic_Parent_C : AFortPlayerPawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4120(0x08)
	struct TArray<struct UMaterialInterface*> Default Weapon Materials; // 0x4128(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PawnBackpackMaterials; // 0x4138(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PawnHatMaterials; // 0x4148(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PawnHeadMaterials; // 0x4158(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PawnBodyMaterials; // 0x4168(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PawnCharmMaterials; // 0x4178(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PawnFaceMaterials; // 0x4188(0x10)
	struct UPostProcessComponent* PlayerPostProcessFX; // 0x4198(0x08)
	struct TArray<struct USkeletalMeshComponent*> SkeletalMeshes; // 0x41a0(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> PawnMaterials_ALL; // 0x41b0(0x10)
	int32_t WaterCounter; // 0x41c0(0x04)
	char pad_41C4[0x4]; // 0x41c4(0x04)
	struct AActor* CurrentWaterMeshActor; // 0x41c8(0x08)
	bool IsInWater; // 0x41d0(0x01)
	char pad_41D1[0x7]; // 0x41d1(0x07)
	double Time when you'll be able to splash again; // 0x41d8(0x08)
	struct FMulticastInlineDelegate OnOverlapWaterVolume; // 0x41e0(0x10)
	struct TArray<struct FCharacterPartMidArrayStruct> PawnPartMaterials; // 0x41f0(0x10)

	void Find Stored Char Part Materials(enum class EFortCustomPartType PartType, bool& Found, int32_t& Index, struct TArray<struct UMaterialInstanceDynamic*>& MIDs); // Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.Find Stored Char Part Materials // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Entered Water Volume(); // Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.Entered Water Volume // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Player Creates a Splash(struct FTransform& NewTransform); // Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.Player Creates a Splash // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReinitializeWeaponMaterials(); // Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.ReinitializeWeaponMaterials // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_PlayerPawn_Generic_Parent(int32_t EntryPoint); // Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.ExecuteUbergraph_PlayerPawn_Generic_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void OnOverlapWaterVolume__DelegateSignature(bool bIsInWater, struct AFortPlayerPawn* Pawn, struct AActor* Water); // Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.OnOverlapWaterVolume__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

