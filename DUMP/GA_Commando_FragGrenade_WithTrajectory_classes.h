// BlueprintGeneratedClass GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C
// Size: 0xf70 (Inherited: 0xc3a)
struct UGA_Commando_FragGrenade_WithTrajectory_C : UGAT_CommandoActiveAbility_C {
	char pad_C3A[0x6]; // 0xc3a(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc40(0x08)
	struct AFortProjectileBase* Prj_Grenade; // 0xc48(0x08)
	double GrenadeSpeedMin; // 0xc50(0x08)
	double GrenadeSpeedMax; // 0xc58(0x08)
	double GravityScale; // 0xc60(0x08)
	struct FGameplayTagContainer TC_ClusterBomb; // 0xc68(0x20)
	struct FGameplayTagContainer TC_BiggerIsBetter; // 0xc88(0x20)
	struct FGameplayTag T_GEContainer_Explosion; // 0xca8(0x04)
	char pad_CAC[0x4]; // 0xcac(0x04)
	double ExplosionRadius; // 0xcb0(0x08)
	double AdditionalThrowAngle; // 0xcb8(0x08)
	struct FGameplayTag EC_ClusterExplosion; // 0xcc0(0x04)
	char pad_CC4[0x4]; // 0xcc4(0x04)
	struct FFortFeedbackHandle GrenadeDialogFeedback; // 0xcc8(0x10)
	struct FGameplayTagContainer TC_KeepOut; // 0xcd8(0x20)
	struct FGameplayTag EC_KeepOut; // 0xcf8(0x04)
	bool BiggerIsBetter; // 0xcfc(0x01)
	bool ClusterBomb; // 0xcfd(0x01)
	bool KeepOut; // 0xcfe(0x01)
	char pad_CFF[0x1]; // 0xcff(0x01)
	struct FGameplayTagContainer TC_GrenadeAmmo; // 0xd00(0x20)
	struct FGameplayTagContainer TC_GrenadeCost; // 0xd20(0x20)
	struct FGameplayTagContainer TC_GrenadeDamage; // 0xd40(0x20)
	bool GrenadeAmmo; // 0xd60(0x01)
	bool GrenadeCost; // 0xd61(0x01)
	bool GrenadeDamage; // 0xd62(0x01)
	char pad_D63[0x1]; // 0xd63(0x01)
	int32_t GrenadeAmmoUpgrade; // 0xd64(0x04)
	int32_t GrenadeAmmoDefault; // 0xd68(0x04)
	int32_t MaxGrenadeAmmo; // 0xd6c(0x04)
	int32_t ExplosionRadiusTooltip; // 0xd70(0x04)
	int32_t ExplosionRadiusDefault; // 0xd74(0x04)
	int32_t ExplosionRadiusUpgrade; // 0xd78(0x04)
	char pad_D7C[0x4]; // 0xd7c(0x04)
	struct FGameplayTagContainer TC_PlasmaGrenades; // 0xd80(0x20)
	bool PlasmaGrenades; // 0xda0(0x01)
	char pad_DA1[0x7]; // 0xda1(0x07)
	struct FGameplayTagContainer TC_Flashbang; // 0xda8(0x20)
	bool Flashbang; // 0xdc8(0x01)
	char pad_DC9[0x7]; // 0xdc9(0x07)
	struct FVector GrenadeTargetingOriginOffset; // 0xdd0(0x18)
	bool DummyShouldBounce; // 0xde8(0x01)
	char pad_DE9[0x7]; // 0xde9(0x07)
	double DummyBounciness; // 0xdf0(0x08)
	double DummyFriction; // 0xdf8(0x08)
	double TrajectoryUpdateInterval; // 0xe00(0x08)
	double DummyMaxSpeed; // 0xe08(0x08)
	double DummyGravity; // 0xe10(0x08)
	double DummyTimeStep; // 0xe18(0x08)
	double DummyExtent; // 0xe20(0x08)
	bool InThrowWindup; // 0xe28(0x01)
	char pad_E29[0x7]; // 0xe29(0x07)
	struct ABP_ProjectileTrajectory_C* TrajectoryIndicator; // 0xe30(0x08)
	struct AActor* TrajectoryIndicatorClass; // 0xe38(0x08)
	struct FFortGameplayAbilityMontageInfo ThrowWindupMontage; // 0xe40(0x58)
	bool AbilityKeyPressed; // 0xe98(0x01)
	char pad_E99[0x7]; // 0xe99(0x07)
	double MaxSpeedPitch; // 0xea0(0x08)
	double MinSpeedPitch; // 0xea8(0x08)
	double MaxTossPitch; // 0xeb0(0x08)
	int32_t MaxTrajectoryBounces; // 0xeb8(0x04)
	char pad_EBC[0x4]; // 0xebc(0x04)
	struct FGameplayTagContainer TC_Tactical_Clusterbomb; // 0xec0(0x20)
	bool Tactical_Clusterbomb; // 0xee0(0x01)
	char pad_EE1[0x3]; // 0xee1(0x03)
	struct FGameplayTag EC_ClusterExplosion_Tactical; // 0xee4(0x04)
	double F_FrameDelay; // 0xee8(0x08)
	bool BiggerIsBetter_T01; // 0xef0(0x01)
	bool BiggerIsBetter_T02; // 0xef1(0x01)
	bool ClusterBomb_T01; // 0xef2(0x01)
	bool ClusterBomb_T02; // 0xef3(0x01)
	struct FGameplayTag T_BiggerIsBetter_T01; // 0xef4(0x04)
	struct FGameplayTag T_BiggerIsBetter_T02; // 0xef8(0x04)
	struct FGameplayTag T_ClusterBomb_T01; // 0xefc(0x04)
	struct FGameplayTag T_ClusterBomb_T02; // 0xf00(0x04)
	char pad_F04[0x4]; // 0xf04(0x04)
	struct FScalableFloat SF_BiggerIsBetterRadius_T01; // 0xf08(0x28)
	struct UAnimMontage* ThrowMontage; // 0xf30(0x08)
	struct FGameplayTag T_Event_Activate; // 0xf38(0x04)
	struct FGameplayTag T_Event_Deactivate; // 0xf3c(0x04)
	struct FScalableFloat SF_BiggerIsBetterRadius_T02; // 0xf40(0x28)
	enum class ECollisionChannel DummyCollisionChannel; // 0xf68(0x01)
	char pad_F69[0x3]; // 0xf69(0x03)
	struct FGameplayTag ThrowCue; // 0xf6c(0x04)

