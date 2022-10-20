// Class RockVehicleRuntime.FortCheatManager_RockVehicle
// Size: 0x28 (Inherited: 0x28)
struct UFortCheatManager_RockVehicle : UChildCheatManager {

	void RockVehicleSetVelocity(float X, float Y, float Z); // Function RockVehicleRuntime.FortCheatManager_RockVehicle.RockVehicleSetVelocity // (Final|Exec|Native|Public) // @ game+0x68a4c68
	void RockVehicleSetRotation(float Pitch, float Yaw, float Roll); // Function RockVehicleRuntime.FortCheatManager_RockVehicle.RockVehicleSetRotation // (Final|Exec|Native|Public) // @ game+0x68a4c68
	void RockVehicleSetLocation(float X, float Y, float Z); // Function RockVehicleRuntime.FortCheatManager_RockVehicle.RockVehicleSetLocation // (Final|Exec|Native|Public) // @ game+0x68a4c68
	void RockVehicleSetBalboaVelocity(float X, float Y, float Z); // Function RockVehicleRuntime.FortCheatManager_RockVehicle.RockVehicleSetBalboaVelocity // (Final|Exec|Native|Public) // @ game+0x68a4c68
};

// Class RockVehicleRuntime.RockVehicle
// Size: 0x1b70 (Inherited: 0x1970)
struct ARockVehicle : AFortAthenaSKVehicle {
	float InputSwivelPitch; // 0x1970(0x04)
	float InputSwivelYaw; // 0x1974(0x04)
	char bInputReverseCamera : 1; // 0x1978(0x01)
	char bHasDoubleJumped : 1; // 0x1978(0x01)
	char bHasDodged : 1; // 0x1978(0x01)
	char pad_1978_3 : 5; // 0x1978(0x01)
	bool bFreeLookCamera; // 0x1979(0x01)
	char pad_197A[0x6]; // 0x197a(0x06)
	struct FMulticastInlineDelegate OnFreeCamToggled; // 0x1980(0x10)
	bool bPitchSafetyActive; // 0x1990(0x01)
	struct FRockRuntimeConfigOverrides RockRuntimeConfigs; // 0x1991(0x04)
	char pad_1995[0x3]; // 0x1995(0x03)
	struct FMulticastInlineDelegate OnSpringImpact; // 0x1998(0x10)
	char pad_19A8[0x58]; // 0x19a8(0x58)
	struct TArray<struct URockVehicleAbility*> VehicleAbilities; // 0x1a00(0x10)
	struct TArray<struct TSoftClassPtr<UObject>> VehicleAbilityTickOrder; // 0x1a10(0x10)
	struct AFortVehicleAudioController* CachedVehicleAudioController; // 0x1a20(0x08)
	struct URockVehicleAbility_Supersonic* SupersonicAbility; // 0x1a28(0x08)
	struct URockVehicleAnimInstance* RockAnimInstance; // 0x1a30(0x08)
	struct FFortAthenaVehicleInputState PendingDriverInputState; // 0x1a38(0x40)
	struct FFortAthenaVehicleInputState PrevDriverInputState; // 0x1a78(0x40)
	struct FVector EnterExitImpulse; // 0x1ab8(0x18)
	char pad_1AD0[0xa0]; // 0x1ad0(0xa0)

	void ServerSetLegacyDamageValues(bool bDamageFriendlyVehicles, bool bDamageOtherVehicles, bool bDamageOwnVehicle, bool bDamageAllowedFromOtherVehicle); // Function RockVehicleRuntime.RockVehicle.ServerSetLegacyDamageValues // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x68a4d4c
	void RockFreeCamToggledDelegate__DelegateSignature(bool bFreeCam); // DelegateFunction RockVehicleRuntime.RockVehicle.RockFreeCamToggledDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xd67374
	void OnSpringImpact__DelegateSignature(struct FName Socket, float ImpactSpeed, struct FHitResult& OutHit); // DelegateFunction RockVehicleRuntime.RockVehicle.OnSpringImpact__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0xd67374
	float GetThrottleState(); // Function RockVehicleRuntime.RockVehicle.GetThrottleState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x64ffb54
	struct FFortAthenaVehicleInputState GetDriverInput(); // Function RockVehicleRuntime.RockVehicle.GetDriverInput // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68a4960
	struct FRockRuntimeConfigOverrides GetCurrentRockRuntimeConfigOverrides(); // Function RockVehicleRuntime.RockVehicle.GetCurrentRockRuntimeConfigOverrides // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68a4948
};

