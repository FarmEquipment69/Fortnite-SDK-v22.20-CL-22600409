// VerseClass EpicGamesEngine.$SolarisSignatureFunctionOuter
// Size: 0x28 (Inherited: 0x28)
struct U$SolarisSignatureFunctionOuter : UObject {
};

// VerseClass EpicGamesEngine.task_verse_ue_input_component$WaitForAction_L_Nverse__ue__input__component_M_N_Kchar_M_Ninput__event_R
// Size: 0x148 (Inherited: 0x120)
struct Utask_verse_ue_input_component$WaitForAction_L_Nverse__ue__input__component_M_N_Kchar_M_Ninput__event_R : Utask(:type) {
	struct Uverse_ue_input_component* _Self; // 0x120(0x08)
	struct Ftuple_Lverse__ue__input__component_M_Kchar_Minput__event_R __verse_0xB2CDDD72_Argument; // 0x128(0x20)

	int64_t Update(); // Function EpicGamesEngine.task_verse_ue_input_component$WaitForAction_L_Nverse__ue__input__component_M_N_Kchar_M_Ninput__event_R.Update // (Native|Public|HasOutParms) // @ game+0x5c3bb08
};

// VerseClass EpicGamesEngine.verse_ue_input_component
// Size: 0x610 (Inherited: 0x458)
struct Uverse_ue_input_component : UVerseUEInputComponentBase {
	char pad_458[0x14]; // 0x458(0x14)
	struct FDelegate __verse_0x7C4A751D__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddActionBinding_L_N_Kchar_M_Ninput__event_M_Ntuple_L_R_Tvoid_R; // 0x46c(0x0c)
	struct FDelegate __verse_0xA0CE540B__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddActionMapping_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_R; // 0x460(0x0c)
	char pad_484[0x6c]; // 0x484(0x6c)
	struct FDelegate __verse_0x990BA955__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddActionMappingAndBinding_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_M_Ninput__event_M_Ntuple_L_R_Tvoid_R; // 0x4f0(0x0c)
	struct FDelegate __verse_0xC0AAB7CB__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddAxisBinding_L_N_Kchar_M_N_Q_Lfloat_Tvoid_R_R; // 0x484(0x0c)
	struct FDelegate __verse_0x90867C45__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddAxisMapping_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_M_N_Qfloat_R; // 0x478(0x0c)
	struct FDelegate __verse_0x2D555026__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddAxisMappingAndBinding_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_M_N_Qfloat_M_N_Q_Lfloat_Tvoid_R_R; // 0x508(0x0c)
	struct FDelegate __verse_0x35F32F07__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearActionMappings; // 0x4b4(0x0c)
	struct FDelegate __verse_0x35A10119__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearAxisMappings; // 0x4c0(0x0c)
	struct FDelegate __verse_0x961F7CD2__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearInputBindings; // 0x4cc(0x0c)
	struct FDelegate __verse_0xC3127334__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearInputMappingsAndBindings; // 0x514(0x0c)
	struct FDelegate __verse_0x84FE24F8__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RGetAxisValue_L_N_Kchar_R; // 0x4d8(0x0c)
	struct FDelegate __verse_0x6DA54EE3__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveActionBinding_L_N_Kchar_M_Ninput__event_R; // 0x49c(0x0c)
	struct FDelegate __verse_0xFA4BD56F__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveActionMapping_L_N_Kchar_R; // 0x490(0x0c)
	struct FDelegate __verse_0xE39C826C__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveActionMappingAndBinding_L_N_Kchar_M_Ninput__event_R; // 0x4fc(0x0c)
	struct FDelegate __verse_0x983150DC__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveAxisBinding_L_N_Kchar_R; // 0x4a8(0x0c)
	struct FDelegate __verse_0x42760BD5_WaitForAction_L_Nverse__ue__input__component_M_N_Kchar_M_Ninput__event_R; // 0x4e4(0x0c)
	char pad_598[0x78]; // 0x598(0x78)

