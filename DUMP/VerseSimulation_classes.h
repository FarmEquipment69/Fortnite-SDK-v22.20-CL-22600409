// VerseClass VerseSimulation.$SolarisSignatureFunctionOuter
// Size: 0x28 (Inherited: 0x28)
struct U$SolarisSignatureFunctionOuter : UObject {
};

// VerseClass VerseSimulation.Player
// Size: 0x58 (Inherited: 0x58)
struct UPlayer : UPlayerHandle {

	void $InitInstance(); // Function VerseSimulation.Player.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseSimulation.Player.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseSimulation.Player.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseSimulation.player_array_helper
// Size: 0x28 (Inherited: 0x28)
struct Uplayer_array_helper : UObject {

	int64_t _L_2fVerse_2eorg_2fSimulation_2fplayer__array__helper_N_RTestFunc_L_Nint_R(int64_t __verse_0xB2CDDD72_Argument); // Function VerseSimulation.player_array_helper._L_2fVerse_2eorg_2fSimulation_2fplayer__array__helper_N_RTestFunc_L_Nint_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63482c4
	void $InitCDO(); // Function VerseSimulation.player_array_helper.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseSimulation.player_component
// Size: 0xf8 (Inherited: 0xe8)
struct Uplayer_component : UEntityActorPlayerComponent {
	struct FDelegate __verse_0x2959FF1C__L_2fVerse_2eorg_2fSimulation_2fplayer__component_N_RGetHandle; // 0xe8(0x0c)
	char pad_F4[0x4]; // 0xf4(0x04)