// Class RockVehicleRuntime.RockVehicleAbility
// Size: 0xb0 (Inherited: 0xa0)
struct URockVehicleAbility : UActorComponent {
	struct ARockVehicle* Vehicle; // 0xa0(0x08)
	float ActiveSeconds; // 0xa8(0x04)
	float LastDeactivationTimeSeconds; // 0xac(0x04)

	struct ARockVehicle* GetVehicle(); // Function RockVehicleRuntime.RockVehicleAbility.GetVehicle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x248b320
	float GetInactiveSeconds(); // Function RockVehicleRuntime.RockVehicleAbility.GetInactiveSeconds // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68a49ac
	float GetActiveSeconds(); // Function RockVehicleRuntime.RockVehicleAbility.GetActiveSeconds // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x63d6c6c
};

// Class RockVehicleRuntime.RockVehicleAbility_Physics
// Size: 0x100 (Inherited: 0xb0)
struct URockVehicleAbility_Physics : URockVehicleAbility {
	bool bShouldStayActive; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct FFortAthenaVehicleInputState InputState; // 0xb8(0x40)
	char pad_F8[0x8]; // 0xf8(0x08)
};

// Class RockVehicleRuntime.RockVehicleAbility_AirControl
// Size: 0x160 (Inherited: 0x100)
struct URockVehicleAbility_AirControl : URockVehicleAbility_Physics {
	char pad_100[0x18]; // 0x100(0x18)
	struct FVector TorqueAccel; // 0x118(0x18)
	struct FVector TorqueDamping; // 0x130(0x18)
	float DisableForDodgeTime; // 0x148(0x04)
	bool bAnyWheelsOnGround; // 0x14c(0x01)
	bool bDodgeActive; // 0x14d(0x01)
	bool bAutoUprightActive; // 0x14e(0x01)
	char pad_14F[0x1]; // 0x14f(0x01)
	struct URockVehicleAbility_Dodge* DodgeAbility; // 0x150(0x08)
	struct URockVehicleAbility_AutoUpright* AutoUprightAbility; // 0x158(0x08)
};

// Class RockVehicleRuntime.RockVehicleAbility_AutoUpright
// Size: 0x158 (Inherited: 0x100)
struct URockVehicleAbility_AutoUpright : URockVehicleAbility_Physics {
	char pad_100[0x18]; // 0x100(0x18)
	float RollTorque; // 0x118(0x04)
	float PitchTorque; // 0x11c(0x04)
	float PushForce; // 0x120(0x04)
	float MinActiveSeconds; // 0x124(0x04)
	struct URockVehicleAbility_Dodge* DodgeAbility; // 0x128(0x08)
	int32_t LastWorldContactFrame; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	struct FVector LastContactNormal; // 0x138(0x18)
	bool bWheelsOnGround; // 0x150(0x01)
	bool bAnyWheelsOnGround; // 0x151(0x01)
	bool bDodgeActive; // 0x152(0x01)
	bool bBodyContact; // 0x153(0x01)
	float TimeSinceLastBodyContact; // 0x154(0x04)
};

// Class RockVehicleRuntime.RockVehicleAbility_Boost
// Size: 0x140 (Inherited: 0x100)
struct URockVehicleAbility_Boost : URockVehicleAbility_Physics {
	char pad_100[0x18]; // 0x100(0x18)
	float BoostAccel; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct FMulticastInlineDelegate OnBoostFailed; // 0x120(0x10)
	struct URockVehicleBoostTank* BoostTank; // 0x130(0x08)
	bool bHasBoost; // 0x138(0x01)
	char pad_139[0x7]; // 0x139(0x07)
};

