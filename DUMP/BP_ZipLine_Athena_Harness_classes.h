// BlueprintGeneratedClass BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C
// Size: 0x390 (Inherited: 0x288)
struct ABP_ZipLine_Athena_Harness_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UParticleSystemComponent* P_Zipline_AttachedToPlayer; // 0x290(0x08)
	struct UStaticMeshComponent* SM_Zipline_Magnet; // 0x298(0x08)
	struct UArrowComponent* Arrow; // 0x2a0(0x08)
	struct UParticleSystemComponent* P_Zipline_Pulley_SpeedLines; // 0x2a8(0x08)
	struct UStaticMeshComponent* SM_Zipline_Motor; // 0x2b0(0x08)
	struct USceneComponent* Scene; // 0x2b8(0x08)
	struct UParticleSystem* SpawnFX; // 0x2c0(0x08)
	struct UParticleSystem* DestroyFX; // 0x2c8(0x08)
	struct UParticleSystem* CollideDestroyVFX; // 0x2d0(0x08)
	struct USoundBase* SpawnSound; // 0x2d8(0x08)
	struct USoundBase* UnSpawnSound; // 0x2e0(0x08)
	struct AFortPlayerPawn* AttachedPlayer; // 0x2e8(0x08)
	bool HasHitAnotherPlayer; // 0x2f0(0x01)
	char pad_2F1[0x7]; // 0x2f1(0x07)
	double ZiplineChimeVisualUpdate; // 0x2f8(0x08)
	struct FTimerHandle ChimeTimer; // 0x300(0x08)
	struct FVector ZiplineDirection; // 0x308(0x18)
	struct ABP_Athena_Environmental_ZipLine_Spline_C* EnvZiplineSpline; // 0x320(0x08)
	double SplineRotationUpdateSeconds; // 0x328(0x08)
	struct FTimerHandle MotorUpdateTimer; // 0x330(0x08)
	struct AFortAthenaZipline* AttachedZipline; // 0x338(0x08)
	bool debugOutput; // 0x340(0x01)
	bool IsReversingMomentum; // 0x341(0x01)
	bool bIsTravelingUphill; // 0x342(0x01)
	bool bIsTravelingDownhill; // 0x343(0x01)
	struct FGameplayTag GCNTag_Travel; // 0x344(0x04)
	struct USoundBase* TravelSound; // 0x348(0x08)
	struct FGameplayTag GCNTag_HighSpeed; // 0x350(0x04)
	struct FGameplayTag GCNTag_ZiplineBraking; // 0x354(0x04)
	bool bLoopingDownhillGCN; // 0x358(0x01)
	char pad_359[0x3]; // 0x359(0x03)
	struct FActiveGameplayEffectHandle DownhillTravelGE; // 0x35c(0x08)
	bool UseMeshAttachment; // 0x364(0x01)
	char pad_365[0x3]; // 0x365(0x03)
	struct FVector CurrentDesired Zipline Offset; // 0x368(0x18)
	struct ABP_Athena_Dynamic_ZipLine_Spline_C* DynamicZiplineSpline; // 0x380(0x08)
	struct USplineComponent* ; // 0x388(0x08)

	void OnRep_AttachedPlayer(); // Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.OnRep_AttachedPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Update Audio and VFXParams(); // Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.Update Audio and VFXParams // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Start Travel Audio(); // Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.Start Travel Audio // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Stop Travel Audio(); // Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.Stop Travel Audio // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveDestroyed(); // Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void HandleOnDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.HandleOnDied // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Chime Visual(); // Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.Chime Visual // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OrientMotorForZipline(struct AFortAthenaZiplineBase* Zipline, struct FVector DesiredZiplineOffset); // Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.OrientMotorForZipline // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void RotateToZiplineDirection(); // Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.RotateToZiplineDirection // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateMotorToSpline(); // Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.UpdateMotorToSpline // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateParamsForAudioAndVFX(); // Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.UpdateParamsForAudioAndVFX // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Cleanup On DownhillGCN(); // Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.Cleanup On DownhillGCN // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateZiplineOffsetLocation(); // Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.UpdateZiplineOffsetLocation // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateMotorToDynSpline(); // Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.UpdateMotorToDynSpline // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BP_ZipLine_Athena_Harness(int32_t EntryPoint); // Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.ExecuteUbergraph_BP_ZipLine_Athena_Harness // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

