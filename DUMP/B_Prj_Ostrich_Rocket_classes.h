// BlueprintGeneratedClass B_Prj_Ostrich_Rocket.B_Prj_Ostrich_Rocket_C
// Size: 0xb10 (Inherited: 0xa20)
struct AB_Prj_Ostrich_Rocket_C : AFortProjectile_DrunkHoming {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa20(0x08)
	struct UParticleSystemComponent*  RocketTrailPS; // 0xa28(0x08)
	struct UStaticMeshComponent* SM_OstrichRocket; // 0xa30(0x08)
	struct UAudioComponent* Rocket_AudioComponent; // 0xa38(0x08)
	struct UParticleSystemComponent* Ribbon_Trail_PSC; // 0xa40(0x08)
	struct UParticleSystem* Ribbon_Trail_PS; // 0xa48(0x08)
	struct UParticleSystem* Explosion_Generic_PS; // 0xa50(0x08)
	struct UParticleSystemComponent* Explosion_Generic_PSC; // 0xa58(0x08)
	struct USoundBase* Rocket_Projectile_Explosion_Sound; // 0xa60(0x08)
	struct FVector StopLocation; // 0xa68(0x18)
	struct UParticleSystem* Explosion_Flesh_Damage_PS; // 0xa80(0x08)
	struct FRotator StopRotZ; // 0xa88(0x18)
	struct UParticleSystemComponent* Explosion_Flesh_Damage_PSC; // 0xaa0(0x08)
	struct USoundBase* Rocket_Projectile_Explosion_Water_Sound; // 0xaa8(0x08)
	double Tick Delta; // 0xab0(0x08)
	double RocketSpinRate; // 0xab8(0x08)
	double Explosion Impact Offset; // 0xac0(0x08)
	struct FRotator RocketSpin; // 0xac8(0x18)
	bool TimerMaxReached?; // 0xae0(0x01)
	char pad_AE1[0x7]; // 0xae1(0x07)
	struct FVector DecalLocation; // 0xae8(0x18)
	enum class EPhysicalSurface SurfaceType; // 0xb00(0x01)
	char pad_B01[0x3]; // 0xb01(0x03)
	struct FGameplayTag FeedbackCue; // 0xb04(0x04)
	struct UParticleSystem* Explosion Water; // 0xb08(0x08)

	void UserConstructionScript(); // Function B_Prj_Ostrich_Rocket.B_Prj_Ostrich_Rocket_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnStop(struct FHitResult& Hit); // Function B_Prj_Ostrich_Rocket.B_Prj_Ostrich_Rocket_C.OnStop // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function B_Prj_Ostrich_Rocket.B_Prj_Ostrich_Rocket_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void FuseTimerMax(); // Function B_Prj_Ostrich_Rocket.B_Prj_Ostrich_Rocket_C.FuseTimerMax // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnExploded(struct TArray<struct AActor*>& HitActors, struct TArray<struct FHitResult>& HitResults); // Function B_Prj_Ostrich_Rocket.B_Prj_Ostrich_Rocket_C.OnExploded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ReceiveTick(float DeltaSeconds); // Function B_Prj_Ostrich_Rocket.B_Prj_Ostrich_Rocket_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ReceiveDestroyed(); // Function B_Prj_Ostrich_Rocket.B_Prj_Ostrich_Rocket_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnTouched(struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FHitResult& HitResult, bool bIsOverlap); // Function B_Prj_Ostrich_Rocket.B_Prj_Ostrich_Rocket_C.OnTouched // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnHomingPassedTarget(); // Function B_Prj_Ostrich_Rocket.B_Prj_Ostrich_Rocket_C.OnHomingPassedTarget // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_B_Prj_Ostrich_Rocket(int32_t EntryPoint); // Function B_Prj_Ostrich_Rocket.B_Prj_Ostrich_Rocket_C.ExecuteUbergraph_B_Prj_Ostrich_Rocket // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

