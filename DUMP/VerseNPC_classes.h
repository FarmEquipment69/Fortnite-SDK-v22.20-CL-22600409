// VerseClass VerseNPC.$SolarisSignatureFunctionOuter
// Size: 0x28 (Inherited: 0x28)
struct U$SolarisSignatureFunctionOuter : UObject {
};

// VerseClass VerseNPC.npc_component
// Size: 0x278 (Inherited: 0xf8)
struct Unpc_component : Uai_component {
	char pad_F8[0x6c]; // 0xf8(0x6c)
	struct FDelegate __verse_0xE4D0BB73_Crouch; // 0x164(0x0c)
	struct FDelegate __verse_0xCBA5C2CA_DestroyObstacle_L_Nobstacle__info_R; // 0x140(0x0c)
	struct FDelegate __verse_0xF2072AC5_EngageFight_L_Nthreat__info_R; // 0x128(0x0c)
	char pad_188[0x9c]; // 0x188(0x9c)
	struct FDelegate __verse_0x70DC8CC3__L_2fFortnite_2ecom_2fAI_2fVerseNPC_2fnpc__component_N_RForgetThreat_L_Nthreat__info_R; // 0x224(0x0c)
	struct FDelegate __verse_0xA17B1F52__L_2fFortnite_2ecom_2fAI_2fVerseNPC_2fnpc__component_N_RGetAllThreatInfo; // 0x200(0x0c)
	struct FDelegate __verse_0x19C45520__L_2fFortnite_2ecom_2fAI_2fVerseNPC_2fnpc__component_N_RGetBestObjectToLoot; // 0x1b8(0x0c)
	struct FDelegate __verse_0xF02C5EAE__L_2fFortnite_2ecom_2fAI_2fVerseNPC_2fnpc__component_N_RGetCurrentDestination; // 0x11c(0x0c)
	struct FDelegate __verse_0xFA54E983__L_2fFortnite_2ecom_2fAI_2fVerseNPC_2fnpc__component_N_RGetCurrentThreatInfo; // 0x1f4(0x0c)
	struct FDelegate __verse_0xD58FC25E__L_2fFortnite_2ecom_2fAI_2fVerseNPC_2fnpc__component_N_RGetObstacleInfo; // 0x23c(0x0c)
	struct FDelegate __verse_0xE3DDE74D__L_2fFortnite_2ecom_2fAI_2fVerseNPC_2fnpc__component_N_RGetOrCreateThreatInfo_L_Nentity_M_Nlogic_R; // 0x218(0x0c)
	struct FDelegate __verse_0x74912F24__L_2fFortnite_2ecom_2fAI_2fVerseNPC_2fnpc__component_N_RGetThreatInfo_L_Nentity_R; // 0x20c(0x0c)
	struct FDelegate __verse_0x91E44EAA_Jump; // 0x1a0(0x0c)
	struct FDelegate __verse_0xC907A4E0_LookAt_L_Nvector3_R; // 0x194(0x0c)
	struct FDelegate __verse_0x1B994B4F_LootObject_L_Nloot__info_R; // 0x1d0(0x0c)
	struct FDelegate __verse_0x514829C1_MoveInRangeToAttack; // 0x134(0x0c)
	struct FDelegate __verse_0x167392A9_NavigateTo_L_Nvector3_M_N_L_QNavigationParameters_Nnavigation__parameters_20_3d_20_2e_2e_2e_R_R; // 0xf8(0x0c)
	struct FDelegate __verse_0xBBE4DD00_NavigateTo_L_Nentity_M_N_L_QNavigationParameters_Nnavigation__parameters_20_3d_20_2e_2e_2e_R_R; // 0x104(0x0c)
	struct FDelegate __verse_0xDA317101_OnBestObjectToLoot; // 0x1c4(0x0c)
	struct FDelegate __verse_0x13EC72B3_OnBestThreatChanged; // 0x230(0x0c)
	struct FDelegate __verse_0x0B93B3DC_OnDamaged; // 0x260(0x0c)
	struct FDelegate __verse_0xA19AC819_OnObstacleChanged; // 0x248(0x0c)
	struct FDelegate __verse_0x2C144C89_OnThreatPerceptionChanged_L_Nthreat__info_R; // 0x254(0x0c)
	struct FDelegate __verse_0xB5C0D619_PatrolAround_L_N_L_QNavigationParameters_Nnavigation__parameters_20_3d_20_2e_2e_2e_R_R; // 0x110(0x0c)
	struct FDelegate __verse_0x9765CB04_PlayRandomEmote; // 0x14c(0x0c)
	struct FDelegate __verse_0xFB3503F2__L_2fFortnite_2ecom_2fAI_2fVerseNPC_2fnpc__component_N_RResetLeash; // 0x1e8(0x0c)
	struct FDelegate __verse_0x7681370A_Revive_L_Nentity_R; // 0x158(0x0c)
	struct FDelegate __verse_0x22025E01__L_2fFortnite_2ecom_2fAI_2fVerseNPC_2fnpc__component_N_RSetLeashPosition_L_Nvector3_M_Nfloat_M_Nfloat_R; // 0x1dc(0x0c)
	struct FDelegate __verse_0xD27C8306_Slide; // 0x1ac(0x0c)
	struct FDelegate __verse_0x19F8ABA1_Sprint; // 0x17c(0x0c)
	struct FDelegate __verse_0xCB7DDA42_TacticalSprint; // 0x188(0x0c)
	struct FDelegate __verse_0xD59E8F01_Walk; // 0x170(0x0c)