// Class RockVehicleRuntime.RockVehicleBoostTank
// Size: 0xd0 (Inherited: 0xa0)
struct URockVehicleBoostTank : UActorComponent {
	struct FMulticastInlineDelegate OnSecondsChanged; // 0xa0(0x10)
	float StartSeconds; // 0xb0(0x04)
	float MaxSeconds; // 0xb4(0x04)
	enum class ERockBoostLogic BoostLogic; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	float BoostRechargeRate; // 0xbc(0x04)
	float BoostRechargeDelay; // 0xc0(0x04)
	float SecondsRemaining; // 0xc4(0x04)
	char pad_C8[0x8]; // 0xc8(0x08)

	void OnRep_SecondsRemaining(float PrevValue); // Function RockVehicleRuntime.RockVehicleBoostTank.OnRep_SecondsRemaining // (Final|Native|Protected) // @ game+0x68a4b14
	bool IsBoostFull(); // Function RockVehicleRuntime.RockVehicleBoostTank.IsBoostFull // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68a4adc
	bool HasBoost(); // Function RockVehicleRuntime.RockVehicleBoostTank.HasBoost // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68a4abc
	void GiveBoost(float Seconds); // Function RockVehicleRuntime.RockVehicleBoostTank.GiveBoost // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x68a4a38
	float GetPercentRemaining(); // Function RockVehicleRuntime.RockVehicleBoostTank.GetPercentRemaining // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68a4a18
	float GetMaxBoostInSeconds(); // Function RockVehicleRuntime.RockVehicleBoostTank.GetMaxBoostInSeconds // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68a4a00
};

// Class RockVehicleRuntime.RockVehicleAbility_Dodge
// Size: 0x170 (Inherited: 0x100)
struct URockVehicleAbility_Dodge : URockVehicleAbility_Physics {
	char pad_100[0x18]; // 0x100(0x18)
	struct FRockDodgeImpulse ForwardImpulse; // 0x118(0x08)
	struct FRockDodgeImpulse BackwardImpulse; // 0x120(0x08)
	struct FRockDodgeImpulse SideImpulse; // 0x128(0x08)
	float MinTimeAfterJump; // 0x130(0x04)
	float MinTorqueTime; // 0x134(0x04)
	float MaxTorqueTime; // 0x138(0x04)
	float ForwardTorque; // 0x13c(0x04)
	float SideTorque; // 0x140(0x04)
	float ZLiftTime; // 0x144(0x04)
	float ZLiftAccel; // 0x148(0x04)
	float ZDampingTime; // 0x14c(0x04)
	float ZDamping; // 0x150(0x04)
	float InputThreshold; // 0x154(0x04)
	struct FVector2D DodgeInput; // 0x158(0x10)
	bool bWheelsOnGround; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
};

// Class RockVehicleRuntime.RockVehicleAbility_DoubleJump
// Size: 0x128 (Inherited: 0x100)
struct URockVehicleAbility_DoubleJump : URockVehicleAbility_Physics {
	char pad_100[0x18]; // 0x100(0x18)
	float JumpVelocity; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct URockVehicleAbility_Jump* JumpAbility; // 0x120(0x08)
};

// Class RockVehicleRuntime.RockVehicleAbility_Flip
// Size: 0x138 (Inherited: 0x100)
struct URockVehicleAbility_Flip : URockVehicleAbility_Physics {
	char pad_100[0x18]; // 0x100(0x18)
	float Impulse; // 0x118(0x04)
	float Torque; // 0x11c(0x04)
	float Duration; // 0x120(0x04)
	float ContactNormalThresholdDegrees; // 0x124(0x04)
	bool bWheelsOnGround; // 0x128(0x01)
	char pad_129[0xf]; // 0x129(0x0f)
};

// Class RockVehicleRuntime.RockVehicleAbility_GroundTrails
// Size: 0x108 (Inherited: 0xb0)
struct URockVehicleAbility_GroundTrails : URockVehicleAbility {
	struct FGroundTrailsMap GroundTrailsMap; // 0xb0(0x18)
	struct TArray<struct FName> GroundTrailSockets; // 0xc8(0x10)
	struct UNiagaraSystem* HandbrakeSystem; // 0xd8(0x08)
	struct TArray<struct UNiagaraComponent*> GroundTrailComponents; // 0xe0(0x10)
	struct TArray<struct UNiagaraComponent*> HandbrakeComponents; // 0xf0(0x10)
	char pad_100[0x8]; // 0x100(0x08)

