// VerseClass VerseAIBase.$SolarisSignatureFunctionOuter
// Size: 0x28 (Inherited: 0x28)
struct U$SolarisSignatureFunctionOuter : UObject {
};

// VerseClass VerseAIBase.ai_component
// Size: 0xf8 (Inherited: 0xd8)
struct Uai_component : UAIComponentBase {
	struct FDelegate __verse_0xA043FAF9_Idle_L_Nfloat_R; // 0xd8(0x0c)
	struct FDelegate __verse_0x7A73EB9F__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fai__component_N_RSwitchTeam_L_Nint_R; // 0xe4(0x0c)
	char pad_F0[0x8]; // 0xf0(0x08)

	void _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fai__component_N_RSwitchTeam_L_Nint_R(int64_t __verse_0xB2CDDD72_Argument); // Function VerseAIBase.ai_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fai__component_N_RSwitchTeam_L_Nint_R // (Native|Public|BlueprintCallable) // @ game+0x65100d8
	struct Utask(:type)* Idle_L_Nfloat_R(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, double __verse_0xB2CDDD72_Argument); // Function VerseAIBase.ai_component.Idle_L_Nfloat_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	void $InitInstance(); // Function VerseAIBase.ai_component.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseAIBase.ai_component.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseAIBase.ai_component.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseAIBase.health_component
// Size: 0x78 (Inherited: 0x60)
struct Uhealth_component : UEntityActorHealthComponent {
	char pad_60[0xc]; // 0x60(0x0c)
	struct FDelegate __verse_0x17C808A4__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fhealth__component_N_RIsDBNO; // 0x6c(0x0c)
	struct FDelegate __verse_0xA5A2C49F__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fhealth__component_N_RIsDead; // 0x60(0x0c)

	char _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fhealth__component_N_RIsDead(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.health_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fhealth__component_N_RIsDead // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x65130b0
	char _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fhealth__component_N_RIsDBNO(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAIBase.health_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fhealth__component_N_RIsDBNO // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x65130a8
	void $InitInstance(); // Function VerseAIBase.health_component.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseAIBase.health_component.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseAIBase.health_component.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseAIBase.task_ai_component$Idle_L_Nfloat_R
// Size: 0x130 (Inherited: 0x120)
struct Utask_ai_component$Idle_L_Nfloat_R : Utask(:type) {
	struct Uai_component* _Self; // 0x120(0x08)
	double __verse_0xB2CDDD72_Argument; // 0x128(0x08)

	int64_t Update(); // Function VerseAIBase.task_ai_component$Idle_L_Nfloat_R.Update // (Native|Public|HasOutParms) // @ game+0x6510010
};

// VerseClass VerseAIBase.VerseAIBase
// Size: 0x28 (Inherited: 0x28)
struct UVerseAIBase : UObject {

	VerseStringProperty _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_RToString_L_Naction__result_R(enum class action_result __verse_0xB2CDDD72_Argument); // Function VerseAIBase.VerseAIBase._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_RToString_L_Naction__result_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	void $InitCDO(); // Function VerseAIBase.VerseAIBase.$InitCDO // (None) // @ game+0xd67374
};

