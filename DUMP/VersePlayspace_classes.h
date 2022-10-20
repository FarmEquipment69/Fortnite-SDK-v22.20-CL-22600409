// VerseClass VersePlayspace.$SolarisSignatureFunctionOuter
// Size: 0x28 (Inherited: 0x28)
struct U$SolarisSignatureFunctionOuter : UObject {
};

// VerseClass VersePlayspace.playspace_component
// Size: 0x118 (Inherited: 0x60)
struct Uplayspace_component : UEntityComponent {
	char pad_60[0x60]; // 0x60(0x60)
	struct FDelegate __verse_0x771372C6__L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RSetPlayerComponentClass_L_Ntype_R; // 0xc0(0x0c)
	struct FDelegate __verse_0x579A67A4___WaitForMatchBegin; // 0x84(0x0c)
	struct FDelegate __verse_0xB30FF5AF___WaitForMatchEnd; // 0x90(0x0c)
	struct FDelegate __verse_0xF324C2B5___WaitForPlayerAdded; // 0x9c(0x0c)
	struct FDelegate __verse_0x74B0F4F3___WaitForPlayerRemoved; // 0xa8(0x0c)
	struct FDelegate __verse_0x112880C6___WaitForSetupComplete; // 0x78(0x0c)
	struct FDelegate __verse_0x68A1B3A5__L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayerCount_L_NPlayerType_R; // 0x6c(0x0c)
	struct FDelegate __verse_0xC8D21C45__L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayers_L_NPlayerType_R; // 0x60(0x0c)
	struct FDelegate __verse_0x4908ACA9__L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RsetQueueUserForRespawnWhenAdded_L_Nlogic_R; // 0xb4(0x0c)

	void _L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RsetQueueUserForRespawnWhenAdded_L_Nlogic_R(char __verse_0xB2CDDD72_Argument); // Function VersePlayspace.playspace_component._L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RsetQueueUserForRespawnWhenAdded_L_Nlogic_R // (Native|Public|BlueprintCallable) // @ game+0x633c460
	struct TArray<struct Uplayer_component*> _L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayers_L_NPlayerType_R(enum class PlayerType __verse_0xB2CDDD72_Argument); // Function VersePlayspace.playspace_component._L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayers_L_NPlayerType_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x633c458
	int64_t _L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayerCount_L_NPlayerType_R(enum class PlayerType __verse_0xB2CDDD72_Argument); // Function VersePlayspace.playspace_component._L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayerCount_L_NPlayerType_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x633c450
	struct Utask(:type)* __WaitForSetupComplete(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VersePlayspace.playspace_component.__WaitForSetupComplete // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	struct Utask(:type)* __WaitForPlayerRemoved(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VersePlayspace.playspace_component.__WaitForPlayerRemoved // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	struct Utask(:type)* __WaitForPlayerAdded(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VersePlayspace.playspace_component.__WaitForPlayerAdded // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	struct Utask(:type)* __WaitForMatchEnd(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VersePlayspace.playspace_component.__WaitForMatchEnd // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	struct Utask(:type)* __WaitForMatchBegin(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VersePlayspace.playspace_component.__WaitForMatchBegin // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	void _L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RSetPlayerComponentClass_L_Ntype_R(struct UObject* __verse_0xB2CDDD72_Argument); // Function VersePlayspace.playspace_component._L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RSetPlayerComponentClass_L_Ntype_R // (Native|Public|BlueprintCallable) // @ game+0x633c448
	void $InitInstance(); // Function VersePlayspace.playspace_component.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VersePlayspace.playspace_component.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VersePlayspace.playspace_component.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VersePlayspace.task_playspace_component$__WaitForMatchBegin
// Size: 0x129 (Inherited: 0x120)
struct Utask_playspace_component$__WaitForMatchBegin : Utask(:type) {
	struct Uplayspace_component* _Self; // 0x120(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x128(0x01)

	int64_t Update(); // Function VersePlayspace.task_playspace_component$__WaitForMatchBegin.Update // (Native|Public|HasOutParms) // @ game+0x633c4b8
};

// VerseClass VersePlayspace.task_playspace_component$__WaitForMatchEnd
// Size: 0x129 (Inherited: 0x120)
struct Utask_playspace_component$__WaitForMatchEnd : Utask(:type) {
	struct Uplayspace_component* _Self; // 0x120(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x128(0x01)

	int64_t Update(); // Function VersePlayspace.task_playspace_component$__WaitForMatchEnd.Update // (Native|Public|HasOutParms) // @ game+0x633c4c0
};

// VerseClass VersePlayspace.task_playspace_component$__WaitForPlayerAdded
// Size: 0x138 (Inherited: 0x120)
struct Utask_playspace_component$__WaitForPlayerAdded : Utask(:type) {
	struct Uplayspace_component* _Self; // 0x120(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct Uplayer_component* _RetVal; // 0x130(0x08)

	int64_t Update(); // Function VersePlayspace.task_playspace_component$__WaitForPlayerAdded.Update // (Native|Public|HasOutParms) // @ game+0x633c4c8
};

// VerseClass VersePlayspace.task_playspace_component$__WaitForPlayerRemoved
// Size: 0x138 (Inherited: 0x120)
struct Utask_playspace_component$__WaitForPlayerRemoved : Utask(:type) {
	struct Uplayspace_component* _Self; // 0x120(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct Uplayer_component* _RetVal; // 0x130(0x08)

	int64_t Update(); // Function VersePlayspace.task_playspace_component$__WaitForPlayerRemoved.Update // (Native|Public|HasOutParms) // @ game+0x633c4d8
};

// VerseClass VersePlayspace.task_playspace_component$__WaitForSetupComplete
// Size: 0x129 (Inherited: 0x120)
struct Utask_playspace_component$__WaitForSetupComplete : Utask(:type) {
	struct Uplayspace_component* _Self; // 0x120(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x128(0x01)

	int64_t Update(); // Function VersePlayspace.task_playspace_component$__WaitForSetupComplete.Update // (Native|Public|HasOutParms) // @ game+0x633c4e0
};

