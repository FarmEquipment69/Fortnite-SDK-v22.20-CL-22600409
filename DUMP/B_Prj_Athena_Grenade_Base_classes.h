// BlueprintGeneratedClass B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C
// Size: 0xbb8 (Inherited: 0xa20)
struct AB_Prj_Athena_Grenade_Base_C : AFortProjectileBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa20(0x08)
	struct UFortCollisionAudioComponent* FortCollisionAudio; // 0xa28(0x08)
	struct URotatingMovementComponent* RotatingMovement; // 0xa30(0x08)
	struct UParticleSystemComponent* Fuse_Particle; // 0xa38(0x08)
	struct UStaticMeshComponent* Mesh; // 0xa40(0x08)
	struct UAudioComponent* GrenadeFuse_AudioComponent; // 0xa48(0x08)
	struct UParticleSystemComponent* Effect_Distance; // 0xa50(0x08)
	struct TSoftObjectPtr<UParticleSystem> P_Explosion; // 0xa58(0x28)
	struct USoundBase* Cue_ExplosionSound; // 0xa80(0x08)
	struct TSoftObjectPtr<UParticleSystem> P_Explosion_Water; // 0xa88(0x28)
	int32_t NumberOfBouncesTillExplode; // 0xab0(0x04)
	int32_t CurrentNumberOfBounces; // 0xab4(0x04)
	struct USoundBase* Cue_GrenadeFuseSound; // 0xab8(0x08)
	double BouncePawnAgainstPawnGravityScale; // 0xac0(0x08)
	struct UForceFeedbackEffect* ExplosionForceFeedbackNear; // 0xac8(0x08)
	struct UForceFeedbackEffect* ExplosionForceFeedbackFar; // 0xad0(0x08)
	struct USoundBase* Cue_Bounce; // 0xad8(0x08)
	struct ULegacyCameraShake* ExplosionCameraShake; // 0xae0(0x08)
	double FuseTime; // 0xae8(0x08)
	double ExplosionRadius; // 0xaf0(0x08)
	struct FRotator Explosion Rotation; // 0xaf8(0x18)
	struct UAudioComponent* WaterFuseAudioComponent; // 0xb10(0x08)
	struct USoundBase* Water Debris Explosion; // 0xb18(0x08)
	struct USoundBase* Splash Sound; // 0xb20(0x08)
	struct UTexture* SoundIndicatorIcon; // 0xb28(0x08)
	struct FTimerHandle FuseIndicatorTimer; // 0xb30(0x08)
	struct TSoftObjectPtr<UNiagaraSystem> NS_Explosion; // 0xb38(0x28)
	struct TSoftObjectPtr<UNiagaraSystem> NS_Explosion_Water; // 0xb60(0x28)
	enum class EFXType FXType; // 0xb88(0x01)
	char pad_B89[0x7]; // 0xb89(0x07)
	struct UFXSystemAsset* VFX_Explosion; // 0xb90(0x08)
	struct UFXSystemAsset* VFX_Explosion_Water; // 0xb98(0x08)
	struct FTimerHandle FuseTimer_; // 0xba0(0x08)
	struct UNiagaraSystem* NS_HitWater; // 0xba8(0x08)
	struct USoundBase* WaterFuseSound; // 0xbb0(0x08)

	void GetExplosion(bool InWater, struct UFXSystemAsset*& FX System); // Function B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.GetExplosion // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xd67374
	void FuseEnded(); // Function B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.FuseEnded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UserConstructionScript(); // Function B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnLoaded_6A6D02914DCE95902837C994D84D08EA(struct UObject* Loaded); // Function B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.OnLoaded_6A6D02914DCE95902837C994D84D08EA // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnLoaded_6A6D02914DCE95902837C994C3BE7DC5(struct UObject* Loaded); // Function B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.OnLoaded_6A6D02914DCE95902837C994C3BE7DC5 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnStop(struct FHitResult& Hit); // Function B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.OnStop // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void Stop_Rotation(); // Function B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.Stop_Rotation // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnExploded(struct TArray<struct AActor*>& HitActors, struct TArray<struct FHitResult>& HitResults); // Function B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.OnExploded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnBounce(struct FHitResult& Hit); // Function B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.OnBounce // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.ReceiveAnyDamage // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnResumeSimulation(); // Function B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.OnResumeSimulation // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xd67374
	void Splash(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.Splash // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xd67374
	void Held Water Impact(); // Function B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.Held Water Impact // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ShowFuseIndicator(); // Function B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.ShowFuseIndicator // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void AysncLoad(); // Function B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.AysncLoad // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_B_Prj_Athena_Grenade_Base(int32_t EntryPoint); // Function B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C.ExecuteUbergraph_B_Prj_Athena_Grenade_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

