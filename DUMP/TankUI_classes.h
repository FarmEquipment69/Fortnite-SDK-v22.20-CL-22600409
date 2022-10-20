// Class TankUI.FortGameSettingRegistryExtension_Tank
// Size: 0x28 (Inherited: 0x28)
struct UFortGameSettingRegistryExtension_Tank : UFortGameSettingRegistryExtension {
};

// Class TankUI.TankVehicleReticle
// Size: 0x4a8 (Inherited: 0x488)
struct UTankVehicleReticle : UFortAthenaVehicleDashboardWidget {
	struct AFortTankVehicle* OwningTankVehicle; // 0x488(0x08)
	float MinTurretPitch; // 0x490(0x04)
	float MaxTurretPitch; // 0x494(0x04)
	bool bDistanceMeterEnabled; // 0x498(0x01)
	bool bTankOrientationEventsEnabled; // 0x499(0x01)
	char pad_49A[0xe]; // 0x49a(0x0e)

	void SetupVehicleFromBP(struct AActor* NewVehicle); // Function TankUI.TankVehicleReticle.SetupVehicleFromBP // (Final|Native|Protected|BlueprintCallable) // @ game+0x67c4a44
	void OnTreadEnabledChanged(bool bEnabled, enum class ETreadSide Side); // Function TankUI.TankVehicleReticle.OnTreadEnabledChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnTankTurretAimYawValueChanged(float Value); // Function TankUI.TankVehicleReticle.OnTankTurretAimYawValueChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnTankTurretAimPitchValueChanged(float Pitch, float PitchPercent); // Function TankUI.TankVehicleReticle.OnTankTurretAimPitchValueChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnTankTargetingReleased(); // Function TankUI.TankVehicleReticle.OnTankTargetingReleased // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnTankTargetingPressed(); // Function TankUI.TankVehicleReticle.OnTankTargetingPressed // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnTankRotationValueChanged(float TankValue, float TurretValue); // Function TankUI.TankVehicleReticle.OnTankRotationValueChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnTankHatchHealthChanged(float HatchHealth, float HatchHealthMax, bool bNewlyDisabled, bool bNewlyEnabled); // Function TankUI.TankVehicleReticle.OnTankHatchHealthChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnTankEngineHealthChanged(float EngineHealth, float EngineHealthMax, bool bNewlyDisabled, bool bNewlyEnabled); // Function TankUI.TankVehicleReticle.OnTankEngineHealthChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnTankDistanceUpdate(float Distance, float DistancePercent); // Function TankUI.TankVehicleReticle.OnTankDistanceUpdate // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnCannonFired(float RateTime); // Function TankUI.TankVehicleReticle.OnCannonFired // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleOnEquipMountedWeapon(struct AFortWeaponRanged* EquippedMountedWeapon); // Function TankUI.TankVehicleReticle.HandleOnEquipMountedWeapon // (Final|Native|Private) // @ game+0x67c49c4
	void HandleOnDamageablePartHealthChanged(struct FVehicleDamageablePartConfig& PartConfig, struct FVehicleDamageablePart& Part, bool bNewlyDisabled, bool bNewlyEnabled); // Function TankUI.TankVehicleReticle.HandleOnDamageablePartHealthChanged // (Final|Native|Private|HasOutParms) // @ game+0x67c480c
};