	void OnSurfaceChanged(enum class EPhysicalSurface NewSurface); // Function RockVehicleRuntime.RockVehicleAbility_GroundTrails.OnSurfaceChanged // (Final|Native|Protected|BlueprintCallable) // @ game+0x68a4bb0
};

// Class RockVehicleRuntime.RockVehicleAbility_Jump
// Size: 0x128 (Inherited: 0x100)
struct URockVehicleAbility_Jump : URockVehicleAbility_Physics {
	char pad_100[0x18]; // 0x100(0x18)
	float JumpVelocity; // 0x118(0x04)
	float JumpAccel; // 0x11c(0x04)
	float MinJumpSeconds; // 0x120(0x04)
	float MaxJumpSeconds; // 0x124(0x04)
};

// Class RockVehicleRuntime.RockVehicleAbility_StickyWheels
// Size: 0x140 (Inherited: 0x100)
struct URockVehicleAbility_StickyWheels : URockVehicleAbility_Physics {
	char pad_100[0x18]; // 0x100(0x18)
	float StickyForceScaleGround; // 0x118(0x04)
	float StickyForceScaleWall; // 0x11c(0x04)
	struct FVector ContactNormal; // 0x120(0x18)
	float Scale; // 0x138(0x04)
	bool bAnyWheelsOnGround; // 0x13c(0x01)
	char pad_13D[0x3]; // 0x13d(0x03)
};

// Class RockVehicleRuntime.RockVehicleAbility_Supersonic
// Size: 0xe0 (Inherited: 0xb0)
struct URockVehicleAbility_Supersonic : URockVehicleAbility {
	struct FMulticastInlineDelegate OnTrailsActivate; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnTrailsDeactivate; // 0xc0(0x10)
	float TurnOffTime; // 0xd0(0x04)
	float TurnOffSpeedBuffer; // 0xd4(0x04)
	float TimeBelowSupersonic; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
};

// Class RockVehicleRuntime.RockVehicleAnimInstance
// Size: 0x710 (Inherited: 0x5f0)
struct URockVehicleAnimInstance : UFortVehicleAnimInstance {
	struct FBouncyChassisState BouncyChassis; // 0x5f0(0x0c)
	char pad_5FC[0x114]; // 0x5fc(0x114)
};

// Class RockVehicleRuntime.RockVehicleAudioController
// Size: 0x390 (Inherited: 0x2a0)
struct ARockVehicleAudioController : AFortVehicleAudioController {
	struct FRuntimeFloatCurve SideSpeedToSkidVolume; // 0x2a0(0x88)
	float SurfaceTypeInterpSpeed; // 0x328(0x04)
	char pad_32C[0x4]; // 0x32c(0x04)
	struct UAudioComponent* TireSurfaceComponent; // 0x330(0x08)
	struct UAudioComponent* AirLoopComponent; // 0x338(0x08)
	struct UAudioComponent* SuperSonicComponent; // 0x340(0x08)
	bool bInWater; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
	struct UAudioMotorModelComponent* MotorModel; // 0x350(0x08)
	struct ARockVehicle* CachedVehicle; // 0x358(0x08)
	char pad_360[0x30]; // 0x360(0x30)

	void SetSurfaceTypeParam(float NewSurfaceParam); // Function RockVehicleRuntime.RockVehicleAudioController.SetSurfaceTypeParam // (Final|Native|Public|BlueprintCallable) // @ game+0x68b3970
	void SetBoosting(bool bNewBoosting); // Function RockVehicleRuntime.RockVehicleAudioController.SetBoosting // (Final|Native|Public|BlueprintCallable) // @ game+0x68b38f0
	void OnInAirUpdated(bool bNewInAir); // Function RockVehicleRuntime.RockVehicleAudioController.OnInAirUpdated // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	struct UAudioMotorModelComponent* GetMotorSimComponent(); // Function RockVehicleRuntime.RockVehicleAudioController.GetMotorSimComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68b38d8
};

