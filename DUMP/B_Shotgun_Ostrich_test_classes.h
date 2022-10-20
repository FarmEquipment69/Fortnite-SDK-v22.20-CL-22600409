// BlueprintGeneratedClass B_Shotgun_Ostrich_test.B_Shotgun_Ostrich_test_C
// Size: 0x17c0 (Inherited: 0x1790)
struct AB_Shotgun_Ostrich_test_C : AFortWeaponRanged_Ostrich {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1790(0x08)
	struct USoundBase* Sound_LoadMissile; // 0x1798(0x08)
	struct USoundBase* Sound_RocketFire; // 0x17a0(0x08)
	struct UForceFeedbackEffect* RocketFireForceFeedback; // 0x17a8(0x08)
	struct UForceFeedbackEffect* RocketLoadForceFeedback; // 0x17b0(0x08)
	struct UForceFeedbackEffect* ShotgunFireForceFeedback; // 0x17b8(0x08)

	void OnLoadedRockets(int32_t NumRocketsLoaded); // Function B_Shotgun_Ostrich_test.B_Shotgun_Ostrich_test_C.OnLoadedRockets // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnRocketFired(struct USceneComponent* AttachToMesh, struct FName AttachToSocket); // Function B_Shotgun_Ostrich_test.B_Shotgun_Ostrich_test_C.OnRocketFired // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnRocketLauncherSettle(struct USceneComponent* AttachToMesh, struct FName AttachToSocket); // Function B_Shotgun_Ostrich_test.B_Shotgun_Ostrich_test_C.OnRocketLauncherSettle // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnRocketFiringStarted(struct USceneComponent* AttachToMesh, struct FName AttachToSocket); // Function B_Shotgun_Ostrich_test.B_Shotgun_Ostrich_test_C.OnRocketFiringStarted // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire); // Function B_Shotgun_Ostrich_test.B_Shotgun_Ostrich_test_C.OnPlayWeaponFireFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_B_Shotgun_Ostrich_test(int32_t EntryPoint); // Function B_Shotgun_Ostrich_test.B_Shotgun_Ostrich_test_C.ExecuteUbergraph_B_Shotgun_Ostrich_test // (Final|UbergraphFunction) // @ game+0xd67374
};

