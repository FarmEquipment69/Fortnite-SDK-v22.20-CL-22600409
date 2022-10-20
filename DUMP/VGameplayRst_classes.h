// VerseClass VGameplayRst.$SolarisSignatureFunctionOuter
// Size: 0x28 (Inherited: 0x28)
struct U$SolarisSignatureFunctionOuter : UObject {
};

// VerseClass VGameplayRst.audio_component
// Size: 0xc8 (Inherited: 0xa0)
struct Uaudio_component : UAudioComponentBase {
	char pad_A0[0xc]; // 0xa0(0x0c)
	struct FDelegate __verse_0xB20D4566__L_2fVerse_2eorg_2fVGameplayRst_2fAudio_2faudio__component_N_RBeginSound; // 0xac(0x0c)
	struct FDelegate __verse_0xAEDC0ED8__L_2fVerse_2eorg_2fVGameplayRst_2fAudio_2faudio__component_N_REndSound; // 0xb8(0x0c)
	struct FDelegate __verse_0xC4FEA7C4__L_2fVerse_2eorg_2fVGameplayRst_2fAudio_2faudio__component_N_RSetSound_L_Nsound_R; // 0xa0(0x0c)

	void _L_2fVerse_2eorg_2fVGameplayRst_2fAudio_2faudio__component_N_RSetSound_L_Nsound_R(struct Usound* __verse_0xB2CDDD72_Argument); // Function VGameplayRst.audio_component._L_2fVerse_2eorg_2fVGameplayRst_2fAudio_2faudio__component_N_RSetSound_L_Nsound_R // (Native|Public|BlueprintCallable) // @ game+0x6368f74
	void _L_2fVerse_2eorg_2fVGameplayRst_2fAudio_2faudio__component_N_REndSound(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.audio_component._L_2fVerse_2eorg_2fVGameplayRst_2fAudio_2faudio__component_N_REndSound // (Native|Public|BlueprintCallable) // @ game+0x6368f6c
	void _L_2fVerse_2eorg_2fVGameplayRst_2fAudio_2faudio__component_N_RBeginSound(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.audio_component._L_2fVerse_2eorg_2fVGameplayRst_2fAudio_2faudio__component_N_RBeginSound // (Native|Public|BlueprintCallable) // @ game+0x6368f64
	void $InitInstance(); // Function VGameplayRst.audio_component.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VGameplayRst.audio_component.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VGameplayRst.audio_component.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VGameplayRst.collision_component
// Size: 0x268 (Inherited: 0x100)
struct Ucollision_component : UEntityActorCollisionComponent {
	char pad_100[0xa0]; // 0x100(0xa0)
	struct FDelegate __verse_0x8F6AA2E3__L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetCollisionProfileName; // 0x1a0(0x0c)
	char pad_1AC[0x84]; // 0x1ac(0x84)
	struct FDelegate __verse_0xBBF48134__L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetCollisionShapeMode; // 0x230(0x0c)
	struct FDelegate __verse_0xB37F8890__L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetEnabled; // 0x11c(0x0c)
	struct FDelegate __verse_0xA8BC7475__L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetGravityEnabled; // 0x158(0x0c)
	struct FDelegate __verse_0x68E48A7A__L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetMovable; // 0x1b8(0x0c)
	struct FDelegate __verse_0x6E928C19__L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetSendHitEventsOnCollide; // 0x170(0x0c)
	struct FDelegate __verse_0x6016499E__L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetSendOverlapEvents; // 0x188(0x0c)
	struct FDelegate __verse_0x38201582__L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetUseContinuousCollisionDetection; // 0x1d0(0x0c)
	struct FDelegate __verse_0x41241E63__L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetBoxCollisionShapeMode_L_Nvector3_R; // 0x20c(0x0c)
	struct FDelegate __verse_0xE4563361__L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetCapsuleCollisionShapeMode_L_Nfloat_M_Nfloat_R; // 0x218(0x0c)
	struct FDelegate __verse_0x651477CF__L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetCollisionProfileName_L_N_Kchar_R; // 0x194(0x0c)
	struct FDelegate __verse_0xEBE5EE12__L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetCustomDegreeOfFreedomConstrain_L_Nvector3_R; // 0x1e8(0x0c)
	struct FDelegate __verse_0x44E41EDE__L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetDegreeOfFreedomContraint_L_Ndof__movement__mode_R; // 0x1dc(0x0c)
	struct FDelegate __verse_0x568A1965__L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetEnabled_L_Nlogic_R; // 0x110(0x0c)
	struct FDelegate __verse_0xE41FB43E__L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetGravityEnabled_L_Nlogic_R; // 0x14c(0x0c)
	struct FDelegate __verse_0xF2C2DBA0__L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetMeshCollisionShapeMode_L_Nstatic__mesh_R; // 0x200(0x0c)
	struct FDelegate __verse_0x12565597__L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetMeshCollisionShapeMode; // 0x1f4(0x0c)
	struct FDelegate __verse_0xC63A047C__L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetMovable_L_Nlogic_R; // 0x1ac(0x0c)
	struct FDelegate __verse_0x29A50530__L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetSendHitEventsOnCollide_L_Nlogic_R; // 0x164(0x0c)
	struct FDelegate __verse_0xB20B50B9__L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetSendOverlapEvents_L_Nlogic_R; // 0x17c(0x0c)
	struct FDelegate __verse_0x236A1AA6__L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetSphereCollisionShapeMode_L_Nfloat_R; // 0x224(0x0c)
	struct FDelegate __verse_0x83693EA8__L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetUseContinuousCollisionDetection_L_Nlogic_R; // 0x1c4(0x0c)
	struct FDelegate __verse_0x0947A18A_WaitBeginOverlap; // 0x134(0x0c)
	struct FDelegate __verse_0xCE395CCB_WaitEndOverlap; // 0x140(0x0c)
	struct FDelegate __verse_0xE0DC0F6A_WaitHit; // 0x128(0x0c)

	struct Utask(:type)* WaitHit(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.collision_component.WaitHit // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	struct Utask(:type)* WaitEndOverlap(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.collision_component.WaitEndOverlap // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	struct Utask(:type)* WaitBeginOverlap(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.collision_component.WaitBeginOverlap // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	void _L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetUseContinuousCollisionDetection_L_Nlogic_R(char __verse_0xB2CDDD72_Argument); // Function VGameplayRst.collision_component._L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetUseContinuousCollisionDetection_L_Nlogic_R // (Native|Public|BlueprintCallable) // @ game+0x636923c
	void _L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetSphereCollisionShapeMode_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function VGameplayRst.collision_component._L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetSphereCollisionShapeMode_L_Nfloat_R // (Native|Public|BlueprintCallable) // @ game+0x6369234
	void _L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetSendOverlapEvents_L_Nlogic_R(char __verse_0xB2CDDD72_Argument); // Function VGameplayRst.collision_component._L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetSendOverlapEvents_L_Nlogic_R // (Native|Public|BlueprintCallable) // @ game+0x636922c
	void _L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetSendHitEventsOnCollide_L_Nlogic_R(char __verse_0xB2CDDD72_Argument); // Function VGameplayRst.collision_component._L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetSendHitEventsOnCollide_L_Nlogic_R // (Native|Public|BlueprintCallable) // @ game+0x6369224
	void _L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetMovable_L_Nlogic_R(char __verse_0xB2CDDD72_Argument); // Function VGameplayRst.collision_component._L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetMovable_L_Nlogic_R // (Native|Public|BlueprintCallable) // @ game+0x636921c
	void _L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetMeshCollisionShapeMode(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.collision_component._L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetMeshCollisionShapeMode // (Native|Public|BlueprintCallable) // @ game+0x6369214
	void _L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetMeshCollisionShapeMode_L_Nstatic__mesh_R(struct Ustatic_mesh* __verse_0xB2CDDD72_Argument); // Function VGameplayRst.collision_component._L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetMeshCollisionShapeMode_L_Nstatic__mesh_R // (Native|Public|BlueprintCallable) // @ game+0x636920c
	void _L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetGravityEnabled_L_Nlogic_R(char __verse_0xB2CDDD72_Argument); // Function VGameplayRst.collision_component._L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetGravityEnabled_L_Nlogic_R // (Native|Public|BlueprintCallable) // @ game+0x6369204
	void _L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetEnabled_L_Nlogic_R(char __verse_0xB2CDDD72_Argument); // Function VGameplayRst.collision_component._L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetEnabled_L_Nlogic_R // (Native|Public|BlueprintCallable) // @ game+0x6369064
	void _L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetDegreeOfFreedomContraint_L_Ndof__movement__mode_R(enum class dof_movement_mode __verse_0xB2CDDD72_Argument); // Function VGameplayRst.collision_component._L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetDegreeOfFreedomContraint_L_Ndof__movement__mode_R // (Native|Public|BlueprintCallable) // @ game+0x63691fc
	void _L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetCustomDegreeOfFreedomConstrain_L_Nvector3_R(struct Fvector3 __verse_0xB2CDDD72_Argument); // Function VGameplayRst.collision_component._L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetCustomDegreeOfFreedomConstrain_L_Nvector3_R // (Native|Public|BlueprintCallable) // @ game+0x63691f4
	void _L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetCollisionProfileName_L_N_Kchar_R(VerseStringProperty __verse_0xB2CDDD72_Argument); // Function VGameplayRst.collision_component._L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetCollisionProfileName_L_N_Kchar_R // (Native|Public|BlueprintCallable) // @ game+0x63691ec
	void _L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetCapsuleCollisionShapeMode_L_Nfloat_M_Nfloat_R(struct Ftuple_Lfloat_Mfloat_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.collision_component._L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetCapsuleCollisionShapeMode_L_Nfloat_M_Nfloat_R // (Native|Public|BlueprintCallable) // @ game+0x63691e4
	void _L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetBoxCollisionShapeMode_L_Nvector3_R(struct Fvector3 __verse_0xB2CDDD72_Argument); // Function VGameplayRst.collision_component._L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetBoxCollisionShapeMode_L_Nvector3_R // (Native|Public|BlueprintCallable) // @ game+0x63691dc
	char _L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetUseContinuousCollisionDetection(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.collision_component._L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetUseContinuousCollisionDetection // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63691d4
	char _L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetSendOverlapEvents(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.collision_component._L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetSendOverlapEvents // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63691cc
	char _L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetSendHitEventsOnCollide(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.collision_component._L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetSendHitEventsOnCollide // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63691c4
	char _L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetMovable(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.collision_component._L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetMovable // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63691bc
	char _L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetGravityEnabled(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.collision_component._L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetGravityEnabled // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63691b4
	char _L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetEnabled(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.collision_component._L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetEnabled // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63691ac
	enum class collision_shape_mode _L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetCollisionShapeMode(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.collision_component._L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetCollisionShapeMode // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63691a4
	VerseStringProperty _L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetCollisionProfileName(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.collision_component._L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetCollisionProfileName // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x636919c
	void $InitInstance(); // Function VGameplayRst.collision_component.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VGameplayRst.collision_component.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VGameplayRst.collision_component.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VGameplayRst.datastore_component
// Size: 0x228 (Inherited: 0x228)
struct Udatastore_component : UDatastoreComponentBase {

	void $InitInstance(); // Function VGameplayRst.datastore_component.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VGameplayRst.datastore_component.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VGameplayRst.datastore_component.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VGameplayRst.DatastoreComponent
// Size: 0x28 (Inherited: 0x28)
struct UDatastoreComponent : UObject {

	void _L_2fVerse_2eorg_2fVGameplayRst_2fDatastore_2fDatastoreComponent_N_RSetDatastoreValueInt_L_Nplayer__component_M_N_Kchar_M_Nint_R(struct Ftuple_Lplayer__component_M_Kchar_Mint_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.DatastoreComponent._L_2fVerse_2eorg_2fVGameplayRst_2fDatastore_2fDatastoreComponent_N_RSetDatastoreValueInt_L_Nplayer__component_M_N_Kchar_M_Nint_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6368fec
	void _L_2fVerse_2eorg_2fVGameplayRst_2fDatastore_2fDatastoreComponent_N_RSetDatastoreValue_L_Nplayer__component_M_N_Kchar_M_N_Kchar_R(struct Ftuple_Lplayer__component_M_Kchar_M_Kchar_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.DatastoreComponent._L_2fVerse_2eorg_2fVGameplayRst_2fDatastore_2fDatastoreComponent_N_RSetDatastoreValue_L_Nplayer__component_M_N_Kchar_M_N_Kchar_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6368ff4
	void _L_2fVerse_2eorg_2fVGameplayRst_2fDatastore_2fDatastoreComponent_N_RClearAllDatastoreValues_L_Nplayer__component_R(struct Uplayer_component* __verse_0xB2CDDD72_Argument); // Function VGameplayRst.DatastoreComponent._L_2fVerse_2eorg_2fVGameplayRst_2fDatastore_2fDatastoreComponent_N_RClearAllDatastoreValues_L_Nplayer__component_R // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6368fe4
	void $InitCDO(); // Function VGameplayRst.DatastoreComponent.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VGameplayRst.debug_command_component
// Size: 0xd8 (Inherited: 0x60)
struct Udebug_command_component : UEntityComponent {
	struct FDelegate __verse_0xEAC1FE47___WaitForCommand_L_N_Kchar_R; // 0x60(0x0c)
	char pad_6C[0x6c]; // 0x6c(0x6c)

	struct Utask(:type)* __WaitForCommand_L_N_Kchar_R(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, VerseStringProperty __verse_0xB2CDDD72_Argument); // Function VGameplayRst.debug_command_component.__WaitForCommand_L_N_Kchar_R // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	void $InitInstance(); // Function VGameplayRst.debug_command_component.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VGameplayRst.debug_command_component.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VGameplayRst.debug_command_component.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VGameplayRst.dynamic_activation_component
// Size: 0x118 (Inherited: 0xb8)
struct Udynamic_activation_component : UEntityDynamicActivationComponent {
	struct FDelegate __verse_0x281F1350__L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RBeginTransition_L_Nfloat_M_Nactivation__state_R; // 0xb8(0x0c)
	char pad_C4[0xc]; // 0xc4(0x0c)
	struct FDelegate __verse_0x053E5642__L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RLinkComponent_L_Ncomponent_R; // 0xd0(0x0c)
	struct FDelegate __verse_0xB04BDE6C__L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RReset; // 0xc4(0x0c)
	struct FDelegate __verse_0x0CBA748C__L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RUnlinkComponent_L_Ncomponent_R; // 0xdc(0x0c)
	struct FDelegate __verse_0xA7099383_WaitForTransitionBegin; // 0xe8(0x0c)
	struct FDelegate __verse_0x25AD5386_WaitForTransitionComplete; // 0xf4(0x0c)
	char pad_10C[0xc]; // 0x10c(0x0c)

	struct Utask(:type)* WaitForTransitionComplete(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.dynamic_activation_component.WaitForTransitionComplete // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	struct Utask(:type)* WaitForTransitionBegin(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.dynamic_activation_component.WaitForTransitionBegin // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	void _L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RUnlinkComponent_L_Ncomponent_R(struct UEntityComponent* __verse_0xB2CDDD72_Argument); // Function VGameplayRst.dynamic_activation_component._L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RUnlinkComponent_L_Ncomponent_R // (Native|Public|BlueprintCallable) // @ game+0x6368f94
	void _L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RReset(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.dynamic_activation_component._L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RReset // (Native|Public|BlueprintCallable) // @ game+0x6368f8c
	void _L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RLinkComponent_L_Ncomponent_R(struct UEntityComponent* __verse_0xB2CDDD72_Argument); // Function VGameplayRst.dynamic_activation_component._L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RLinkComponent_L_Ncomponent_R // (Native|Public|BlueprintCallable) // @ game+0x6368f84
	void _L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RBeginTransition_L_Nfloat_M_Nactivation__state_R(struct Ftuple_Lfloat_Mactivation__state_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.dynamic_activation_component._L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RBeginTransition_L_Nfloat_M_Nactivation__state_R // (Native|Public|BlueprintCallable) // @ game+0x6368f7c
	void $InitInstance(); // Function VGameplayRst.dynamic_activation_component.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VGameplayRst.dynamic_activation_component.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VGameplayRst.dynamic_activation_component.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VGameplayRst.EntityUtil
// Size: 0x28 (Inherited: 0x28)
struct UEntityUtil : UObject {

	int64_t _L_2fVerse_2eorg_2fVGameplayRst_2fEntityUtil_N_RSpawnEntityFromAsset_L_N_Kchar_M_Ntransform_M_N_Kchar_R(struct Ftuple_L_Kchar_Mtransform_M_Kchar_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.EntityUtil._L_2fVerse_2eorg_2fVGameplayRst_2fEntityUtil_N_RSpawnEntityFromAsset_L_N_Kchar_M_Ntransform_M_N_Kchar_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x636901c
	int64_t _L_2fVerse_2eorg_2fVGameplayRst_2fEntityUtil_N_RSpawnEmptyEntity_L_Ntransform_M_N_Kchar_R(struct Ftuple_Ltransform_M_Kchar_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.EntityUtil._L_2fVerse_2eorg_2fVGameplayRst_2fEntityUtil_N_RSpawnEmptyEntity_L_Ntransform_M_N_Kchar_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6369014
	OptionProperty _L_2fVerse_2eorg_2fVGameplayRst_2fEntityUtil_N_RGetComponentOfTypeFromComponentForEntity_L_Ncomponent_M_Nint_M_Ntype_R(struct Ftuple_Lcomponent_Mint_Mtype_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.EntityUtil._L_2fVerse_2eorg_2fVGameplayRst_2fEntityUtil_N_RGetComponentOfTypeFromComponentForEntity_L_Ncomponent_M_Nint_M_Ntype_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6369004
	OptionProperty _L_2fVerse_2eorg_2fVGameplayRst_2fEntityUtil_N_RGetComponentOfTypeFromComponent_L_Ncomponent_M_Ntype_R(struct Ftuple_Lcomponent_Mtype_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.EntityUtil._L_2fVerse_2eorg_2fVGameplayRst_2fEntityUtil_N_RGetComponentOfTypeFromComponent_L_Ncomponent_M_Ntype_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x636900c
	struct UEntityComponent* _L_2fVerse_2eorg_2fVGameplayRst_2fEntityUtil_N_RCreateAndAddComponent_L_Nint_M_Nsubtype_Lcomponent_R_R(struct Ftuple_Lint_Msubtype_Lcomponent_R_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.EntityUtil._L_2fVerse_2eorg_2fVGameplayRst_2fEntityUtil_N_RCreateAndAddComponent_L_Nint_M_Nsubtype_Lcomponent_R_R // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6368ffc
	void $InitCDO(); // Function VGameplayRst.EntityUtil.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VGameplayRst.fixed_mesh_component
// Size: 0x110 (Inherited: 0xa8)
struct Ufixed_mesh_component : UEntityActorStaticMeshRenderComponent {
	char pad_A8[0x54]; // 0xa8(0x54)
	struct FDelegate __verse_0xAEB3C75B__L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RIsVisible; // 0xfc(0x0c)
	struct FDelegate __verse_0x3AE27127__L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetAsRootComponent_L_Nlogic_M_Nlogic_R; // 0xcc(0x0c)
	struct FDelegate __verse_0x2CD00368__L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetDefaultStaticMesh_L_Ndefault__mesh__type_R; // 0xb4(0x0c)
	struct FDelegate __verse_0x265158B6__L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetEnableCollision_L_Ncollision__type_R; // 0xc0(0x0c)
	struct FDelegate __verse_0x64535383__L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetMaterial_L_Nmaterial_R; // 0xd8(0x0c)
	struct FDelegate __verse_0xD0BC9610__L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetMaterialAtIndex_L_Nmaterial_M_Nint_R; // 0xe4(0x0c)
	struct FDelegate __verse_0xB4297053__L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetStaticMesh_L_Nstatic__mesh_R; // 0xa8(0x0c)
	struct FDelegate __verse_0x774D897A__L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetVisibility_L_Nlogic_R; // 0xf0(0x0c)

	void _L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetVisibility_L_Nlogic_R(char __verse_0xB2CDDD72_Argument); // Function VGameplayRst.fixed_mesh_component._L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetVisibility_L_Nlogic_R // (Native|Public|BlueprintCallable) // @ game+0x636905c
	void _L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetStaticMesh_L_Nstatic__mesh_R(struct Ustatic_mesh* __verse_0xB2CDDD72_Argument); // Function VGameplayRst.fixed_mesh_component._L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetStaticMesh_L_Nstatic__mesh_R // (Native|Public|BlueprintCallable) // @ game+0x6369054
	void _L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetMaterialAtIndex_L_Nmaterial_M_Nint_R(struct Ftuple_Lmaterial_Mint_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.fixed_mesh_component._L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetMaterialAtIndex_L_Nmaterial_M_Nint_R // (Native|Public|BlueprintCallable) // @ game+0x6369044
	void _L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetMaterial_L_Nmaterial_R(struct UMaterial* __verse_0xB2CDDD72_Argument); // Function VGameplayRst.fixed_mesh_component._L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetMaterial_L_Nmaterial_R // (Native|Public|BlueprintCallable) // @ game+0x636904c
	void _L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetEnableCollision_L_Ncollision__type_R(enum class collision_type __verse_0xB2CDDD72_Argument); // Function VGameplayRst.fixed_mesh_component._L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetEnableCollision_L_Ncollision__type_R // (Native|Public|BlueprintCallable) // @ game+0x636903c
	void _L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetDefaultStaticMesh_L_Ndefault__mesh__type_R(enum class default_mesh_type __verse_0xB2CDDD72_Argument); // Function VGameplayRst.fixed_mesh_component._L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetDefaultStaticMesh_L_Ndefault__mesh__type_R // (Native|Public|BlueprintCallable) // @ game+0x6369034
	void _L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetAsRootComponent_L_Nlogic_M_Nlogic_R(struct Ftuple_Llogic_Mlogic_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.fixed_mesh_component._L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetAsRootComponent_L_Nlogic_M_Nlogic_R // (Native|Public|BlueprintCallable) // @ game+0x636902c
	char _L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RIsVisible(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.fixed_mesh_component._L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RIsVisible // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6369024
	void $InitInstance(); // Function VGameplayRst.fixed_mesh_component.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VGameplayRst.fixed_mesh_component.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VGameplayRst.fixed_mesh_component.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VGameplayRst.GameObjects
// Size: 0x28 (Inherited: 0x28)
struct UGameObjects : UObject {

	OptionProperty _L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_N_RCreateWorldAnchor_L_Nvector3_R(struct Fvector3 __verse_0xB2CDDD72_Argument); // Function VGameplayRst.GameObjects._L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_N_RCreateWorldAnchor_L_Nvector3_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	OptionProperty _L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_N_RCreateWorldAnchor_L_Ntag_R(struct Utag* __verse_0xB2CDDD72_Argument); // Function VGameplayRst.GameObjects._L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_N_RCreateWorldAnchor_L_Ntag_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	OptionProperty _L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_N_RCreateWorldAnchor_L_Nentity_R(struct UEntity* __verse_0xB2CDDD72_Argument); // Function VGameplayRst.GameObjects._L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_N_RCreateWorldAnchor_L_Nentity_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	OptionProperty _L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_N_RCreateWorldAnchor_L_Nvector3_M_N_Kchar_R(struct Ftuple_Lvector3_M_Kchar_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.GameObjects._L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_N_RCreateWorldAnchor_L_Nvector3_M_N_Kchar_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	OptionProperty _L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_N_Ksubtype_Lcomponent_R_M_Nvector3_M_Nrotation_M_Nvector3_M_N_Kchar_M_Nstatic__mesh_M_Nmaterial_R(struct Ftuple_L_Ksubtype_Lcomponent_R_Mvector3_Mrotation_Mvector3_M_Kchar_Mstatic__mesh_Mmaterial_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.GameObjects._L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_N_Ksubtype_Lcomponent_R_M_Nvector3_M_Nrotation_M_Nvector3_M_N_Kchar_M_Nstatic__mesh_M_Nmaterial_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	OptionProperty _L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nvector3_M_Nrotation_M_Nvector3_M_N_Kchar_M_Nstatic__mesh_M_Nmaterial_R(struct Ftuple_Lvector3_Mrotation_Mvector3_M_Kchar_Mstatic__mesh_Mmaterial_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.GameObjects._L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nvector3_M_Nrotation_M_Nvector3_M_N_Kchar_M_Nstatic__mesh_M_Nmaterial_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	OptionProperty _L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nvector3_M_Nrotation_M_N_Kchar_M_Nstatic__mesh_M_Nmaterial_R(struct Ftuple_Lvector3_Mrotation_M_Kchar_Mstatic__mesh_Mmaterial_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.GameObjects._L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nvector3_M_Nrotation_M_N_Kchar_M_Nstatic__mesh_M_Nmaterial_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	OptionProperty _L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nvector3_M_N_Kchar_M_Nstatic__mesh_M_Nmaterial_R(struct Ftuple_Lvector3_M_Kchar_Mstatic__mesh_Mmaterial_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.GameObjects._L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nvector3_M_N_Kchar_M_Nstatic__mesh_M_Nmaterial_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	OptionProperty _L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_N_Ksubtype_Lcomponent_R_M_Ntransform_M_N_Kchar_M_Nstatic__mesh_M_Nmaterial_R(struct Ftuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mstatic__mesh_Mmaterial_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.GameObjects._L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_N_Ksubtype_Lcomponent_R_M_Ntransform_M_N_Kchar_M_Nstatic__mesh_M_Nmaterial_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	OptionProperty _L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Ntransform_M_N_Kchar_M_Nstatic__mesh_M_Nmaterial_R(struct Ftuple_Ltransform_M_Kchar_Mstatic__mesh_Mmaterial_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.GameObjects._L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Ntransform_M_N_Kchar_M_Nstatic__mesh_M_Nmaterial_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	OptionProperty _L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_N_Ksubtype_Lcomponent_R_M_Ntransform_M_N_Kchar_M_Nstatic__mesh_R(struct Ftuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mstatic__mesh_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.GameObjects._L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_N_Ksubtype_Lcomponent_R_M_Ntransform_M_N_Kchar_M_Nstatic__mesh_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	OptionProperty _L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Ntransform_M_N_Kchar_M_Nstatic__mesh_R(struct Ftuple_Ltransform_M_Kchar_Mstatic__mesh_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.GameObjects._L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Ntransform_M_N_Kchar_M_Nstatic__mesh_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	OptionProperty _L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nentity_M_N_Ksubtype_Lcomponent_R_R(struct Ftuple_Lentity_M_Ksubtype_Lcomponent_R_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.GameObjects._L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nentity_M_N_Ksubtype_Lcomponent_R_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	OptionProperty _L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Ntag_R(struct Utag* __verse_0xB2CDDD72_Argument); // Function VGameplayRst.GameObjects._L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Ntag_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	OptionProperty _L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nentity_R(struct UEntity* __verse_0xB2CDDD72_Argument); // Function VGameplayRst.GameObjects._L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nentity_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	OptionProperty _L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_N_RCreateImmutableModel_L_Nentity_R(struct UEntity* __verse_0xB2CDDD72_Argument); // Function VGameplayRst.GameObjects._L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_N_RCreateImmutableModel_L_Nentity_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	OptionProperty _L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_N_RCreateImmutableModel_L_Ntag_R(struct Utag* __verse_0xB2CDDD72_Argument); // Function VGameplayRst.GameObjects._L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_N_RCreateImmutableModel_L_Ntag_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	OptionProperty _L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_N_RCreateImmutableModel_L_Nentity_M_N_Ksubtype_Lcomponent_R_R(struct Ftuple_Lentity_M_Ksubtype_Lcomponent_R_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.GameObjects._L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_N_RCreateImmutableModel_L_Nentity_M_N_Ksubtype_Lcomponent_R_R // (Final|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	void $InitCDO(); // Function VGameplayRst.GameObjects.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VGameplayRst.immutable_model
// Size: 0xb8 (Inherited: 0x28)
struct Uimmutable_model : UObject {
	struct UEntity* __verse_0xC79F2B5D_InternalObject; // 0x28(0x08)
	struct Ucollision_component* __verse_0x42159B8D_CollisionComp; // 0x30(0x08)
	struct Ufixed_mesh_component* __verse_0xA6788863_MeshComp; // 0x38(0x08)
	struct Uposition_component* __verse_0x325D2C22_PositionComp; // 0x40(0x08)
	struct Urotation_component* __verse_0xF3C6D2D3_RotationComp; // 0x48(0x08)
	struct Uscale_component* __verse_0x1A7B631A_ScaleComp; // 0x50(0x08)
	struct FDelegate __verse_0x20322D5C__L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_2fimmutable__model_N_RGetTransform; // 0x58(0x0c)
	struct FDelegate __verse_0xDA03C5FA__L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_2fimmutable__model_N_RIsVisible; // 0x64(0x0c)
	struct FDelegate __verse_0x03717667__L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition; // 0x70(0x0c)
	struct FDelegate __verse_0xB949A9F7__L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RForwardVector; // 0x7c(0x0c)
	struct FDelegate __verse_0x8320D012__L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RRightVector; // 0x88(0x0c)
	struct FDelegate __verse_0x9112A39D__L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RRotation; // 0x94(0x0c)
	struct FDelegate __verse_0x9DD169CD__L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RUpVector; // 0xa0(0x0c)
	struct FDelegate __verse_0x44D08A7C__L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fscalable_N_RGetScale; // 0xac(0x0c)

	struct Fvector3 _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RUpVector(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.immutable_model._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RUpVector // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	struct FVerseRotation _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RRotation(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.immutable_model._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RRotation // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	struct Fvector3 _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RRightVector(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.immutable_model._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RRightVector // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	char _L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_2fimmutable__model_N_RIsVisible(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.immutable_model._L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_2fimmutable__model_N_RIsVisible // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	struct FTransform _L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_2fimmutable__model_N_RGetTransform(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.immutable_model._L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_2fimmutable__model_N_RGetTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	struct Fvector3 _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fscalable_N_RGetScale(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.immutable_model._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fscalable_N_RGetScale // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	struct Fvector3 _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.immutable_model._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	struct Fvector3 _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RForwardVector(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.immutable_model._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RForwardVector // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	void $InitInstance(); // Function VGameplayRst.immutable_model.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VGameplayRst.immutable_model.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VGameplayRst.immutable_model.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VGameplayRst.level_streaming_component
// Size: 0x150 (Inherited: 0x138)
struct Ulevel_streaming_component : UVerseLevelStreamingComponentBase {
	struct FDelegate __verse_0xACC90539__L_2fVerse_2eorg_2fVGameplayRst_2fLevelStreaming_2flevel__streaming__component_N_RRequestLoadLevel_L_Nlevel_M_Ntime__span_M_N_Kchar_R; // 0x138(0x0c)
	struct FDelegate __verse_0x395B5F4A__L_2fVerse_2eorg_2fVGameplayRst_2fLevelStreaming_2flevel__streaming__component_N_RRequestUnloadLevel_L_Ntime__span_M_N_Kchar_R; // 0x144(0x0c)

	OptionProperty _L_2fVerse_2eorg_2fVGameplayRst_2fLevelStreaming_2flevel__streaming__component_N_RRequestUnloadLevel_L_Ntime__span_M_N_Kchar_R(struct Ftuple_Ltime__span_M_Kchar_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.level_streaming_component._L_2fVerse_2eorg_2fVGameplayRst_2fLevelStreaming_2flevel__streaming__component_N_RRequestUnloadLevel_L_Ntime__span_M_N_Kchar_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63690d4
	OptionProperty _L_2fVerse_2eorg_2fVGameplayRst_2fLevelStreaming_2flevel__streaming__component_N_RRequestLoadLevel_L_Nlevel_M_Ntime__span_M_N_Kchar_R(struct Ftuple_Llevel_Mtime__span_M_Kchar_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.level_streaming_component._L_2fVerse_2eorg_2fVGameplayRst_2fLevelStreaming_2flevel__streaming__component_N_RRequestLoadLevel_L_Nlevel_M_Ntime__span_M_N_Kchar_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63690cc
	void $InitInstance(); // Function VGameplayRst.level_streaming_component.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VGameplayRst.level_streaming_component.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VGameplayRst.level_streaming_component.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VGameplayRst.Model
// Size: 0x13c (Inherited: 0x28)
struct UModel : UObject {
	struct UEntity* __verse_0xC79F2B5D_InternalObject; // 0x28(0x08)
	struct Ucollision_component* __verse_0x42159B8D_CollisionComp; // 0x30(0x08)
	struct Ufixed_mesh_component* __verse_0xA6788863_MeshComp; // 0x38(0x08)
	struct Uposition_component* __verse_0x325D2C22_PositionComp; // 0x40(0x08)
	struct Urotation_component* __verse_0xF3C6D2D3_RotationComp; // 0x48(0x08)
	struct Uscale_component* __verse_0x1A7B631A_ScaleComp; // 0x50(0x08)
	struct FDelegate __verse_0x048467CD__L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_2fmodel_N_RDestroy; // 0x58(0x0c)
	struct FDelegate __verse_0x4B7F2FFB__L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_2fmodel_N_RDisableCollision; // 0x64(0x0c)
	struct FDelegate __verse_0x208AE447__L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_2fmodel_N_REnableCollision; // 0x70(0x0c)
	struct FDelegate __verse_0xA178E855__L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_2fmodel_N_RGetTransform; // 0x7c(0x0c)
	struct FDelegate __verse_0x18521038__L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_2fmodel_N_RHide; // 0x88(0x0c)
	struct FDelegate __verse_0xA7F38BA4__L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_2fmodel_N_RIsVisible; // 0x94(0x0c)
	struct FDelegate __verse_0xBCE4A2FF__L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_2fmodel_N_RSetTransform_L_Ntransform_R; // 0xa0(0x0c)
	struct FDelegate __verse_0x168833B8__L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_2fmodel_N_RShow; // 0xac(0x0c)
	struct FDelegate __verse_0xFF83FBB4__L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__positionable_N_RSetPosition_L_Nvector3_R; // 0xb8(0x0c)
	struct FDelegate __verse_0xFF3DE201__L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RApplyAdditionalRotation_L_Nrotation_R; // 0xc4(0x0c)
	struct FDelegate __verse_0x8EB6E346__L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetForwardVectorFromXY_L_Nvector3_M_Nvector3_R; // 0xd0(0x0c)
	struct FDelegate __verse_0x23A37F37__L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetRotation_L_Nrotation_R; // 0xdc(0x0c)
	struct FDelegate __verse_0xE0EAAB2E__L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__scalable_N_RSetScale_L_Nvector3_R; // 0xe8(0x0c)
	struct FDelegate __verse_0x03717667__L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition; // 0xf4(0x0c)
	struct FDelegate __verse_0xB949A9F7__L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RForwardVector; // 0x100(0x0c)
	struct FDelegate __verse_0x8320D012__L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RRightVector; // 0x10c(0x0c)
	struct FDelegate __verse_0x9112A39D__L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RRotation; // 0x118(0x0c)
	struct FDelegate __verse_0x9DD169CD__L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RUpVector; // 0x124(0x0c)
	struct FDelegate __verse_0x44D08A7C__L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fscalable_N_RGetScale; // 0x130(0x0c)

	struct Fvector3 _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RUpVector(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.Model._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RUpVector // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	void _L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_2fmodel_N_RShow(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.Model._L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_2fmodel_N_RShow // (Public|HasDefaults|BlueprintCallable) // @ game+0xd67374
	void _L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_2fmodel_N_RSetTransform_L_Ntransform_R(struct FTransform __verse_0xB2CDDD72_Argument); // Function VGameplayRst.Model._L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_2fmodel_N_RSetTransform_L_Ntransform_R // (Public|HasDefaults|BlueprintCallable) // @ game+0xd67374
	void _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__scalable_N_RSetScale_L_Nvector3_R(struct Fvector3 __verse_0xB2CDDD72_Argument); // Function VGameplayRst.Model._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__scalable_N_RSetScale_L_Nvector3_R // (Public|HasDefaults|BlueprintCallable) // @ game+0xd67374
	void _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetRotation_L_Nrotation_R(struct FVerseRotation __verse_0xB2CDDD72_Argument); // Function VGameplayRst.Model._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetRotation_L_Nrotation_R // (Public|HasDefaults|BlueprintCallable) // @ game+0xd67374
	void _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__positionable_N_RSetPosition_L_Nvector3_R(struct Fvector3 __verse_0xB2CDDD72_Argument); // Function VGameplayRst.Model._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__positionable_N_RSetPosition_L_Nvector3_R // (Public|HasDefaults|BlueprintCallable) // @ game+0xd67374
	void _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetForwardVectorFromXY_L_Nvector3_M_Nvector3_R(struct Ftuple_Lvector3_Mvector3_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.Model._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetForwardVectorFromXY_L_Nvector3_M_Nvector3_R // (Public|HasDefaults|BlueprintCallable) // @ game+0xd67374
	struct FVerseRotation _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RRotation(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.Model._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RRotation // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	struct Fvector3 _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RRightVector(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.Model._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RRightVector // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	char _L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_2fmodel_N_RIsVisible(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.Model._L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_2fmodel_N_RIsVisible // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	void _L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_2fmodel_N_RHide(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.Model._L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_2fmodel_N_RHide // (Public|HasDefaults|BlueprintCallable) // @ game+0xd67374
	struct FTransform _L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_2fmodel_N_RGetTransform(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.Model._L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_2fmodel_N_RGetTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	struct Fvector3 _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fscalable_N_RGetScale(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.Model._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fscalable_N_RGetScale // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	struct Fvector3 _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.Model._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	struct Fvector3 _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RForwardVector(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.Model._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RForwardVector // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	void _L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_2fmodel_N_REnableCollision(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.Model._L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_2fmodel_N_REnableCollision // (Public|HasDefaults|BlueprintCallable) // @ game+0xd67374
	void _L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_2fmodel_N_RDisableCollision(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.Model._L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_2fmodel_N_RDisableCollision // (Public|HasDefaults|BlueprintCallable) // @ game+0xd67374
	void _L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_2fmodel_N_RDestroy(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.Model._L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_2fmodel_N_RDestroy // (Public|HasDefaults|BlueprintCallable) // @ game+0xd67374
	void _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RApplyAdditionalRotation_L_Nrotation_R(struct FVerseRotation __verse_0xB2CDDD72_Argument); // Function VGameplayRst.Model._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RApplyAdditionalRotation_L_Nrotation_R // (Public|HasDefaults|BlueprintCallable) // @ game+0xd67374
	void $InitInstance(); // Function VGameplayRst.Model.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VGameplayRst.Model.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VGameplayRst.Model.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VGameplayRst.model_interface
// Size: 0x28 (Inherited: 0x28)
struct Umodel_interface : UObject {
};

// VerseClass VGameplayRst.mutable_model_interface
// Size: 0x28 (Inherited: 0x28)
struct Umutable_model_interface : UObject {
};

// VerseClass VGameplayRst.mutable_positionable
// Size: 0x28 (Inherited: 0x28)
struct Umutable_positionable : UObject {

	void _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__positionable_N_RSetPosition_L_Nvector3_R(struct Fvector3 __verse_0xB2CDDD72_Argument); // Function VGameplayRst.mutable_positionable._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__positionable_N_RSetPosition_L_Nvector3_R // (Public|BlueprintCallable) // @ game+0xd67374
};

// VerseClass VGameplayRst.mutable_rotatable
// Size: 0x28 (Inherited: 0x28)
struct Umutable_rotatable : UObject {

	void _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetRotation_L_Nrotation_R(struct FVerseRotation __verse_0xB2CDDD72_Argument); // Function VGameplayRst.mutable_rotatable._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetRotation_L_Nrotation_R // (Public|BlueprintCallable) // @ game+0xd67374
	void _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetForwardVectorFromXY_L_Nvector3_M_Nvector3_R(struct Ftuple_Lvector3_Mvector3_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.mutable_rotatable._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetForwardVectorFromXY_L_Nvector3_M_Nvector3_R // (Public|BlueprintCallable) // @ game+0xd67374
	void _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RApplyAdditionalRotation_L_Nrotation_R(struct FVerseRotation __verse_0xB2CDDD72_Argument); // Function VGameplayRst.mutable_rotatable._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RApplyAdditionalRotation_L_Nrotation_R // (Public|BlueprintCallable) // @ game+0xd67374
};

// VerseClass VGameplayRst.mutable_scalable
// Size: 0x28 (Inherited: 0x28)
struct Umutable_scalable : UObject {

	void _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__scalable_N_RSetScale_L_Nvector3_R(struct Fvector3 __verse_0xB2CDDD72_Argument); // Function VGameplayRst.mutable_scalable._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__scalable_N_RSetScale_L_Nvector3_R // (Public|BlueprintCallable) // @ game+0xd67374
};

// VerseClass VGameplayRst.overlap_result
// Size: 0x70 (Inherited: 0x28)
struct Uoverlap_result : UObject {
	int64_t __verse_0x592C3A0F_OtherEntityID; // 0x28(0x08)
	struct Ucollision_component* __verse_0x15DAA648_OtherComponent; // 0x30(0x08)
	char __verse_0xCDE15551_FromSweep : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct Fvector3 __verse_0x02291CB0_SweepHitNormal; // 0x40(0x18)
	struct Fvector3 __verse_0xF4E2A3DA_SweepHitLocation; // 0x58(0x18)

	void $InitInstance(); // Function VGameplayRst.overlap_result.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VGameplayRst.overlap_result.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VGameplayRst.overlap_result.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VGameplayRst.particle_system_component
// Size: 0xc8 (Inherited: 0xa0)
struct Uparticle_system_component : UParticleSystemComponentBase {
	char pad_A0[0xc]; // 0xa0(0x0c)
	struct FDelegate __verse_0xA1C32A20__L_2fVerse_2eorg_2fVGameplayRst_2fVFX_2fparticle__system__component_N_RActivate; // 0xac(0x0c)
	struct FDelegate __verse_0x1C6DAA58__L_2fVerse_2eorg_2fVGameplayRst_2fVFX_2fparticle__system__component_N_RDeactivate; // 0xb8(0x0c)
	struct FDelegate __verse_0xB4BBB82C__L_2fVerse_2eorg_2fVGameplayRst_2fVFX_2fparticle__system__component_N_RSetParticleSystem_L_Nparticle__system_R; // 0xa0(0x0c)

	void _L_2fVerse_2eorg_2fVGameplayRst_2fVFX_2fparticle__system__component_N_RSetParticleSystem_L_Nparticle__system_R(struct Uparticle_system* __verse_0xB2CDDD72_Argument); // Function VGameplayRst.particle_system_component._L_2fVerse_2eorg_2fVGameplayRst_2fVFX_2fparticle__system__component_N_RSetParticleSystem_L_Nparticle__system_R // (Native|Public|BlueprintCallable) // @ game+0x636925c
	void _L_2fVerse_2eorg_2fVGameplayRst_2fVFX_2fparticle__system__component_N_RDeactivate(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.particle_system_component._L_2fVerse_2eorg_2fVGameplayRst_2fVFX_2fparticle__system__component_N_RDeactivate // (Native|Public|BlueprintCallable) // @ game+0x6369254
	void _L_2fVerse_2eorg_2fVGameplayRst_2fVFX_2fparticle__system__component_N_RActivate(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.particle_system_component._L_2fVerse_2eorg_2fVGameplayRst_2fVFX_2fparticle__system__component_N_RActivate // (Native|Public|BlueprintCallable) // @ game+0x636924c
	void $InitInstance(); // Function VGameplayRst.particle_system_component.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VGameplayRst.particle_system_component.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VGameplayRst.particle_system_component.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VGameplayRst.Physics
// Size: 0x28 (Inherited: 0x28)
struct UPhysics : UObject {

	struct Fhit_result hit_result$Factory(); // Function VGameplayRst.Physics.hit_result$Factory // (Static|HasOutParms) // @ game+0xd67374
	void $InitCDO(); // Function VGameplayRst.Physics.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VGameplayRst.physics_trace
// Size: 0x100 (Inherited: 0x28)
struct Uphysics_trace : UObject {
	char pad_28[0xc]; // 0x28(0x0c)
	struct FDelegate __verse_0x9600555F__L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fphysics__trace_N_RInitPhysicsTrace_L_Ncomponent_M_Nphysics__trace__category_M_Nphysics__trace__type_M_Nphysics__trace__shape_M_Nphysics__trace__channel_M_Nvector3_M_Nvector3_M_Nlogic_M_Nvector3_M_Nfloat_M_N_Kchar_R; // 0x34(0x0c)
	struct FDelegate __verse_0xC7EB7B66_WaitPhysicsTrace; // 0x28(0x0c)
	char pad_4C[0xb4]; // 0x4c(0xb4)

	struct Utask(:type)* WaitPhysicsTrace(struct Utask(:type)* __verse_0xC1E81372_CallingTask, int64_t __verse_0xA3A00DDB_CallerResumeState, int64_t __verse_0x2AC0E4D8_CallerCancelState, struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.physics_trace.WaitPhysicsTrace // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	void _L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fphysics__trace_N_RInitPhysicsTrace_L_Ncomponent_M_Nphysics__trace__category_M_Nphysics__trace__type_M_Nphysics__trace__shape_M_Nphysics__trace__channel_M_Nvector3_M_Nvector3_M_Nlogic_M_Nvector3_M_Nfloat_M_N_Kchar_R(struct Ftuple_Lcomponent_Mphysics__trace__category_Mphysics__trace__type_Mphysics__trace__shape_Mphysics__trace__channel_Mvector3_Mvector3_Mlogic_Mvector3_Mfloat_M_Kchar_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.physics_trace._L_2fVerse_2eorg_2fVGameplayRst_2fPhysics_2fphysics__trace_N_RInitPhysicsTrace_L_Ncomponent_M_Nphysics__trace__category_M_Nphysics__trace__type_M_Nphysics__trace__shape_M_Nphysics__trace__channel_M_Nvector3_M_Nvector3_M_Nlogic_M_Nvector3_M_Nfloat_M_N_Kchar_R // (Native|Public|BlueprintCallable) // @ game+0x6369244
	void $InitInstance(); // Function VGameplayRst.physics_trace.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VGameplayRst.physics_trace.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VGameplayRst.physics_trace.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VGameplayRst.point_light_component
// Size: 0x110 (Inherited: 0x98)
struct Upoint_light_component : UPointLightComponentBase {
	char pad_98[0x6c]; // 0x98(0x6c)
	struct FDelegate __verse_0xDB46ECDB__L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetAttenuationRadius; // 0x104(0x0c)
	struct FDelegate __verse_0xF750F02E__L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetColor; // 0xe0(0x0c)
	struct FDelegate __verse_0xBB77601F__L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetIntensity; // 0xd4(0x0c)
	struct FDelegate __verse_0xAF04BD6C__L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetSourceLength; // 0xf8(0x0c)
	struct FDelegate __verse_0x17473B69__L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetSourceRadius; // 0xec(0x0c)
	struct FDelegate __verse_0x9A3F991F__L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetAttenuationRadius_L_Nfloat_R; // 0xc8(0x0c)
	struct FDelegate __verse_0xB1A2B2B7__L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetColor_L_Ncolor_R; // 0xa4(0x0c)
	struct FDelegate __verse_0xBF80146B__L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetIntensity_L_Nfloat_R; // 0x98(0x0c)
	struct FDelegate __verse_0x071FF47D__L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetSourceLength_L_Nfloat_R; // 0xbc(0x0c)
	struct FDelegate __verse_0x484B18A8__L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetSourceRadius_L_Nfloat_R; // 0xb0(0x0c)

	void _L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetSourceRadius_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function VGameplayRst.point_light_component._L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetSourceRadius_L_Nfloat_R // (Native|Public|BlueprintCallable) // @ game+0x6369124
	void _L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetSourceLength_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function VGameplayRst.point_light_component._L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetSourceLength_L_Nfloat_R // (Native|Public|BlueprintCallable) // @ game+0x636911c
	void _L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetIntensity_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function VGameplayRst.point_light_component._L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetIntensity_L_Nfloat_R // (Native|Public|BlueprintCallable) // @ game+0x6369114
	void _L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetColor_L_Ncolor_R(struct FColor __verse_0xB2CDDD72_Argument); // Function VGameplayRst.point_light_component._L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetColor_L_Ncolor_R // (Native|Public|BlueprintCallable) // @ game+0x636910c
	void _L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetAttenuationRadius_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function VGameplayRst.point_light_component._L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetAttenuationRadius_L_Nfloat_R // (Native|Public|BlueprintCallable) // @ game+0x6369104
	double _L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetSourceRadius(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.point_light_component._L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetSourceRadius // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63690fc
	double _L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetSourceLength(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.point_light_component._L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetSourceLength // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63690f4
	double _L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetIntensity(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.point_light_component._L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetIntensity // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63690ec
	struct FColor _L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetColor(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.point_light_component._L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetColor // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63690e4
	double _L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetAttenuationRadius(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.point_light_component._L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetAttenuationRadius // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x63690dc
	void $InitInstance(); // Function VGameplayRst.point_light_component.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VGameplayRst.point_light_component.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VGameplayRst.point_light_component.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VGameplayRst.position_component
// Size: 0xd0 (Inherited: 0x88)
struct Uposition_component : UEntityActorPositionComponent {
	struct FDelegate __verse_0x3944AF8B__L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fposition__component_N_RAddToPosition_L_Nvector3_R; // 0x88(0x0c)
	struct FDelegate __verse_0xFF83FBB4__L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__positionable_N_RSetPosition_L_Nvector3_R; // 0x94(0x0c)
	struct FDelegate __verse_0x03717667__L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition; // 0xa0(0x0c)
	char pad_AC[0x24]; // 0xac(0x24)

	void _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__positionable_N_RSetPosition_L_Nvector3_R(struct Fvector3 __verse_0xB2CDDD72_Argument); // Function VGameplayRst.position_component._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__positionable_N_RSetPosition_L_Nvector3_R // (Native|Public|BlueprintCallable) // @ game+0x633c470
	struct Fvector3 _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.position_component._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x633c4a0
	void _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fposition__component_N_RAddToPosition_L_Nvector3_R(struct Fvector3 __verse_0xB2CDDD72_Argument); // Function VGameplayRst.position_component._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fposition__component_N_RAddToPosition_L_Nvector3_R // (Native|Public|BlueprintCallable) // @ game+0x633c498
	void $InitInstance(); // Function VGameplayRst.position_component.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VGameplayRst.position_component.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VGameplayRst.position_component.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VGameplayRst.positionable
// Size: 0x28 (Inherited: 0x28)
struct Upositionable : UObject {

	struct Fvector3 _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.positionable._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
};

// VerseClass VGameplayRst.rotatable
// Size: 0x28 (Inherited: 0x28)
struct Urotatable : UObject {

	struct Fvector3 _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RUpVector(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.rotatable._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RUpVector // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	struct FVerseRotation _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RRotation(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.rotatable._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RRotation // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	struct Fvector3 _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RRightVector(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.rotatable._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RRightVector // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	struct Fvector3 _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RForwardVector(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.rotatable._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RForwardVector // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
};

// VerseClass VGameplayRst.rotation_component
// Size: 0x120 (Inherited: 0x90)
struct Urotation_component : UEntityActorRotationComponent {
	char pad_90[0xc]; // 0x90(0x0c)
	struct FDelegate __verse_0xFF3DE201__L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RApplyAdditionalRotation_L_Nrotation_R; // 0x9c(0x0c)
	struct FDelegate __verse_0x8EB6E346__L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetForwardVectorFromXY_L_Nvector3_M_Nvector3_R; // 0xa8(0x0c)
	struct FDelegate __verse_0x23A37F37__L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetRotation_L_Nrotation_R; // 0x90(0x0c)
	struct FDelegate __verse_0xB949A9F7__L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RForwardVector; // 0xc0(0x0c)
	char pad_CC[0xc]; // 0xcc(0x0c)
	struct FDelegate __verse_0x8320D012__L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RRightVector; // 0xd8(0x0c)
	struct FDelegate __verse_0x9112A39D__L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RRotation; // 0xb4(0x0c)
	struct FDelegate __verse_0x9DD169CD__L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RUpVector; // 0xcc(0x0c)
	char pad_FC[0x24]; // 0xfc(0x24)

	struct Fvector3 _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RUpVector(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.rotation_component._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RUpVector // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	void _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetRotation_L_Nrotation_R(struct FVerseRotation __verse_0xB2CDDD72_Argument); // Function VGameplayRst.rotation_component._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetRotation_L_Nrotation_R // (Native|Public|BlueprintCallable) // @ game+0x633c488
	void _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetForwardVectorFromXY_L_Nvector3_M_Nvector3_R(struct Ftuple_Lvector3_Mvector3_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.rotation_component._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetForwardVectorFromXY_L_Nvector3_M_Nvector3_R // (Native|Public|BlueprintCallable) // @ game+0x633c480
	struct FVerseRotation _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RRotation(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.rotation_component._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RRotation // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x633c4a8
	struct Fvector3 _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RRightVector(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.rotation_component._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RRightVector // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	struct Fvector3 _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RForwardVector(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.rotation_component._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2frotatable_N_RForwardVector // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	void _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RApplyAdditionalRotation_L_Nrotation_R(struct FVerseRotation __verse_0xB2CDDD72_Argument); // Function VGameplayRst.rotation_component._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RApplyAdditionalRotation_L_Nrotation_R // (Native|Public|BlueprintCallable) // @ game+0x633c478
	void $InitInstance(); // Function VGameplayRst.rotation_component.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VGameplayRst.rotation_component.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VGameplayRst.rotation_component.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VGameplayRst.scalable
// Size: 0x28 (Inherited: 0x28)
struct Uscalable : UObject {

	struct Fvector3 _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fscalable_N_RGetScale(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.scalable._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fscalable_N_RGetScale // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
};

// VerseClass VGameplayRst.scale_component
// Size: 0xd0 (Inherited: 0x88)
struct Uscale_component : UEntityActorScaleComponent {
	struct FDelegate __verse_0x3AE7E0EF__L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fscale__component_N_RAddToScale_L_Nvector3_R; // 0x88(0x0c)
	struct FDelegate __verse_0xE0EAAB2E__L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__scalable_N_RSetScale_L_Nvector3_R; // 0x94(0x0c)
	struct FDelegate __verse_0x44D08A7C__L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fscalable_N_RGetScale; // 0xa0(0x0c)
	char pad_AC[0x24]; // 0xac(0x24)

	void _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__scalable_N_RSetScale_L_Nvector3_R(struct Fvector3 __verse_0xB2CDDD72_Argument); // Function VGameplayRst.scale_component._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__scalable_N_RSetScale_L_Nvector3_R // (Native|Public|BlueprintCallable) // @ game+0x633c490
	struct Fvector3 _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fscalable_N_RGetScale(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.scale_component._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fscalable_N_RGetScale // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x633c4a0
	void _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fscale__component_N_RAddToScale_L_Nvector3_R(struct Fvector3 __verse_0xB2CDDD72_Argument); // Function VGameplayRst.scale_component._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fscale__component_N_RAddToScale_L_Nvector3_R // (Native|Public|BlueprintCallable) // @ game+0x633c4b0
	void $InitInstance(); // Function VGameplayRst.scale_component.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VGameplayRst.scale_component.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VGameplayRst.scale_component.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VGameplayRst.script_component
// Size: 0x1c0 (Inherited: 0xb8)
struct Uscript_component : UEntityScriptComponent {
	char pad_B8[0xd0]; // 0xb8(0xd0)
	char __verse_0xFAA77A2E_AllowMultiple : 1; // 0x188(0x01)
	struct FDelegate __verse_0x711A98E3__L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_RAddToCreateComponentList_L_N_Ksubtype_Lcomponent_R_R; // 0xc8(0x0c)
	struct FDelegate __verse_0x68894ADF__L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_RAddToRequiredComponentList_L_N_Ksubtype_Lcomponent_R_R; // 0xd4(0x0c)
	struct FDelegate __verse_0xD71F9F31__L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_RGetAllComponentsOfType_L_Ntype_R; // 0x164(0x0c)
	struct FDelegate __verse_0x375A8DA2__L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_RGetComponentOfType_L_Ntype_R; // 0x158(0x0c)
	struct FDelegate __verse_0x597CC398__L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_RGetFullname; // 0x17c(0x0c)
	struct FDelegate __verse_0x670CAEF0__L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_RGetName; // 0x170(0x0c)
	struct FDelegate __verse_0x4FE17713__L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_RIsEnabled; // 0x134(0x0c)
	struct FDelegate __verse_0x6032A77A__L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_RIsOwner_L_Nentity_R; // 0x140(0x0c)
	struct FDelegate __verse_0x396B99F8__L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_ROnBegin; // 0x110(0x0c)
	struct FDelegate __verse_0x5516881B__L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_ROnCreate; // 0xf8(0x0c)
	struct FDelegate __verse_0xDECC6DC3__L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_ROnEnabledChanged_L_Nlogic_R; // 0x14c(0x0c)
	struct FDelegate __verse_0xE94C4DC0__L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_ROnEnd; // 0x11c(0x0c)
	struct FDelegate __verse_0x75E35C14__L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_ROnPostCreate; // 0x104(0x0c)
	struct FDelegate __verse_0x75E4E41D__L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_ROnTick_L_Nfloat_R; // 0xec(0x0c)
	struct FDelegate __verse_0x7C98C328__L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_RSetEnabled_L_Nlogic_R; // 0x128(0x0c)
	struct FDelegate __verse_0x9A1969F0__L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_RSetTickEnabled_L_Nlogic_R; // 0xe0(0x0c)

	void _L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_RSetTickEnabled_L_Nlogic_R(char __verse_0xB2CDDD72_Argument); // Function VGameplayRst.script_component._L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_RSetTickEnabled_L_Nlogic_R // (Native|Public|BlueprintCallable) // @ game+0x6368fdc
	void _L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_RSetEnabled_L_Nlogic_R(char __verse_0xB2CDDD72_Argument); // Function VGameplayRst.script_component._L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_RSetEnabled_L_Nlogic_R // (Native|Public|BlueprintCallable) // @ game+0x6368fd4
	void _L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_ROnTick_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function VGameplayRst.script_component._L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_ROnTick_L_Nfloat_R // (Public|BlueprintCallable) // @ game+0xd67374
	void _L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_ROnPostCreate(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.script_component._L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_ROnPostCreate // (Public|BlueprintCallable) // @ game+0xd67374
	void _L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_ROnEnd(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.script_component._L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_ROnEnd // (Public|BlueprintCallable) // @ game+0xd67374
	void _L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_ROnEnabledChanged_L_Nlogic_R(char __verse_0xB2CDDD72_Argument); // Function VGameplayRst.script_component._L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_ROnEnabledChanged_L_Nlogic_R // (Public|BlueprintCallable) // @ game+0xd67374
	void _L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_ROnCreate(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.script_component._L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_ROnCreate // (Public|BlueprintCallable) // @ game+0xd67374
	void _L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_ROnBegin(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.script_component._L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_ROnBegin // (Public|BlueprintCallable) // @ game+0xd67374
	char _L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_RIsOwner_L_Nentity_R(struct UEntity* __verse_0xB2CDDD72_Argument); // Function VGameplayRst.script_component._L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_RIsOwner_L_Nentity_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6368fcc
	char _L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_RIsEnabled(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.script_component._L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_RIsEnabled // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6368fc4
	VerseStringProperty _L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_RGetName(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.script_component._L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_RGetName // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5f94c34
	VerseStringProperty _L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_RGetFullname(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.script_component._L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_RGetFullname // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6368fbc
	OptionProperty _L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_RGetComponentOfType_L_Ntype_R(struct UObject* __verse_0xB2CDDD72_Argument); // Function VGameplayRst.script_component._L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_RGetComponentOfType_L_Ntype_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6368fb4
	struct TArray<struct UEntityComponent*> _L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_RGetAllComponentsOfType_L_Ntype_R(struct UObject* __verse_0xB2CDDD72_Argument); // Function VGameplayRst.script_component._L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_RGetAllComponentsOfType_L_Ntype_R // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6368fac
	void _L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_RAddToRequiredComponentList_L_N_Ksubtype_Lcomponent_R_R(struct TArray<struct UEntityComponent*> __verse_0xB2CDDD72_Argument); // Function VGameplayRst.script_component._L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_RAddToRequiredComponentList_L_N_Ksubtype_Lcomponent_R_R // (Native|Public|BlueprintCallable) // @ game+0x6368fa4
	void _L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_RAddToCreateComponentList_L_N_Ksubtype_Lcomponent_R_R(struct TArray<struct UEntityComponent*> __verse_0xB2CDDD72_Argument); // Function VGameplayRst.script_component._L_2fVerse_2eorg_2fVGameplayRst_2fComponents_2fscript__component_N_RAddToCreateComponentList_L_N_Ksubtype_Lcomponent_R_R // (Native|Public|BlueprintCallable) // @ game+0x6368f9c
	void $InitInstance(); // Function VGameplayRst.script_component.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VGameplayRst.script_component.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VGameplayRst.script_component.$InitCDO // (HasDefaults) // @ game+0xd67374
};

// VerseClass VGameplayRst.skeletal_mesh_component
// Size: 0x120 (Inherited: 0x80)
struct Uskeletal_mesh_component : UEntityActorSkeletalMeshRenderComponent {
	char pad_80[0x3c]; // 0x80(0x3c)
	struct FDelegate __verse_0xF1407FB5__L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RBeginAnimation_L_Nlogic_R; // 0xbc(0x0c)
	struct FDelegate __verse_0xE7E7EB09__L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_REndAnimation; // 0xc8(0x0c)
	char pad_D4[0x3c]; // 0xd4(0x3c)
	struct FDelegate __verse_0xB5AB8B42__L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RGetAnimationPlayRate__FIXME; // 0x110(0x0c)
	struct FDelegate __verse_0x52E2F2EC__L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RGetAnimationPosition__FIXME; // 0xf8(0x0c)
	struct FDelegate __verse_0xB9B2AFAC__L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RIsPlayingAnimation; // 0xd4(0x0c)
	struct FDelegate __verse_0x16AAE83D__L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimation_L_Nanimation_R; // 0xb0(0x0c)
	struct FDelegate __verse_0xC125543A__L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationBlueprint_L_Nanimation__blueprint_R; // 0xa4(0x0c)
	struct FDelegate __verse_0xB1AAD930__L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationInstance_L_Nanimation__instance_R; // 0x98(0x0c)
	struct FDelegate __verse_0xDEC1E246__L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationMode_L_Ndefault__animation__mode__type_R; // 0x8c(0x0c)
	struct FDelegate __verse_0x82643648__L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationPlayRate__FIXME_L_Nfloat_R; // 0x104(0x0c)
	struct FDelegate __verse_0xA6E762D2__L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationPosition__FIXME_L_Nfloat_M_Nlogic_R; // 0xec(0x0c)
	struct FDelegate __verse_0x9DD66092__L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetMaterial_L_Nmaterial_R; // 0xe0(0x0c)
	struct FDelegate __verse_0x8DD56EAC__L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetSkeletalMesh_L_Nskeletal__mesh_R; // 0x80(0x0c)

	void _L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetSkeletalMesh_L_Nskeletal__mesh_R(struct Uskeletal_mesh* __verse_0xB2CDDD72_Argument); // Function VGameplayRst.skeletal_mesh_component._L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetSkeletalMesh_L_Nskeletal__mesh_R // (Native|Public|BlueprintCallable) // @ game+0x63690c4
	void _L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetMaterial_L_Nmaterial_R(struct UMaterial* __verse_0xB2CDDD72_Argument); // Function VGameplayRst.skeletal_mesh_component._L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetMaterial_L_Nmaterial_R // (Native|Public|BlueprintCallable) // @ game+0x63690bc
	void _L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationPosition__FIXME_L_Nfloat_M_Nlogic_R(struct Ftuple_Lfloat_Mlogic_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.skeletal_mesh_component._L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationPosition__FIXME_L_Nfloat_M_Nlogic_R // (Native|Public|BlueprintCallable) // @ game+0x63690ac
	void _L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationPlayRate__FIXME_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function VGameplayRst.skeletal_mesh_component._L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationPlayRate__FIXME_L_Nfloat_R // (Native|Public|BlueprintCallable) // @ game+0x63690a4
	void _L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationMode_L_Ndefault__animation__mode__type_R(enum class default_animation_mode_type __verse_0xB2CDDD72_Argument); // Function VGameplayRst.skeletal_mesh_component._L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationMode_L_Ndefault__animation__mode__type_R // (Native|Public|BlueprintCallable) // @ game+0x636909c
	void _L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationInstance_L_Nanimation__instance_R(struct Uanimation_instance* __verse_0xB2CDDD72_Argument); // Function VGameplayRst.skeletal_mesh_component._L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationInstance_L_Nanimation__instance_R // (Native|Public|BlueprintCallable) // @ game+0x6369094
	void _L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationBlueprint_L_Nanimation__blueprint_R(struct Uanimation_blueprint* __verse_0xB2CDDD72_Argument); // Function VGameplayRst.skeletal_mesh_component._L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationBlueprint_L_Nanimation__blueprint_R // (Native|Public|BlueprintCallable) // @ game+0x636908c
	void _L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimation_L_Nanimation_R(struct UAnimation* __verse_0xB2CDDD72_Argument); // Function VGameplayRst.skeletal_mesh_component._L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimation_L_Nanimation_R // (Native|Public|BlueprintCallable) // @ game+0x63690b4
	char _L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RIsPlayingAnimation(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.skeletal_mesh_component._L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RIsPlayingAnimation // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6369084
	double _L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RGetAnimationPosition__FIXME(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.skeletal_mesh_component._L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RGetAnimationPosition__FIXME // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x636907c
	double _L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RGetAnimationPlayRate__FIXME(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.skeletal_mesh_component._L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RGetAnimationPlayRate__FIXME // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6369074
	void _L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_REndAnimation(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.skeletal_mesh_component._L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_REndAnimation // (Native|Public|BlueprintCallable) // @ game+0x636906c
	void _L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RBeginAnimation_L_Nlogic_R(char __verse_0xB2CDDD72_Argument); // Function VGameplayRst.skeletal_mesh_component._L_2fVerse_2eorg_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RBeginAnimation_L_Nlogic_R // (Native|Public|BlueprintCallable) // @ game+0x6369064
	void $InitInstance(); // Function VGameplayRst.skeletal_mesh_component.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VGameplayRst.skeletal_mesh_component.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VGameplayRst.skeletal_mesh_component.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VGameplayRst.spot_light_component
// Size: 0x140 (Inherited: 0x98)
struct Uspot_light_component : USpotLightComponentBase {
	char pad_98[0x9c]; // 0x98(0x9c)
	struct FDelegate __verse_0x4CCAEE72__L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetAttenuationRadius; // 0x134(0x0c)
	struct FDelegate __verse_0x350D4D79__L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetColor; // 0xf8(0x0c)
	struct FDelegate __verse_0x3B2B6CF2__L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetInnerConeAngle; // 0x11c(0x0c)
	struct FDelegate __verse_0xCC357273__L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetIntensity; // 0xec(0x0c)
	struct FDelegate __verse_0xFA0CD9F7__L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetOuterConeAngle; // 0x128(0x0c)
	struct FDelegate __verse_0x9FEF472B__L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetSourceLength; // 0x110(0x0c)
	struct FDelegate __verse_0x27ACC12E__L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetSourceRadius; // 0x104(0x0c)
	struct FDelegate __verse_0xC8795B59__L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetAttenuationRadius_L_Nfloat_R; // 0xe0(0x0c)
	struct FDelegate __verse_0x3BE532EF__L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetColor_L_Ncolor_R; // 0xa4(0x0c)
	struct FDelegate __verse_0x1745B220__L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetInnerConeAngle_L_Nfloat_R; // 0xc8(0x0c)
	struct FDelegate __verse_0xFEA85A42__L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetIntensity_L_Nfloat_R; // 0x98(0x0c)
	struct FDelegate __verse_0x5BBD4CD5__L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetOuterConeAngle_L_Nfloat_R; // 0xd4(0x0c)
	struct FDelegate __verse_0xE1894C44__L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetSourceLength_L_Nfloat_R; // 0xbc(0x0c)
	struct FDelegate __verse_0xAEDDA091__L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetSourceRadius_L_Nfloat_R; // 0xb0(0x0c)

	void _L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetSourceRadius_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function VGameplayRst.spot_light_component._L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetSourceRadius_L_Nfloat_R // (Native|Public|BlueprintCallable) // @ game+0x6369194
	void _L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetSourceLength_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function VGameplayRst.spot_light_component._L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetSourceLength_L_Nfloat_R // (Native|Public|BlueprintCallable) // @ game+0x636918c
	void _L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetOuterConeAngle_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function VGameplayRst.spot_light_component._L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetOuterConeAngle_L_Nfloat_R // (Native|Public|BlueprintCallable) // @ game+0x6369184
	void _L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetIntensity_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function VGameplayRst.spot_light_component._L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetIntensity_L_Nfloat_R // (Native|Public|BlueprintCallable) // @ game+0x636917c
	void _L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetInnerConeAngle_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function VGameplayRst.spot_light_component._L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetInnerConeAngle_L_Nfloat_R // (Native|Public|BlueprintCallable) // @ game+0x6369174
	void _L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetColor_L_Ncolor_R(struct FColor __verse_0xB2CDDD72_Argument); // Function VGameplayRst.spot_light_component._L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetColor_L_Ncolor_R // (Native|Public|BlueprintCallable) // @ game+0x636916c
	void _L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetAttenuationRadius_L_Nfloat_R(double __verse_0xB2CDDD72_Argument); // Function VGameplayRst.spot_light_component._L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetAttenuationRadius_L_Nfloat_R // (Native|Public|BlueprintCallable) // @ game+0x6369164
	double _L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetSourceRadius(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.spot_light_component._L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetSourceRadius // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x636915c
	double _L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetSourceLength(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.spot_light_component._L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetSourceLength // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6369154
	double _L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetOuterConeAngle(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.spot_light_component._L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetOuterConeAngle // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x636914c
	double _L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetIntensity(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.spot_light_component._L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetIntensity // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6369144
	double _L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetInnerConeAngle(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.spot_light_component._L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetInnerConeAngle // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x636913c
	struct FColor _L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetColor(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.spot_light_component._L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetColor // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6369134
	double _L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetAttenuationRadius(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.spot_light_component._L_2fVerse_2eorg_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetAttenuationRadius // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x636912c
	void $InitInstance(); // Function VGameplayRst.spot_light_component.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VGameplayRst.spot_light_component.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VGameplayRst.spot_light_component.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VGameplayRst.task_collision_component$WaitBeginOverlap
// Size: 0x138 (Inherited: 0x120)
struct Utask_collision_component$WaitBeginOverlap : Utask(:type) {
	struct Ucollision_component* _Self; // 0x120(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct Uoverlap_result* _RetVal; // 0x130(0x08)

	int64_t Update(); // Function VGameplayRst.task_collision_component$WaitBeginOverlap.Update // (Native|Public|HasOutParms) // @ game+0x6368f3c
};

// VerseClass VGameplayRst.task_collision_component$WaitEndOverlap
// Size: 0x138 (Inherited: 0x120)
struct Utask_collision_component$WaitEndOverlap : Utask(:type) {
	struct Ucollision_component* _Self; // 0x120(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct Uoverlap_result* _RetVal; // 0x130(0x08)

	int64_t Update(); // Function VGameplayRst.task_collision_component$WaitEndOverlap.Update // (Native|Public|HasOutParms) // @ game+0x6368f44
};

// VerseClass VGameplayRst.task_collision_component$WaitHit
// Size: 0x170 (Inherited: 0x120)
struct Utask_collision_component$WaitHit : Utask(:type) {
	struct Ucollision_component* _Self; // 0x120(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct Fhit_result _RetVal; // 0x130(0x40)

	int64_t Update(); // Function VGameplayRst.task_collision_component$WaitHit.Update // (Native|Public|HasOutParms) // @ game+0x6368f54
};

// VerseClass VGameplayRst.task_debug_command_component$__WaitForCommand_L_N_Kchar_R
// Size: 0x148 (Inherited: 0x120)
struct Utask_debug_command_component$__WaitForCommand_L_N_Kchar_R : Utask(:type) {
	struct Udebug_command_component* _Self; // 0x120(0x08)
	VerseStringProperty __verse_0xB2CDDD72_Argument; // 0x128(0x10)
	VerseStringProperty _RetVal; // 0x138(0x10)

	int64_t Update(); // Function VGameplayRst.task_debug_command_component$__WaitForCommand_L_N_Kchar_R.Update // (Native|Public|HasOutParms) // @ game+0x6369264
};

// VerseClass VGameplayRst.task_dynamic_activation_component$WaitForTransitionBegin
// Size: 0x129 (Inherited: 0x120)
struct Utask_dynamic_activation_component$WaitForTransitionBegin : Utask(:type) {
	struct Udynamic_activation_component* _Self; // 0x120(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x128(0x01)

	int64_t Update(); // Function VGameplayRst.task_dynamic_activation_component$WaitForTransitionBegin.Update // (Native|Public|HasOutParms) // @ game+0x633c4d8
};

// VerseClass VGameplayRst.task_dynamic_activation_component$WaitForTransitionComplete
// Size: 0x129 (Inherited: 0x120)
struct Utask_dynamic_activation_component$WaitForTransitionComplete : Utask(:type) {
	struct Udynamic_activation_component* _Self; // 0x120(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x128(0x01)

	int64_t Update(); // Function VGameplayRst.task_dynamic_activation_component$WaitForTransitionComplete.Update // (Native|Public|HasOutParms) // @ game+0x6368f4c
};

// VerseClass VGameplayRst.task_physics_trace$WaitPhysicsTrace
// Size: 0x140 (Inherited: 0x120)
struct Utask_physics_trace$WaitPhysicsTrace : Utask(:type) {
	struct Uphysics_trace* _Self; // 0x120(0x08)
	struct Ftuple_L_R __verse_0xB2CDDD72_Argument; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct TArray<struct Fhit_result> _RetVal; // 0x130(0x10)

	int64_t Update(); // Function VGameplayRst.task_physics_trace$WaitPhysicsTrace.Update // (Native|Public|HasOutParms) // @ game+0x6368f5c
};

// VerseClass VGameplayRst.world_anchor
// Size: 0x68 (Inherited: 0x28)
struct Uworld_anchor : UObject {
	struct UEntity* __verse_0xC79F2B5D_InternalObject; // 0x28(0x08)
	struct Uposition_component* __verse_0x325D2C22_PositionComp; // 0x30(0x08)
	struct FDelegate __verse_0x391D89F1__L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_2fworld__anchor_N_RDestroy; // 0x38(0x0c)
	struct FDelegate __verse_0xFDD0EACB__L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_2fworld__anchor_N_RGetComponent; // 0x44(0x0c)
	struct FDelegate __verse_0xFF83FBB4__L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__positionable_N_RSetPosition_L_Nvector3_R; // 0x50(0x0c)
	struct FDelegate __verse_0x03717667__L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition; // 0x5c(0x0c)

	void _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__positionable_N_RSetPosition_L_Nvector3_R(struct Fvector3 __verse_0xB2CDDD72_Argument); // Function VGameplayRst.world_anchor._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fmutable__positionable_N_RSetPosition_L_Nvector3_R // (Public|HasDefaults|BlueprintCallable) // @ game+0xd67374
	struct Fvector3 _L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.world_anchor._L_2fVerse_2eorg_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition // (Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd67374
	struct UEntityComponent* _L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_2fworld__anchor_N_RGetComponent(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.world_anchor._L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_2fworld__anchor_N_RGetComponent // (Public|HasOutParms|BlueprintCallable) // @ game+0xd67374
	void _L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_2fworld__anchor_N_RDestroy(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VGameplayRst.world_anchor._L_2fVerse_2eorg_2fVGameplayRst_2fGameObjects_2fworld__anchor_N_RDestroy // (Public|HasDefaults|BlueprintCallable) // @ game+0xd67374
	void $InitInstance(); // Function VGameplayRst.world_anchor.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VGameplayRst.world_anchor.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VGameplayRst.world_anchor.$InitCDO // (None) // @ game+0xd67374
};

