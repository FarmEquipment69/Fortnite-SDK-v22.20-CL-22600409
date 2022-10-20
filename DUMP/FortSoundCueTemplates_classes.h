// Class FortSoundCueTemplates.FortSoundCueTemplateBase
// Size: 0x548 (Inherited: 0x548)
struct UFortSoundCueTemplateBase : USoundCueTemplate {
};

// Class FortSoundCueTemplates.EmoteBase
// Size: 0x548 (Inherited: 0x548)
struct UEmoteBase : UFortSoundCueTemplateBase {
};

// Class FortSoundCueTemplates.EmoteFoley
// Size: 0x548 (Inherited: 0x548)
struct UEmoteFoley : UEmoteBase {
};

// Class FortSoundCueTemplates.EmoteMusic
// Size: 0x548 (Inherited: 0x548)
struct UEmoteMusic : UEmoteBase {
};

// Class FortSoundCueTemplates.EmoteMusic3P
// Size: 0x548 (Inherited: 0x548)
struct UEmoteMusic3P : UEmoteBase {
};

// Class FortSoundCueTemplates.PlayerFoleyBase
// Size: 0x548 (Inherited: 0x548)
struct UPlayerFoleyBase : UFortSoundCueTemplateBase {
};

// Class FortSoundCueTemplates.PlayerFoley
// Size: 0x548 (Inherited: 0x548)
struct UPlayerFoley : UPlayerFoleyBase {
};

// Class FortSoundCueTemplates.FootstepFoley
// Size: 0x548 (Inherited: 0x548)
struct UFootstepFoley : UPlayerFoley {
};

// Class FortSoundCueTemplates.FortSoundCueTemplateDefaults
// Size: 0x70 (Inherited: 0x30)
struct UFortSoundCueTemplateDefaults : UDataAsset {
	struct USoundClass* SoundClass; // 0x30(0x08)
	struct USoundAttenuation* Attenuation; // 0x38(0x08)
	struct USoundConcurrency* Concurrency; // 0x40(0x08)
	float VolumeMultiplier; // 0x48(0x04)
	float PitchMultiplier; // 0x4c(0x04)
	struct TArray<struct FFortSubmixPair> SubmixSends; // 0x50(0x10)
	struct USoundWave* LicensedTrackAlternative; // 0x60(0x08)
	struct USoundSubmixBase* LicensedSubmix; // 0x68(0x08)
};

// Class FortSoundCueTemplates.FortSoundCueTemplateDefaultSettings
// Size: 0x80 (Inherited: 0x30)
struct UFortSoundCueTemplateDefaultSettings : UDataAsset {
	struct TMap<struct UFortSoundCueTemplateBase*, struct UFortSoundCueTemplateDefaults*> TemplateDefaults; // 0x30(0x50)

	struct UFortSoundCueTemplateDefaults* GetSettingsForTemplateType(struct UFortSoundCueTemplateBase* TemplateType); // Function FortSoundCueTemplates.FortSoundCueTemplateDefaultSettings.GetSettingsForTemplateType // (Final|Native|Public) // @ game+0x6fa42f0
};

// Class FortSoundCueTemplates.FortSoundCueTemplateSettings
// Size: 0x58 (Inherited: 0x30)
struct UFortSoundCueTemplateSettings : UDeveloperSettings {
	struct TSoftObjectPtr<UFortSoundCueTemplateDefaultSettings> DefaultTemplateSettings; // 0x30(0x28)

	struct UFortSoundCueTemplateDefaults* GetDefaultSettingsForTemplateType(struct UFortSoundCueTemplateBase* TemplateType); // Function FortSoundCueTemplates.FortSoundCueTemplateSettings.GetDefaultSettingsForTemplateType // (Final|Native|Public|Const) // @ game+0x6fa4260
};

// Class FortSoundCueTemplates.FortSoundCueTemplateSimple
// Size: 0x548 (Inherited: 0x548)
struct UFortSoundCueTemplateSimple : UFortSoundCueTemplateBase {
};

// Class FortSoundCueTemplates.GliderThrustSCTDefaults
// Size: 0x1d0 (Inherited: 0x70)
struct UGliderThrustSCTDefaults : UFortSoundCueTemplateDefaults {
	struct FGliderThrustData Forward; // 0x70(0x58)
	struct FGliderThrustData Sideways; // 0xc8(0x58)
	struct FGliderThrustData Backwards; // 0x120(0x58)
	struct FGliderThrustData AnyDirection; // 0x178(0x58)
};

// Class FortSoundCueTemplates.GliderThrustLoop
// Size: 0x548 (Inherited: 0x548)
struct UGliderThrustLoop : UFortSoundCueTemplateBase {
};

// Class FortSoundCueTemplates.GliderThrustStart
// Size: 0x548 (Inherited: 0x548)
struct UGliderThrustStart : UFortSoundCueTemplateBase {
};

// Class FortSoundCueTemplates.GliderOpen
// Size: 0x548 (Inherited: 0x548)
struct UGliderOpen : UFortSoundCueTemplateSimple {
};

// Class FortSoundCueTemplates.GliderClose
// Size: 0x548 (Inherited: 0x548)
struct UGliderClose : UFortSoundCueTemplateSimple {
};