	void ActiveAbilitySetup(struct UAbilitySystemComponent* AbilitySystemIn, struct UAbilitySystemComponent*& AbilitySystemOut); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.ActiveAbilitySetup // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SpawnFragGrenade(struct AFortProjectileBase* ProjectileClass, struct FVector& SpawnLocation, struct FRotator InputPin, struct FFortGameplayEffectContainerSpec EffectContainerSpecToApplyOnExplode, double InitialSpeed, double GravityScale); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.SpawnFragGrenade // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CalcGrenadeSpeedFromPitch(double AimPitch, double& GrenadeSpeed); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.CalcGrenadeSpeedFromPitch // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xd67374
	void UpdateTrajectorySpline(); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.UpdateTrajectorySpline // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetupDummyProjectile(); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.SetupDummyProjectile // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SpawnLocationAndRotation(struct FVector& OutLoc, struct FRotator& OutRot); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.SpawnLocationAndRotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xd67374
	void SetupAbility(struct UAbilitySystemComponent* AbilitySystemComponentRef); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.SetupAbility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetupGrenade(double AimPitch, struct AFortProjectileBase*& Base Grenade, double& Projectile Speed, struct FFortGameplayEffectContainerSpec& Explosion Gameplay Spec, double& Projectile Gravity Scale); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.SetupGrenade // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnFinish_F5D87C9E46378707AE4C79B3A42F5A45(); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnFinish_F5D87C9E46378707AE4C79B3A42F5A45 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnCancelled_854170AF4268B06A435A3AA33232C5BF(); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnCancelled_854170AF4268B06A435A3AA33232C5BF // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnInterrupted_854170AF4268B06A435A3AA33232C5BF(); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnInterrupted_854170AF4268B06A435A3AA33232C5BF // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnBlendOut_854170AF4268B06A435A3AA33232C5BF(); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnBlendOut_854170AF4268B06A435A3AA33232C5BF // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnCompleted_854170AF4268B06A435A3AA33232C5BF(); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnCompleted_854170AF4268B06A435A3AA33232C5BF // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnFinish_1C6A100D44D1ACE5BBB57DAEDB3561CB(); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnFinish_1C6A100D44D1ACE5BBB57DAEDB3561CB // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Completed_BF65CDBE4F9E98E9174850B85775A15B(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.Completed_BF65CDBE4F9E98E9174850B85775A15B // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Cancelled_BF65CDBE4F9E98E9174850B85775A15B(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.Cancelled_BF65CDBE4F9E98E9174850B85775A15B // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Triggered_BF65CDBE4F9E98E9174850B85775A15B(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.Triggered_BF65CDBE4F9E98E9174850B85775A15B // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnAbilityInputReleased(); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnAbilityInputReleased // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void CleanupTrajectoryDisplay(); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.CleanupTrajectoryDisplay // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_ActivateAbility(); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void TossGrenade(); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.TossGrenade // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ServerSpawnProjectile(); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.ServerSpawnProjectile // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory(int32_t EntryPoint); // Function GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

