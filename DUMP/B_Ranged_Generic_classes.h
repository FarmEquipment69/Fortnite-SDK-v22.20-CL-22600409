// BlueprintGeneratedClass B_Ranged_Generic.B_Ranged_Generic_C
// Size: 0x1818 (Inherited: 0x14d0)
struct AB_Ranged_Generic_C : AFortWeaponRanged {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14d0(0x08)
	struct UAudioParameterComponent_C* AudioParameterComponent; // 0x14d8(0x08)
	struct UNiagaraComponent* Reload_Niagara(Empty); // 0x14e0(0x08)
	struct UParticleSystemComponent* Reload(Empty); // 0x14e8(0x08)
	struct UParticleSystemComponent* Muzzle(Empty); // 0x14f0(0x08)
	float AnimateScopePostProcess_DownSightPostProcessAmount_393D8BA5486879173797EF8C9B8D4642; // 0x14f8(0x04)
	enum class ETimelineDirection AnimateScopePostProcess__Direction_393D8BA5486879173797EF8C9B8D4642; // 0x14fc(0x01)
	char pad_14FD[0x3]; // 0x14fd(0x03)
	struct UTimelineComponent* AnimateScopePostProcess; // 0x1500(0x08)
	struct UParticleSystem* MuzzleParticleSystem; // 0x1508(0x08)
	struct UParticleSystem* WeaponDurabilityDestroyEffect; // 0x1510(0x08)
	struct UParticleSystem* WeaponDurabilityDestroyEffectIcon; // 0x1518(0x08)
	bool UseDestroyEffect; // 0x1520(0x01)
	bool Use Reload Particles; // 0x1521(0x01)
	char pad_1522[0x6]; // 0x1522(0x06)
	struct UParticleSystem* Reload_ParticleSystem; // 0x1528(0x08)
	double LastPlayFXTime; // 0x1530(0x08)
	double MinPlayFXTime; // 0x1538(0x08)
	bool UseShellsOnFire?; // 0x1540(0x01)
	bool UseShellsOnReload?; // 0x1541(0x01)
	bool UseShellsOnPump?; // 0x1542(0x01)
	char pad_1543[0x1]; // 0x1543(0x01)
	struct FName ReloadSocketName; // 0x1544(0x04)
	struct TArray<struct AFortAIPawn*> Array Of Active Enemy AI; // 0x1548(0x10)
	bool Scope - Render Enemies To Custom Depth Buffer; // 0x1558(0x01)
	char pad_1559[0x3]; // 0x1559(0x03)
	struct FName Shells Socket Name; // 0x155c(0x04)
	enum class En_ShellTypes_01 ShellTypeSelect; // 0x1560(0x01)
	char pad_1561[0x7]; // 0x1561(0x07)
	double Shells Spawn Rate Scale; // 0x1568(0x08)
	struct FVector ShellsRotationRate; // 0x1570(0x18)
	struct FVector Shells Velocity; // 0x1588(0x18)
	struct FVector Shells Gravity; // 0x15a0(0x18)
	struct FVector Shells Size; // 0x15b8(0x18)
	double Target Scope Vignette Blur Screen Percentage; // 0x15d0(0x08)
	double ScopeCameraOffsetX; // 0x15d8(0x08)
	double ScopeCameraOffsetY; // 0x15e0(0x08)
	double Scope Camera Offset Amount; // 0x15e8(0x08)
	double Inherit Parent Velocity; // 0x15f0(0x08)
	double Cylindrical Radius; // 0x15f8(0x08)
	double Cylindrical Height; // 0x1600(0x08)
	struct FLinearColor Shell Color; // 0x1608(0x10)
	struct UNiagaraComponent* Spawned_Shells; // 0x1618(0x08)
	bool DebugShellsSocket?; // 0x1620(0x01)
	char pad_1621[0x7]; // 0x1621(0x07)
	struct USoundBase* Sound_ScopeZoomIn; // 0x1628(0x08)
	struct USoundBase* Sound_ScopeZoomOut; // 0x1630(0x08)
	struct UParticleSystemComponent* Alteration Ambient PS; // 0x1638(0x08)
	struct FGameplayTagContainer ReticleHUDElementTags; // 0x1640(0x20)
	bool Is Wind Enabled; // 0x1660(0x01)
	char pad_1661[0x7]; // 0x1661(0x07)
	struct UParticleSystem* MuzzleWindParticleSystem; // 0x1668(0x08)
	struct UParticleSystem* MuzzleParticleSystem1P; // 0x1670(0x08)
	bool ShouldHideReticleAfterDelay; // 0x1678(0x01)
	char pad_1679[0x7]; // 0x1679(0x07)
	struct UParticleSystemComponent* MuzzleWindParticleSpawned; // 0x1680(0x08)
	int32_t StencilBufferValue; // 0x1688(0x04)
	char pad_168C[0x4]; // 0x168c(0x04)
	struct UCurveFloat* Curve_PitchOffset; // 0x1690(0x08)
	struct USoundBase* Sound_ScopedInLoop; // 0x1698(0x08)
	struct UAudioComponent* ScopeZoomInComp; // 0x16a0(0x08)
	struct UAudioComponent* ScopedInLoopComp; // 0x16a8(0x08)
	struct UAudioComponent* ScopeZoomOutComp; // 0x16b0(0x08)
	double Alteration Ambient PS Max Draw Distance; // 0x16b8(0x08)
	double Muzzle PS Max Draw Distance; // 0x16c0(0x08)
	double Beam PS Max Draw Distance; // 0x16c8(0x08)
	double Reload PS Max Draw Distance; // 0x16d0(0x08)
	double Shells PS Max Draw Distance; // 0x16d8(0x08)
	struct FMulticastInlineDelegate onAimDownSightsChanged; // 0x16e0(0x10)
	bool IsMuzzleNiagara; // 0x16f0(0x01)
	char pad_16F1[0x7]; // 0x16f1(0x07)
	struct UNiagaraSystem* MuzzleNiagaraSystemInstance; // 0x16f8(0x08)
	struct TSoftObjectPtr<UNiagaraSystem> MuzzleNiagaraSystemAsset; // 0x1700(0x28)
	struct UNiagaraComponent* MuzzleNiagaraComponentInstance; // 0x1728(0x08)
	struct TArray<struct UParticleSystemComponent*> MuzzleParticleSystemComponents; // 0x1730(0x10)
	double Muzzle_ChanceOfLargeFlash; // 0x1740(0x08)
	double Muzzle_FlashLarge_MinScale; // 0x1748(0x08)
	double Muzzle_FlashLarge_MaxScale; // 0x1750(0x08)
	double Muzzle_FlashSmall_MinScale; // 0x1758(0x08)
	double Muzzle_FlashSmall_MaxScale; // 0x1760(0x08)
	struct FTimerHandle ScopeEffectDelay1Handle; // 0x1768(0x08)
	struct FTimerHandle ScopeEffectDelay2Handle; // 0x1770(0x08)
	struct FScalableFloat UseNativeFX; // 0x1778(0x28)
	bool IsReloadNiagara; // 0x17a0(0x01)
	char pad_17A1[0x7]; // 0x17a1(0x07)
	struct UNiagaraSystem* Reload Niagara Asset; // 0x17a8(0x08)
	struct FScalableFloat UseUpdatedFeedback; // 0x17b0(0x28)
	struct FMulticastInlineDelegate OnStartFiring; // 0x17d8(0x10)
	struct FMulticastInlineDelegate OnPersistentFireStopped; // 0x17e8(0x10)
	struct UStaticMesh* ScopeMesh; // 0x17f8(0x08)
	struct UStaticMeshComponent* ScopeMesh1P_Spawned; // 0x1800(0x08)
	struct TArray<struct UMaterialInterface*> ScopeMaterialOverrides; // 0x1808(0x10)

