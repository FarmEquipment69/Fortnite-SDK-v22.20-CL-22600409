// BlueprintGeneratedClass GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C
// Size: 0xf99 (Inherited: 0xb20)
struct UGA_Athena_Grenade_WithTrajectory_Deprecated_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb20(0x08)
	struct FGameplayTag EventActivation; // 0xb28(0x04)
	struct FGameplayTag EventComplete; // 0xb2c(0x04)
	struct AFortProjectileBase* Prj_Grenade; // 0xb30(0x08)
	double GrenadeSpeedMin; // 0xb38(0x08)
	double GrenadeSpeedMax; // 0xb40(0x08)
	double GravityScale; // 0xb48(0x08)
	struct USoundBase* GrenadeSound; // 0xb50(0x08)
	struct FGameplayTag EC_DefaultExplosion; // 0xb58(0x04)
	char pad_B5C[0x4]; // 0xb5c(0x04)
	struct FFortGameplayEffectContainerSpec EC_ReturnedEffect; // 0xb60(0xb8)
	struct FFortGameplayEffectContainerSpec EC_AdditionalReturnedEffect; // 0xc18(0xb8)
	double ExplosionRadius; // 0xcd0(0x08)
	double AdditionalThrowAngle; // 0xcd8(0x08)
	struct FFortFeedbackHandle GrenadeDialogFeedback; // 0xce0(0x10)
	bool GrenadeAmmo; // 0xcf0(0x01)
	bool PlasmaGrenades; // 0xcf1(0x01)
	bool Flashbang; // 0xcf2(0x01)
	char pad_CF3[0x5]; // 0xcf3(0x05)
	struct FVector GrenadeTargetingOriginOffset; // 0xcf8(0x18)
	bool DummyShouldBounce; // 0xd10(0x01)
	char pad_D11[0x7]; // 0xd11(0x07)
	double DummyBounciness; // 0xd18(0x08)
	double DummyFriction; // 0xd20(0x08)
	double DummyMaxSpeed; // 0xd28(0x08)
	double DummyGravity; // 0xd30(0x08)
	double DummyTimeStep; // 0xd38(0x08)
	double DummyExtent; // 0xd40(0x08)
	struct FVector GrenadeTargetingOriginOffset_Crouched; // 0xd48(0x18)
	bool InThrowWindup; // 0xd60(0x01)
	char pad_D61[0x7]; // 0xd61(0x07)
	struct ABP_ProjectileTrajectory_C* TrajectoryIndicator; // 0xd68(0x08)
	struct AFortProjectileTrajectory* TrajectoryIndicatorClass; // 0xd70(0x08)
	struct FFortGameplayAbilityMontageInfo ThrowWindupMontage; // 0xd78(0x58)
	bool AbilityKeyPressed; // 0xdd0(0x01)
	char pad_DD1[0x7]; // 0xdd1(0x07)
	double MaxSpeedPitch; // 0xdd8(0x08)
	double MinSpeedPitch; // 0xde0(0x08)
	struct FGameplayEventData Event Data; // 0xde8(0xb0)
	struct AFortPlayerPawn* PlayerPawn; // 0xe98(0x08)
	double MaxTossPitch; // 0xea0(0x08)
	int32_t MaxTrajectoryBounces; // 0xea8(0x04)
	char pad_EAC[0x4]; // 0xeac(0x04)
	double PostThrowCancelDelay; // 0xeb0(0x08)
	double PostThrowEndDelay; // 0xeb8(0x08)
	struct AFortProjectileBase* ProjectileReference; // 0xec0(0x08)
	double DistanceFromInstigatorCheck; // 0xec8(0x08)
	struct FTimerHandle UpdateTrajectoryTimerHandle; // 0xed0(0x08)
	bool Spawned On Equip; // 0xed8(0x01)
	enum class ECollisionChannel DummyCollisionChannel; // 0xed9(0x01)
	char pad_EDA[0x6]; // 0xeda(0x06)
	struct AFortProjectileDecoHelper* GrenadeDecoHelper; // 0xee0(0x08)
	struct AFortDecoTool_ContextTrap* GrenadeDecoTool; // 0xee8(0x08)
	struct FMulticastInlineDelegate OnProjectileSpawn; // 0xef0(0x10)
	struct FGameplayTagContainer QuestCreditTargetTag; // 0xf00(0x20)
	int32_t DummyMaxSteps; // 0xf20(0x04)
	struct FGameplayTag GC_CookLoop; // 0xf24(0x04)
	struct FGameplayTag GC_OnThrow; // 0xf28(0x04)
	bool bIsSecondaryFire; // 0xf2c(0x01)
	bool bIsThrowing; // 0xf2d(0x01)
	char pad_F2E[0x2]; // 0xf2e(0x02)
	struct UFortCameraMode* CameraMode; // 0xf30(0x08)
	bool bThrowInstantly; // 0xf38(0x01)
	bool bPreventDeploymentInBlockAreas; // 0xf39(0x01)
	char pad_F3A[0x2]; // 0xf3a(0x02)
	float DeployableBlockingAreaCheckRadius; // 0xf3c(0x04)
	struct FVector DeployableBlockingAreaCheckOffset; // 0xf40(0x18)
	struct FGameplayTagContainer VehicleTag; // 0xf58(0x20)
	struct FGameplayTagContainer Throw Tag; // 0xf78(0x20)
	bool TrajectoryHidden; // 0xf98(0x01)

	bool ShouldOnlyShowTrajectoryOnUse(); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.ShouldOnlyShowTrajectoryOnUse // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xd67374
	struct AFortProjectileTrajectory* SpawnTrajectoryIndicator(bool bSpawnOnEquip); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.SpawnTrajectoryIndicator // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetProjectileTrajectoryPoints(struct TArray<struct FVector>& OutSplinePoints, struct TArray<struct FVector>& OutSplineTangents, struct FHitResult& OutHitResult); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.GetProjectileTrajectoryPoints // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	struct AFortProjectileTrajectory* GetProjectileTrajectoryActor(); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.GetProjectileTrajectoryActor // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xd67374
	void IsTrajectoryLocationValid(struct TArray<struct FVector>& SplinePoints, struct TArray<struct FVector>& SplineTangents, struct FHitResult TrajectoryHitResult, bool& bIsLocationValid); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.IsTrajectoryLocationValid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	void OnUpdateTrajectory(struct TArray<struct FVector>& SplinePoints, struct TArray<struct FVector>& SplineTangents, struct FHitResult TrajectoryHitResult); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.OnUpdateTrajectory // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateTrajectorySpline(); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.UpdateTrajectorySpline // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void AddValidCamera(); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.AddValidCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteThrowGC(); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.ExecuteThrowGC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void RemoveCookGC(); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.RemoveCookGC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void AddCookGC(); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.AddCookGC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetOwningPlayer(struct AFortPlayerPawn*& Player Pawn); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.GetOwningPlayer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xd67374
	void CalcGrenadeSpeedFromPitch(double AimPitch, double& GrenadeSpeed); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.CalcGrenadeSpeedFromPitch // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xd67374
	void SetupDummyProjectile(); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.SetupDummyProjectile // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SpawnLocationAndRotation(struct FVector& OutLoc, struct FRotator& OutRot); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.SpawnLocationAndRotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xd67374
	void SetupGrenade(double AimPitch, struct AFortProjectileBase*& Base Grenade, double& Projectile Speed, struct FFortGameplayEffectContainerSpec& Explosion Gameplay Spec, double& Projectile Gravity Scale, struct FFortGameplayEffectContainerSpec& Additional Explosion Gameplay Spec); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.SetupGrenade // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Completed_B08560984B3818F6EECB3C9A92E61ADC(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.Completed_B08560984B3818F6EECB3C9A92E61ADC // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Cancelled_B08560984B3818F6EECB3C9A92E61ADC(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.Cancelled_B08560984B3818F6EECB3C9A92E61ADC // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Triggered_B08560984B3818F6EECB3C9A92E61ADC(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.Triggered_B08560984B3818F6EECB3C9A92E61ADC // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnFinish_4B1D92B7427697E6BD9D58ACA0F87155(); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.OnFinish_4B1D92B7427697E6BD9D58ACA0F87155 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnCancelled_758AC809498064C01C71318E141D1E46(); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.OnCancelled_758AC809498064C01C71318E141D1E46 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnInterrupted_758AC809498064C01C71318E141D1E46(); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.OnInterrupted_758AC809498064C01C71318E141D1E46 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnBlendOut_758AC809498064C01C71318E141D1E46(); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.OnBlendOut_758AC809498064C01C71318E141D1E46 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnCompleted_758AC809498064C01C71318E141D1E46(); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.OnCompleted_758AC809498064C01C71318E141D1E46 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnFinish_D7F9D67243A9BA307AFBF7839EC5CA1C(); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.OnFinish_D7F9D67243A9BA307AFBF7839EC5CA1C // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Completed_323490334D0637A64B5A0B8A74BD8BBA(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.Completed_323490334D0637A64B5A0B8A74BD8BBA // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Cancelled_323490334D0637A64B5A0B8A74BD8BBA(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.Cancelled_323490334D0637A64B5A0B8A74BD8BBA // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Triggered_323490334D0637A64B5A0B8A74BD8BBA(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.Triggered_323490334D0637A64B5A0B8A74BD8BBA // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EventReceived_66A131144E50A82EC5375CB03900E01E(struct FGameplayEventData Payload); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.EventReceived_66A131144E50A82EC5375CB03900E01E // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnSync_0FAB15E2430AB4BA7D9D71B21A10E4FA(); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.OnSync_0FAB15E2430AB4BA7D9D71B21A10E4FA // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EventReceived_27499CD54A9BEA65F37B6C9376C979C1(struct FGameplayEventData Payload); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.EventReceived_27499CD54A9BEA65F37B6C9376C979C1 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_ActivateAbility(); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void Server_SpawnProjectile(struct FVector Location, struct FRotator Direction); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.Server_SpawnProjectile // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnAbilityInputReleased(); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.OnAbilityInputReleased // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void CleanupTrajectoryDisplay(); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.CleanupTrajectoryDisplay // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void TossGrenade(); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.TossGrenade // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void InitTrajectoryVariables(); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.InitTrajectoryVariables // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void AthenaProjectileSpawned(struct AFortProjectileBase* ProjectileReference); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.AthenaProjectileSpawned // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CleanupTrajectoryIndicatorOnUnequip(); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.CleanupTrajectoryIndicatorOnUnequip // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Cleanup Trajectory Display On End(); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.Cleanup Trajectory Display On End // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateTrajectory(); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.UpdateTrajectory // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Server Replicate Toss Animation(); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.Server Replicate Toss Animation // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GA_Athena_Grenade_WithTrajectory_Deprecated(int32_t EntryPoint); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.ExecuteUbergraph_GA_Athena_Grenade_WithTrajectory_Deprecated // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void OnProjectileSpawn__DelegateSignature(); // Function GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.OnProjectileSpawn__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

