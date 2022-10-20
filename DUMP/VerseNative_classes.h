// VerseClass VerseNative.$SolarisSignatureFunctionOuter
// Size: 0x28 (Inherited: 0x28)
struct U$SolarisSignatureFunctionOuter : UObject {
};

// VerseClass VerseNative.mind
// Size: 0x60 (Inherited: 0x28)
struct Umind : UObject {
	char pad_28[0xc]; // 0x28(0x0c)
	struct FDelegate __verse_0xE74E38D8__L_2fVerse_2eorg_2fConcurrency_2fmind_N_RCancelAll; // 0x34(0x0c)
	struct FDelegate __verse_0x54B91EA0__L_2fVerse_2eorg_2fConcurrency_2fmind_N_RGetNumActive; // 0x28(0x0c)
	char pad_4C[0x14]; // 0x4c(0x14)

	int64_t _L_2fVerse_2eorg_2fConcurrency_2fmind_N_RGetNumActive(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNative.mind._L_2fVerse_2eorg_2fConcurrency_2fmind_N_RGetNumActive // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5f74a98
	void _L_2fVerse_2eorg_2fConcurrency_2fmind_N_RCancelAll(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNative.mind._L_2fVerse_2eorg_2fConcurrency_2fmind_N_RCancelAll // (Native|Public|BlueprintCallable) // @ game+0x5f74a90
	void $InitInstance(); // Function VerseNative.mind.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseNative.mind.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseNative.mind.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseNative.Native
// Size: 0x28 (Inherited: 0x28)
struct UNative : UObject {

	void $InitCDO(); // Function VerseNative.Native.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseNative.task(:type)
// Size: 0x120 (Inherited: 0x28)
struct Utask(:type) : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct FDelegate __verse_0xEAAABF76__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_L_Ntype_R_N_RActive; // 0x38(0x0c)
	char pad_44[0x54]; // 0x44(0x54)
	struct FDelegate __verse_0x8DE7DBE5_Await; // 0x98(0x0c)
	struct FDelegate __verse_0xF805D512__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_L_Ntype_R_N_RCancel; // 0xa4(0x0c)
	struct FDelegate __verse_0x3F331A72__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_L_Ntype_R_N_RCancelled; // 0x5c(0x0c)
	struct FDelegate __verse_0x1A183C93__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_L_Ntype_R_N_RCancelling; // 0x50(0x0c)
	struct FDelegate __verse_0x4EB939D2__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_L_Ntype_R_N_RCompleted; // 0x44(0x0c)
	struct FDelegate __verse_0x40AA5550__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_L_Ntype_R_N_RInterrupted; // 0x8c(0x0c)
	struct FDelegate __verse_0x3CA05D83__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_L_Ntype_R_N_RSettled; // 0x74(0x0c)
	struct FDelegate __verse_0x6BEC9E9A__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_L_Ntype_R_N_RUninterrupted; // 0x80(0x0c)
	struct FDelegate __verse_0xEDD320B0__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_L_Ntype_R_N_RUnsettled; // 0x68(0x0c)
	char pad_104[0x1c]; // 0x104(0x1c)

	OptionProperty _L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_L_Ntype_R_N_RUnsettled(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNative.task(:type)._L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_L_Ntype_R_N_RUnsettled // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5c3bba8
	OptionProperty _L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_L_Ntype_R_N_RUninterrupted(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNative.task(:type)._L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_L_Ntype_R_N_RUninterrupted // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5c3bba0
	OptionProperty _L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_L_Ntype_R_N_RSettled(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNative.task(:type)._L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_L_Ntype_R_N_RSettled // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5c3bb98
	OptionProperty _L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_L_Ntype_R_N_RInterrupted(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNative.task(:type)._L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_L_Ntype_R_N_RInterrupted // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5c3bb90
	OptionProperty _L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_L_Ntype_R_N_RCompleted(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNative.task(:type)._L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_L_Ntype_R_N_RCompleted // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5c3bb88
	OptionProperty _L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_L_Ntype_R_N_RCancelling(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNative.task(:type)._L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_L_Ntype_R_N_RCancelling // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5c3bb80
	OptionProperty _L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_L_Ntype_R_N_RCancelled(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNative.task(:type)._L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_L_Ntype_R_N_RCancelled // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5c3bb78
	void _L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_L_Ntype_R_N_RCancel(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNative.task(:type)._L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_L_Ntype_R_N_RCancel // (Native|Public|BlueprintCallable) // @ game+0x5c3bb70
	struct Utask(:type)* Await(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNative.task(:type).Await // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	OptionProperty _L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_L_Ntype_R_N_RActive(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseNative.task(:type)._L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_L_Ntype_R_N_RActive // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5c3bb68
	void $InitInstance(); // Function VerseNative.task(:type).$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseNative.task(:type).$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseNative.task(:type).$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseNative.task_task(:type)$Await
// Size: 0x140 (Inherited: 0x120)
struct Utask_task(:type)$Await : Utask(:type) {
	struct Utask(:type)* _Self; // 0x120(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	VerseDynamicProperty _RetVal; // 0x130(0x10)

	int64_t Update(); // Function VerseNative.task_task(:type)$Await.Update // (Native|Public|HasOutParms) // @ game+0x5c3bb00
};