// Class FortSoundCueTemplates.MusicPack
// Size: 0x548 (Inherited: 0x548)
struct UMusicPack : UFortSoundCueTemplateBase {
};

// Class FortSoundCueTemplates.PhysicsStateSCTDefaults
// Size: 0x2b8 (Inherited: 0x70)
struct UPhysicsStateSCTDefaults : UFortSoundCueTemplateDefaults {
	struct FName SpeedParameterName; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FPhysicsStateData Rolling; // 0x78(0x90)
	struct FPhysicsStateData Sliding; // 0x108(0x90)
	struct FPhysicsStateData Flying; // 0x198(0x90)
	struct FPhysicsStateData Floating; // 0x228(0x90)
};

// Class FortSoundCueTemplates.PhysicsStateLoop
// Size: 0x548 (Inherited: 0x548)
struct UPhysicsStateLoop : UFortSoundCueTemplateBase {
};

// Class FortSoundCueTemplates.PhysicsImpactSCTDefaults
// Size: 0x180 (Inherited: 0x70)
struct UPhysicsImpactSCTDefaults : UFortSoundCueTemplateDefaults {
	struct FName ImpactTypeParameterName; // 0x70(0x04)
	struct FName StrengthParameterName; // 0x74(0x04)
	struct FPhysicsImpactData Light; // 0x78(0x58)
	struct FPhysicsImpactData Medium; // 0xd0(0x58)
	struct FPhysicsImpactData Heavy; // 0x128(0x58)
};

// Class FortSoundCueTemplates.PhysicsImpact
// Size: 0x548 (Inherited: 0x548)
struct UPhysicsImpact : UFortSoundCueTemplateBase {
};

// Class FortSoundCueTemplates.PickaxeSCTDefaults
// Size: 0x90 (Inherited: 0x70)
struct UPickaxeSCTDefaults : UFortSoundCueTemplateDefaults {
	struct USoundAttenuation* CloseAttenuation; // 0x70(0x08)
	struct USoundAttenuation* DistantAttenuation; // 0x78(0x08)
	struct TArray<struct USoundWave*> DistantVariations; // 0x80(0x10)
};

// Class FortSoundCueTemplates.PickaxeBase
// Size: 0x548 (Inherited: 0x548)
struct UPickaxeBase : UFortSoundCueTemplateBase {
};

// Class FortSoundCueTemplates.PickaxeSwing
// Size: 0x548 (Inherited: 0x548)
struct UPickaxeSwing : UPickaxeBase {
};

// Class FortSoundCueTemplates.PickaxeReady
// Size: 0x548 (Inherited: 0x548)
struct UPickaxeReady : UPickaxeBase {
};

// Class FortSoundCueTemplates.PickaxeImpactEnemy
// Size: 0x548 (Inherited: 0x548)
struct UPickaxeImpactEnemy : UFortSoundCueTemplateSimple {
};

// Class FortSoundCueTemplates.PlayerFoleyDefaults
// Size: 0xb8 (Inherited: 0x70)
struct UPlayerFoleyDefaults : UFortSoundCueTemplateDefaults {
	struct USoundClass* LocalPlayerSoundClass; // 0x70(0x08)
	struct USoundClass* TeammateSoundClass; // 0x78(0x08)
	struct USoundClass* HostileSoundClass; // 0x80(0x08)
	struct USoundAttenuation* LocalPlayerAttenuation; // 0x88(0x08)
	struct USoundAttenuation* AboveAttenuation; // 0x90(0x08)
	struct USoundAttenuation* BelowAttenuation; // 0x98(0x08)
	struct USoundAttenuation* ParallelAttenuation; // 0xa0(0x08)
	struct TArray<struct FDistanceDatum> ElevationCrossfadeDistances; // 0xa8(0x10)
};

// Class FortSoundCueTemplates.WeaponLowAmmo
// Size: 0x548 (Inherited: 0x548)
struct UWeaponLowAmmo : UFortSoundCueTemplateSimple {
};

// Class FortSoundCueTemplates.WeaponOutOfAmmo
// Size: 0x548 (Inherited: 0x548)
struct UWeaponOutOfAmmo : UFortSoundCueTemplateSimple {
};

// Class FortSoundCueTemplates.WeaponReloadStart
// Size: 0x548 (Inherited: 0x548)
struct UWeaponReloadStart : UFortSoundCueTemplateSimple {
};

// Class FortSoundCueTemplates.WeaponReloadInsert
// Size: 0x548 (Inherited: 0x548)
struct UWeaponReloadInsert : UFortSoundCueTemplateSimple {
};

// Class FortSoundCueTemplates.WeaponReloadEnd
// Size: 0x548 (Inherited: 0x548)
struct UWeaponReloadEnd : UFortSoundCueTemplateSimple {
};

// Class FortSoundCueTemplates.WeaponTargetingStart
// Size: 0x548 (Inherited: 0x548)
struct UWeaponTargetingStart : UFortSoundCueTemplateSimple {
};

// Class FortSoundCueTemplates.WeaponTargetingEnd
// Size: 0x548 (Inherited: 0x548)
struct UWeaponTargetingEnd : UFortSoundCueTemplateSimple {
};

