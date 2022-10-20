// BlueprintGeneratedClass B_Melee_Generic.B_Melee_Generic_C
// Size: 0x1180 (Inherited: 0x1028)
struct AB_Melee_Generic_C : AFortWeapon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1028(0x08)
	struct UNiagaraComponent* AnimTrail Niagara; // 0x1030(0x08)
	struct UNiagaraComponent* IdleFX Niagara; // 0x1038(0x08)
	struct UNiagaraComponent* SwingFX Niagara; // 0x1040(0x08)
	struct UParticleSystemComponent* IdleFX; // 0x1048(0x08)
	struct UParticleSystemComponent* SwingFX; // 0x1050(0x08)
	struct UParticleSystemComponent* AnimTrial; // 0x1058(0x08)
	struct UParticleSystemComponent* MeleeHeavy_PSC; // 0x1060(0x08)
	struct UParticleSystem* IdleFX Template; // 0x1068(0x08)
	struct UNiagaraSystem* IdleFX Niagara Template; // 0x1070(0x08)
	bool Has_Idle_Effect; // 0x1078(0x01)
	char pad_1079[0x7]; // 0x1079(0x07)
	struct UParticleSystem* Idle_Effect; // 0x1080(0x08)
	struct UParticleSystemComponent* Idle Effect Component; // 0x1088(0x08)
	struct FName IdleFXAttachSocket; // 0x1090(0x04)
	enum class EAttachmentRule IdleFX Location Rule; // 0x1094(0x01)
	enum class EAttachmentRule Idle FX Rotation Rule; // 0x1095(0x01)
	enum class EAttachmentRule Idle FX Scale Rule; // 0x1096(0x01)
	char pad_1097[0x1]; // 0x1097(0x01)
	struct UParticleSystem* Swing FX Template; // 0x1098(0x08)
	struct UNiagaraSystem* SwingFX Niagara Template; // 0x10a0(0x08)
	bool Has_Swing_Effect; // 0x10a8(0x01)
	char pad_10A9[0x7]; // 0x10a9(0x07)
	struct UParticleSystem* Swing_Effect; // 0x10b0(0x08)
	struct UParticleSystemComponent* Swing Effect Component; // 0x10b8(0x08)
	struct FName SwingFXSocket; // 0x10c0(0x04)
	enum class EAttachmentRule SwingFX Location Rule; // 0x10c4(0x01)
	enum class EAttachmentRule Swing FX Rotation Rule; // 0x10c5(0x01)
	enum class EAttachmentRule Swing FX Scale Rule; // 0x10c6(0x01)
	bool UseAnimTrails; // 0x10c7(0x01)
	struct UParticleSystem* Anim Trail Template; // 0x10c8(0x08)
	struct UNiagaraSystem* AnimTrail Niagara Template; // 0x10d0(0x08)
	struct FName OverrideFirstSocketName; // 0x10d8(0x04)
	struct FName OverrideSecond Socket Name; // 0x10dc(0x04)
	struct UParticleSystem* AnimTrailsParticles; // 0x10e0(0x08)
	struct UParticleSystemComponent* AnimTrail_PSC; // 0x10e8(0x08)
	struct FName FirstSocketName; // 0x10f0(0x04)
	struct FName Second Socket Name; // 0x10f4(0x04)
	double Width; // 0x10f8(0x08)
	struct UParticleSystem* MeleeHeavy_ParticleSystem; // 0x1100(0x08)
	struct UParticleSystem* WeaponDurabilityDestroyEffect; // 0x1108(0x08)
	struct UParticleSystem* WeaponDurabilityDestroyEffectIcon; // 0x1110(0x08)
	bool UseDestroyEffect; // 0x1118(0x01)
	char pad_1119[0x7]; // 0x1119(0x07)
	struct TArray<struct UAnimMontage*> PokeAnimations; // 0x1120(0x10)
	struct UParticleSystemComponent* Alteration Ambient PS; // 0x1130(0x08)
	struct USoundBase* MeleeHeavy_Sound; // 0x1138(0x08)
	struct FGameplayTag Melee Heavy Launch Gameplay Cue Tag Override; // 0x1140(0x04)
	struct FGameplayTag Melee Heavy Impact Gameplay Cue Tag Override; // 0x1144(0x04)
	struct FVector Effects_Color_Level; // 0x1148(0x18)
	struct USoundAttenuation* MeleeHeavySoundAttenuationSettings; // 0x1160(0x08)
	struct USoundConcurrency* MeleeHeavySoundConcurrencySettings; // 0x1168(0x08)
	bool IsIdleNiagara; // 0x1170(0x01)
	bool IsSwingNiagara; // 0x1171(0x01)
	char pad_1172[0x6]; // 0x1172(0x06)
	struct USoundBase* CQC_EnemyPickaxe_Sound; // 0x1178(0x08)

	void Melee_Effect_Color(struct FVector& Melee_Color_Set); // Function B_Melee_Generic.B_Melee_Generic_C.Melee_Effect_Color // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ActivateSwingFX(); // Function B_Melee_Generic.B_Melee_Generic_C.ActivateSwingFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void DeactivateSwingFX(); // Function B_Melee_Generic.B_Melee_Generic_C.DeactivateSwingFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UnbindSwingAndAnimTrailEvents(); // Function B_Melee_Generic.B_Melee_Generic_C.UnbindSwingAndAnimTrailEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Bind Swing and Anim Trail Events(); // Function B_Melee_Generic.B_Melee_Generic_C.Bind Swing and Anim Trail Events // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlayCQCPickaxeEnemyAudio(struct FHitResult Hit Result); // Function B_Melee_Generic.B_Melee_Generic_C.PlayCQCPickaxeEnemyAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetActiveAlterationIdleParticles(bool Active, bool Reset); // Function B_Melee_Generic.B_Melee_Generic_C.SetActiveAlterationIdleParticles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetWpnRarity(); // Function B_Melee_Generic.B_Melee_Generic_C.SetWpnRarity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UserConstructionScript(); // Function B_Melee_Generic.B_Melee_Generic_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnLoaded_CB594210420542B302428F8181D85E48(struct UObject* Loaded); // Function B_Melee_Generic.B_Melee_Generic_C.OnLoaded_CB594210420542B302428F8181D85E48 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void MeleeSwingRight(bool First Right); // Function B_Melee_Generic.B_Melee_Generic_C.MeleeSwingRight // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void MeleeSwingLeft(bool First Left); // Function B_Melee_Generic.B_Melee_Generic_C.MeleeSwingLeft // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void FootStepLeft(); // Function B_Melee_Generic.B_Melee_Generic_C.FootStepLeft // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void FootStepRight(); // Function B_Melee_Generic.B_Melee_Generic_C.FootStepRight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void MeleeSwingRight_End(); // Function B_Melee_Generic.B_Melee_Generic_C.MeleeSwingRight_End // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void MeleeSwingLeft_End(); // Function B_Melee_Generic.B_Melee_Generic_C.MeleeSwingLeft_End // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function B_Melee_Generic.B_Melee_Generic_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire); // Function B_Melee_Generic.B_Melee_Generic_C.OnPlayWeaponFireFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xd67374
	void PlayRClickImpacts(); // Function B_Melee_Generic.B_Melee_Generic_C.PlayRClickImpacts // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnPlayImpactFX(struct FHitResult& HitResult, enum class EPhysicalSurface ImpactPhysicalSurface, struct UFXSystemComponent* SpawnedPSC); // Function B_Melee_Generic.B_Melee_Generic_C.OnPlayImpactFX // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnEquippedWeaponDestory(); // Function B_Melee_Generic.B_Melee_Generic_C.OnEquippedWeaponDestory // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnWeaponAttached(); // Function B_Melee_Generic.B_Melee_Generic_C.OnWeaponAttached // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnInitCosmeticAlterations(struct FFortCosmeticModification CosmeticMod); // Function B_Melee_Generic.B_Melee_Generic_C.OnInitCosmeticAlterations // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly); // Function B_Melee_Generic.B_Melee_Generic_C.OnWeaponVisibilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnWeaponDetached(); // Function B_Melee_Generic.B_Melee_Generic_C.OnWeaponDetached // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnInitWeaponCosmetics(); // Function B_Melee_Generic.B_Melee_Generic_C.OnInitWeaponCosmetics // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void On Anim Trails Notify(bool bActive); // Function B_Melee_Generic.B_Melee_Generic_C.On Anim Trails Notify // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void On Anim Trails Notify (Deactivate)(); // Function B_Melee_Generic.B_Melee_Generic_C.On Anim Trails Notify (Deactivate) // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnSwingRight(); // Function B_Melee_Generic.B_Melee_Generic_C.OnSwingRight // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnSwingLeft(); // Function B_Melee_Generic.B_Melee_Generic_C.OnSwingLeft // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnSwingRightEnded(); // Function B_Melee_Generic.B_Melee_Generic_C.OnSwingRightEnded // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnSwingLeftEnded(); // Function B_Melee_Generic.B_Melee_Generic_C.OnSwingLeftEnded // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_OnUnEquip(); // Function B_Melee_Generic.B_Melee_Generic_C.K2_OnUnEquip // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_B_Melee_Generic(int32_t EntryPoint); // Function B_Melee_Generic.B_Melee_Generic_C.ExecuteUbergraph_B_Melee_Generic // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

