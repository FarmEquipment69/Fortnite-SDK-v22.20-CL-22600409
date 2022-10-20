// Class ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance
// Size: 0x1e00 (Inherited: 0x1d40)
struct UFortArmoredBattleBusPassengerAnimInstance : UFortPlayerAnimInstance {
	struct FRotator PreviousVehicleRotator; // 0x1d38(0x18)
	float SmoothedVehicleYawRate; // 0x1d50(0x04)
	int32_t PawnSeat; // 0x1d54(0x04)
	bool bIsFrontTurretPassenger; // 0x1d58(0x01)
	bool bIsRearTurretPassenger; // 0x1d59(0x01)
	float Speed; // 0x1d5c(0x04)
	float YawDelta; // 0x1d60(0x04)
	float TurretYaw; // 0x1d64(0x04)
	float TurretPitch; // 0x1d68(0x04)
	struct FRotator TurretYawRotator; // 0x1d70(0x18)
	float SlopeRollDegreeAngle; // 0x1d88(0x04)
	float SlopePitchDegreeAngle; // 0x1d8c(0x04)
	struct FVector HandAttachL; // 0x1d90(0x18)
	struct FVector HandAttachR; // 0x1da8(0x18)
	enum class ERelativeTransformSpace TransformSpace; // 0x1dc0(0x01)
	char pad_1DC3[0x1]; // 0x1dc3(0x01)
	float UpdateYawDeltaSmoothedLerpRate; // 0x1dc4(0x04)
	int32_t TurretPassengerFront; // 0x1dc8(0x04)
	int32_t TurretPassengerRear; // 0x1dcc(0x04)
	struct FName FrontFootBoneName; // 0x1dd0(0x04)
	struct FName RearFootBoneName; // 0x1dd4(0x04)
	struct FName GunHandAttachBoneName_FrontLeft; // 0x1dd8(0x04)
	struct FName GunHandAttachBoneName_RearLeft; // 0x1ddc(0x04)
	struct FName GunHandAttachBoneName_FrontRight; // 0x1de0(0x04)
	struct FName GunHandAttachBoneName_RearRight; // 0x1de4(0x04)
	struct FName PassengerBoneName_Front; // 0x1de8(0x04)
	struct FName PassengerBoneName_Rear; // 0x1dec(0x04)
	float TurretPitchDegMin; // 0x1df0(0x04)
	float TurretPitchDegMax; // 0x1df4(0x04)
	float LocalPlayerTurretPitchEaseRate; // 0x1df8(0x04)
	char pad_1DFC[0x4]; // 0x1dfc(0x04)

	void UpdateYawDeltaSmoothed(struct AFortAthenaVehicle* VehicleActor, struct FName SocketName, struct FRotator& NewRotation, float& SmoothedYawValue); // Function ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.UpdateYawDeltaSmoothed // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x63cf364
	void UpdateSmoothedVehicleYawRate(struct AFortAthenaVehicle* VehicleActor); // Function ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.UpdateSmoothedVehicleYawRate // (Final|Native|Public|BlueprintCallable) // @ game+0x63cef3c
	void UpdateHandPositionsSlopeValues(struct USkeletalMeshComponent* BusMeshComponent); // Function ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.UpdateHandPositionsSlopeValues // (Final|Native|Public|BlueprintCallable) // @ game+0x63ceebc
	struct FVector UnrotateHandAttachLocation(struct FVector& HandLocation, struct FVector& FootLocation, struct FRotator& FootRotation); // Function ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.UnrotateHandAttachLocation // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x63ced64
	struct FTransform GetPassengerTransform(struct USkeletalMeshComponent* BusMeshComponent); // Function ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.GetPassengerTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x63cea8c
	struct FVector GetHandAttachLocation(struct USkeletalMeshComponent* BusMeshComponent, struct FName FrontHandAttachBoneName, struct FName RearHandAttachBoneName); // Function ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.GetHandAttachLocation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x63ce97c
	struct FTransform GetFootAttachTransform(struct USkeletalMeshComponent* BusMeshComponent); // Function ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.GetFootAttachTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x63ce8a0
	void GenerateCharacterPitchAndYawForSlopedTerrain(struct AFortAthenaVehicle* VehicleActor, float& TurretYaw, float& TurretPitch, struct FRotator& PawnYawRotator); // Function ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.GenerateCharacterPitchAndYawForSlopedTerrain // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x63ce734
};