// Class RockVehicleRuntime.RockVehicleCameraMode
// Size: 0x1cf0 (Inherited: 0x1af0)
struct URockVehicleCameraMode : UFortCameraMode_AthenaVehicle {
	float SwivelPitchMax; // 0x1af0(0x04)
	float SwivelYawMax; // 0x1af4(0x04)
	float GroundNormalInterpRate; // 0x1af8(0x04)
	float GroundNormalAirInterpRate; // 0x1afc(0x04)
	float GroundYawRate; // 0x1b00(0x04)
	float WallYawRate; // 0x1b04(0x04)
	float InterpToGroundTime; // 0x1b08(0x04)
	float InterpToAirTime; // 0x1b0c(0x04)
	float AverageVelocityInterpRate; // 0x1b10(0x04)
	char pad_1B14[0x4]; // 0x1b14(0x04)
	struct FRuntimeFloatCurve AirRotationInterpRateForSpeed; // 0x1b18(0x88)
	float FocusOffsetInterpRate; // 0x1ba0(0x04)
	float DistanceSpeedScale; // 0x1ba4(0x04)
	float DistanceOffsetMin; // 0x1ba8(0x04)
	float DistanceOffsetMax; // 0x1bac(0x04)
	float DistanceInterpRate; // 0x1bb0(0x04)
	float MaxSpeedFOVOffset; // 0x1bb4(0x04)
	float SupersonicFOVOffset; // 0x1bb8(0x04)
	float FOVInterpRate; // 0x1bbc(0x04)
	struct FRockCameraSettings CameraSettings; // 0x1bc0(0x1c)
	char pad_1BDC[0x4]; // 0x1bdc(0x04)
	struct ARockVehicle* VehicleTarget; // 0x1be0(0x08)
	struct URockVehicleAbility_Jump* JumpAbility; // 0x1be8(0x08)
	char pad_1BF0[0x100]; // 0x1bf0(0x100)
};

// Class RockVehicleRuntime.RockVehicleConfigs
// Size: 0xca8 (Inherited: 0x7a8)
struct URockVehicleConfigs : UFortPhysicsVehicleConfigs {
	struct FRockVehicleAxleConfig FrontAxle; // 0x7a8(0x34)
	struct FRockVehicleAxleConfig BackAxle; // 0x7dc(0x34)
	struct FRockVehicleDriveConfig Drive; // 0x810(0x460)
	struct FRockVehicleDemoConfig DemolitionConfiguration; // 0xc70(0x28)
	float MaxLinearSpeed; // 0xc98(0x04)
	float SupersonicSpeed; // 0xc9c(0x04)
	float MaxAngularSpeed; // 0xca0(0x04)
	char pad_CA4[0x4]; // 0xca4(0x04)
};

// Class RockVehicleRuntime.RockVehicleManager
// Size: 0x2a8 (Inherited: 0x288)
struct ARockVehicleManager : AActor {
	char pad_288[0x10]; // 0x288(0x10)
	struct TArray<struct ARockVehicle*> RockVehicles; // 0x298(0x10)
};

// Class RockVehicleRuntime.RockVehicleWorldSubsystem
// Size: 0x38 (Inherited: 0x30)
struct URockVehicleWorldSubsystem : UWorldSubsystem {
	struct ARockVehicleManager* VehicleManager; // 0x30(0x08)
};

// Class RockVehicleRuntime.RockVehicle_InteractionOverrideComponent
// Size: 0xa0 (Inherited: 0xa0)
struct URockVehicle_InteractionOverrideComponent : UFortVehicleInteractionOverrideComponent {
};

// Class RockVehicleRuntime.StreamingRadioPlayerComponent_Rock
// Size: 0x438 (Inherited: 0x438)
struct UStreamingRadioPlayerComponent_Rock : UStreamingRadioPlayerComponent {

	void VehicleExploded(struct AController* LastDamageInstigator, struct AFortAthenaVehicle* Vehicle); // Function RockVehicleRuntime.StreamingRadioPlayerComponent_Rock.VehicleExploded // (Final|Native|Protected) // @ game+0x68b39f4
};

