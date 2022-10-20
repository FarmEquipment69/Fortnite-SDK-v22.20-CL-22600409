// VerseClass UnrealEngineExperimental.$SolarisSignatureFunctionOuter
// Size: 0x28 (Inherited: 0x28)
struct U$SolarisSignatureFunctionOuter : UObject {
};

// VerseClass UnrealEngineExperimental.editable_curve
// Size: 0xc8 (Inherited: 0xb8)
struct Ueditable_curve : UCurveFloat {
	struct FDelegate __verse_0xD3E8656C__L_2fEpicGames_2ecom_2fTemporary_2fCurves_2feditable__curve_N_REvaluate_L_Nfloat_R; // 0xb8(0x0c)
	char pad_C4[0x4]; // 0xc4(0x04)

	double _L_2fEpicGames_2ecom_2fTemporary_2fCurves_2feditable__curve_N_REvaluate_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function UnrealEngineExperimental.editable_curve._L_2fEpicGames_2ecom_2fTemporary_2fCurves_2feditable__curve_N_REvaluate_L_Nfloat_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63731d0
	void $InitInstance(); // Function UnrealEngineExperimental.editable_curve.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function UnrealEngineExperimental.editable_curve.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function UnrealEngineExperimental.editable_curve.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass UnrealEngineExperimental.log
// Size: 0x50 (Inherited: 0x28)
struct Ulog : UObject {
	char pad_28[0x18]; // 0x28(0x18)
	struct Ulog_channel* __verse_0xFAE6EE9E_Channel; // 0x40(0x08)
	enum class log_level __verse_0x540F3253_DefaultLevel; // 0x48(0x01)
	struct FDelegate __verse_0x76E063A2__L_2fEpicGames_2ecom_2fTemporary_2fDiagnostics_2flog_N_RPrint_L_N_Kchar_M_N_L_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R_R; // 0x28(0x0c)
	struct FDelegate __verse_0xD1BCDC21__L_2fEpicGames_2ecom_2fTemporary_2fDiagnostics_2flog_N_RPrintCallStack_L_N_L_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R_R; // 0x34(0x0c)

	void _L_2fEpicGames_2ecom_2fTemporary_2fDiagnostics_2flog_N_RPrintCallStack_L_N_L_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R_R(OptionProperty __verse_0xB2CDDD72_Argument); // Function UnrealEngineExperimental.log._L_2fEpicGames_2ecom_2fTemporary_2fDiagnostics_2flog_N_RPrintCallStack_L_N_L_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R_R // (Native|Public|BlueprintCallable) // @ game+0x63731d8
	void _L_2fEpicGames_2ecom_2fTemporary_2fDiagnostics_2flog_N_RPrint_L_N_Kchar_M_N_L_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R_R(struct Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R __verse_0xB2CDDD72_Argument); // Function UnrealEngineExperimental.log._L_2fEpicGames_2ecom_2fTemporary_2fDiagnostics_2flog_N_RPrint_L_N_Kchar_M_N_L_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R_R // (Native|Public|BlueprintCallable) // @ game+0x63731e0
	void $InitInstance(); // Function UnrealEngineExperimental.log.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function UnrealEngineExperimental.log.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function UnrealEngineExperimental.log.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass UnrealEngineExperimental.log_channel
// Size: 0x28 (Inherited: 0x28)
struct Ulog_channel : UObject {

	void $InitInstance(); // Function UnrealEngineExperimental.log_channel.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function UnrealEngineExperimental.log_channel.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function UnrealEngineExperimental.log_channel.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass UnrealEngineExperimental.screen_log
// Size: 0x78 (Inherited: 0x28)
struct Uscreen_log : UObject {
	char pad_28[0x18]; // 0x28(0x18)
	struct Ulog_channel* __verse_0xFAE6EE9E_Channel; // 0x40(0x08)
	enum class log_level __verse_0x540F3253_DefaultLevel; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FColor __verse_0xA0FC371C_DefaultColor; // 0x50(0x20)
	double __verse_0x8129D4DD_DefaultDuration; // 0x70(0x08)
	struct FDelegate __verse_0x8C67D7D0__L_2fEpicGames_2ecom_2fTemporary_2fDiagnostics_2fscreen__log_N_RPrint_L_N_Kchar_M_N_L_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R_M_N_L_QDuration_Nfloat_20_3d_20_2e_2e_2e_R_M_N_L_QColor_Ncolor_20_3d_20_2e_2e_2e_R_R; // 0x28(0x0c)
	struct FDelegate __verse_0xF6781F99__L_2fEpicGames_2ecom_2fTemporary_2fDiagnostics_2fscreen__log_N_RPrintCallStack_L_N_L_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R_M_N_L_QDuration_Nfloat_20_3d_20_2e_2e_2e_R_M_N_L_QColor_Ncolor_20_3d_20_2e_2e_2e_R_R; // 0x34(0x0c)

	void _L_2fEpicGames_2ecom_2fTemporary_2fDiagnostics_2fscreen__log_N_RPrintCallStack_L_N_L_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R_M_N_L_QDuration_Nfloat_20_3d_20_2e_2e_2e_R_M_N_L_QColor_Ncolor_20_3d_20_2e_2e_2e_R_R(struct Ftuple_L_QLevel_Nlog__level_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R __verse_0xB2CDDD72_Argument); // Function UnrealEngineExperimental.screen_log._L_2fEpicGames_2ecom_2fTemporary_2fDiagnostics_2fscreen__log_N_RPrintCallStack_L_N_L_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R_M_N_L_QDuration_Nfloat_20_3d_20_2e_2e_2e_R_M_N_L_QColor_Ncolor_20_3d_20_2e_2e_2e_R_R // (Native|Public|BlueprintCallable) // @ game+0x63731e8
	void _L_2fEpicGames_2ecom_2fTemporary_2fDiagnostics_2fscreen__log_N_RPrint_L_N_Kchar_M_N_L_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R_M_N_L_QDuration_Nfloat_20_3d_20_2e_2e_2e_R_M_N_L_QColor_Ncolor_20_3d_20_2e_2e_2e_R_R(struct Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R __verse_0xB2CDDD72_Argument); // Function UnrealEngineExperimental.screen_log._L_2fEpicGames_2ecom_2fTemporary_2fDiagnostics_2fscreen__log_N_RPrint_L_N_Kchar_M_N_L_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R_M_N_L_QDuration_Nfloat_20_3d_20_2e_2e_2e_R_M_N_L_QColor_Ncolor_20_3d_20_2e_2e_2e_R_R // (Native|Public|BlueprintCallable) // @ game+0x63731f0
	void $InitInstance(); // Function UnrealEngineExperimental.screen_log.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function UnrealEngineExperimental.screen_log.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function UnrealEngineExperimental.screen_log.$InitCDO // (HasDefaults) // @ game+0xd67374
};

