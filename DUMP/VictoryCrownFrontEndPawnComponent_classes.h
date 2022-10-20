// BlueprintGeneratedClass VictoryCrownFrontEndPawnComponent.VictoryCrownFrontEndPawnComponent_C
// Size: 0xd2 (Inherited: 0xb8)
struct UVictoryCrownFrontEndPawnComponent_C : UFortPawnComponent_VictoryCrownsFrontEnd {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb8(0x08)
	struct FGameplayTag CrownFXCueTag; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct APlayerPawn_Athena_C* AthenaPawn; // 0xc8(0x08)
	bool AccountHasCrown; // 0xd0(0x01)
	bool AppliedCrownFX; // 0xd1(0x01)

	void UpdateForGCNL(); // Function VictoryCrownFrontEndPawnComponent.VictoryCrownFrontEndPawnComponent_C.UpdateForGCNL // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnStatChanged_80A6FD2F402F11C0D0A207ACE25F03A6(struct FName StatName, int32_t StatValue); // Function VictoryCrownFrontEndPawnComponent.VictoryCrownFrontEndPawnComponent_C.OnStatChanged_80A6FD2F402F11C0D0A207ACE25F03A6 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlaylistChanged(); // Function VictoryCrownFrontEndPawnComponent.VictoryCrownFrontEndPawnComponent_C.PlaylistChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function VictoryCrownFrontEndPawnComponent.VictoryCrownFrontEndPawnComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function VictoryCrownFrontEndPawnComponent.VictoryCrownFrontEndPawnComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_VictoryCrownFrontEndPawnComponent(int32_t EntryPoint); // Function VictoryCrownFrontEndPawnComponent.VictoryCrownFrontEndPawnComponent_C.ExecuteUbergraph_VictoryCrownFrontEndPawnComponent // (Final|UbergraphFunction) // @ game+0xd67374
};