	struct Utask(:type)* Walk(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component.Walk // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	struct Utask(:type)* TacticalSprint(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component.TacticalSprint // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	struct Utask(:type)* Sprint(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component.Sprint // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	struct Utask(:type)* Slide(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component.Slide // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	void _L_2fFortnite_2ecom_2fAI_2fVerseNPC_2fnpc__component_N_RSetLeashPosition_L_Nvector3_M_Nfloat_M_Nfloat_R(struct Ftuple_Lvector3_Mfloat_Mfloat_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component._L_2fFortnite_2ecom_2fAI_2fVerseNPC_2fnpc__component_N_RSetLeashPosition_L_Nvector3_M_Nfloat_M_Nfloat_R // (Native|Public|BlueprintCallable) // @ game+0x6510128
	struct Utask(:type)* Revive_L_Nentity_R(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct UEntity* __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component.Revive_L_Nentity_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	void _L_2fFortnite_2ecom_2fAI_2fVerseNPC_2fnpc__component_N_RResetLeash(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component._L_2fFortnite_2ecom_2fAI_2fVerseNPC_2fnpc__component_N_RResetLeash // (Native|Public|BlueprintCallable) // @ game+0x6510120
	struct Utask(:type)* PlayRandomEmote(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component.PlayRandomEmote // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	struct Utask(:type)* PatrolAround_L_N_L_QNavigationParameters_Nnavigation__parameters_20_3d_20_2e_2e_2e_R_R(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, OptionProperty __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component.PatrolAround_L_N_L_QNavigationParameters_Nnavigation__parameters_20_3d_20_2e_2e_2e_R_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	struct Utask(:type)* OnThreatPerceptionChanged_L_Nthreat__info_R(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Fthreat_info __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component.OnThreatPerceptionChanged_L_Nthreat__info_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	struct Utask(:type)* OnObstacleChanged(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component.OnObstacleChanged // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	struct Utask(:type)* OnDamaged(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component.OnDamaged // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	struct Utask(:type)* OnBestThreatChanged(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component.OnBestThreatChanged // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	struct Utask(:type)* OnBestObjectToLoot(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component.OnBestObjectToLoot // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	struct Utask(:type)* NavigateTo_L_Nentity_M_N_L_QNavigationParameters_Nnavigation__parameters_20_3d_20_2e_2e_2e_R_R(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_Lentity_M_QNavigationParameters_Nnavigation__parameters_20_3d_20_2e_2e_2e_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component.NavigateTo_L_Nentity_M_N_L_QNavigationParameters_Nnavigation__parameters_20_3d_20_2e_2e_2e_R_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	struct Utask(:type)* NavigateTo_L_Nvector3_M_N_L_QNavigationParameters_Nnavigation__parameters_20_3d_20_2e_2e_2e_R_R(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_Lvector3_M_QNavigationParameters_Nnavigation__parameters_20_3d_20_2e_2e_2e_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component.NavigateTo_L_Nvector3_M_N_L_QNavigationParameters_Nnavigation__parameters_20_3d_20_2e_2e_2e_R_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	struct Utask(:type)* MoveInRangeToAttack(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component.MoveInRangeToAttack // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	struct Utask(:type)* LootObject_L_Nloot__info_R(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Floot_info __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component.LootObject_L_Nloot__info_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	struct Utask(:type)* LookAt_L_Nvector3_R(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Fvector3 __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component.LookAt_L_Nvector3_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	struct Utask(:type)* Jump(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component.Jump // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	OptionProperty _L_2fFortnite_2ecom_2fAI_2fVerseNPC_2fnpc__component_N_RGetThreatInfo_L_Nentity_R(struct UEntity* __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component._L_2fFortnite_2ecom_2fAI_2fVerseNPC_2fnpc__component_N_RGetThreatInfo_L_Nentity_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6510118
	OptionProperty _L_2fFortnite_2ecom_2fAI_2fVerseNPC_2fnpc__component_N_RGetOrCreateThreatInfo_L_Nentity_M_Nlogic_R(struct Ftuple_Lentity_Mlogic_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component._L_2fFortnite_2ecom_2fAI_2fVerseNPC_2fnpc__component_N_RGetOrCreateThreatInfo_L_Nentity_M_Nlogic_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6510110
	OptionProperty _L_2fFortnite_2ecom_2fAI_2fVerseNPC_2fnpc__component_N_RGetObstacleInfo(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component._L_2fFortnite_2ecom_2fAI_2fVerseNPC_2fnpc__component_N_RGetObstacleInfo // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6510108
	OptionProperty _L_2fFortnite_2ecom_2fAI_2fVerseNPC_2fnpc__component_N_RGetCurrentThreatInfo(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component._L_2fFortnite_2ecom_2fAI_2fVerseNPC_2fnpc__component_N_RGetCurrentThreatInfo // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6510100
	OptionProperty _L_2fFortnite_2ecom_2fAI_2fVerseNPC_2fnpc__component_N_RGetCurrentDestination(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component._L_2fFortnite_2ecom_2fAI_2fVerseNPC_2fnpc__component_N_RGetCurrentDestination // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x65100f8
	OptionProperty _L_2fFortnite_2ecom_2fAI_2fVerseNPC_2fnpc__component_N_RGetBestObjectToLoot(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component._L_2fFortnite_2ecom_2fAI_2fVerseNPC_2fnpc__component_N_RGetBestObjectToLoot // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x65100f0
	OptionProperty _L_2fFortnite_2ecom_2fAI_2fVerseNPC_2fnpc__component_N_RGetAllThreatInfo(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component._L_2fFortnite_2ecom_2fAI_2fVerseNPC_2fnpc__component_N_RGetAllThreatInfo // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x65100e8
	void _L_2fFortnite_2ecom_2fAI_2fVerseNPC_2fnpc__component_N_RForgetThreat_L_Nthreat__info_R(struct Fthreat_info __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component._L_2fFortnite_2ecom_2fAI_2fVerseNPC_2fnpc__component_N_RForgetThreat_L_Nthreat__info_R // (Native|Public|BlueprintCallable) // @ game+0x65100e0
	struct Utask(:type)* EngageFight_L_Nthreat__info_R(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Fthreat_info __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component.EngageFight_L_Nthreat__info_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	struct Utask(:type)* DestroyObstacle_L_Nobstacle__info_R(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Fobstacle_info __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component.DestroyObstacle_L_Nobstacle__info_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	struct Utask(:type)* Crouch(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNPC.npc_component.Crouch // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	void $InitInstance(); // Function VerseNPC.npc_component.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseNPC.npc_component.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseNPC.npc_component.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseNPC.NPCTeam
// Size: 0x28 (Inherited: 0x28)
struct UNPCTeam : UObject {

	struct TArray<struct UEntity*> _L_2fFortnite_2ecom_2fAI_2fVerseNPC_2fNPCTeam_N_RGetTeamMembers_L_Nentity_R(struct UEntity* __verse_0xB2CDDD72_Argument); // Function VerseNPC.NPCTeam._L_2fFortnite_2ecom_2fAI_2fVerseNPC_2fNPCTeam_N_RGetTeamMembers_L_Nentity_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x651a2a8
	struct TArray<struct UEntity*> _L_2fFortnite_2ecom_2fAI_2fVerseNPC_2fNPCTeam_N_RGetSquadMembers_L_Nentity_R(struct UEntity* __verse_0xB2CDDD72_Argument); // Function VerseNPC.NPCTeam._L_2fFortnite_2ecom_2fAI_2fVerseNPC_2fNPCTeam_N_RGetSquadMembers_L_Nentity_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x651a2a0
	void $InitCDO(); // Function VerseNPC.NPCTeam.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseNPC.task_npc_component$Crouch
// Size: 0x12a (Inherited: 0x120)
struct Utask_npc_component$Crouch : Utask(:type) {
	struct Unpc_component* _Self; // 0x120(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x128(0x01)
	enum class action_result _RetVal; // 0x129(0x01)

	int64_t Update(); // Function VerseNPC.task_npc_component$Crouch.Update // (Native|Public|HasOutParms) // @ game+0x650fff8
};

// VerseClass VerseNPC.task_npc_component$DestroyObstacle_L_Nobstacle__info_R
// Size: 0x151 (Inherited: 0x120)
struct Utask_npc_component$DestroyObstacle_L_Nobstacle__info_R : Utask(:type) {
	struct Unpc_component* _Self; // 0x120(0x08)
	struct Fobstacle_info __verse_0xB2CDDD72_Argument; // 0x128(0x28)
	enum class action_result _RetVal; // 0x150(0x01)

	int64_t Update(); // Function VerseNPC.task_npc_component$DestroyObstacle_L_Nobstacle__info_R.Update // (Native|Public|HasOutParms) // @ game+0x6510000
};

// VerseClass VerseNPC.task_npc_component$EngageFight_L_Nthreat__info_R
// Size: 0x161 (Inherited: 0x120)
struct Utask_npc_component$EngageFight_L_Nthreat__info_R : Utask(:type) {
	struct Unpc_component* _Self; // 0x120(0x08)
	struct Fthreat_info __verse_0xB2CDDD72_Argument; // 0x128(0x38)
	enum class action_result _RetVal; // 0x160(0x01)

	int64_t Update(); // Function VerseNPC.task_npc_component$EngageFight_L_Nthreat__info_R.Update // (Native|Public|HasOutParms) // @ game+0x6510008
};

// VerseClass VerseNPC.task_npc_component$Jump
// Size: 0x12a (Inherited: 0x120)
struct Utask_npc_component$Jump : Utask(:type) {
	struct Unpc_component* _Self; // 0x120(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x128(0x01)
	enum class action_result _RetVal; // 0x129(0x01)

	int64_t Update(); // Function VerseNPC.task_npc_component$Jump.Update // (Native|Public|HasOutParms) // @ game+0x6510018
};

// VerseClass VerseNPC.task_npc_component$LookAt_L_Nvector3_R
// Size: 0x140 (Inherited: 0x120)
struct Utask_npc_component$LookAt_L_Nvector3_R : Utask(:type) {
	struct Unpc_component* _Self; // 0x120(0x08)
	struct Fvector3 __verse_0xB2CDDD72_Argument; // 0x128(0x18)

	int64_t Update(); // Function VerseNPC.task_npc_component$LookAt_L_Nvector3_R.Update // (Native|Public|HasOutParms) // @ game+0x6510020
};

// VerseClass VerseNPC.task_npc_component$LootObject_L_Nloot__info_R
// Size: 0x151 (Inherited: 0x120)
struct Utask_npc_component$LootObject_L_Nloot__info_R : Utask(:type) {
	struct Unpc_component* _Self; // 0x120(0x08)
	struct Floot_info __verse_0xB2CDDD72_Argument; // 0x128(0x28)
	enum class action_result _RetVal; // 0x150(0x01)

	int64_t Update(); // Function VerseNPC.task_npc_component$LootObject_L_Nloot__info_R.Update // (Native|Public|HasOutParms) // @ game+0x6510028
};

// VerseClass VerseNPC.task_npc_component$MoveInRangeToAttack
// Size: 0x12a (Inherited: 0x120)
struct Utask_npc_component$MoveInRangeToAttack : Utask(:type) {
	struct Unpc_component* _Self; // 0x120(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x128(0x01)
	enum class action_result _RetVal; // 0x129(0x01)

	int64_t Update(); // Function VerseNPC.task_npc_component$MoveInRangeToAttack.Update // (Native|Public|HasOutParms) // @ game+0x6510030
};

// VerseClass VerseNPC.task_npc_component$NavigateTo_L_Nentity_M_N_L_QNavigationParameters_Nnavigation__parameters_20_3d_20_2e_2e_2e_R_R
// Size: 0x149 (Inherited: 0x120)
struct Utask_npc_component$NavigateTo_L_Nentity_M_N_L_QNavigationParameters_Nnavigation__parameters_20_3d_20_2e_2e_2e_R_R : Utask(:type) {
	struct Unpc_component* _Self; // 0x120(0x08)
	struct Ftuple_Lentity_M_QNavigationParameters_Nnavigation__parameters_20_3d_20_2e_2e_2e_R __verse_0xB2CDDD72_Argument; // 0x128(0x20)
	enum class navigate_result _RetVal; // 0x148(0x01)

	int64_t Update(); // Function VerseNPC.task_npc_component$NavigateTo_L_Nentity_M_N_L_QNavigationParameters_Nnavigation__parameters_20_3d_20_2e_2e_2e_R_R.Update // (Native|Public|HasOutParms) // @ game+0x6510038
};

// VerseClass VerseNPC.task_npc_component$NavigateTo_L_Nvector3_M_N_L_QNavigationParameters_Nnavigation__parameters_20_3d_20_2e_2e_2e_R_R
// Size: 0x159 (Inherited: 0x120)
struct Utask_npc_component$NavigateTo_L_Nvector3_M_N_L_QNavigationParameters_Nnavigation__parameters_20_3d_20_2e_2e_2e_R_R : Utask(:type) {
	struct Unpc_component* _Self; // 0x120(0x08)
	struct Ftuple_Lvector3_M_QNavigationParameters_Nnavigation__parameters_20_3d_20_2e_2e_2e_R __verse_0xB2CDDD72_Argument; // 0x128(0x30)
	enum class navigate_result _RetVal; // 0x158(0x01)

	int64_t Update(); // Function VerseNPC.task_npc_component$NavigateTo_L_Nvector3_M_N_L_QNavigationParameters_Nnavigation__parameters_20_3d_20_2e_2e_2e_R_R.Update // (Native|Public|HasOutParms) // @ game+0x6510040
};

// VerseClass VerseNPC.task_npc_component$OnBestObjectToLoot
// Size: 0x159 (Inherited: 0x120)
struct Utask_npc_component$OnBestObjectToLoot : Utask(:type) {
	struct Unpc_component* _Self; // 0x120(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	OptionProperty _RetVal; // 0x130(0x29)

	int64_t Update(); // Function VerseNPC.task_npc_component$OnBestObjectToLoot.Update // (Native|Public|HasOutParms) // @ game+0x6510048
};

// VerseClass VerseNPC.task_npc_component$OnBestThreatChanged
// Size: 0x169 (Inherited: 0x120)
struct Utask_npc_component$OnBestThreatChanged : Utask(:type) {
	struct Unpc_component* _Self; // 0x120(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	OptionProperty _RetVal; // 0x130(0x39)

	int64_t Update(); // Function VerseNPC.task_npc_component$OnBestThreatChanged.Update // (Native|Public|HasOutParms) // @ game+0x6510050
};

// VerseClass VerseNPC.task_npc_component$OnDamaged
// Size: 0x170 (Inherited: 0x120)
struct Utask_npc_component$OnDamaged : Utask(:type) {
	struct Unpc_component* _Self; // 0x120(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct Fdamage_info _RetVal; // 0x130(0x40)

	int64_t Update(); // Function VerseNPC.task_npc_component$OnDamaged.Update // (Native|Public|HasOutParms) // @ game+0x6510058
};

// VerseClass VerseNPC.task_npc_component$OnObstacleChanged
// Size: 0x159 (Inherited: 0x120)
struct Utask_npc_component$OnObstacleChanged : Utask(:type) {
	struct Unpc_component* _Self; // 0x120(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	OptionProperty _RetVal; // 0x130(0x29)

	int64_t Update(); // Function VerseNPC.task_npc_component$OnObstacleChanged.Update // (Native|Public|HasOutParms) // @ game+0x6510068
};

// VerseClass VerseNPC.task_npc_component$OnThreatPerceptionChanged_L_Nthreat__info_R
// Size: 0x199 (Inherited: 0x120)
struct Utask_npc_component$OnThreatPerceptionChanged_L_Nthreat__info_R : Utask(:type) {
	struct Unpc_component* _Self; // 0x120(0x08)
	struct Fthreat_info __verse_0xB2CDDD72_Argument; // 0x128(0x38)
	OptionProperty _RetVal; // 0x160(0x39)

	int64_t Update(); // Function VerseNPC.task_npc_component$OnThreatPerceptionChanged_L_Nthreat__info_R.Update // (Native|Public|HasOutParms) // @ game+0x6510070
};

// VerseClass VerseNPC.task_npc_component$PatrolAround_L_N_L_QNavigationParameters_Nnavigation__parameters_20_3d_20_2e_2e_2e_R_R
// Size: 0x13a (Inherited: 0x120)
struct Utask_npc_component$PatrolAround_L_N_L_QNavigationParameters_Nnavigation__parameters_20_3d_20_2e_2e_2e_R_R : Utask(:type) {
	struct Unpc_component* _Self; // 0x120(0x08)
	OptionProperty __verse_0xB2CDDD72_Argument; // 0x128(0x11)
	enum class navigate_result _RetVal; // 0x139(0x01)

	int64_t Update(); // Function VerseNPC.task_npc_component$PatrolAround_L_N_L_QNavigationParameters_Nnavigation__parameters_20_3d_20_2e_2e_2e_R_R.Update // (Native|Public|HasOutParms) // @ game+0x6510078
};

// VerseClass VerseNPC.task_npc_component$PlayRandomEmote
// Size: 0x12a (Inherited: 0x120)
struct Utask_npc_component$PlayRandomEmote : Utask(:type) {
	struct Unpc_component* _Self; // 0x120(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x128(0x01)
	enum class action_result _RetVal; // 0x129(0x01)

	int64_t Update(); // Function VerseNPC.task_npc_component$PlayRandomEmote.Update // (Native|Public|HasOutParms) // @ game+0x6510080
};

// VerseClass VerseNPC.task_npc_component$Revive_L_Nentity_R
// Size: 0x131 (Inherited: 0x120)
struct Utask_npc_component$Revive_L_Nentity_R : Utask(:type) {
	struct Unpc_component* _Self; // 0x120(0x08)
	struct UEntity* __verse_0xB2CDDD72_Argument; // 0x128(0x08)
	enum class action_result _RetVal; // 0x130(0x01)

	int64_t Update(); // Function VerseNPC.task_npc_component$Revive_L_Nentity_R.Update // (Native|Public|HasOutParms) // @ game+0x6510088
};

// VerseClass VerseNPC.task_npc_component$Slide
// Size: 0x12a (Inherited: 0x120)
struct Utask_npc_component$Slide : Utask(:type) {
	struct Unpc_component* _Self; // 0x120(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x128(0x01)
	enum class action_result _RetVal; // 0x129(0x01)

	int64_t Update(); // Function VerseNPC.task_npc_component$Slide.Update // (Native|Public|HasOutParms) // @ game+0x6510098
};

// VerseClass VerseNPC.task_npc_component$Sprint
// Size: 0x129 (Inherited: 0x120)
struct Utask_npc_component$Sprint : Utask(:type) {
	struct Unpc_component* _Self; // 0x120(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x128(0x01)

	int64_t Update(); // Function VerseNPC.task_npc_component$Sprint.Update // (Native|Public|HasOutParms) // @ game+0x65100a0
};

// VerseClass VerseNPC.task_npc_component$TacticalSprint
// Size: 0x129 (Inherited: 0x120)
struct Utask_npc_component$TacticalSprint : Utask(:type) {
	struct Unpc_component* _Self; // 0x120(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x128(0x01)

	int64_t Update(); // Function VerseNPC.task_npc_component$TacticalSprint.Update // (Native|Public|HasOutParms) // @ game+0x65100a8
};

// VerseClass VerseNPC.task_npc_component$Walk
// Size: 0x12a (Inherited: 0x120)
struct Utask_npc_component$Walk : Utask(:type) {
	struct Unpc_component* _Self; // 0x120(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x128(0x01)
	enum class action_result _RetVal; // 0x129(0x01)

	int64_t Update(); // Function VerseNPC.task_npc_component$Walk.Update // (Native|Public|HasOutParms) // @ game+0x65100b0
};

// VerseClass VerseNPC.VerseNPC
// Size: 0x28 (Inherited: 0x28)
struct UVerseNPC : UObject {

	VerseStringProperty _L_2fFortnite_2ecom_2fAI_2fVerseNPC_N_RToString_L_Nloot__type_R(enum class loot_type __verse_0xB2CDDD72_Argument); // Function VerseNPC.VerseNPC._L_2fFortnite_2ecom_2fAI_2fVerseNPC_N_RToString_L_Nloot__type_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	VerseStringProperty _L_2fFortnite_2ecom_2fAI_2fVerseNPC_N_RToString_L_Nnavigate__result_R(enum class navigate_result __verse_0xB2CDDD72_Argument); // Function VerseNPC.VerseNPC._L_2fFortnite_2ecom_2fAI_2fVerseNPC_N_RToString_L_Nnavigate__result_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	VerseStringProperty _L_2fFortnite_2ecom_2fAI_2fVerseNPC_N_RToString_L_Nthreat__status_R(enum class threat_status __verse_0xB2CDDD72_Argument); // Function VerseNPC.VerseNPC._L_2fFortnite_2ecom_2fAI_2fVerseNPC_N_RToString_L_Nthreat__status_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	VerseStringProperty _L_2fFortnite_2ecom_2fAI_2fVerseNPC_N_RToString_L_Nobstacle__status_R(enum class obstacle_status __verse_0xB2CDDD72_Argument); // Function VerseNPC.VerseNPC._L_2fFortnite_2ecom_2fAI_2fVerseNPC_N_RToString_L_Nobstacle__status_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	struct Fvector3 _L_2fFortnite_2ecom_2fAI_2fVerseNPC_N_RGetThreatLocation_L_Nthreat__info_R(struct Fthreat_info __verse_0xB2CDDD72_Argument); // Function VerseNPC.VerseNPC._L_2fFortnite_2ecom_2fAI_2fVerseNPC_N_RGetThreatLocation_L_Nthreat__info_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x651a2b0
	struct Fthreat_info threat_info$Factory(); // Function VerseNPC.VerseNPC.threat_info$Factory // (Static|HasOutParms) // @ game+0xd67374
	struct Fobstacle_info obstacle_info$Factory(); // Function VerseNPC.VerseNPC.obstacle_info$Factory // (Static|HasOutParms) // @ game+0xd67374
	struct Fnavigation_parameters navigation_parameters$Factory(); // Function VerseNPC.VerseNPC.navigation_parameters$Factory // (Static|HasOutParms) // @ game+0xd67374
	struct Floot_info loot_info$Factory(); // Function VerseNPC.VerseNPC.loot_info$Factory // (Static|HasOutParms) // @ game+0xd67374
	struct Fdamage_info damage_info$Factory(); // Function VerseNPC.VerseNPC.damage_info$Factory // (Static|HasOutParms) // @ game+0xd67374
	void $InitCDO(); // Function VerseNPC.VerseNPC.$InitCDO // (None) // @ game+0xd67374
};