	struct Utask(:type)* WaitForAction_L_Nverse__ue__input__component_M_N_Kchar_M_Ninput__event_R(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_Lverse__ue__input__component_M_Kchar_Minput__event_R __verse_0xB2CDDD72_Argument); // Function EpicGamesEngine.verse_ue_input_component.WaitForAction_L_Nverse__ue__input__component_M_N_Kchar_M_Ninput__event_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	void _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveAxisBinding_L_N_Kchar_R(VerseStringProperty __verse_0xB2CDDD72_Argument); // Function EpicGamesEngine.verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveAxisBinding_L_N_Kchar_R // (Native|Public|BlueprintCallable) // @ game+0x5c3bb60
	void _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveActionMappingAndBinding_L_N_Kchar_M_Ninput__event_R(struct Ftuple_L_Kchar_Minput__event_R __verse_0xB2CDDD72_Argument); // Function EpicGamesEngine.verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveActionMappingAndBinding_L_N_Kchar_M_Ninput__event_R // (Public|HasDefaults|BlueprintCallable) // @ game+0xd67374
	void _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveActionMapping_L_N_Kchar_R(VerseStringProperty __verse_0xB2CDDD72_Argument); // Function EpicGamesEngine.verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveActionMapping_L_N_Kchar_R // (Native|Public|BlueprintCallable) // @ game+0x5c3bb58
	void _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveActionBinding_L_N_Kchar_M_Ninput__event_R(struct Ftuple_L_Kchar_Minput__event_R __verse_0xB2CDDD72_Argument); // Function EpicGamesEngine.verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveActionBinding_L_N_Kchar_M_Ninput__event_R // (Native|Public|BlueprintCallable) // @ game+0x5c3bb50
	double _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RGetAxisValue_L_N_Kchar_R(VerseStringProperty __verse_0xB2CDDD72_Argument); // Function EpicGamesEngine.verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RGetAxisValue_L_N_Kchar_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5c3bb48
	void _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearInputMappingsAndBindings(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function EpicGamesEngine.verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearInputMappingsAndBindings // (Public|HasDefaults|BlueprintCallable) // @ game+0xd67374
	void _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearInputBindings(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function EpicGamesEngine.verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearInputBindings // (Native|Public|BlueprintCallable) // @ game+0x5c3bb40
	void _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearAxisMappings(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function EpicGamesEngine.verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearAxisMappings // (Native|Public|BlueprintCallable) // @ game+0x5c3bb38
	void _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearActionMappings(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function EpicGamesEngine.verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearActionMappings // (Native|Public|BlueprintCallable) // @ game+0x5c3bb30
	void _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddAxisMappingAndBinding_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_M_N_Qfloat_M_N_Q_Lfloat_Tvoid_R_R(struct Ftuple_L_Kchar_M_Kchar_M_Kverse__key_M_Qfloat_M_Q_Lfloat_Tvoid_R_R __verse_0xB2CDDD72_Argument); // Function EpicGamesEngine.verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddAxisMappingAndBinding_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_M_N_Qfloat_M_N_Q_Lfloat_Tvoid_R_R // (Public|HasDefaults|BlueprintCallable) // @ game+0xd67374
	void _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddAxisMapping_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_M_N_Qfloat_R(struct Ftuple_L_Kchar_M_Kchar_M_Kverse__key_M_Qfloat_R __verse_0xB2CDDD72_Argument); // Function EpicGamesEngine.verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddAxisMapping_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_M_N_Qfloat_R // (Native|Public|BlueprintCallable) // @ game+0x5c3bb28
	void _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddAxisBinding_L_N_Kchar_M_N_Q_Lfloat_Tvoid_R_R(struct Ftuple_L_Kchar_M_Q_Lfloat_Tvoid_R_R __verse_0xB2CDDD72_Argument); // Function EpicGamesEngine.verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddAxisBinding_L_N_Kchar_M_N_Q_Lfloat_Tvoid_R_R // (Native|Public|BlueprintCallable) // @ game+0x5c3bb20
	void _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddActionMappingAndBinding_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_M_Ninput__event_M_Ntuple_L_R_Tvoid_R(struct Ftuple_L_Kchar_M_Kchar_M_Kverse__key_Minput__event_Mtuple_L_R_Tvoid_R __verse_0xB2CDDD72_Argument); // Function EpicGamesEngine.verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddActionMappingAndBinding_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_M_Ninput__event_M_Ntuple_L_R_Tvoid_R // (Public|HasDefaults|BlueprintCallable) // @ game+0xd67374
	void _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddActionMapping_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_R(struct Ftuple_L_Kchar_M_Kchar_M_Kverse__key_R __verse_0xB2CDDD72_Argument); // Function EpicGamesEngine.verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddActionMapping_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_R // (Native|Public|BlueprintCallable) // @ game+0x5c3bb18
	void _L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddActionBinding_L_N_Kchar_M_Ninput__event_M_Ntuple_L_R_Tvoid_R(struct Ftuple_L_Kchar_Minput__event_Mtuple_L_R_Tvoid_R __verse_0xB2CDDD72_Argument); // Function EpicGamesEngine.verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddActionBinding_L_N_Kchar_M_Ninput__event_M_Ntuple_L_R_Tvoid_R // (Native|Public|BlueprintCallable) // @ game+0x5c3bb10
	void $InitInstance(); // Function EpicGamesEngine.verse_ue_input_component.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function EpicGamesEngine.verse_ue_input_component.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function EpicGamesEngine.verse_ue_input_component.$InitCDO // (None) // @ game+0xd67374
};