	struct UPlayer* _L_2fVerse_2eorg_2fSimulation_2fplayer__component_N_RGetHandle(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseSimulation.player_component._L_2fVerse_2eorg_2fSimulation_2fplayer__component_N_RGetHandle // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x633c468
	void $InitInstance(); // Function VerseSimulation.player_component.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseSimulation.player_component.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseSimulation.player_component.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseSimulation.player_multicast_delegate
// Size: 0x80 (Inherited: 0x28)
struct Uplayer_multicast_delegate : Umulticast_delegate_base {
	char pad_28[0x40]; // 0x28(0x40)
	struct FDelegate __verse_0x57CC5EC6__L_2fVerse_2eorg_2fSimulation_2fplayer__multicast__delegate_N_RBroadcast_L_Nplayer_R; // 0x68(0x0c)
	struct FDelegate __verse_0xDCCD975E__L_2fVerse_2eorg_2fSimulation_2fsubscribable__player_N_RSubscribe_L_Nplayer_Tvoid_R; // 0x74(0x0c)

	struct UObject* _L_2fVerse_2eorg_2fSimulation_2fsubscribable__player_N_RSubscribe_L_Nplayer_Tvoid_R(struct FDelegate __verse_0xB2CDDD72_Argument); // Function VerseSimulation.player_multicast_delegate._L_2fVerse_2eorg_2fSimulation_2fsubscribable__player_N_RSubscribe_L_Nplayer_Tvoid_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5f94c94
	void _L_2fVerse_2eorg_2fSimulation_2fplayer__multicast__delegate_N_RBroadcast_L_Nplayer_R(struct UPlayer* __verse_0xB2CDDD72_Argument); // Function VerseSimulation.player_multicast_delegate._L_2fVerse_2eorg_2fSimulation_2fplayer__multicast__delegate_N_RBroadcast_L_Nplayer_R // (Native|Public|BlueprintCallable) // @ game+0x5f94c64
	void $InitInstance(); // Function VerseSimulation.player_multicast_delegate.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseSimulation.player_multicast_delegate.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseSimulation.player_multicast_delegate.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseSimulation.Simulation
// Size: 0x28 (Inherited: 0x28)
struct USimulation : UObject {

	struct Utask(:type)* Sleep_L_Nfloat_R(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, double __verse_0xB2CDDD72_Argument); // Function VerseSimulation.Simulation.Sleep_L_Nfloat_R // (Final|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	double _L_2fVerse_2eorg_2fSimulation_N_RGetSimulationElapsedTime(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseSimulation.Simulation._L_2fVerse_2eorg_2fSimulation_N_RGetSimulationElapsedTime // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63482f4
	OptionProperty _L_2fVerse_2eorg_2fSimulation_N_RGetPlayerComponentByIndex_L_Nint_R(int64_t __verse_0xB2CDDD72_Argument); // Function VerseSimulation.Simulation._L_2fVerse_2eorg_2fSimulation_N_RGetPlayerComponentByIndex_L_Nint_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63482ec
	OptionProperty _L_2fVerse_2eorg_2fSimulation_N_RGetOrCreateComponentOfTypeForPlayer_L_Nplayer__component_M_Ntype_R(struct Ftuple_Lplayer__component_Mtype_R __verse_0xB2CDDD72_Argument); // Function VerseSimulation.Simulation._L_2fVerse_2eorg_2fSimulation_N_RGetOrCreateComponentOfTypeForPlayer_L_Nplayer__component_M_Ntype_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63482e4
	OptionProperty _L_2fVerse_2eorg_2fSimulation_N_RGetOrCreateComponentOfTypeForPlayer_L_Nint_M_Ntype_R(struct Ftuple_Lint_Mtype_R __verse_0xB2CDDD72_Argument); // Function VerseSimulation.Simulation._L_2fVerse_2eorg_2fSimulation_N_RGetOrCreateComponentOfTypeForPlayer_L_Nint_M_Ntype_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63482dc
	OptionProperty _L_2fVerse_2eorg_2fSimulation_N_RGetComponentOfTypeForPlayer_L_Nplayer__component_M_Ntype_R(struct Ftuple_Lplayer__component_Mtype_R __verse_0xB2CDDD72_Argument); // Function VerseSimulation.Simulation._L_2fVerse_2eorg_2fSimulation_N_RGetComponentOfTypeForPlayer_L_Nplayer__component_M_Ntype_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63482d4
	OptionProperty _L_2fVerse_2eorg_2fSimulation_N_RGetComponentOfTypeForPlayer_L_Nint_M_Ntype_R(struct Ftuple_Lint_Mtype_R __verse_0xB2CDDD72_Argument); // Function VerseSimulation.Simulation._L_2fVerse_2eorg_2fSimulation_N_RGetComponentOfTypeForPlayer_L_Nint_M_Ntype_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x63482cc
	void $InitCDO(); // Function VerseSimulation.Simulation.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseSimulation.subscribable_optional_player
// Size: 0x28 (Inherited: 0x28)
struct Usubscribable_optional_player : UObject {

	struct UObject* _L_2fVerse_2eorg_2fSimulation_2fsubscribable__optional__player_N_RSubscribe_L_N_Qplayer_Tvoid_R(struct FDelegate __verse_0xB2CDDD72_Argument); // Function VerseSimulation.subscribable_optional_player._L_2fVerse_2eorg_2fSimulation_2fsubscribable__optional__player_N_RSubscribe_L_N_Qplayer_Tvoid_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
};

// VerseClass VerseSimulation.subscribable_player
// Size: 0x28 (Inherited: 0x28)
struct Usubscribable_player : UObject {

	struct UObject* _L_2fVerse_2eorg_2fSimulation_2fsubscribable__player_N_RSubscribe_L_Nplayer_Tvoid_R(struct FDelegate __verse_0xB2CDDD72_Argument); // Function VerseSimulation.subscribable_player._L_2fVerse_2eorg_2fSimulation_2fsubscribable__player_N_RSubscribe_L_Nplayer_Tvoid_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
};

// VerseClass VerseSimulation.task_Simulation$Sleep_L_Nfloat_R
// Size: 0x128 (Inherited: 0x120)
struct Utask_Simulation$Sleep_L_Nfloat_R : Utask(:type) {
	double __verse_0xB2CDDD72_Argument; // 0x120(0x08)

	int64_t Update(); // Function VerseSimulation.task_Simulation$Sleep_L_Nfloat_R.Update // (Native|Public|HasOutParms) // @ game+0x63482bc
};