// Class ArmoredBattleBusRuntime.FortArmoredBattleBusVehicleAnimInstance
// Size: 0x680 (Inherited: 0x5f0)
struct UFortArmoredBattleBusVehicleAnimInstance : UFortVehicleAnimInstance {
	float FrontTurretAimPitch; // 0x5f0(0x04)
	float RearTurretAimPitch; // 0x5f4(0x04)
	float FrontYawDeltaSmoothed; // 0x5f8(0x04)
	float RearYawDeltaSmoothed; // 0x5fc(0x04)
	float SmoothedVehicleYawRate; // 0x600(0x04)
	float FrontYawDeltaSmoothedAlpha; // 0x604(0x04)
	float RearYawDeltaSmoothedAlpha; // 0x608(0x04)
	char pad_60C[0x4]; // 0x60c(0x04)
	struct FRotator FrontWeaponYaw; // 0x610(0x18)
	struct FRotator RearWeaponYaw; // 0x628(0x18)
	struct FRotator PreviousVehicleRotator; // 0x640(0x18)
	bool bHasFrontTurretPassenger; // 0x658(0x01)
	bool bHasRearTurretPassenger; // 0x659(0x01)
	char pad_65A[0x2]; // 0x65a(0x02)
	float NetworkEaseRate; // 0x65c(0x04)
	float UpdateYawDeltaSmoothedLerpRate; // 0x660(0x04)
	int32_t FrontPassengerSeatIndex; // 0x664(0x04)
	int32_t RearPassengerSeatIndex; // 0x668(0x04)
	float FrontPassengerYawOffset; // 0x66c(0x04)
	float RearPassengerYawOffset; // 0x670(0x04)
	struct FName FrontPassengerBoneName; // 0x674(0x04)
	struct FName RearPassengerBoneName; // 0x678(0x04)
	char pad_67C[0x4]; // 0x67c(0x04)

	float UpdateYawDeltaSmoothed(struct AFortAthenaVehicle* VehicleActor, struct FName SocketName, struct FRotator NewRotation, float SmoothedYawValue); // Function ArmoredBattleBusRuntime.FortArmoredBattleBusVehicleAnimInstance.UpdateYawDeltaSmoothed // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x63cf4cc
	void UpdateTurretAimPitchWeaponYaw(struct AFortAthenaVehicle* OwnerVehicle, struct AFortPlayerPawn* GunnerActor, struct FName SocketName, float YawOffset, float& TurretAimPitch, float& YawDeltaSmoothed, struct FRotator& WeaponYaw); // Function ArmoredBattleBusRuntime.FortArmoredBattleBusVehicleAnimInstance.UpdateTurretAimPitchWeaponYaw // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x63cf12c
	float UpdateSmoothedVehicleYawRate(struct AFortAthenaVehicle* VehicleActor, struct FRotator PreviousRotator); // Function ArmoredBattleBusRuntime.FortArmoredBattleBusVehicleAnimInstance.UpdateSmoothedVehicleYawRate // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x63cf044
	void GetPitchAndYaw(struct AFortAthenaVehicle* VehicleActor, struct AFortPlayerPawn* GunnerActor, float& AdjustedPitch, float& AdjustedYaw, bool& bIsLocalPlayerControlled, struct FRotator& YawRotator); // Function ArmoredBattleBusRuntime.FortArmoredBattleBusVehicleAnimInstance.GetPitchAndYaw // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x63ceb68
};

