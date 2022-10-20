// VerseClass VerseFortnite.$SolarisSignatureFunctionOuter
// Size: 0x28 (Inherited: 0x28)
struct U$SolarisSignatureFunctionOuter : UObject {
};

// VerseClass VerseFortnite.ability_component
// Size: 0x118 (Inherited: 0x98)
struct Uability_component : UVerseFortniteAbilityComponentBase {
	char pad_98[0x24]; // 0x98(0x24)
	struct FDelegate __verse_0xFC826A64__L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RApplyGameplayEffectToSelf_L_Ngameplay__effect__asset_M_Nfloat_R; // 0xbc(0x0c)
	struct FDelegate __verse_0xD6256AD2__L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RClearAbility_L_Ntype_R; // 0xa4(0x0c)
	struct FDelegate __verse_0x66070B1E__L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RGiveAbility_L_Ntype_R; // 0x98(0x0c)
	struct FDelegate __verse_0x15441428__L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RTryActivateAbility_L_Ntype_R; // 0xb0(0x0c)
	char pad_EC[0x2c]; // 0xec(0x2c)

	char _L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RTryActivateAbility_L_Ntype_R(struct UObject* __verse_0xB2CDDD72_Argument); // Function VerseFortnite.ability_component._L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RTryActivateAbility_L_Ntype_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x633c040
	void _L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RGiveAbility_L_Ntype_R(struct UObject* __verse_0xB2CDDD72_Argument); // Function VerseFortnite.ability_component._L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RGiveAbility_L_Ntype_R // (Native|Public|BlueprintCallable) // @ game+0x633c038
	void _L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RClearAbility_L_Ntype_R(struct UObject* __verse_0xB2CDDD72_Argument); // Function VerseFortnite.ability_component._L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RClearAbility_L_Ntype_R // (Native|Public|BlueprintCallable) // @ game+0x633c030
	void _L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RApplyGameplayEffectToSelf_L_Ngameplay__effect__asset_M_Nfloat_R(struct Ftuple_Lgameplay__effect__asset_Mfloat_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.ability_component._L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RApplyGameplayEffectToSelf_L_Ngameplay__effect__asset_M_Nfloat_R // (Native|Public|BlueprintCallable) // @ game+0x633c028
	void $InitInstance(); // Function VerseFortnite.ability_component.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseFortnite.ability_component.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseFortnite.ability_component.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseFortnite.ability_target_data
// Size: 0x80 (Inherited: 0x28)
struct Uability_target_data : UObject {
	char pad_28[0x18]; // 0x28(0x18)
	struct FDelegate __verse_0x4A52FED5__L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__target__data_N_RGetEndPoint; // 0x40(0x0c)
	struct FDelegate __verse_0x8A30E19F__L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__target__data_N_RGetHitLocations; // 0x4c(0x0c)
	struct FDelegate __verse_0xEB8B7087__L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__target__data_N_RGetOrigin; // 0x34(0x0c)
	struct FDelegate __verse_0x0293E06E__L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__target__data_N_RHasHits; // 0x28(0x0c)
	char pad_70[0x10]; // 0x70(0x10)

	char _L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__target__data_N_RHasHits(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.ability_target_data._L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__target__data_N_RHasHits // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x633c060
	OptionProperty _L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__target__data_N_RGetOrigin(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.ability_target_data._L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__target__data_N_RGetOrigin // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x633c058
	struct TArray<struct Fvector3> _L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__target__data_N_RGetHitLocations(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.ability_target_data._L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__target__data_N_RGetHitLocations // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x633c050
	OptionProperty _L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__target__data_N_RGetEndPoint(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.ability_target_data._L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__target__data_N_RGetEndPoint // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x633c048
	void $InitInstance(); // Function VerseFortnite.ability_target_data.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseFortnite.ability_target_data.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseFortnite.ability_target_data.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseFortnite.AbilityComponent
// Size: 0x28 (Inherited: 0x28)
struct UAbilityComponent : UObject {

	OptionProperty _L_2fFortnite_2ecom_2fGame_2fAbilities_2fAbilityComponent_N_RGetAbilityComponentForPlayer_L_Nplayer__component_R(struct Uplayer_component* __verse_0xB2CDDD72_Argument); // Function VerseFortnite.AbilityComponent._L_2fFortnite_2ecom_2fGame_2fAbilities_2fAbilityComponent_N_RGetAbilityComponentForPlayer_L_Nplayer__component_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x633c020
	void $InitCDO(); // Function VerseFortnite.AbilityComponent.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseFortnite.fort_building_settings_component
// Size: 0xd0 (Inherited: 0x90)
struct Ufort_building_settings_component : UFortBuildingSettingsComponentBase {
	struct FDelegate __verse_0x4AEE10CB__L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetBuilding_L_NPlayerSettingState_R; // 0x90(0x0c)
	struct FDelegate __verse_0x59E03D8E__L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetBuildingOnWater_L_NPlayerSettingState_R; // 0x9c(0x0c)
	struct FDelegate __verse_0xAEABD061__L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetEditing_L_NPlayerSettingState_R; // 0xa8(0x0c)
	struct FDelegate __verse_0x5073BE0E__L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetEditingHostile_L_NPlayerSettingState_R; // 0xb4(0x0c)
	struct FDelegate __verse_0x5FED9001__L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetTrapPlacement_L_NPlayerSettingState_R; // 0xc0(0x0c)
	char pad_CC[0x4]; // 0xcc(0x04)

	void _L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetTrapPlacement_L_NPlayerSettingState_R(enum class PlayerSettingState __verse_0xB2CDDD72_Argument); // Function VerseFortnite.fort_building_settings_component._L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetTrapPlacement_L_NPlayerSettingState_R // (Native|Public|BlueprintCallable) // @ game+0x633c308
	void _L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetEditingHostile_L_NPlayerSettingState_R(enum class PlayerSettingState __verse_0xB2CDDD72_Argument); // Function VerseFortnite.fort_building_settings_component._L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetEditingHostile_L_NPlayerSettingState_R // (Native|Public|BlueprintCallable) // @ game+0x633c2f8
	void _L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetEditing_L_NPlayerSettingState_R(enum class PlayerSettingState __verse_0xB2CDDD72_Argument); // Function VerseFortnite.fort_building_settings_component._L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetEditing_L_NPlayerSettingState_R // (Native|Public|BlueprintCallable) // @ game+0x633c300
	void _L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetBuildingOnWater_L_NPlayerSettingState_R(enum class PlayerSettingState __verse_0xB2CDDD72_Argument); // Function VerseFortnite.fort_building_settings_component._L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetBuildingOnWater_L_NPlayerSettingState_R // (Native|Public|BlueprintCallable) // @ game+0x633c2e8
	void _L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetBuilding_L_NPlayerSettingState_R(enum class PlayerSettingState __verse_0xB2CDDD72_Argument); // Function VerseFortnite.fort_building_settings_component._L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetBuilding_L_NPlayerSettingState_R // (Native|Public|BlueprintCallable) // @ game+0x633c2f0
	void $InitInstance(); // Function VerseFortnite.fort_building_settings_component.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseFortnite.fort_building_settings_component.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseFortnite.fort_building_settings_component.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseFortnite.fort_item_definition
// Size: 0xb0 (Inherited: 0xb0)
struct Ufort_item_definition : UAsset {

	void $InitInstance(); // Function VerseFortnite.fort_item_definition.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseFortnite.fort_item_definition.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseFortnite.fort_item_definition.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseFortnite.fort_player_component
// Size: 0x128 (Inherited: 0xf8)
struct Ufort_player_component : Uplayer_component {
	char pad_F8[0x24]; // 0xf8(0x24)
	struct FDelegate __verse_0xD2D3E7C6__L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RGetUniqueID; // 0x11c(0x0c)
	struct FDelegate __verse_0xFF6DF990__L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RIsActive_L_N_Kchar_R; // 0x110(0x0c)
	struct FDelegate __verse_0xB834237F__L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RPopActiveState_L_N_Kchar_R; // 0x104(0x0c)
	struct FDelegate __verse_0x3DB6B216__L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RPushActiveState_L_N_Kchar_R; // 0xf8(0x0c)

	char _L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RPushActiveState_L_N_Kchar_R(VerseStringProperty __verse_0xB2CDDD72_Argument); // Function VerseFortnite.fort_player_component._L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RPushActiveState_L_N_Kchar_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x633c290
	char _L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RPopActiveState_L_N_Kchar_R(VerseStringProperty __verse_0xB2CDDD72_Argument); // Function VerseFortnite.fort_player_component._L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RPopActiveState_L_N_Kchar_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x633c288
	char _L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RIsActive_L_N_Kchar_R(VerseStringProperty __verse_0xB2CDDD72_Argument); // Function VerseFortnite.fort_player_component._L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RIsActive_L_N_Kchar_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x633c280
	VerseStringProperty _L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RGetUniqueID(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.fort_player_component._L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RGetUniqueID // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x633c278
	void $InitInstance(); // Function VerseFortnite.fort_player_component.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseFortnite.fort_player_component.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseFortnite.fort_player_component.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseFortnite.fort_playspace_component
// Size: 0x150 (Inherited: 0x118)
struct Ufort_playspace_component : Uplayspace_component {
	struct FDelegate __verse_0x43E273F3___WaitForPlayerEliminated; // 0x118(0x0c)
	char pad_124[0x2c]; // 0x124(0x2c)

	struct Utask(:type)* __WaitForPlayerEliminated(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.fort_playspace_component.__WaitForPlayerEliminated // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	void $InitInstance(); // Function VerseFortnite.fort_playspace_component.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseFortnite.fort_playspace_component.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseFortnite.fort_playspace_component.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseFortnite.fortnite_building_component
// Size: 0xa8 (Inherited: 0x60)
struct Ufortnite_building_component : UEntityComponent {
	char pad_60[0xc]; // 0x60(0x0c)
	struct FDelegate __verse_0x9298102F__L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RcanBeDamaged; // 0x6c(0x0c)
	struct FDelegate __verse_0x49AF8941__L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RcanBeReplaced; // 0x78(0x0c)
	struct FDelegate __verse_0xA0138077__L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RsetCanBeDamaged_L_Nlogic_R; // 0x84(0x0c)
	struct FDelegate __verse_0x63EC639A__L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RsetCanBeReplaced_L_Nlogic_R; // 0x90(0x0c)
	struct FDelegate __verse_0xAD9C3374__L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RwasPlayerBuilt; // 0x60(0x0c)

	char _L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RwasPlayerBuilt(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.fortnite_building_component._L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RwasPlayerBuilt // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x633c330
	void _L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RsetCanBeReplaced_L_Nlogic_R(char __verse_0xB2CDDD72_Argument); // Function VerseFortnite.fortnite_building_component._L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RsetCanBeReplaced_L_Nlogic_R // (Native|Public|BlueprintCallable) // @ game+0x633c328
	void _L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RsetCanBeDamaged_L_Nlogic_R(char __verse_0xB2CDDD72_Argument); // Function VerseFortnite.fortnite_building_component._L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RsetCanBeDamaged_L_Nlogic_R // (Native|Public|BlueprintCallable) // @ game+0x633c320
	char _L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RcanBeReplaced(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.fortnite_building_component._L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RcanBeReplaced // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x633c318
	char _L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RcanBeDamaged(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.fortnite_building_component._L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RcanBeDamaged // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x633c310
	void $InitInstance(); // Function VerseFortnite.fortnite_building_component.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseFortnite.fortnite_building_component.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseFortnite.fortnite_building_component.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseFortnite.gameplay_ability
// Size: 0xca0 (Inherited: 0xb30)
struct Ugameplay_ability : UVerseFortniteAbilityBase {
	char pad_B30[0x148]; // 0xb30(0x148)
	struct Upulse_event* __verse_0xBB37B63F_AbilityEndedEvent; // 0xc78(0x08)
	struct FDelegate __verse_0xD4B2C208_ActivateAbility; // 0xb9c(0x0c)
	struct FDelegate __verse_0x32D79620_ActivateAbilityAsync; // 0xb90(0x0c)
	struct FDelegate __verse_0xAA473109__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RApplyGameplayEffectToOwner_L_Ngameplay__effect__asset_M_Nfloat_R; // 0xb54(0x0c)
	struct FDelegate __verse_0x7E5CC1A0__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RApplyGameplayEffectToTarget_L_Nability__target__data_M_Ngameplay__effect__asset_M_Nfloat_R; // 0xb60(0x0c)
	struct FDelegate __verse_0x630370EE__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RCallEndAbility; // 0xb30(0x0c)
	struct FDelegate __verse_0x2CAFA422__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RDoTargeting_L_Nint_R; // 0xb78(0x0c)
	struct FDelegate __verse_0x2B4CB662__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_REndAbility; // 0xbb4(0x0c)
	struct FDelegate __verse_0x7A86A420__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RGetOwnerAbilityComponent; // 0xb3c(0x0c)
	struct FDelegate __verse_0xA654FA76__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RGetOwningPlayer; // 0xb48(0x0c)
	struct FDelegate __verse_0x47152F0A__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RRemoveGameplayEffectFromOwner_L_Ngameplay__effect__asset_R; // 0xb6c(0x0c)
	struct FDelegate __verse_0x21C9F778__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__ActivateAbility; // 0xb84(0x0c)
	struct FDelegate __verse_0x0634A156__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__EndAbility; // 0xba8(0x0c)
	struct FDelegate __verse_0x1ECDCD34__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetActionName; // 0xc14(0x0c)
	struct FDelegate __verse_0x8C6E1DB0__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetActivationAnim; // 0xc68(0x0c)
	struct FDelegate __verse_0x907C8D5C__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetCancelOnInputRelease; // 0xc20(0x0c)
	struct FDelegate __verse_0xD20ABED4__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetCreateHitWhenNoTarget; // 0xc08(0x0c)
	struct FDelegate __verse_0xAF534E3B__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetDefaultOwnerEffect; // 0xc50(0x0c)
	struct FDelegate __verse_0x51A285A1__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetDefaultOwnerEffectMagnitude; // 0xc5c(0x0c)
	struct FDelegate __verse_0x7C522A81__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetDefaultTargetingEffect; // 0xc2c(0x0c)
	struct FDelegate __verse_0x6A81F84C__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetTargetType; // 0xbf0(0x0c)
	struct FDelegate __verse_0x696D61C1__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetTargetingActivationCues; // 0xc38(0x0c)
	struct FDelegate __verse_0xFF586EE0__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetTargetingImpactCues; // 0xc44(0x0c)
	struct FDelegate __verse_0x649F2F25__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetTargetingRange; // 0xbfc(0x0c)
	struct FDelegate __verse_0xBF0DD999__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetTargetingShape; // 0xbd8(0x0c)
	struct FDelegate __verse_0x96035A40__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetTargetingSource; // 0xbe4(0x0c)
	struct FDelegate __verse_0x766AA0AF__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__OnGiveAbility; // 0xbc0(0x0c)
	struct FDelegate __verse_0xCA611812__L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__OnRemoveAbility; // 0xbcc(0x0c)

	void _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__OnRemoveAbility(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__OnRemoveAbility // (Public|BlueprintCallable) // @ game+0xd67374
	void _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__OnGiveAbility(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__OnGiveAbility // (Public|BlueprintCallable) // @ game+0xd67374
	enum class verse_target_source _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetTargetingSource(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetTargetingSource // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	enum class verse_target_shape _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetTargetingShape(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetTargetingShape // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	double _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetTargetingRange(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetTargetingRange // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	struct TArray<VerseStringProperty> _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetTargetingImpactCues(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetTargetingImpactCues // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	struct TArray<VerseStringProperty> _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetTargetingActivationCues(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetTargetingActivationCues // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	enum class verse_target_type _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetTargetType(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetTargetType // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	OptionProperty _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetDefaultTargetingEffect(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetDefaultTargetingEffect // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	double _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetDefaultOwnerEffectMagnitude(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetDefaultOwnerEffectMagnitude // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	OptionProperty _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetDefaultOwnerEffect(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetDefaultOwnerEffect // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	char _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetCreateHitWhenNoTarget(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetCreateHitWhenNoTarget // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	char _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetCancelOnInputRelease(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetCancelOnInputRelease // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	OptionProperty _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetActivationAnim(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetActivationAnim // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	VerseStringProperty _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetActionName(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__GetActionName // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	void _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__EndAbility(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__EndAbility // (Public|HasDefaults|BlueprintCallable) // @ game+0xd67374
	void _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__ActivateAbility(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RV__ActivateAbility // (Public|HasDefaults|BlueprintCallable) // @ game+0xd67374
	void _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RRemoveGameplayEffectFromOwner_L_Ngameplay__effect__asset_R(struct Ugameplay_effect_asset* __verse_0xB2CDDD72_Argument); // Function VerseFortnite.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RRemoveGameplayEffectFromOwner_L_Ngameplay__effect__asset_R // (Native|Public|BlueprintCallable) // @ game+0x633c090
	OptionProperty _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RGetOwningPlayer(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RGetOwningPlayer // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	OptionProperty _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RGetOwnerAbilityComponent(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RGetOwnerAbilityComponent // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x633c088
	void _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_REndAbility(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_REndAbility // (Public|BlueprintCallable) // @ game+0xd67374
	struct Uability_target_data* _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RDoTargeting_L_Nint_R(int64_t __verse_0xB2CDDD72_Argument); // Function VerseFortnite.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RDoTargeting_L_Nint_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x633c080
	void _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RCallEndAbility(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RCallEndAbility // (Native|Public|BlueprintCallable) // @ game+0x633c078
	void _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RApplyGameplayEffectToTarget_L_Nability__target__data_M_Ngameplay__effect__asset_M_Nfloat_R(struct Ftuple_Lability__target__data_Mgameplay__effect__asset_Mfloat_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RApplyGameplayEffectToTarget_L_Nability__target__data_M_Ngameplay__effect__asset_M_Nfloat_R // (Native|Public|BlueprintCallable) // @ game+0x633c070
	void _L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RApplyGameplayEffectToOwner_L_Ngameplay__effect__asset_M_Nfloat_R(struct Ftuple_Lgameplay__effect__asset_Mfloat_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.gameplay_ability._L_2fFortnite_2ecom_2fGame_2fAbilities_2fgameplay__ability_N_RApplyGameplayEffectToOwner_L_Ngameplay__effect__asset_M_Nfloat_R // (Native|Public|BlueprintCallable) // @ game+0x633c068
	struct Utask(:type)* ActivateAbilityAsync(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.gameplay_ability.ActivateAbilityAsync // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	struct Utask(:type)* ActivateAbility(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.gameplay_ability.ActivateAbility // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	void $InitInstance(); // Function VerseFortnite.gameplay_ability.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseFortnite.gameplay_ability.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseFortnite.gameplay_ability.$InitCDO // (HasDefaults) // @ game+0xd67374
};

// VerseClass VerseFortnite.gameplay_ability_asset
// Size: 0xb0 (Inherited: 0xb0)
struct Ugameplay_ability_asset : UAsset {

	void $InitInstance(); // Function VerseFortnite.gameplay_ability_asset.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseFortnite.gameplay_ability_asset.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseFortnite.gameplay_ability_asset.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseFortnite.gameplay_effect
// Size: 0x40 (Inherited: 0x28)
struct Ugameplay_effect : UObject {
	struct Ugameplay_effect_asset* __verse_0xBB2452F3_Damage; // 0x28(0x08)
	struct Ugameplay_effect_asset* __verse_0x66D1966C_Heal; // 0x30(0x08)
	struct Ugameplay_effect_asset* __verse_0xCA27E8A1_MoveSpeedMultiplier; // 0x38(0x08)

	void $InitCDO(); // Function VerseFortnite.gameplay_effect.$InitCDO // (HasDefaults) // @ game+0xd67374
};

// VerseClass VerseFortnite.gameplay_effect_asset
// Size: 0xb0 (Inherited: 0xb0)
struct Ugameplay_effect_asset : UAsset {

	void $InitInstance(); // Function VerseFortnite.gameplay_effect_asset.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseFortnite.gameplay_effect_asset.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseFortnite.gameplay_effect_asset.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseFortnite.hud_count_down_message_component
// Size: 0x158 (Inherited: 0x128)
struct Uhud_count_down_message_component : UHUDCountDownComponentBase {
	char pad_128[0x18]; // 0x128(0x18)
	struct FDelegate __verse_0x35876025__L_2fFortnite_2ecom_2fGame_2fhud__count__down__message__component_N_RHide; // 0x140(0x0c)
	struct FDelegate __verse_0xBCC6592F__L_2fFortnite_2ecom_2fGame_2fhud__count__down__message__component_N_RSetCurrentRound_L_Nint_R; // 0x134(0x0c)
	struct FDelegate __verse_0x48392E6B__L_2fFortnite_2ecom_2fGame_2fhud__count__down__message__component_N_RSetWidget_L_N_Kchar_R; // 0x14c(0x0c)
	struct FDelegate __verse_0x5F4733B0__L_2fFortnite_2ecom_2fGame_2fhud__count__down__message__component_N_RShowCountDown_L_Nint_R; // 0x128(0x0c)

	void _L_2fFortnite_2ecom_2fGame_2fhud__count__down__message__component_N_RShowCountDown_L_Nint_R(int64_t __verse_0xB2CDDD72_Argument); // Function VerseFortnite.hud_count_down_message_component._L_2fFortnite_2ecom_2fGame_2fhud__count__down__message__component_N_RShowCountDown_L_Nint_R // (Native|Public|BlueprintCallable) // @ game+0x633c350
	void _L_2fFortnite_2ecom_2fGame_2fhud__count__down__message__component_N_RSetWidget_L_N_Kchar_R(VerseStringProperty __verse_0xB2CDDD72_Argument); // Function VerseFortnite.hud_count_down_message_component._L_2fFortnite_2ecom_2fGame_2fhud__count__down__message__component_N_RSetWidget_L_N_Kchar_R // (Native|Public|BlueprintCallable) // @ game+0x633c348
	void _L_2fFortnite_2ecom_2fGame_2fhud__count__down__message__component_N_RSetCurrentRound_L_Nint_R(int64_t __verse_0xB2CDDD72_Argument); // Function VerseFortnite.hud_count_down_message_component._L_2fFortnite_2ecom_2fGame_2fhud__count__down__message__component_N_RSetCurrentRound_L_Nint_R // (Native|Public|BlueprintCallable) // @ game+0x633c340
	void _L_2fFortnite_2ecom_2fGame_2fhud__count__down__message__component_N_RHide(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.hud_count_down_message_component._L_2fFortnite_2ecom_2fGame_2fhud__count__down__message__component_N_RHide // (Native|Public|BlueprintCallable) // @ game+0x633c338
	void $InitInstance(); // Function VerseFortnite.hud_count_down_message_component.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseFortnite.hud_count_down_message_component.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseFortnite.hud_count_down_message_component.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseFortnite.hud_dynamic_director
// Size: 0x1d8 (Inherited: 0x1d8)
struct Uhud_dynamic_director : UHUDDynamicDirectorBase {

	void $InitInstance(); // Function VerseFortnite.hud_dynamic_director.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseFortnite.hud_dynamic_director.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseFortnite.hud_dynamic_director.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseFortnite.hud_game_over_message_component
// Size: 0x168 (Inherited: 0x128)
struct Uhud_game_over_message_component : UHUDGameOverComponentBase {
	char pad_128[0x24]; // 0x128(0x24)
	struct FDelegate __verse_0x095A6C1C__L_2fFortnite_2ecom_2fGame_2fhud__game__over__message__component_N_RHide; // 0x14c(0x0c)
	struct FDelegate __verse_0xF4EAD1F4__L_2fFortnite_2ecom_2fGame_2fhud__game__over__message__component_N_RSetWidget_L_N_Kchar_R; // 0x158(0x0c)
	struct FDelegate __verse_0x07804F9C__L_2fFortnite_2ecom_2fGame_2fhud__game__over__message__component_N_RShow; // 0x140(0x0c)
	struct FDelegate __verse_0xBCA7A81E__L_2fFortnite_2ecom_2fGame_2fhud__game__over__message__component_N_RShowDraw; // 0x134(0x0c)
	struct FDelegate __verse_0x47BF9C26__L_2fFortnite_2ecom_2fGame_2fhud__game__over__message__component_N_RShowWinningTeam_L_Nplayer__team_R; // 0x128(0x0c)

	void _L_2fFortnite_2ecom_2fGame_2fhud__game__over__message__component_N_RShowWinningTeam_L_Nplayer__team_R(struct Fplayer_team __verse_0xB2CDDD72_Argument); // Function VerseFortnite.hud_game_over_message_component._L_2fFortnite_2ecom_2fGame_2fhud__game__over__message__component_N_RShowWinningTeam_L_Nplayer__team_R // (Native|Public|BlueprintCallable) // @ game+0x633c368
	void _L_2fFortnite_2ecom_2fGame_2fhud__game__over__message__component_N_RShowDraw(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.hud_game_over_message_component._L_2fFortnite_2ecom_2fGame_2fhud__game__over__message__component_N_RShowDraw // (Native|Public|BlueprintCallable) // @ game+0x633c360
	void _L_2fFortnite_2ecom_2fGame_2fhud__game__over__message__component_N_RShow(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.hud_game_over_message_component._L_2fFortnite_2ecom_2fGame_2fhud__game__over__message__component_N_RShow // (Native|Public|BlueprintCallable) // @ game+0x633c370
	void _L_2fFortnite_2ecom_2fGame_2fhud__game__over__message__component_N_RSetWidget_L_N_Kchar_R(VerseStringProperty __verse_0xB2CDDD72_Argument); // Function VerseFortnite.hud_game_over_message_component._L_2fFortnite_2ecom_2fGame_2fhud__game__over__message__component_N_RSetWidget_L_N_Kchar_R // (Native|Public|BlueprintCallable) // @ game+0x633c348
	void _L_2fFortnite_2ecom_2fGame_2fhud__game__over__message__component_N_RHide(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.hud_game_over_message_component._L_2fFortnite_2ecom_2fGame_2fhud__game__over__message__component_N_RHide // (Native|Public|BlueprintCallable) // @ game+0x633c358
	void $InitInstance(); // Function VerseFortnite.hud_game_over_message_component.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseFortnite.hud_game_over_message_component.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseFortnite.hud_game_over_message_component.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseFortnite.hud_map_component
// Size: 0x198 (Inherited: 0x158)
struct Uhud_map_component : UHUDMapComponentBase {
	char pad_158[0xc]; // 0x158(0x0c)
	struct FDelegate __verse_0x04C4862C__L_2fFortnite_2ecom_2fGame_2fhud__map__component_N_RClearMapBounds; // 0x164(0x0c)
	char pad_170[0xc]; // 0x170(0x0c)
	struct FDelegate __verse_0x9F6B2ACC__L_2fFortnite_2ecom_2fGame_2fhud__map__component_N_RHide; // 0x17c(0x0c)
	struct FDelegate __verse_0x499DF159__L_2fFortnite_2ecom_2fGame_2fhud__map__component_N_RRestrictMessageToPlayers_L_N_Kplayer__component_R; // 0x188(0x0c)
	struct FDelegate __verse_0xEED4B943__L_2fFortnite_2ecom_2fGame_2fhud__map__component_N_RSetMapBounds_L_Nvector3_M_Nvector3_R; // 0x158(0x0c)
	struct FDelegate __verse_0x91B1094C__L_2fFortnite_2ecom_2fGame_2fhud__map__component_N_RShow; // 0x170(0x0c)

	void _L_2fFortnite_2ecom_2fGame_2fhud__map__component_N_RShow(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.hud_map_component._L_2fFortnite_2ecom_2fGame_2fhud__map__component_N_RShow // (Native|Public|BlueprintCallable) // @ game+0x633c370
	void _L_2fFortnite_2ecom_2fGame_2fhud__map__component_N_RSetMapBounds_L_Nvector3_M_Nvector3_R(struct Ftuple_Lvector3_Mvector3_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.hud_map_component._L_2fFortnite_2ecom_2fGame_2fhud__map__component_N_RSetMapBounds_L_Nvector3_M_Nvector3_R // (Native|Public|BlueprintCallable) // @ game+0x633c388
	void _L_2fFortnite_2ecom_2fGame_2fhud__map__component_N_RRestrictMessageToPlayers_L_N_Kplayer__component_R(struct TArray<struct Uplayer_component*> __verse_0xB2CDDD72_Argument); // Function VerseFortnite.hud_map_component._L_2fFortnite_2ecom_2fGame_2fhud__map__component_N_RRestrictMessageToPlayers_L_N_Kplayer__component_R // (Native|Public|BlueprintCallable) // @ game+0x633c380
	void _L_2fFortnite_2ecom_2fGame_2fhud__map__component_N_RHide(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.hud_map_component._L_2fFortnite_2ecom_2fGame_2fhud__map__component_N_RHide // (Native|Public|BlueprintCallable) // @ game+0x633c338
	void _L_2fFortnite_2ecom_2fGame_2fhud__map__component_N_RClearMapBounds(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.hud_map_component._L_2fFortnite_2ecom_2fGame_2fhud__map__component_N_RClearMapBounds // (Native|Public|BlueprintCallable) // @ game+0x633c378
	void $InitInstance(); // Function VerseFortnite.hud_map_component.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseFortnite.hud_map_component.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseFortnite.hud_map_component.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseFortnite.hud_message_component
// Size: 0x160 (Inherited: 0x130)
struct Uhud_message_component : UHUDMessageComponentBase {
	char pad_130[0xc]; // 0x130(0x0c)
	struct FDelegate __verse_0xF0A60203__L_2fFortnite_2ecom_2fGame_2fhud__message__component_N_RHide; // 0x13c(0x0c)
	struct FDelegate __verse_0x8D8F65CC__L_2fFortnite_2ecom_2fGame_2fhud__message__component_N_RRestrictMessageToPlayers_L_N_Kplayer__component_R; // 0x148(0x0c)
	struct FDelegate __verse_0xDD5E95A6__L_2fFortnite_2ecom_2fGame_2fhud__message__component_N_RSetWidget_L_N_Kchar_R; // 0x154(0x0c)
	struct FDelegate __verse_0x764BE83A__L_2fFortnite_2ecom_2fGame_2fhud__message__component_N_RShowMessage_L_N_Kchar_R; // 0x130(0x0c)

	void _L_2fFortnite_2ecom_2fGame_2fhud__message__component_N_RShowMessage_L_N_Kchar_R(VerseStringProperty __verse_0xB2CDDD72_Argument); // Function VerseFortnite.hud_message_component._L_2fFortnite_2ecom_2fGame_2fhud__message__component_N_RShowMessage_L_N_Kchar_R // (Native|Public|BlueprintCallable) // @ game+0x633c390
	void _L_2fFortnite_2ecom_2fGame_2fhud__message__component_N_RSetWidget_L_N_Kchar_R(VerseStringProperty __verse_0xB2CDDD72_Argument); // Function VerseFortnite.hud_message_component._L_2fFortnite_2ecom_2fGame_2fhud__message__component_N_RSetWidget_L_N_Kchar_R // (Native|Public|BlueprintCallable) // @ game+0x633c348
	void _L_2fFortnite_2ecom_2fGame_2fhud__message__component_N_RRestrictMessageToPlayers_L_N_Kplayer__component_R(struct TArray<struct Uplayer_component*> __verse_0xB2CDDD72_Argument); // Function VerseFortnite.hud_message_component._L_2fFortnite_2ecom_2fGame_2fhud__message__component_N_RRestrictMessageToPlayers_L_N_Kplayer__component_R // (Native|Public|BlueprintCallable) // @ game+0x633c380
	void _L_2fFortnite_2ecom_2fGame_2fhud__message__component_N_RHide(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.hud_message_component._L_2fFortnite_2ecom_2fGame_2fhud__message__component_N_RHide // (Native|Public|BlueprintCallable) // @ game+0x633c338
	void $InitInstance(); // Function VerseFortnite.hud_message_component.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseFortnite.hud_message_component.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseFortnite.hud_message_component.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseFortnite.hud_scoreboard_component
// Size: 0x218 (Inherited: 0x1a0)
struct Uhud_scoreboard_component : UHUDScoreboardComponentBase {
	char pad_1A0[0xc]; // 0x1a0(0x0c)
	struct FDelegate __verse_0xFBE16C7E__L_2fFortnite_2ecom_2fGame_2fhud__scoreboard__component_N_RClearScores; // 0x1ac(0x0c)
	char pad_1B8[0x3c]; // 0x1b8(0x3c)
	struct FDelegate __verse_0xE961AF66__L_2fFortnite_2ecom_2fGame_2fhud__scoreboard__component_N_RHide; // 0x1f4(0x0c)
	struct FDelegate __verse_0x21D9EA8B__L_2fFortnite_2ecom_2fGame_2fhud__scoreboard__component_N_RRestrictMessageToPlayers_L_N_Kplayer__component_R; // 0x200(0x0c)
	struct FDelegate __verse_0x424E368C__L_2fFortnite_2ecom_2fGame_2fhud__scoreboard__component_N_RSetCurrentRound_L_Nint_R; // 0x1e8(0x0c)
	struct FDelegate __verse_0x7C331533__L_2fFortnite_2ecom_2fGame_2fhud__scoreboard__component_N_RSetNumberOfRounds_L_Nint_R; // 0x1dc(0x0c)
	struct FDelegate __verse_0x9AF64AAC__L_2fFortnite_2ecom_2fGame_2fhud__scoreboard__component_N_RSetPlayerEliminations_L_Nplayer__component_M_Nint_R; // 0x1b8(0x0c)
	struct FDelegate __verse_0xDF74E255__L_2fFortnite_2ecom_2fGame_2fhud__scoreboard__component_N_RSetPlayerPoints_L_Nplayer__component_M_Nint_R; // 0x1d0(0x0c)
	struct FDelegate __verse_0x3A97C718__L_2fFortnite_2ecom_2fGame_2fhud__scoreboard__component_N_RSetPlayerWins_L_Nplayer__component_M_Nint_R; // 0x1c4(0x0c)
	struct FDelegate __verse_0xCE18A2CD__L_2fFortnite_2ecom_2fGame_2fhud__scoreboard__component_N_RSetWidget_L_N_Kchar_R; // 0x20c(0x0c)
	struct FDelegate __verse_0xB44C9A18__L_2fFortnite_2ecom_2fGame_2fhud__scoreboard__component_N_RShowMessage_L_N_Kchar_R; // 0x1a0(0x0c)

	void _L_2fFortnite_2ecom_2fGame_2fhud__scoreboard__component_N_RShowMessage_L_N_Kchar_R(VerseStringProperty __verse_0xB2CDDD72_Argument); // Function VerseFortnite.hud_scoreboard_component._L_2fFortnite_2ecom_2fGame_2fhud__scoreboard__component_N_RShowMessage_L_N_Kchar_R // (Native|Public|BlueprintCallable) // @ game+0x633c3c8
	void _L_2fFortnite_2ecom_2fGame_2fhud__scoreboard__component_N_RSetWidget_L_N_Kchar_R(VerseStringProperty __verse_0xB2CDDD72_Argument); // Function VerseFortnite.hud_scoreboard_component._L_2fFortnite_2ecom_2fGame_2fhud__scoreboard__component_N_RSetWidget_L_N_Kchar_R // (Native|Public|BlueprintCallable) // @ game+0x633c348
	void _L_2fFortnite_2ecom_2fGame_2fhud__scoreboard__component_N_RSetPlayerWins_L_Nplayer__component_M_Nint_R(struct Ftuple_Lplayer__component_Mint_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.hud_scoreboard_component._L_2fFortnite_2ecom_2fGame_2fhud__scoreboard__component_N_RSetPlayerWins_L_Nplayer__component_M_Nint_R // (Native|Public|BlueprintCallable) // @ game+0x633c3c0
	void _L_2fFortnite_2ecom_2fGame_2fhud__scoreboard__component_N_RSetPlayerPoints_L_Nplayer__component_M_Nint_R(struct Ftuple_Lplayer__component_Mint_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.hud_scoreboard_component._L_2fFortnite_2ecom_2fGame_2fhud__scoreboard__component_N_RSetPlayerPoints_L_Nplayer__component_M_Nint_R // (Native|Public|BlueprintCallable) // @ game+0x633c3b8
	void _L_2fFortnite_2ecom_2fGame_2fhud__scoreboard__component_N_RSetPlayerEliminations_L_Nplayer__component_M_Nint_R(struct Ftuple_Lplayer__component_Mint_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.hud_scoreboard_component._L_2fFortnite_2ecom_2fGame_2fhud__scoreboard__component_N_RSetPlayerEliminations_L_Nplayer__component_M_Nint_R // (Native|Public|BlueprintCallable) // @ game+0x633c3b0
	void _L_2fFortnite_2ecom_2fGame_2fhud__scoreboard__component_N_RSetNumberOfRounds_L_Nint_R(int64_t __verse_0xB2CDDD72_Argument); // Function VerseFortnite.hud_scoreboard_component._L_2fFortnite_2ecom_2fGame_2fhud__scoreboard__component_N_RSetNumberOfRounds_L_Nint_R // (Native|Public|BlueprintCallable) // @ game+0x633c3a8
	void _L_2fFortnite_2ecom_2fGame_2fhud__scoreboard__component_N_RSetCurrentRound_L_Nint_R(int64_t __verse_0xB2CDDD72_Argument); // Function VerseFortnite.hud_scoreboard_component._L_2fFortnite_2ecom_2fGame_2fhud__scoreboard__component_N_RSetCurrentRound_L_Nint_R // (Native|Public|BlueprintCallable) // @ game+0x633c3a0
	void _L_2fFortnite_2ecom_2fGame_2fhud__scoreboard__component_N_RRestrictMessageToPlayers_L_N_Kplayer__component_R(struct TArray<struct Uplayer_component*> __verse_0xB2CDDD72_Argument); // Function VerseFortnite.hud_scoreboard_component._L_2fFortnite_2ecom_2fGame_2fhud__scoreboard__component_N_RRestrictMessageToPlayers_L_N_Kplayer__component_R // (Native|Public|BlueprintCallable) // @ game+0x633c380
	void _L_2fFortnite_2ecom_2fGame_2fhud__scoreboard__component_N_RHide(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.hud_scoreboard_component._L_2fFortnite_2ecom_2fGame_2fhud__scoreboard__component_N_RHide // (Native|Public|BlueprintCallable) // @ game+0x633c338
	void _L_2fFortnite_2ecom_2fGame_2fhud__scoreboard__component_N_RClearScores(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.hud_scoreboard_component._L_2fFortnite_2ecom_2fGame_2fhud__scoreboard__component_N_RClearScores // (Native|Public|BlueprintCallable) // @ game+0x633c398
	void $InitInstance(); // Function VerseFortnite.hud_scoreboard_component.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseFortnite.hud_scoreboard_component.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseFortnite.hud_scoreboard_component.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseFortnite.HUDDynamicDirector
// Size: 0x28 (Inherited: 0x28)
struct UHUDDynamicDirector : UObject {

	void _L_2fFortnite_2ecom_2fGame_2fHUDDynamicDirector_N_RSetupDatastore_L_Nplayer__component_R(struct Uplayer_component* __verse_0xB2CDDD72_Argument); // Function VerseFortnite.HUDDynamicDirector._L_2fFortnite_2ecom_2fGame_2fHUDDynamicDirector_N_RSetupDatastore_L_Nplayer__component_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x633c118
	void _L_2fFortnite_2ecom_2fGame_2fHUDDynamicDirector_N_RSetSceneWidgetPosition_L_Nplayer__component_M_N_Kchar_M_N_Kchar_M_Nint_M_Nint_R(struct Ftuple_Lplayer__component_M_Kchar_M_Kchar_Mint_Mint_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.HUDDynamicDirector._L_2fFortnite_2ecom_2fGame_2fHUDDynamicDirector_N_RSetSceneWidgetPosition_L_Nplayer__component_M_N_Kchar_M_N_Kchar_M_Nint_M_Nint_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x633c110
	void _L_2fFortnite_2ecom_2fGame_2fHUDDynamicDirector_N_RSetSceneWidgetClassAndUniqueID_L_Nplayer__component_M_N_Kchar_M_N_Kchar_M_N_Kchar_R(struct Ftuple_Lplayer__component_M_Kchar_M_Kchar_M_Kchar_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.HUDDynamicDirector._L_2fFortnite_2ecom_2fGame_2fHUDDynamicDirector_N_RSetSceneWidgetClassAndUniqueID_L_Nplayer__component_M_N_Kchar_M_N_Kchar_M_N_Kchar_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x633c108
	void _L_2fFortnite_2ecom_2fGame_2fHUDDynamicDirector_N_RSetSceneWidgetAttachment_L_Nplayer__component_M_N_Kchar_M_N_Kchar_M_NDynamicHUD__Anchor_M_N_Kchar_M_N_Kchar_M_NDynamicHUD__Anchor_R(struct Ftuple_Lplayer__component_M_Kchar_M_Kchar_MDynamicHUD__Anchor_M_Kchar_M_Kchar_MDynamicHUD__Anchor_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.HUDDynamicDirector._L_2fFortnite_2ecom_2fGame_2fHUDDynamicDirector_N_RSetSceneWidgetAttachment_L_Nplayer__component_M_N_Kchar_M_N_Kchar_M_NDynamicHUD__Anchor_M_N_Kchar_M_N_Kchar_M_NDynamicHUD__Anchor_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x633c100
	void _L_2fFortnite_2ecom_2fGame_2fHUDDynamicDirector_N_RSetSceneWidgetAlignment_L_Nplayer__component_M_N_Kchar_M_N_Kchar_M_Nint_M_Nint_M_NDynamicHUD__Anchor_R(struct Ftuple_Lplayer__component_M_Kchar_M_Kchar_Mint_Mint_MDynamicHUD__Anchor_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.HUDDynamicDirector._L_2fFortnite_2ecom_2fGame_2fHUDDynamicDirector_N_RSetSceneWidgetAlignment_L_Nplayer__component_M_N_Kchar_M_N_Kchar_M_Nint_M_Nint_M_NDynamicHUD__Anchor_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x633c0f8
	void _L_2fFortnite_2ecom_2fGame_2fHUDDynamicDirector_N_RSetHUDCameraMode_L_Nplayer__component_M_Nlogic_R(struct Ftuple_Lplayer__component_Mlogic_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.HUDDynamicDirector._L_2fFortnite_2ecom_2fGame_2fHUDDynamicDirector_N_RSetHUDCameraMode_L_Nplayer__component_M_Nlogic_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x633c0f0
	void _L_2fFortnite_2ecom_2fGame_2fHUDDynamicDirector_N_RSetDatastoreValueInt_L_Nplayer__component_M_N_Kchar_M_N_Kchar_M_Nint_R(struct Ftuple_Lplayer__component_M_Kchar_M_Kchar_Mint_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.HUDDynamicDirector._L_2fFortnite_2ecom_2fGame_2fHUDDynamicDirector_N_RSetDatastoreValueInt_L_Nplayer__component_M_N_Kchar_M_N_Kchar_M_Nint_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x633c0e0
	void _L_2fFortnite_2ecom_2fGame_2fHUDDynamicDirector_N_RSetDatastoreValue_L_Nplayer__component_M_N_Kchar_M_N_Kchar_M_N_Kchar_R(struct Ftuple_Lplayer__component_M_Kchar_M_Kchar_M_Kchar_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.HUDDynamicDirector._L_2fFortnite_2ecom_2fGame_2fHUDDynamicDirector_N_RSetDatastoreValue_L_Nplayer__component_M_N_Kchar_M_N_Kchar_M_N_Kchar_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x633c0e8
	void _L_2fFortnite_2ecom_2fGame_2fHUDDynamicDirector_N_RRemoveScene_L_Nplayer__component_M_N_Kchar_R(struct Ftuple_Lplayer__component_M_Kchar_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.HUDDynamicDirector._L_2fFortnite_2ecom_2fGame_2fHUDDynamicDirector_N_RRemoveScene_L_Nplayer__component_M_N_Kchar_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x633c0d8
	void _L_2fFortnite_2ecom_2fGame_2fHUDDynamicDirector_N_RLoadWidgetCatalog_L_Nplayer__component_M_N_Kchar_R(struct Ftuple_Lplayer__component_M_Kchar_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.HUDDynamicDirector._L_2fFortnite_2ecom_2fGame_2fHUDDynamicDirector_N_RLoadWidgetCatalog_L_Nplayer__component_M_N_Kchar_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x633c0d0
	void _L_2fFortnite_2ecom_2fGame_2fHUDDynamicDirector_N_RLoadSceneCatalog_L_Nplayer__component_M_N_Kchar_R(struct Ftuple_Lplayer__component_M_Kchar_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.HUDDynamicDirector._L_2fFortnite_2ecom_2fGame_2fHUDDynamicDirector_N_RLoadSceneCatalog_L_Nplayer__component_M_N_Kchar_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x633c0c8
	VerseStringProperty _L_2fFortnite_2ecom_2fGame_2fHUDDynamicDirector_N_RGetMessageDataFromPlayerClientAsString_L_Nplayer__component_M_N_Kchar_R(struct Ftuple_Lplayer__component_M_Kchar_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.HUDDynamicDirector._L_2fFortnite_2ecom_2fGame_2fHUDDynamicDirector_N_RGetMessageDataFromPlayerClientAsString_L_Nplayer__component_M_N_Kchar_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x633c0c0
	int64_t _L_2fFortnite_2ecom_2fGame_2fHUDDynamicDirector_N_RGetMessageDataFromPlayerClientAsInt_L_Nplayer__component_M_N_Kchar_R(struct Ftuple_Lplayer__component_M_Kchar_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.HUDDynamicDirector._L_2fFortnite_2ecom_2fGame_2fHUDDynamicDirector_N_RGetMessageDataFromPlayerClientAsInt_L_Nplayer__component_M_N_Kchar_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x633c0b8
	double _L_2fFortnite_2ecom_2fGame_2fHUDDynamicDirector_N_RGetMessageDataFromPlayerClientAsFloat_L_Nplayer__component_M_N_Kchar_R(struct Ftuple_Lplayer__component_M_Kchar_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.HUDDynamicDirector._L_2fFortnite_2ecom_2fGame_2fHUDDynamicDirector_N_RGetMessageDataFromPlayerClientAsFloat_L_Nplayer__component_M_N_Kchar_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x633c0b0
	void _L_2fFortnite_2ecom_2fGame_2fHUDDynamicDirector_N_RCreateNewScene_L_Nplayer__component_M_N_Kchar_M_N_Kchar_R(struct Ftuple_Lplayer__component_M_Kchar_M_Kchar_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.HUDDynamicDirector._L_2fFortnite_2ecom_2fGame_2fHUDDynamicDirector_N_RCreateNewScene_L_Nplayer__component_M_N_Kchar_M_N_Kchar_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x633c0a8
	void _L_2fFortnite_2ecom_2fGame_2fHUDDynamicDirector_N_RAddScene_L_Nplayer__component_M_N_Kchar_R(struct Ftuple_Lplayer__component_M_Kchar_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.HUDDynamicDirector._L_2fFortnite_2ecom_2fGame_2fHUDDynamicDirector_N_RAddScene_L_Nplayer__component_M_N_Kchar_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x633c0a0
	OptionProperty _L_2fFortnite_2ecom_2fGame_2fHUDDynamicDirector_N_RAddClientMessageEventForPlayer_L_Nplayer__component_M_N_Kchar_R(struct Ftuple_Lplayer__component_M_Kchar_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.HUDDynamicDirector._L_2fFortnite_2ecom_2fGame_2fHUDDynamicDirector_N_RAddClientMessageEventForPlayer_L_Nplayer__component_M_N_Kchar_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x633c098
	void $InitCDO(); // Function VerseFortnite.HUDDynamicDirector.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseFortnite.item_type
// Size: 0x30 (Inherited: 0x28)
struct Uitem_type : UObject {
	char pad_28[0x8]; // 0x28(0x08)

	void $InitInstance(); // Function VerseFortnite.item_type.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseFortnite.item_type.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseFortnite.item_type.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseFortnite.Player
// Size: 0x28 (Inherited: 0x28)
struct UPlayer : UObject {

	struct Fplayer_team player_team$Factory(); // Function VerseFortnite.Player.player_team$Factory // (Static|HasOutParms) // @ game+0xd67374
	void $InitCDO(); // Function VerseFortnite.Player.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseFortnite.player_eliminated_result
// Size: 0x38 (Inherited: 0x28)
struct Uplayer_eliminated_result : UObject {
	struct Uplayer_component* __verse_0x7C71103B_EliminatedPlayer; // 0x28(0x08)
	OptionProperty __verse_0xB989E158_Eliminator; // 0x30(0x08)

	void $InitInstance(); // Function VerseFortnite.player_eliminated_result.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseFortnite.player_eliminated_result.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseFortnite.player_eliminated_result.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseFortnite.player_pickup_component
// Size: 0xa8 (Inherited: 0x60)
struct Uplayer_pickup_component : UEntityComponent {
	char pad_60[0x24]; // 0x60(0x24)
	struct FDelegate __verse_0xCBCBC029__L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RattemptPartialCollect_L_Nitem__type_M_Nint_M_Nplayer__component_R; // 0x84(0x0c)
	struct FDelegate __verse_0xF4552B58__L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgetNumOfItemType_L_Nitem__type_R; // 0x78(0x0c)
	struct FDelegate __verse_0x92CBECB5__L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgetPrimaryItemType; // 0x90(0x0c)
	struct FDelegate __verse_0x89400523__L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgivePickupTo_L_Nplayer__component_R; // 0x60(0x0c)
	struct FDelegate __verse_0xC3A81506__L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RtossPickup_L_Nvector3_M_N_Qplayer__component_R; // 0x6c(0x0c)

	void _L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RtossPickup_L_Nvector3_M_N_Qplayer__component_R(struct Ftuple_Lvector3_M_Qplayer__component_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.player_pickup_component._L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RtossPickup_L_Nvector3_M_N_Qplayer__component_R // (Native|Public|BlueprintCallable) // @ game+0x633c148
	void _L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgivePickupTo_L_Nplayer__component_R(struct Uplayer_component* __verse_0xB2CDDD72_Argument); // Function VerseFortnite.player_pickup_component._L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgivePickupTo_L_Nplayer__component_R // (Native|Public|BlueprintCallable) // @ game+0x633c140
	struct Uitem_type* _L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgetPrimaryItemType(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.player_pickup_component._L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgetPrimaryItemType // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x633c138
	int64_t _L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgetNumOfItemType_L_Nitem__type_R(struct Uitem_type* __verse_0xB2CDDD72_Argument); // Function VerseFortnite.player_pickup_component._L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgetNumOfItemType_L_Nitem__type_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x633c130
	void _L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RattemptPartialCollect_L_Nitem__type_M_Nint_M_Nplayer__component_R(struct Ftuple_Litem__type_Mint_Mplayer__component_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.player_pickup_component._L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RattemptPartialCollect_L_Nitem__type_M_Nint_M_Nplayer__component_R // (Native|Public|BlueprintCallable) // @ game+0x633c128
	void $InitInstance(); // Function VerseFortnite.player_pickup_component.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseFortnite.player_pickup_component.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseFortnite.player_pickup_component.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseFortnite.player_start_component
// Size: 0x88 (Inherited: 0x60)
struct Uplayer_start_component : UEntityComponent {
	char pad_60[0x18]; // 0x60(0x18)
	struct TArray<VerseStringProperty> __verse_0x7C32BFF7_tags; // 0x78(0x10)
	struct FDelegate __verse_0xCC113DCA__L_2fFortnite_2ecom_2fGame_2fPlayer_2fplayer__start__component_N_RaddTags_L_N_K_Kchar_R; // 0x60(0x0c)
	struct FDelegate __verse_0xC6B8FBBB__L_2fFortnite_2ecom_2fGame_2fPlayer_2fplayer__start__component_N_RgetPosition; // 0x6c(0x0c)

	struct Fvector3 _L_2fFortnite_2ecom_2fGame_2fPlayer_2fplayer__start__component_N_RgetPosition(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.player_start_component._L_2fFortnite_2ecom_2fGame_2fPlayer_2fplayer__start__component_N_RgetPosition // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x633c2a0
	void _L_2fFortnite_2ecom_2fGame_2fPlayer_2fplayer__start__component_N_RaddTags_L_N_K_Kchar_R(struct TArray<VerseStringProperty> __verse_0xB2CDDD72_Argument); // Function VerseFortnite.player_start_component._L_2fFortnite_2ecom_2fGame_2fPlayer_2fplayer__start__component_N_RaddTags_L_N_K_Kchar_R // (Native|Public|BlueprintCallable) // @ game+0x633c298
	void $InitInstance(); // Function VerseFortnite.player_start_component.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseFortnite.player_start_component.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseFortnite.player_start_component.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseFortnite.PlayerAttributes
// Size: 0x28 (Inherited: 0x28)
struct UPlayerAttributes : UObject {

	void _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerAttributes_N_RModifyNumericAttribute_L_Nplayer_M_NPlayerAttribute_M_NPlayerAttributeOperation_M_Nfloat_R(struct Ftuple_Lplayer_MPlayerAttribute_MPlayerAttributeOperation_Mfloat_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.PlayerAttributes._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerAttributes_N_RModifyNumericAttribute_L_Nplayer_M_NPlayerAttribute_M_NPlayerAttributeOperation_M_Nfloat_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x633c190
	double _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerAttributes_N_RGetNumericAttributeValue_L_Nplayer_M_NPlayerAttribute_R(struct Ftuple_Lplayer_MPlayerAttribute_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.PlayerAttributes._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerAttributes_N_RGetNumericAttributeValue_L_Nplayer_M_NPlayerAttribute_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x633c188
	void _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerAttributes_N_RAddToNumericAttribute_L_Nplayer_M_NPlayerAttribute_M_Nfloat_R(struct Ftuple_Lplayer_MPlayerAttribute_Mfloat_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.PlayerAttributes._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerAttributes_N_RAddToNumericAttribute_L_Nplayer_M_NPlayerAttribute_M_Nfloat_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x633c180
	void $InitCDO(); // Function VerseFortnite.PlayerAttributes.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseFortnite.PlayerInventory
// Size: 0x28 (Inherited: 0x28)
struct UPlayerInventory : UObject {

	void _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RTryAddToInventory_L_Nplayer_M_N_Kchar_M_Nint_M_Nlogic_R(struct Ftuple_Lplayer_M_Kchar_Mint_Mlogic_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.PlayerInventory._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RTryAddToInventory_L_Nplayer_M_N_Kchar_M_Nint_M_Nlogic_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x633c1b0
	OptionProperty _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RTryAddItemToInventory_L_Nplayer_M_Nfort__item__definition_M_Nint_M_Nlogic_R(struct Ftuple_Lplayer_Mfort__item__definition_Mint_Mlogic_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.PlayerInventory._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RTryAddItemToInventory_L_Nplayer_M_Nfort__item__definition_M_Nint_M_Nlogic_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x633c1a8
	char _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RRemoveFromInventory_L_Nplayer_M_N_Kchar_M_Nint_R(struct Ftuple_Lplayer_M_Kchar_Mint_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.PlayerInventory._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RRemoveFromInventory_L_Nplayer_M_N_Kchar_M_Nint_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x633c1a0
	void _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RClearDroppableItems_L_Nplayer_R(struct UPlayer* __verse_0xB2CDDD72_Argument); // Function VerseFortnite.PlayerInventory._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RClearDroppableItems_L_Nplayer_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x633c198
	void $InitCDO(); // Function VerseFortnite.PlayerInventory.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseFortnite.PlayerInvulnerable
// Size: 0x28 (Inherited: 0x28)
struct UPlayerInvulnerable : UObject {

	void _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInvulnerable_N_RSetPlayerInvulnerability_L_Nplayer_M_Nlogic_R(struct Ftuple_Lplayer_Mlogic_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.PlayerInvulnerable._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInvulnerable_N_RSetPlayerInvulnerability_L_Nplayer_M_Nlogic_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x633c1c0
	OptionProperty _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInvulnerable_N_RIsPlayerInvulnerable_L_Nplayer_R(struct UPlayer* __verse_0xB2CDDD72_Argument); // Function VerseFortnite.PlayerInvulnerable._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInvulnerable_N_RIsPlayerInvulnerable_L_Nplayer_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x633c1b8
	void $InitCDO(); // Function VerseFortnite.PlayerInvulnerable.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseFortnite.PlayerPickupComponent
// Size: 0x28 (Inherited: 0x28)
struct UPlayerPickupComponent : UObject {

	OptionProperty _L_2fFortnite_2ecom_2fGame_2fItem_2fPlayerPickupComponent_N_RcreatePickup_L_Ncomponent_M_Nfort__item__definition_M_Nint_M_Nvector3_R(struct Ftuple_Lcomponent_Mfort__item__definition_Mint_Mvector3_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.PlayerPickupComponent._L_2fFortnite_2ecom_2fGame_2fItem_2fPlayerPickupComponent_N_RcreatePickup_L_Ncomponent_M_Nfort__item__definition_M_Nint_M_Nvector3_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x633c120
	void $InitCDO(); // Function VerseFortnite.PlayerPickupComponent.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseFortnite.PlayerSpectator
// Size: 0x28 (Inherited: 0x28)
struct UPlayerSpectator : UObject {

	OptionProperty _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RSpectatePlayer_L_Nplayer_M_Nplayer_R(struct Ftuple_Lplayer_Mplayer_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.PlayerSpectator._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RSpectatePlayer_L_Nplayer_M_Nplayer_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x633c1e8
	OptionProperty _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RSpectateEliminator_L_Nplayer_R(struct UPlayer* __verse_0xB2CDDD72_Argument); // Function VerseFortnite.PlayerSpectator._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RSpectateEliminator_L_Nplayer_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x633c1e0
	OptionProperty _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RSetSpectator_L_Nplayer_R(struct UPlayer* __verse_0xB2CDDD72_Argument); // Function VerseFortnite.PlayerSpectator._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RSetSpectator_L_Nplayer_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x633c1d8
	OptionProperty _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RIsSpectator_L_Nplayer_R(struct UPlayer* __verse_0xB2CDDD72_Argument); // Function VerseFortnite.PlayerSpectator._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RIsSpectator_L_Nplayer_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x633c1d0
	struct TArray<struct UPlayer*> _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RGetPlayersSpectatingTarget_L_Nplayer_R(struct UPlayer* __verse_0xB2CDDD72_Argument); // Function VerseFortnite.PlayerSpectator._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RGetPlayersSpectatingTarget_L_Nplayer_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x633c1c8
	void $InitCDO(); // Function VerseFortnite.PlayerSpectator.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseFortnite.PlayerStartComponent
// Size: 0x28 (Inherited: 0x28)
struct UPlayerStartComponent : UObject {

	struct TArray<struct Uplayer_start_component*> _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStartComponent_N_RfindAllInPlayspaceWithTags_L_Ncomponent_M_N_K_Kchar_R(struct Ftuple_Lcomponent_M_K_Kchar_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.PlayerStartComponent._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStartComponent_N_RfindAllInPlayspaceWithTags_L_Ncomponent_M_N_K_Kchar_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x633c1f0
	void $InitCDO(); // Function VerseFortnite.PlayerStartComponent.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseFortnite.PlayerStasis
// Size: 0x28 (Inherited: 0x28)
struct UPlayerStasis : UObject {

	void _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStasis_N_RReleaseFromStasis_L_Nplayer_R(struct UPlayer* __verse_0xB2CDDD72_Argument); // Function VerseFortnite.PlayerStasis._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStasis_N_RReleaseFromStasis_L_Nplayer_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x633c208
	void _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStasis_N_RPutInStasisAdvanced_L_Nplayer_M_Nlogic_M_Nlogic_M_Nlogic_R(struct Ftuple_Lplayer_Mlogic_Mlogic_Mlogic_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.PlayerStasis._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStasis_N_RPutInStasisAdvanced_L_Nplayer_M_Nlogic_M_Nlogic_M_Nlogic_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x633c1f8
	void _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStasis_N_RPutInStasis_L_Nplayer_R(struct UPlayer* __verse_0xB2CDDD72_Argument); // Function VerseFortnite.PlayerStasis._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStasis_N_RPutInStasis_L_Nplayer_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x633c200
	void $InitCDO(); // Function VerseFortnite.PlayerStasis.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseFortnite.PlayerStatus
// Size: 0x28 (Inherited: 0x28)
struct UPlayerStatus : UObject {

	char _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStatus_N_RgetStatus_L_Nplayer__component_M_Nplayer__status__type_R(struct Ftuple_Lplayer__component_Mplayer__status__type_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.PlayerStatus._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStatus_N_RgetStatus_L_Nplayer__component_M_Nplayer__status__type_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x633c210
	void $InitCDO(); // Function VerseFortnite.PlayerStatus.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseFortnite.PlayerTeam
// Size: 0x28 (Inherited: 0x28)
struct UPlayerTeam : UObject {

	char _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RSetTeam_L_Nplayer_M_Nplayer__team_R(struct Ftuple_Lplayer_Mplayer__team_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.PlayerTeam._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RSetTeam_L_Nplayer_M_Nplayer__team_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x633c268
	struct Fplayer_team _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RPickTeam_L_Nplayer_M_Nplayer__team_R(struct Ftuple_Lplayer_Mplayer__team_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.PlayerTeam._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RPickTeam_L_Nplayer_M_Nplayer__team_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x633c260
	int64_t _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeamSize_L_Nplayer__team_R(struct Fplayer_team __verse_0xB2CDDD72_Argument); // Function VerseFortnite.PlayerTeam._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeamSize_L_Nplayer__team_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x633c250
	struct TArray<struct UPlayer*> _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeamMembers_L_Nplayer__team_R(struct Fplayer_team __verse_0xB2CDDD72_Argument); // Function VerseFortnite.PlayerTeam._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeamMembers_L_Nplayer__team_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x633c248
	struct FColor _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeamColor_L_Nplayer__team_R(struct Fplayer_team __verse_0xB2CDDD72_Argument); // Function VerseFortnite.PlayerTeam._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeamColor_L_Nplayer__team_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x633c240
	struct Fplayer_team _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeam_L_Nplayer_R(struct UPlayer* __verse_0xB2CDDD72_Argument); // Function VerseFortnite.PlayerTeam._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeam_L_Nplayer_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x633c258
	struct Fplayer_team _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetNextTeam_L_Nplayer__team_R(struct Fplayer_team __verse_0xB2CDDD72_Argument); // Function VerseFortnite.PlayerTeam._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetNextTeam_L_Nplayer__team_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x633c238
	struct Fplayer_team _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetInvalidTeam(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.PlayerTeam._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetInvalidTeam // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x633c230
	struct Fplayer_team _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetFirstTeam(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.PlayerTeam._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetFirstTeam // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x633c228
	char _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_REquals_L_Nplayer__team_M_Nplayer__team_R(struct Ftuple_Lplayer__team_Mplayer__team_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.PlayerTeam._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_REquals_L_Nplayer__team_M_Nplayer__team_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x633c220
	OptionProperty _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RContainsHumanPlayers_L_Nplayer__team_R(struct Fplayer_team __verse_0xB2CDDD72_Argument); // Function VerseFortnite.PlayerTeam._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RContainsHumanPlayers_L_Nplayer__team_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x633c218
	void $InitCDO(); // Function VerseFortnite.PlayerTeam.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseFortnite.PlayerTravel
// Size: 0x28 (Inherited: 0x28)
struct UPlayerTravel : UObject {

	void _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTravel_N_RSendToLobby_L_Nplayer_R(struct UPlayer* __verse_0xB2CDDD72_Argument); // Function VerseFortnite.PlayerTravel._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTravel_N_RSendToLobby_L_Nplayer_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x633c198
	void $InitCDO(); // Function VerseFortnite.PlayerTravel.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseFortnite.PlayerVisibility
// Size: 0x28 (Inherited: 0x28)
struct UPlayerVisibility : UObject {

	void _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerVisibility_N_RSetIsHidden_L_Nplayer_M_Nlogic_R(struct Ftuple_Lplayer_Mlogic_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.PlayerVisibility._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerVisibility_N_RSetIsHidden_L_Nplayer_M_Nlogic_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x633c270
	void $InitCDO(); // Function VerseFortnite.PlayerVisibility.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseFortnite.projectile_movement_component
// Size: 0xd8 (Inherited: 0x90)
struct Uprojectile_movement_component : UVerseFortniteMovementComponentBase {
	char pad_90[0x30]; // 0x90(0x30)
	struct FDelegate __verse_0x8040185E__L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetBounciness_L_Nfloat_R; // 0xc0(0x0c)
	struct FDelegate __verse_0x0B25997B__L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetDirection_L_Nvector3_R; // 0x90(0x0c)
	struct FDelegate __verse_0x68515442__L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetFriction_L_Nfloat_R; // 0xcc(0x0c)
	struct FDelegate __verse_0x7B2D42E9__L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetGravity_L_Nfloat_R; // 0xa8(0x0c)
	struct FDelegate __verse_0xF24F59C9__L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetShouldBounce_L_Nlogic_R; // 0xb4(0x0c)
	struct FDelegate __verse_0x6C4C17DB__L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetSpeed_L_Nfloat_R; // 0x9c(0x0c)

	void _L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetSpeed_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function VerseFortnite.projectile_movement_component._L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetSpeed_L_Nfloat_R // (Native|Public|BlueprintCallable) // @ game+0x633c178
	void _L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetShouldBounce_L_Nlogic_R(char __verse_0xB2CDDD72_Argument); // Function VerseFortnite.projectile_movement_component._L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetShouldBounce_L_Nlogic_R // (Native|Public|BlueprintCallable) // @ game+0x633c170
	void _L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetGravity_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function VerseFortnite.projectile_movement_component._L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetGravity_L_Nfloat_R // (Native|Public|BlueprintCallable) // @ game+0x633c168
	void _L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetFriction_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function VerseFortnite.projectile_movement_component._L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetFriction_L_Nfloat_R // (Native|Public|BlueprintCallable) // @ game+0x633c160
	void _L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetDirection_L_Nvector3_R(struct Fvector3 __verse_0xB2CDDD72_Argument); // Function VerseFortnite.projectile_movement_component._L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetDirection_L_Nvector3_R // (Native|Public|BlueprintCallable) // @ game+0x633c158
	void _L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetBounciness_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function VerseFortnite.projectile_movement_component._L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetBounciness_L_Nfloat_R // (Native|Public|BlueprintCallable) // @ game+0x633c150
	void $InitInstance(); // Function VerseFortnite.projectile_movement_component.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseFortnite.projectile_movement_component.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseFortnite.projectile_movement_component.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseFortnite.stat_container
// Size: 0x60 (Inherited: 0x28)
struct Ustat_container : UObject {
	struct FDelegate __verse_0xBD62F3AE__L_2fFortnite_2ecom_2fGame_2fstat__container_N_RGetStatValue_L_Nint_R; // 0x28(0x0c)
	char pad_34[0xc]; // 0x34(0x0c)
	struct FDelegate __verse_0xF8339FFD__L_2fFortnite_2ecom_2fGame_2fstat__container_N_RIncrementStat_L_Nint_M_Nint_R; // 0x40(0x0c)
	struct FDelegate __verse_0x15ECECB2__L_2fFortnite_2ecom_2fGame_2fstat__container_N_RSetStatValue_L_Nint_M_Nint_R; // 0x34(0x0c)
	char pad_58[0x8]; // 0x58(0x08)

	char _L_2fFortnite_2ecom_2fGame_2fstat__container_N_RSetStatValue_L_Nint_M_Nint_R(struct Ftuple_Lint_Mint_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.stat_container._L_2fFortnite_2ecom_2fGame_2fstat__container_N_RSetStatValue_L_Nint_M_Nint_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x633c428
	char _L_2fFortnite_2ecom_2fGame_2fstat__container_N_RIncrementStat_L_Nint_M_Nint_R(struct Ftuple_Lint_Mint_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.stat_container._L_2fFortnite_2ecom_2fGame_2fstat__container_N_RIncrementStat_L_Nint_M_Nint_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x633c420
	int64_t _L_2fFortnite_2ecom_2fGame_2fstat__container_N_RGetStatValue_L_Nint_R(int64_t __verse_0xB2CDDD72_Argument); // Function VerseFortnite.stat_container._L_2fFortnite_2ecom_2fGame_2fstat__container_N_RGetStatValue_L_Nint_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x633c3d0
	void $InitInstance(); // Function VerseFortnite.stat_container.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseFortnite.stat_container.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseFortnite.stat_container.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseFortnite.match_stats
// Size: 0x128 (Inherited: 0x60)
struct Umatch_stats : Ustat_container {
	char pad_60[0x54]; // 0x60(0x54)
	struct FDelegate __verse_0xD6C53453__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetMatchStat_L_Nint_R; // 0xb4(0x0c)
	struct FDelegate __verse_0x1F493C56__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetPlayerStat_L_Nplayer_M_Nint_R; // 0x6c(0x0c)
	struct FDelegate __verse_0x384BE6C0__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetTeamStat_L_Nplayer__team_M_Nint_R; // 0x90(0x0c)
	struct FDelegate __verse_0xAB54707E__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementMatchStat_L_Nint_M_Nint_R; // 0xc0(0x0c)
	struct FDelegate __verse_0xF099193F__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementPlayerStat_L_Nplayer_M_Nint_M_Nint_R; // 0x78(0x0c)
	struct FDelegate __verse_0xDDA80A55__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementTeamStat_L_Nplayer__team_M_Nint_M_Nint_R; // 0x9c(0x0c)
	struct FDelegate __verse_0x0F1148C3__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RReset; // 0xcc(0x0c)
	struct FDelegate __verse_0xC5F988D4__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetMatchStat_L_Nint_M_Nint_R; // 0xa8(0x0c)
	struct FDelegate __verse_0x822BA24C__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetPlayerStat_L_Nplayer_M_Nint_M_Nint_R; // 0x60(0x0c)
	struct FDelegate __verse_0xAD5EC947__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetTeamStat_L_Nplayer__team_M_Nint_M_Nint_R; // 0x84(0x0c)

	void _L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetTeamStat_L_Nplayer__team_M_Nint_M_Nint_R(struct Ftuple_Lplayer__team_Mint_Mint_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.match_stats._L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetTeamStat_L_Nplayer__team_M_Nint_M_Nint_R // (Native|Public|BlueprintCallable) // @ game+0x633c418
	void _L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetPlayerStat_L_Nplayer_M_Nint_M_Nint_R(struct Ftuple_Lplayer_Mint_Mint_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.match_stats._L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetPlayerStat_L_Nplayer_M_Nint_M_Nint_R // (Native|Public|BlueprintCallable) // @ game+0x633c410
	void _L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetMatchStat_L_Nint_M_Nint_R(struct Ftuple_Lint_Mint_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.match_stats._L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetMatchStat_L_Nint_M_Nint_R // (Native|Public|BlueprintCallable) // @ game+0x633c408
	void _L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RReset(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.match_stats._L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RReset // (Native|Public|BlueprintCallable) // @ game+0x633c400
	char _L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementTeamStat_L_Nplayer__team_M_Nint_M_Nint_R(struct Ftuple_Lplayer__team_Mint_Mint_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.match_stats._L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementTeamStat_L_Nplayer__team_M_Nint_M_Nint_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x633c3f8
	char _L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementPlayerStat_L_Nplayer_M_Nint_M_Nint_R(struct Ftuple_Lplayer_Mint_Mint_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.match_stats._L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementPlayerStat_L_Nplayer_M_Nint_M_Nint_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x633c3f0
	char _L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementMatchStat_L_Nint_M_Nint_R(struct Ftuple_Lint_Mint_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.match_stats._L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementMatchStat_L_Nint_M_Nint_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x633c3e8
	int64_t _L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetTeamStat_L_Nplayer__team_M_Nint_R(struct Ftuple_Lplayer__team_Mint_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.match_stats._L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetTeamStat_L_Nplayer__team_M_Nint_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x633c3e0
	int64_t _L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetPlayerStat_L_Nplayer_M_Nint_R(struct Ftuple_Lplayer_Mint_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.match_stats._L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetPlayerStat_L_Nplayer_M_Nint_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x633c3d8
	int64_t _L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetMatchStat_L_Nint_R(int64_t __verse_0xB2CDDD72_Argument); // Function VerseFortnite.match_stats._L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetMatchStat_L_Nint_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x633c3d0
	void $InitInstance(); // Function VerseFortnite.match_stats.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseFortnite.match_stats.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseFortnite.match_stats.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseFortnite.player_stat_values
// Size: 0x68 (Inherited: 0x60)
struct Uplayer_stat_values : Ustat_container {
	struct UPlayer* __verse_0xDEE8E111_OwningPlayer; // 0x60(0x08)

	void $InitInstance(); // Function VerseFortnite.player_stat_values.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseFortnite.player_stat_values.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseFortnite.player_stat_values.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseFortnite.storm_controller_component
// Size: 0xd8 (Inherited: 0x70)
struct Ustorm_controller_component : UEntityFortniteStormControllerComponent {
	char pad_70[0x48]; // 0x70(0x48)
	double __verse_0xA5122212_startRadius; // 0xb8(0x08)
	double __verse_0xE6BD5D91_boundsRadius; // 0xc0(0x08)
	struct TArray<struct Ustorm_phase*> __verse_0xC2790393_phases; // 0xc8(0x10)
	struct FDelegate __verse_0x7675A710__L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rbegin; // 0x70(0x0c)
	struct FDelegate __verse_0x4D705B14__L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rend; // 0x7c(0x0c)
	struct FDelegate __verse_0xF5FB08F4__L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rexists; // 0xac(0x0c)
	struct FDelegate __verse_0xD93DC734__L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rpause; // 0x88(0x0c)
	struct FDelegate __verse_0x64AA7497__L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rreset; // 0x94(0x0c)
	struct FDelegate __verse_0xD763A2FA__L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_RsetBattleRoyalePhases; // 0xa0(0x0c)

	void _L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_RsetBattleRoyalePhases(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.storm_controller_component._L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_RsetBattleRoyalePhases // (Public|HasDefaults|BlueprintCallable) // @ game+0xd67374
	void _L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rreset(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.storm_controller_component._L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rreset // (Public|HasDefaults|BlueprintCallable) // @ game+0xd67374
	void _L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rpause(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.storm_controller_component._L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rpause // (Native|Public|BlueprintCallable) // @ game+0x633c2c0
	char _L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rexists(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.storm_controller_component._L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rexists // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x633c2b8
	void _L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rend(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.storm_controller_component._L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rend // (Native|Public|BlueprintCallable) // @ game+0x633c2b0
	void _L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rbegin(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.storm_controller_component._L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rbegin // (Native|Public|BlueprintCallable) // @ game+0x633c2a8
	void $InitInstance(); // Function VerseFortnite.storm_controller_component.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseFortnite.storm_controller_component.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseFortnite.storm_controller_component.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseFortnite.storm_phase
// Size: 0x90 (Inherited: 0x28)
struct Ustorm_phase : UObject {
	double __verse_0x4CDBEC4D_waitTime; // 0x28(0x08)
	double __verse_0xDFEF9A4E_shrinkTime; // 0x30(0x08)
	double __verse_0x96A9475A_endRadius; // 0x38(0x08)
	double __verse_0x61AAA523_endRadiusPercentage; // 0x40(0x08)
	int64_t __verse_0x7781DBF3_damageIndex; // 0x48(0x08)
	char __verse_0x3902DD0B_moves : 1; // 0x50(0x01)
	char pad_50_1 : 7; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	double __verse_0xA376E20D_minMovementDistance; // 0x58(0x08)
	double __verse_0x2C327F1D_maxMovementDistance; // 0x60(0x08)
	double __verse_0xDA5EE7C4_minMovementDistancePercentage; // 0x68(0x08)
	double __verse_0x7B63CDBA_maxMovementDistancePercentage; // 0x70(0x08)
	struct Fvector3 __verse_0xD6F5A7B7_endLocation; // 0x78(0x18)

	void $InitInstance(); // Function VerseFortnite.storm_phase.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseFortnite.storm_phase.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseFortnite.storm_phase.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseFortnite.task_fort_playspace_component$__WaitForPlayerEliminated
// Size: 0x138 (Inherited: 0x120)
struct Utask_fort_playspace_component$__WaitForPlayerEliminated : Utask(:type) {
	struct Ufort_playspace_component* _Self; // 0x120(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct Uplayer_eliminated_result* _RetVal; // 0x130(0x08)

	int64_t Update(); // Function VerseFortnite.task_fort_playspace_component$__WaitForPlayerEliminated.Update // (Native|Public|HasOutParms) // @ game+0x633c4d0
};

// VerseClass VerseFortnite.task_gameplay_ability$ActivateAbility
// Size: 0x139 (Inherited: 0x120)
struct Utask_gameplay_ability$ActivateAbility : Utask(:type) {
	struct Ugameplay_ability* _Self; // 0x120(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x128(0x01)
	enum class EVerseTrue ; // 0x129(0x01)
	char pad_12A[0x2]; // 0x12a(0x02)
	struct FDelegate ; // 0x12c(0x0c)
	struct Ftuple_L_R ; // 0x138(0x01)

	int64_t Update(); // Function VerseFortnite.task_gameplay_ability$ActivateAbility.Update // (Public|HasOutParms) // @ game+0xd67374
};

// VerseClass VerseFortnite.task_gameplay_ability$ActivateAbilityAsync
// Size: 0x180 (Inherited: 0x120)
struct Utask_gameplay_ability$ActivateAbilityAsync : Utask(:type) {
	struct Ugameplay_ability* _Self; // 0x120(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	int64_t ; // 0x130(0x08)
	struct Utask(:type)* ; // 0x138(0x08)
	struct FDelegate ; // 0x140(0x0c)
	struct Ftuple_L_R ; // 0x14c(0x01)
	char pad_14D[0x3]; // 0x14d(0x03)
	int64_t ; // 0x150(0x08)
	struct Upulse_event* ; // 0x158(0x08)
	struct Utask(:type)* ; // 0x160(0x08)
	struct FDelegate ; // 0x168(0x0c)
	struct Ftuple_L_R ; // 0x174(0x01)
	char pad_175[0x3]; // 0x175(0x03)
	int64_t ; // 0x178(0x08)

	int64_t Update(); // Function VerseFortnite.task_gameplay_ability$ActivateAbilityAsync.Update // (Public|HasOutParms) // @ game+0xd67374
};

// VerseClass VerseFortnite.team_stat_values
// Size: 0xe0 (Inherited: 0x60)
struct Uteam_stat_values : Ustat_container {
	char pad_60[0x78]; // 0x60(0x78)
	struct Fplayer_team __verse_0x555B2F95_Team; // 0xd8(0x04)
	struct FDelegate __verse_0xFFA43169__L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RGetPlayerStat_L_Nplayer_M_Nint_R; // 0x6c(0x0c)
	struct FDelegate __verse_0xFE7BA9E0__L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RIncrementPlayerStat_L_Nplayer_M_Nint_M_Nint_R; // 0x78(0x0c)
	struct FDelegate __verse_0xE0516D12__L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RSetPlayerStat_L_Nplayer_M_Nint_M_Nint_R; // 0x60(0x0c)

	void _L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RSetPlayerStat_L_Nplayer_M_Nint_M_Nint_R(struct Ftuple_Lplayer_Mint_Mint_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.team_stat_values._L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RSetPlayerStat_L_Nplayer_M_Nint_M_Nint_R // (Native|Public|BlueprintCallable) // @ game+0x633c440
	char _L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RIncrementPlayerStat_L_Nplayer_M_Nint_M_Nint_R(struct Ftuple_Lplayer_Mint_Mint_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.team_stat_values._L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RIncrementPlayerStat_L_Nplayer_M_Nint_M_Nint_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x633c438
	int64_t _L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RGetPlayerStat_L_Nplayer_M_Nint_R(struct Ftuple_Lplayer_Mint_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.team_stat_values._L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RGetPlayerStat_L_Nplayer_M_Nint_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x633c430
	void $InitInstance(); // Function VerseFortnite.team_stat_values.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseFortnite.team_stat_values.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseFortnite.team_stat_values.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseFortnite.VerseFortniteHacks
// Size: 0x28 (Inherited: 0x28)
struct UVerseFortniteHacks : UObject {

	void _L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RsetAutoRespawnEnabled_L_Ncomponent_M_Nlogic_R(struct Ftuple_Lcomponent_Mlogic_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.VerseFortniteHacks._L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RsetAutoRespawnEnabled_L_Ncomponent_M_Nlogic_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x633c2e0
	void _L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RrespawnPlayer_L_Nplayer__component_M_Nplayer__start__component_R(struct Ftuple_Lplayer__component_Mplayer__start__component_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.VerseFortniteHacks._L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RrespawnPlayer_L_Nplayer__component_M_Nplayer__start__component_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x633c2d8
	struct TArray<struct UEntityComponent*> _L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RgetAllComponentsOfType_L_Ncomponent_M_Nsubtype_Lcomponent_R_R(struct Ftuple_Lcomponent_Msubtype_Lcomponent_R_R __verse_0xB2CDDD72_Argument); // Function VerseFortnite.VerseFortniteHacks._L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RgetAllComponentsOfType_L_Ncomponent_M_Nsubtype_Lcomponent_R_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x633c2d0
	int64_t _L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RGetPawnCollisionEntityID_L_Nplayer__component_R(struct Uplayer_component* __verse_0xB2CDDD72_Argument); // Function VerseFortnite.VerseFortniteHacks._L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RGetPawnCollisionEntityID_L_Nplayer__component_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x633c2c8
	void $InitCDO(); // Function VerseFortnite.VerseFortniteHacks.$InitCDO // (None) // @ game+0xd67374
};

