// Class ResolveTurretRuntime.FortPlayerAnimInstance_AntiVehMountedTurret
// Size: 0x1d70 (Inherited: 0x1d40)
struct UFortPlayerAnimInstance_AntiVehMountedTurret : UFortPlayerAnimInstance {
	struct FVector HandAttachL; // 0x1d38(0x18)
	struct FVector HandAttachR; // 0x1d50(0x18)
	struct FName HandAttachBoneNameL; // 0x1d68(0x04)
	struct FName HandAttachBoneNameR; // 0x1d6c(0x04)
};

// Class ResolveTurretRuntime.FortVehicleAnimInstance_AntiVehMountedTurret
// Size: 0x620 (Inherited: 0x610)
struct UFortVehicleAnimInstance_AntiVehMountedTurret : UFortMountedTurretAnimInstance {
	float YawDeltaSmoothed; // 0x610(0x04)
	char pad_614[0xc]; // 0x614(0x0c)
};

// Class ResolveTurretRuntime.FortVehicleAnimInstance_SevenMountedTurret
// Size: 0x620 (Inherited: 0x610)
struct UFortVehicleAnimInstance_SevenMountedTurret : UFortMountedTurretAnimInstance {
	float YawDeltaSmoothed; // 0x610(0x04)
	char pad_614[0xc]; // 0x614(0x0c)
};

