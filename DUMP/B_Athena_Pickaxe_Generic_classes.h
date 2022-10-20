// BlueprintGeneratedClass B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C
// Size: 0x12e8 (Inherited: 0x1250)
struct AB_Athena_Pickaxe_Generic_C : AFortWeaponPickaxeAthena {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1250(0x08)
	struct UParticleSystemComponent* MeleeHeavy_PSC; // 0x1258(0x08)
	enum class EAttachmentRule IdleFX Location Rule; // 0x1260(0x01)
	enum class EAttachmentRule Idle FX Rotation Rule; // 0x1261(0x01)
	enum class EAttachmentRule Idle FX Scale Rule; // 0x1262(0x01)
	enum class EAttachmentRule SwingFX Location Rule; // 0x1263(0x01)
	enum class EAttachmentRule Swing FX Rotation Rule; // 0x1264(0x01)
	enum class EAttachmentRule Swing FX Scale Rule; // 0x1265(0x01)
	char pad_1266[0x2]; // 0x1266(0x02)
	struct UParticleSystem* MeleeHeavy_ParticleSystem; // 0x1268(0x08)
	struct UParticleSystem* WeaponDurabilityDestroyEffect; // 0x1270(0x08)
	struct UParticleSystem* WeaponDurabilityDestroyEffectIcon; // 0x1278(0x08)
	bool UseDestroyEffect; // 0x1280(0x01)
	char pad_1281[0x7]; // 0x1281(0x07)
	struct UParticleSystemComponent* Alteration Ambient PS; // 0x1288(0x08)
	struct FVector Effects_Color_Level; // 0x1290(0x18)
	bool Equipped; // 0x12a8(0x01)
	bool bEquipPendingInstigator; // 0x12a9(0x01)
	bool UseTimeofDayControl; // 0x12aa(0x01)
	bool Swing_Right?; // 0x12ab(0x01)
	char pad_12AC[0x4]; // 0x12ac(0x04)
	struct UFXSystemComponent* Impact FX; // 0x12b0(0x08)
	struct FRotator Left Swing Rotation; // 0x12b8(0x18)
	struct FRotator Right Swing Rotation; // 0x12d0(0x18)

	void Melee_Effect_Color(struct FVector& Melee_Color_Set); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.Melee_Effect_Color // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Binding Time of Day Control(bool F)); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.Binding Time of Day Control // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UnbindSwingAnimTrailEvents(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.UnbindSwingAnimTrailEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BindSwingAnimTrailEvents(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.BindSwingAnimTrailEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlayCQCPickaxeEnemyAudio(struct FHitResult Hit Result); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.PlayCQCPickaxeEnemyAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetActiveAlterationIdleParticles(bool Active, bool Reset); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SetActiveAlterationIdleParticles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetWpnRarity(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SetWpnRarity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UserConstructionScript(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnStatChanged_F171C56748FEA3E19F93088E968D3E21(struct FName StatName, int32_t StatValue); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnStatChanged_F171C56748FEA3E19F93088E968D3E21 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnLoaded_5BC5DA3B4E308BE7A188FBB2571333D2(struct UObject* Loaded); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnLoaded_5BC5DA3B4E308BE7A188FBB2571333D2 // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void MeleeSwingRight(bool First Right); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.MeleeSwingRight // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void MeleeSwingLeft(bool First Left); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.MeleeSwingLeft // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void FootStepLeft(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.FootStepLeft // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void FootStepRight(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.FootStepRight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void MeleeSwingRight_End(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.MeleeSwingRight_End // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void MeleeSwingLeft_End(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.MeleeSwingLeft_End // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnPlayWeaponFireFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xd67374
	void PlayRClickImpacts(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.PlayRClickImpacts // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnEquippedWeaponDestory(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnEquippedWeaponDestory // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnWeaponAttached(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnWeaponAttached // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnInitCosmeticAlterations(struct FFortCosmeticModification CosmeticMod); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnInitCosmeticAlterations // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnWeaponVisibilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnWeaponDetached(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnWeaponDetached // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnInitWeaponCosmetics(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnInitWeaponCosmetics // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void HandleKillWatch(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.HandleKillWatch // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateBasedOnKills(int32_t Watched Kills); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.UpdateBasedOnKills // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Anim Trails Notify(bool bActive); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.Anim Trails Notify // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Anim Trails Disable(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.Anim Trails Disable // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SwingRight(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SwingRight // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SwingLeft(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SwingLeft // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SwingRightEnd(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SwingRightEnd // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SwingLeftEnd(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SwingLeftEnd // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnInstigatorSet(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnInstigatorSet // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void K2_OnUnEquip(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.K2_OnUnEquip // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void TODCheck(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.TODCheck // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnPlayImpactFX(struct FHitResult& HitResult, enum class EPhysicalSurface ImpactPhysicalSurface, struct UFXSystemComponent* SpawnedPSC); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnPlayImpactFX // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void HandleWeaponHolstered(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.HandleWeaponHolstered // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_B_Athena_Pickaxe_Generic(int32_t EntryPoint); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.ExecuteUbergraph_B_Athena_Pickaxe_Generic // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

