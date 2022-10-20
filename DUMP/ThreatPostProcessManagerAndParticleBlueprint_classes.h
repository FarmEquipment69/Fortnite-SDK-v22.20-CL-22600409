// BlueprintGeneratedClass ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C
// Size: 0x408 (Inherited: 0x298)
struct AThreatPostProcessManagerAndParticleBlueprint_C : AFortThreatParticleActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UAudioComponent* EnterTheStormSound; // 0x2a0(0x08)
	struct UBillboardComponent* Sprite1; // 0x2a8(0x08)
	float Ramp_Up_down_values_on_death_NewTrack_0_1CA080D642E9F1C3CB297DBE1BD2C9A4; // 0x2b0(0x04)
	enum class ETimelineDirection Ramp_Up_down_values_on_death__Direction_1CA080D642E9F1C3CB297DBE1BD2C9A4; // 0x2b4(0x01)
	char pad_2B5[0x3]; // 0x2b5(0x03)
	struct UTimelineComponent* Ramp Up down values on death; // 0x2b8(0x08)
	struct FMulticastInlineDelegate NewEventDispatcher; // 0x2c0(0x10)
	struct FMulticastInlineDelegate NewEventDispatcher0; // 0x2d0(0x10)
	struct TArray<struct FVector> Array of Cloud Positions; // 0x2e0(0x10)
	int32_t RecalculateTimer; // 0x2f0(0x04)
	bool Is Alive; // 0x2f4(0x01)
	bool IsAliveJustChanged; // 0x2f5(0x01)
	bool IsAlivePrevious; // 0x2f6(0x01)
	char pad_2F7[0x1]; // 0x2f7(0x01)
	int32_t Number Of ticks before checking for the nearest cloud again - when alive; // 0x2f8(0x04)
	int32_t Number Of ticks before checking for the nearest cloud again - when dead; // 0x2fc(0x04)
	struct APostProcessVolume* Materialpost; // 0x300(0x08)
	double post process volume falloff  around the threat volume; // 0x308(0x08)
	bool ShowRainEffect; // 0x310(0x01)
	char pad_311[0x7]; // 0x311(0x07)
	double DeltaTime; // 0x318(0x08)
	double PostProcessTargetWeight; // 0x320(0x08)
	double Current Post Process Weight; // 0x328(0x08)
	double Post Process Fade in speed; // 0x330(0x08)
	bool SoundIsActive; // 0x338(0x01)
	bool SoundWasPreviouslyActive; // 0x339(0x01)
	bool is On; // 0x33a(0x01)
	char pad_33B[0x1]; // 0x33b(0x01)
	struct FLinearColor ThreatFogPostProcessColor_Morning; // 0x33c(0x10)
	struct FLinearColor ThreatFogPostProcessColor_Day; // 0x34c(0x10)
	struct FLinearColor ThreatFogPostProcessColor_Evening; // 0x35c(0x10)
	struct FLinearColor ThreatFogPostProcessColor_Night; // 0x36c(0x10)
	char pad_37C[0x4]; // 0x37c(0x04)
	struct TArray<struct FBox> Array of Cloud Volumes; // 0x380(0x10)
	double PostProcessWeightModulation; // 0x390(0x08)
	double Ramp Up And Down Anim Values; // 0x398(0x08)
	bool ShowRainOnCameraLens; // 0x3a0(0x01)
	char pad_3A1[0x7]; // 0x3a1(0x07)
	struct AEmitterCameraLensEffectBase* Rain Camera Lens Effect; // 0x3a8(0x08)
	struct UParticleSystemComponent* LocalizedParticleSystem; // 0x3b0(0x08)
	bool IsWorldReady; // 0x3b8(0x01)
	char pad_3B9[0x7]; // 0x3b9(0x07)
	double Rain Trace Timer; // 0x3c0(0x08)
	struct FVector RainTraceOffset; // 0x3c8(0x18)
	double RainMultiplierCurrent; // 0x3e0(0x08)
	double Rain Spawn Rate Exponent; // 0x3e8(0x08)
	bool TracePrevious; // 0x3f0(0x01)
	bool IsAthenaWorld; // 0x3f1(0x01)
	bool bThreatOverride; // 0x3f2(0x01)
	bool bForceOff; // 0x3f3(0x01)
	char pad_3F4[0x4]; // 0x3f4(0x04)
	struct TScriptInterface<ICameraLensEffectInterface> CameraLensEffectInterface; // 0x3f8(0x10)

	void SetForceOff(bool bForceOff); // Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.SetForceOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void CalculatePlayerPositionNearBox(struct FVector BoxMin, struct FVector BoxMax, double& VolumePlayerCoveragePercentage); // Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.CalculatePlayerPositionNearBox // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Ramp Up down values on death__FinishedFunc(); // Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.Ramp Up down values on death__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void Ramp Up down values on death__UpdateFunc(); // Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.Ramp Up down values on death__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void ReceiveTick(float DeltaSeconds); // Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnThreatCloudsChanged(struct TArray<struct FThreatLocationInfo>& ThreatLocationInfo); // Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.OnThreatCloudsChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnWorldReady(); // Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.OnWorldReady // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void VFX_RainTracePeriodic(); // Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.VFX_RainTracePeriodic // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void StartTraceTimer(); // Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.StartTraceTimer // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ForceUpdateLensEffect(); // Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.ForceUpdateLensEffect // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnThreatOverrideChanged(bool bForceThreatOn); // Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.OnThreatOverrideChanged // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint(int32_t EntryPoint); // Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
	void NewEventDispatcher0__DelegateSignature(); // Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.NewEventDispatcher0__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void NewEventDispatcher__DelegateSignature(); // Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.NewEventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

