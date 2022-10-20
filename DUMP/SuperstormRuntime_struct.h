// ScriptStruct SuperstormRuntime.TempestLightningBoltEffectContainer
// Size: 0x50 (Inherited: 0x00)
struct FTempestLightningBoltEffectContainer {
	struct FGameplayTagQuery TargetFilter; // 0x00(0x48)
	struct UGameplayEffect* GameplayEffect; // 0x48(0x08)
};

// ScriptStruct SuperstormRuntime.TempestLightningBoltData
// Size: 0x78 (Inherited: 0x00)
struct FTempestLightningBoltData {
	struct AFortPawn* SourcePawn; // 0x00(0x08)
	char pad_8[0x40]; // 0x08(0x40)
	struct AFortGameplayEffectDeliveryActor* LightningBolt; // 0x48(0x08)
	struct TArray<struct AActor*> TargetActors; // 0x50(0x10)
	struct TArray<struct AFortPawn*> TargetPawns; // 0x60(0x10)
	char pad_70[0x8]; // 0x70(0x08)
};

// ScriptStruct SuperstormRuntime.TornadoActorInfo
// Size: 0x50 (Inherited: 0x00)
struct FTornadoActorInfo {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct SuperstormRuntime.TornadoObjectForceModifiers
// Size: 0x10 (Inherited: 0x00)
struct FTornadoObjectForceModifiers {
	float TangentVelocityMultiplier; // 0x00(0x04)
	float HeightVelocityMultiplier; // 0x04(0x04)
	float DragMultiplier; // 0x08(0x04)
	float TorqueMultiplier; // 0x0c(0x04)
};

// ScriptStruct SuperstormRuntime.TornadoConfigEntry
// Size: 0x138 (Inherited: 0x08)
struct FTornadoConfigEntry : FTableRowBase {
	float EyeBufferDistance; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UCurveFloat* TargetOrbitRadiusCurve; // 0x10(0x08)
	float TargetOrbitRadius; // 0x18(0x04)
	float OrbitStrength; // 0x1c(0x04)
	float TargetTangentVelocity; // 0x20(0x04)
	float TangentVelocityVariance; // 0x24(0x04)
	float TangentAcceleration; // 0x28(0x04)
	float TangentAccelerationVariance; // 0x2c(0x04)
	float TangentAngleOffset; // 0x30(0x04)
	float TargetHeightVelocity; // 0x34(0x04)
	float HeightVelocityVariance; // 0x38(0x04)
	float HeightAcceleration; // 0x3c(0x04)
	float HeightAccelerationVariance; // 0x40(0x04)
	float TorqueStrength; // 0x44(0x04)
	float TorqueVariance; // 0x48(0x04)
	float TimeToForceEject; // 0x4c(0x04)
	float HeightToForceEject; // 0x50(0x04)
	float DepthToForceEject; // 0x54(0x04)
	float DistanceToForceEject; // 0x58(0x04)
	float EjectionBoost; // 0x5c(0x04)
	float MaxDragVelocity; // 0x60(0x04)
	float DragCoefficient1; // 0x64(0x04)
	float DragCoefficient2; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TMap<enum class EFortPhysicsSimSize, struct FTornadoObjectForceModifiers> SizeForceModifiers; // 0x70(0x50)
	struct TMap<enum class EFortPhysicsObjectType, struct FTornadoObjectForceModifiers> ObjectTypeForceModifiers; // 0xc0(0x50)
	float PlayerGravityFloorOffset; // 0x110(0x04)
	float PlayerGravityFloorWidth; // 0x114(0x04)
	float PlayerGravityFloorGravityScalar; // 0x118(0x04)
	float PeriodicDamageToPawns; // 0x11c(0x04)
	float PeriodicDamageToProps; // 0x120(0x04)
	float BurstDamageToStaticActors; // 0x124(0x04)
	float ChancePerSecondToApplyBurstDamage; // 0x128(0x04)
	bool bAllowPickupPlayers; // 0x12c(0x01)
	bool bAllowPickupPawns; // 0x12d(0x01)
	bool bAllowPickupVehicles; // 0x12e(0x01)
	bool bAllowPickupProjectiles; // 0x12f(0x01)
	bool bAffectStaticObjects; // 0x130(0x01)
	enum class EFortPhysicsSimSize MaxAllowedPhysicsObjectSize; // 0x131(0x01)
	enum class EFortPhysicsSimSize MinAllowedPhysicsObjectSize; // 0x132(0x01)
	char pad_133[0x5]; // 0x133(0x05)
};

// ScriptStruct SuperstormRuntime.TornadoSimulationData
// Size: 0x40 (Inherited: 0x0c)
struct FTornadoSimulationData : FFastArraySerializerItem {
	struct TWeakObjectPtr<struct AActor> Actor; // 0x0c(0x08)
	enum class EFortPhysicsObjectType ObjectType; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float TangentVelocity; // 0x18(0x04)
	float TangentAccel; // 0x1c(0x04)
	float HeightVelocity; // 0x20(0x04)
	float HeightAccel; // 0x24(0x04)
	struct FVector Torque; // 0x28(0x18)
};

// ScriptStruct SuperstormRuntime.TornadoTelemetryStats
// Size: 0xa8 (Inherited: 0x00)
struct FTornadoTelemetryStats {
	struct TMap<enum class EFortPhysicsObjectType, int32_t> NumActorsEnteredByType; // 0x00(0x50)
	struct TSet<struct FUniqueNetIdRepl> EnteredPlayerAccountIds; // 0x50(0x50)
	int32_t NumPreBuiltStructuresDestroyed; // 0xa0(0x04)
	int32_t NumPlayerBuiltStructuresDestroyed; // 0xa4(0x04)
};

// ScriptStruct SuperstormRuntime.TornadoClientSimulationArray
// Size: 0x118 (Inherited: 0x108)
struct FTornadoClientSimulationArray : FFastArraySerializer {
	struct TArray<struct FTornadoSimulationData> ActorsToSimulateArray; // 0x108(0x10)
};