	void GetActorSoundParams(struct TArray<struct FAudioParameter>& Params); // Function B_Ranged_Generic.B_Ranged_Generic_C.GetActorSoundParams // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xd67374
	void StopLocalForceFeedback(struct UForceFeedbackEffect* ForceFeedbackEffect, struct FName tag); // Function B_Ranged_Generic.B_Ranged_Generic_C.StopLocalForceFeedback // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlayLocalForceFeedback(struct UForceFeedbackEffect* ForceFeedbackEffect, struct FName tag, bool bLooping); // Function B_Ranged_Generic.B_Ranged_Generic_C.PlayLocalForceFeedback // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void getScopeComp(struct UStaticMeshComponent*& ScopeComponent); // Function B_Ranged_Generic.B_Ranged_Generic_C.getScopeComp // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void initScope(); // Function B_Ranged_Generic.B_Ranged_Generic_C.initScope // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void IsNewFeedbackEnabled(bool& Enabled); // Function B_Ranged_Generic.B_Ranged_Generic_C.IsNewFeedbackEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void LocalReloadStarted(float ReloadTime, enum class EFortWeaponReloadType ReloadType); // Function B_Ranged_Generic.B_Ranged_Generic_C.LocalReloadStarted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetCorrectMuzzleNiagaraSystem(struct TSoftObjectPtr<UNiagaraSystem>& OutNiagaraSystem); // Function B_Ranged_Generic.B_Ranged_Generic_C.GetCorrectMuzzleNiagaraSystem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void PlayScopeOutAudio(); // Function B_Ranged_Generic.B_Ranged_Generic_C.PlayScopeOutAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetScopeParameters(struct UStaticMeshComponent*& ScopeComponent, struct FVector2D& DepthOfFieldVignetteRange, struct FVector& WeaponSightsOffset); // Function B_Ranged_Generic.B_Ranged_Generic_C.GetScopeParameters // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void GetActiveMuzzleComponents(struct TArray<struct UFXSystemComponent*>& NewParam); // Function B_Ranged_Generic.B_Ranged_Generic_C.GetActiveMuzzleComponents // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void SetActiveMuzzleComponent(bool NiagaraEnabled); // Function B_Ranged_Generic.B_Ranged_Generic_C.SetActiveMuzzleComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void StopScopedAudio(); // Function B_Ranged_Generic.B_Ranged_Generic_C.StopScopedAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void StartScopedAudio(); // Function B_Ranged_Generic.B_Ranged_Generic_C.StartScopedAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetPostProcessParams(double InputPin); // Function B_Ranged_Generic.B_Ranged_Generic_C.SetPostProcessParams // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetActiveAlterationIdleParticles(bool Active); // Function B_Ranged_Generic.B_Ranged_Generic_C.SetActiveAlterationIdleParticles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ShowReticle(); // Function B_Ranged_Generic.B_Ranged_Generic_C.ShowReticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HideReticle(); // Function B_Ranged_Generic.B_Ranged_Generic_C.HideReticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ActivateOrDeactivateWindParticle(bool bNewActive); // Function B_Ranged_Generic.B_Ranged_Generic_C.ActivateOrDeactivateWindParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void DeactivateMuzzleFX(); // Function B_Ranged_Generic.B_Ranged_Generic_C.DeactivateMuzzleFX // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void DeactivateReloadSmokeFX(); // Function B_Ranged_Generic.B_Ranged_Generic_C.DeactivateReloadSmokeFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ActivateReloadSmokeFX(); // Function B_Ranged_Generic.B_Ranged_Generic_C.ActivateReloadSmokeFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ActivateShellsFX(bool bool); // Function B_Ranged_Generic.B_Ranged_Generic_C.ActivateShellsFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void DeactivateShellsFX(); // Function B_Ranged_Generic.B_Ranged_Generic_C.DeactivateShellsFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetupShellFX(); // Function B_Ranged_Generic.B_Ranged_Generic_C.SetupShellFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateShellEmittersFX(); // Function B_Ranged_Generic.B_Ranged_Generic_C.UpdateShellEmittersFX // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Muzzle Play Reload FX(enum class EFortReloadFXState Selection); // Function B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Play Reload FX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Muzzle Flash FX(bool Persistent Fire); // Function B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Flash FX // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetWpnRarity(); // Function B_Ranged_Generic.B_Ranged_Generic_C.SetWpnRarity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void AddRandomScale(); // Function B_Ranged_Generic.B_Ranged_Generic_C.AddRandomScale // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UserConstructionScript(); // Function B_Ranged_Generic.B_Ranged_Generic_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void AnimateScopePostProcess__FinishedFunc(); // Function B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void AnimateScopePostProcess__UpdateFunc(); // Function B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void AnimateScopePostProcess__Toggle Scope__EventFunc(); // Function B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__Toggle Scope__EventFunc // (BlueprintEvent) // @ game+0xd67374
	void OnLoaded_4D1409A247BFDB4C074B628406FC7A72(struct UObject* Loaded); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_4D1409A247BFDB4C074B628406FC7A72 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnLoaded_4DE6158742ED7EE528BC98A240A81632(struct UObject* Loaded); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_4DE6158742ED7EE528BC98A240A81632 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnLoaded_3A9BBE884A5C5966375089938B7DC0CA(struct UObject* Loaded); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_3A9BBE884A5C5966375089938B7DC0CA // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnLoaded_83457BA843174AC6288682A342EBEAD9(struct UObject* Loaded); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_83457BA843174AC6288682A342EBEAD9 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnLoaded_5B08633343C4DA6FF40449A8A36357E4(struct UObject* Loaded); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_5B08633343C4DA6FF40449A8A36357E4 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayWeaponFireFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnStopWeaponFireFX(); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnStopWeaponFireFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnPlayReloadFX(enum class EFortReloadFXState ReloadStage); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayReloadFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnSetTargeting(bool bNewIsTargeting); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnSetTargeting // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void K2_OnUnEquip(); // Function B_Ranged_Generic.B_Ranged_Generic_C.K2_OnUnEquip // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void InitializeScopeVariables(); // Function B_Ranged_Generic.B_Ranged_Generic_C.InitializeScopeVariables // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Update Enemy Custom Depths(bool Enable Or Disable, int32_t StencilBufferValue); // Function B_Ranged_Generic.B_Ranged_Generic_C.Update Enemy Custom Depths // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnWeaponAttached(); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnWeaponAttached // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnInitAlteration(struct UFortAlterationItemDefinition* NewAlteration); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnInitAlteration // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnInitCosmeticAlterations(struct FFortCosmeticModification CosmeticMod); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnInitCosmeticAlterations // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ShellsON_(onPump)(); // Function B_Ranged_Generic.B_Ranged_Generic_C.ShellsON_(onPump) // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnEquippedWeaponDestory(); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnEquippedWeaponDestory // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xd67374
	void SetWeaponPierceThrough(bool Enable, int32_t TargetLimit); // Function B_Ranged_Generic.B_Ranged_Generic_C.SetWeaponPierceThrough // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetWeaponPierceThrough_ClientRep(bool Enable, int32_t TargetLimit); // Function B_Ranged_Generic.B_Ranged_Generic_C.SetWeaponPierceThrough_ClientRep // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function B_Ranged_Generic.B_Ranged_Generic_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnWeaponVisibilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HideWeaponMesh(); // Function B_Ranged_Generic.B_Ranged_Generic_C.HideWeaponMesh // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ShowWeaponMesh(); // Function B_Ranged_Generic.B_Ranged_Generic_C.ShowWeaponMesh // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HideWeapon(); // Function B_Ranged_Generic.B_Ranged_Generic_C.HideWeapon // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ShowWeapon(); // Function B_Ranged_Generic.B_Ranged_Generic_C.ShowWeapon // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReverseScopePP(); // Function B_Ranged_Generic.B_Ranged_Generic_C.ReverseScopePP // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ResetDoonceScopeSound(); // Function B_Ranged_Generic.B_Ranged_Generic_C.ResetDoonceScopeSound // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UnhideThirdPersonStuff(); // Function B_Ranged_Generic.B_Ranged_Generic_C.UnhideThirdPersonStuff // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlayScopePP(); // Function B_Ranged_Generic.B_Ranged_Generic_C.PlayScopePP // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void HideFirstPersonStuff(); // Function B_Ranged_Generic.B_Ranged_Generic_C.HideFirstPersonStuff // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void AbortScopeFX(); // Function B_Ranged_Generic.B_Ranged_Generic_C.AbortScopeFX // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void HideThirdPersonStuff(); // Function B_Ranged_Generic.B_Ranged_Generic_C.HideThirdPersonStuff // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UnhideFirstPersonStuffPart2(int32_t Which Call); // Function B_Ranged_Generic.B_Ranged_Generic_C.UnhideFirstPersonStuffPart2 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UnhideFirstPersonStuffPart1(); // Function B_Ranged_Generic.B_Ranged_Generic_C.UnhideFirstPersonStuffPart1 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ForceScopeFX(); // Function B_Ranged_Generic.B_Ranged_Generic_C.ForceScopeFX // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void BindFireRateChange(); // Function B_Ranged_Generic.B_Ranged_Generic_C.BindFireRateChange // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PitchUpOnRateOfFireChange(float NewRateOfFire); // Function B_Ranged_Generic.B_Ranged_Generic_C.PitchUpOnRateOfFireChange // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ShellEjectionFixOn(); // Function B_Ranged_Generic.B_Ranged_Generic_C.ShellEjectionFixOn // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Bind on Effects Quality(); // Function B_Ranged_Generic.B_Ranged_Generic_C.Bind on Effects Quality // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ShellEjectionOff(); // Function B_Ranged_Generic.B_Ranged_Generic_C.ShellEjectionOff // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ForceScopeBackImmediatly(); // Function B_Ranged_Generic.B_Ranged_Generic_C.ForceScopeBackImmediatly // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnPlayImpactFX(struct FHitResult& HitResult, enum class EPhysicalSurface ImpactPhysicalSurface, struct UFXSystemComponent* SpawnedPSC); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayImpactFX // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnStartOverheated(); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnStartOverheated // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void LoadNiagaraMuzzleSoftObject(); // Function B_Ranged_Generic.B_Ranged_Generic_C.LoadNiagaraMuzzleSoftObject // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnApplyFireModeData(struct UFortWeaponFireModeData* FireModeData); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnApplyFireModeData // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ScopeEffectDelay2(); // Function B_Ranged_Generic.B_Ranged_Generic_C.ScopeEffectDelay2 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ScopeEffectDelay1(); // Function B_Ranged_Generic.B_Ranged_Generic_C.ScopeEffectDelay1 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_B_Ranged_Generic(int32_t EntryPoint); // Function B_Ranged_Generic.B_Ranged_Generic_C.ExecuteUbergraph_B_Ranged_Generic // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void OnPersistentFireStopped__DelegateSignature(); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnPersistentFireStopped__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnStartFiring__DelegateSignature(); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnStartFiring__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void onAimDownSightsChanged__DelegateSignature(bool AimDownsights); // Function B_Ranged_Generic.B_Ranged_Generic_C.onAimDownSightsChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

