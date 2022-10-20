// VerseClass VerseBasicGameplay.$SolarisSignatureFunctionOuter
// Size: 0x28 (Inherited: 0x28)
struct U$SolarisSignatureFunctionOuter : UObject {
};

// VerseClass VerseBasicGameplay.basic_player_manager
// Size: 0x58 (Inherited: 0x28)
struct Ubasic_player_manager : UObject {
	struct Uplayspace_component* __verse_0xBC454097_ThePlayspace; // 0x28(0x08)
	struct UObject* __verse_0x7DC483AF_PlayerAddedEvent; // 0x30(0x08)
	struct UObject* __verse_0x5DE94DD9_PlayerRemovedEvent; // 0x38(0x08)
	struct FDelegate __verse_0x243006F6__L_2fEpicGames_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayerCount; // 0x40(0x0c)
	struct FDelegate __verse_0xD75D4D0F__L_2fEpicGames_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers; // 0x4c(0x0c)

	struct TArray<struct UPlayer*> _L_2fEpicGames_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseBasicGameplay.basic_player_manager._L_2fEpicGames_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	int64_t _L_2fEpicGames_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayerCount(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseBasicGameplay.basic_player_manager._L_2fEpicGames_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayerCount // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	void $InitInstance(); // Function VerseBasicGameplay.basic_player_manager.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseBasicGameplay.basic_player_manager.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseBasicGameplay.basic_player_manager.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseBasicGameplay.basic_player_manager_impl
// Size: 0x64 (Inherited: 0x58)
struct Ubasic_player_manager_impl : Ubasic_player_manager {
	struct FDelegate __verse_0xAB577854_BeginWaitingForEvents; // 0x58(0x0c)

	struct Utask(:type)* BeginWaitingForEvents(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseBasicGameplay.basic_player_manager_impl.BeginWaitingForEvents // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	void $InitInstance(); // Function VerseBasicGameplay.basic_player_manager_impl.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseBasicGameplay.basic_player_manager_impl.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseBasicGameplay.basic_player_manager_impl.$InitCDO // (HasDefaults) // @ game+0xd67374
};

// VerseClass VerseBasicGameplay.PlayerManager
// Size: 0x28 (Inherited: 0x28)
struct UPlayerManager : UObject {

	OptionProperty _L_2fEpicGames_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R(struct Fvector3 __verse_0xB2CDDD72_Argument); // Function VerseBasicGameplay.PlayerManager._L_2fEpicGames_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	void $InitCDO(); // Function VerseBasicGameplay.PlayerManager.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseBasicGameplay.task_basic_player_manager_impl$BeginWaitingForEvents
// Size: 0x230 (Inherited: 0x120)
struct Utask_basic_player_manager_impl$BeginWaitingForEvents : Utask(:type) {
	struct Ubasic_player_manager_impl* _Self; // 0x120(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	int64_t ; // 0x130(0x08)
	int64_t ; // 0x138(0x08)
	enum class EVerseTrue ; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
	struct UPlayer* ; // 0x148(0x08)
	struct Uplayer_component* ; // 0x150(0x08)
	struct Uplayspace_component* ; // 0x158(0x08)
	struct Utask(:type)* ; // 0x160(0x08)
	struct FDelegate ; // 0x168(0x0c)
	struct Ftuple_L_R ; // 0x174(0x01)
	char pad_175[0x3]; // 0x175(0x03)
	int64_t ; // 0x178(0x08)
	struct FDelegate ; // 0x180(0x0c)
	struct Ftuple_L_R ; // 0x18c(0x01)
	char pad_18D[0x3]; // 0x18d(0x03)
	struct Uplayer_multicast_delegate* ; // 0x190(0x08)
	OptionProperty ; // 0x198(0x08)
	struct Uplayer_multicast_delegate* ; // 0x1a0(0x08)
	enum class EVerseTrue ; // 0x1a8(0x01)
	char pad_1A9[0x3]; // 0x1a9(0x03)
	struct FDelegate ; // 0x1ac(0x0c)
	enum class EVerseTrue ; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)
	struct UPlayer* ; // 0x1c0(0x08)
	struct Uplayer_component* ; // 0x1c8(0x08)
	struct Uplayspace_component* ; // 0x1d0(0x08)
	struct Utask(:type)* ; // 0x1d8(0x08)
	struct FDelegate ; // 0x1e0(0x0c)
	struct Ftuple_L_R ; // 0x1ec(0x01)
	char pad_1ED[0x3]; // 0x1ed(0x03)
	int64_t ; // 0x1f0(0x08)
	struct FDelegate ; // 0x1f8(0x0c)
	struct Ftuple_L_R ; // 0x204(0x01)
	char pad_205[0x3]; // 0x205(0x03)
	struct Uplayer_multicast_delegate* ; // 0x208(0x08)
	OptionProperty ; // 0x210(0x08)
	struct Uplayer_multicast_delegate* ; // 0x218(0x08)
	enum class EVerseTrue ; // 0x220(0x01)
	char pad_221[0x3]; // 0x221(0x03)
	struct FDelegate ; // 0x224(0x0c)

	int64_t Update(); // Function VerseBasicGameplay.task_basic_player_manager_impl$BeginWaitingForEvents.Update // (Public|HasOutParms) // @ game+0xd67374
};

