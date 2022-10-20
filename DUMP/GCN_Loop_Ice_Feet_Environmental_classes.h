// BlueprintGeneratedClass GCN_Loop_Ice_Feet_Environmental.GCN_Loop_Ice_Feet_Environmental_C
// Size: 0x9c0 (Inherited: 0x960)
struct AGCN_Loop_Ice_Feet_Environmental_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	struct AFortPlayerPawn* TargetPlayer; // 0x968(0x08)
	struct TArray<struct UParticleSystemComponent*> SpawnedEmitters; // 0x970(0x10)
	struct USoundBase* SC_Footstep_Local; // 0x980(0x08)
	struct USoundBase* SC_Footstep_Remote; // 0x988(0x08)
	struct USoundBase* SC_Collision; // 0x990(0x08)
	struct UFortCollisionAudioComponent* CollisionAudioComp; // 0x998(0x08)
	struct TArray<struct UAudioComponent*> SpawnedAudioComps; // 0x9a0(0x10)
	struct USoundBase* SC_OnJumpOrBeginFalling; // 0x9b0(0x08)
	struct USoundBase* SC_OnLand; // 0x9b8(0x08)

	void OnRemoval(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_Loop_Ice_Feet_Environmental.GCN_Loop_Ice_Feet_Environmental_C.OnRemoval // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void On Player Step(); // Function GCN_Loop_Ice_Feet_Environmental.GCN_Loop_Ice_Feet_Environmental_C.On Player Step // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents); // Function GCN_Loop_Ice_Feet_Environmental.GCN_Loop_Ice_Feet_Environmental_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void On Target Pawn Hit Event(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit); // Function GCN_Loop_Ice_Feet_Environmental.GCN_Loop_Ice_Feet_Environmental_C.On Target Pawn Hit Event // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveTick(float DeltaSeconds); // Function GCN_Loop_Ice_Feet_Environmental.GCN_Loop_Ice_Feet_Environmental_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void On Target Pawn Landed(struct FHitResult& Hit); // Function GCN_Loop_Ice_Feet_Environmental.GCN_Loop_Ice_Feet_Environmental_C.On Target Pawn Landed // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void On Target Pawn Movement Mode Changed(struct ACharacter* Character, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Function GCN_Loop_Ice_Feet_Environmental.GCN_Loop_Ice_Feet_Environmental_C.On Target Pawn Movement Mode Changed // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult& Hit); // Function GCN_Loop_Ice_Feet_Environmental.GCN_Loop_Ice_Feet_Environmental_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCN_Loop_Ice_Feet_Environmental(int32_t EntryPoint); // Function GCN_Loop_Ice_Feet_Environmental.GCN_Loop_Ice_Feet_Environmental_C.ExecuteUbergraph_GCN_Loop_Ice_Feet_Environmental // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

