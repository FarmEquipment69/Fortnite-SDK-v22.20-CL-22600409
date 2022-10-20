// Class LabradorRuntime.FortAIFaunaAnimInstance_Labrador
// Size: 0x710 (Inherited: 0x6e0)
struct UFortAIFaunaAnimInstance_Labrador : UFortAIFaunaAnimInstance {
	bool bHighVelocity; // 0x6d8(0x01)
	bool bIsInterruptible; // 0x6d9(0x01)
	bool bLocoToIdle; // 0x6da(0x01)
	bool bIdleToLoco; // 0x6db(0x01)
	bool bJumpStartToJumpLoop; // 0x6dc(0x01)
	bool bJumpLandToMovement; // 0x6dd(0x01)
	bool bIsRunning; // 0x6de(0x01)
	bool bIdleToFalling; // 0x6df(0x01)
	bool bToppledOnGround; // 0x6e0(0x01)
	bool bTransitionToLand; // 0x6e1(0x01)
	float TargetDistance; // 0x6e4(0x04)
	bool bTargetIsClose; // 0x6e8(0x01)
	bool bIsToppled; // 0x6e9(0x01)
	bool bIsLeaking; // 0x6ea(0x01)
	float MinHighVelocityMagnitude; // 0x6ec(0x04)
	float MaxInterruptibleCurveValue; // 0x6f0(0x04)
	float LocoIdleTransitionThreshold; // 0x6f4(0x04)
	float RunSpeedThreshold; // 0x6f8(0x04)
	float JumpLandToMovementInterruptibleThreshold; // 0x6fc(0x04)
	float MinTargetIsCloseDistance; // 0x700(0x04)
	struct FName CurveName_Interruptible; // 0x704(0x04)
	char pad_70D[0x3]; // 0x70d(0x03)
};

// Class LabradorRuntime.FortLabradorComponent_Telemetry
// Size: 0x128 (Inherited: 0x108)
struct UFortLabradorComponent_Telemetry : UFortAIComponent_Telemetry {
	bool bWasAwake; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct FString InstigatorAwakeNetIDString; // 0x110(0x10)
	enum class ELabradorDespawnReason DespawnReason; // 0x120(0x01)
	char pad_121[0x3]; // 0x121(0x03)
	float DamageReceivedFromPlayers; // 0x124(0x04)

	void OnWakeUp(struct AActor* GoalActor); // Function LabradorRuntime.FortLabradorComponent_Telemetry.OnWakeUp // (Final|Native|Public|BlueprintCallable) // @ game+0x67cfb84
	void OnTeleport(); // Function LabradorRuntime.FortLabradorComponent_Telemetry.OnTeleport // (Final|Native|Public|BlueprintCallable) // @ game+0x67cfb6c
	void OnDamaged(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function LabradorRuntime.FortLabradorComponent_Telemetry.OnDamaged // (Final|Native|Private|HasDefaults) // @ game+0x67cf918
};

