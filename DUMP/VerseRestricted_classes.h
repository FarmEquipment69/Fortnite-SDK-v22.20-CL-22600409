// VerseClass VerseRestricted.$SolarisSignatureFunctionOuter
// Size: 0x28 (Inherited: 0x28)
struct U$SolarisSignatureFunctionOuter : UObject {
};

// VerseClass VerseRestricted.disposable
// Size: 0x28 (Inherited: 0x28)
struct Udisposable : UObject {

	void _L_2fVerse_2eorg_2fRestricted_2fdisposable_N_RDispose(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseRestricted.disposable._L_2fVerse_2eorg_2fRestricted_2fdisposable_N_RDispose // (Public|BlueprintCallable) // @ game+0xd67374
};

// VerseClass VerseRestricted.event
// Size: 0x78 (Inherited: 0x28)
struct Uevent : UObject {
	struct FDelegate __verse_0xC6C563F3__L_2fVerse_2eorg_2fRestricted_2fevent_N_RGetWaitCount; // 0x28(0x0c)
	char pad_34[0xc]; // 0x34(0x0c)
	struct FDelegate __verse_0xA9894F4A__L_2fVerse_2eorg_2fRestricted_2fevent_N_RSignal; // 0x40(0x0c)
	struct FDelegate __verse_0x78D71541_Wait; // 0x34(0x0c)
	char pad_58[0x20]; // 0x58(0x20)

	struct Utask(:type)* Wait(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseRestricted.event.Wait // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	void _L_2fVerse_2eorg_2fRestricted_2fevent_N_RSignal(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseRestricted.event._L_2fVerse_2eorg_2fRestricted_2fevent_N_RSignal // (Native|Public|BlueprintCallable) // @ game+0x5f970b0
	int64_t _L_2fVerse_2eorg_2fRestricted_2fevent_N_RGetWaitCount(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseRestricted.event._L_2fVerse_2eorg_2fRestricted_2fevent_N_RGetWaitCount // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5f970a8
	void $InitInstance(); // Function VerseRestricted.event.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseRestricted.event.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseRestricted.event.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseRestricted.pulse_event
// Size: 0x78 (Inherited: 0x78)
struct Upulse_event : Uevent {

	struct Utask(:type)* Wait(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseRestricted.pulse_event.Wait // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	void _L_2fVerse_2eorg_2fRestricted_2fevent_N_RSignal(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseRestricted.pulse_event._L_2fVerse_2eorg_2fRestricted_2fevent_N_RSignal // (Native|Public|BlueprintCallable) // @ game+0x5f970b8
	void $InitInstance(); // Function VerseRestricted.pulse_event.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseRestricted.pulse_event.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseRestricted.pulse_event.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseRestricted.PulseEvent
// Size: 0x28 (Inherited: 0x28)
struct UPulseEvent : UObject {

	struct Upulse_event* _L_2fVerse_2eorg_2fRestricted_2fPulseEvent_N_RCreate(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseRestricted.PulseEvent._L_2fVerse_2eorg_2fRestricted_2fPulseEvent_N_RCreate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5f976f4
	void $InitCDO(); // Function VerseRestricted.PulseEvent.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseRestricted.sticky_event
// Size: 0x98 (Inherited: 0x78)
struct Usticky_event : Uevent {
	char pad_78[0xc]; // 0x78(0x0c)
	struct FDelegate __verse_0x9BB89A08__L_2fVerse_2eorg_2fRestricted_2fsticky__event_N_RClearSignal; // 0x84(0x0c)
	struct FDelegate __verse_0xA9A2B001__L_2fVerse_2eorg_2fRestricted_2fsticky__event_N_RIsSignaled; // 0x78(0x0c)

	struct Utask(:type)* Wait(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseRestricted.sticky_event.Wait // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	void _L_2fVerse_2eorg_2fRestricted_2fevent_N_RSignal(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseRestricted.sticky_event._L_2fVerse_2eorg_2fRestricted_2fevent_N_RSignal // (Native|Public|BlueprintCallable) // @ game+0x5f970c0
	char _L_2fVerse_2eorg_2fRestricted_2fsticky__event_N_RIsSignaled(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseRestricted.sticky_event._L_2fVerse_2eorg_2fRestricted_2fsticky__event_N_RIsSignaled // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5f970d0
	void _L_2fVerse_2eorg_2fRestricted_2fsticky__event_N_RClearSignal(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseRestricted.sticky_event._L_2fVerse_2eorg_2fRestricted_2fsticky__event_N_RClearSignal // (Native|Public|BlueprintCallable) // @ game+0x5f970c8
	void $InitInstance(); // Function VerseRestricted.sticky_event.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseRestricted.sticky_event.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseRestricted.sticky_event.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseRestricted.StickyEvent
// Size: 0x28 (Inherited: 0x28)
struct UStickyEvent : UObject {

	struct Usticky_event* _L_2fVerse_2eorg_2fRestricted_2fStickyEvent_N_RCreate(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseRestricted.StickyEvent._L_2fVerse_2eorg_2fRestricted_2fStickyEvent_N_RCreate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5f976fc
	void $InitCDO(); // Function VerseRestricted.StickyEvent.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseRestricted.task_event$Wait
// Size: 0x129 (Inherited: 0x120)
struct Utask_event$Wait : Utask(:type) {
	struct Uevent* _Self; // 0x120(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x128(0x01)

	int64_t Update(); // Function VerseRestricted.task_event$Wait.Update // (Native|Public|HasOutParms) // @ game+0x5f97098
};

// VerseClass VerseRestricted.task_pulse_event$Wait
// Size: 0x129 (Inherited: 0x120)
struct Utask_pulse_event$Wait : Utask(:type) {
	struct Upulse_event* _Self; // 0x120(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x128(0x01)

	int64_t Update(); // Function VerseRestricted.task_pulse_event$Wait.Update // (Native|Public|HasOutParms) // @ game+0x5f97098
};

// VerseClass VerseRestricted.task_sticky_event$Wait
// Size: 0x129 (Inherited: 0x120)
struct Utask_sticky_event$Wait : Utask(:type) {
	struct Usticky_event* _Self; // 0x120(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x128(0x01)

	int64_t Update(); // Function VerseRestricted.task_sticky_event$Wait.Update // (Native|Public|HasOutParms) // @ game+0x5f970a0
};

