// BlueprintGeneratedClass GCN_Irwin_RezOut_Simple.GCN_Irwin_RezOut_Simple_C
// Size: 0x6c0 (Inherited: 0x528)
struct AGCN_Irwin_RezOut_Simple_C : AFortGameplayCueNotify_BurstLatent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x528(0x08)
	float TFX_ResOutChracterMesh_LightIntensity_650F8F4E4C8105BE33D199A04F1958AE; // 0x530(0x04)
	float TFX_ResOutChracterMesh_ZHeightParam_650F8F4E4C8105BE33D199A04F1958AE; // 0x534(0x04)
	float TFX_ResOutChracterMesh_TransitionParam_650F8F4E4C8105BE33D199A04F1958AE; // 0x538(0x04)
	enum class ETimelineDirection TFX_ResOutChracterMesh__Direction_650F8F4E4C8105BE33D199A04F1958AE; // 0x53c(0x01)
	char pad_53D[0x3]; // 0x53d(0x03)
	struct UTimelineComponent* TFX_ResOutChracterMesh; // 0x540(0x08)
	struct TArray<struct UFXSystemComponent*> Particle Components; // 0x548(0x10)
	bool DEBUG_REMOVESPAWNEDPOINTLIGHT; // 0x558(0x01)
	char pad_559[0x7]; // 0x559(0x07)
	double Dissolve Timeline Playrate; // 0x560(0x08)
	struct UMaterialInterface* Mat Chracter Dissolve; // 0x568(0x08)
	bool DEBUG_FXSYSTEMCOMPONENTS; // 0x570(0x01)
	char pad_571[0x3]; // 0x571(0x03)
	struct FName Socket Mesh Top; // 0x574(0x04)
	struct FName Socket Mesh Bottom; // 0x578(0x04)
	bool DEBUG_CHILDCOMPONENTS; // 0x57c(0x01)
	bool DEBUG_REMOVESPAWNVFX; // 0x57d(0x01)
	char pad_57E[0x2]; // 0x57e(0x02)
	struct FName Dissolve VFX Spawn Point Name; // 0x580(0x04)
	char pad_584[0x4]; // 0x584(0x04)
	struct UNiagaraSystem* Dissolve Visual Effect; // 0x588(0x08)
	struct UNiagaraComponent* Spawned Death VFX; // 0x590(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> Irwin Materials; // 0x598(0x10)
	struct TArray<struct UMaterialInterface*> Original; // 0x5a8(0x10)
	struct ANPC_Pawn_Parent_C* Irwin; // 0x5b8(0x08)
	struct FHitResult Water Hit Information; // 0x5c0(0xe0)
	struct UNiagaraSystem* Water Elimination Splash; // 0x6a0(0x08)
	bool Water Hit; // 0x6a8(0x01)
	char pad_6A9[0x7]; // 0x6a9(0x07)
	double Bounds Scalar; // 0x6b0(0x08)
	bool WasChromed; // 0x6b8(0x01)
	char pad_6B9[0x3]; // 0x6b9(0x03)
	int32_t Class Test; // 0x6bc(0x04)

	void Spawn Water Elimination FX(); // Function GCN_Irwin_RezOut_Simple.GCN_Irwin_RezOut_Simple_C.Spawn Water Elimination FX // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Water Trace(); // Function GCN_Irwin_RezOut_Simple.GCN_Irwin_RezOut_Simple_C.Water Trace // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Socket Math(double& Gradient Distance, struct FVector& Base Location, struct FVector& Directional Vector); // Function GCN_Irwin_RezOut_Simple.GCN_Irwin_RezOut_Simple_C.Socket Math // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void Set Irwin Materials(); // Function GCN_Irwin_RezOut_Simple.GCN_Irwin_RezOut_Simple_C.Set Irwin Materials // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Spawn Dissolve VFX(); // Function GCN_Irwin_RezOut_Simple.GCN_Irwin_RezOut_Simple_C.Spawn Dissolve VFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Clean-Up Teleportation Light(); // Function GCN_Irwin_RezOut_Simple.GCN_Irwin_RezOut_Simple_C.Clean-Up Teleportation Light // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Set Timeline Playrates(); // Function GCN_Irwin_RezOut_Simple.GCN_Irwin_RezOut_Simple_C.Set Timeline Playrates // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Spawn Teleportation Light(); // Function GCN_Irwin_RezOut_Simple.GCN_Irwin_RezOut_Simple_C.Spawn Teleportation Light // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void TFX_ResOutChracterMesh__FinishedFunc(); // Function GCN_Irwin_RezOut_Simple.GCN_Irwin_RezOut_Simple_C.TFX_ResOutChracterMesh__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void TFX_ResOutChracterMesh__UpdateFunc(); // Function GCN_Irwin_RezOut_Simple.GCN_Irwin_RezOut_Simple_C.TFX_ResOutChracterMesh__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void OnBurstGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_Irwin_RezOut_Simple.GCN_Irwin_RezOut_Simple_C.OnBurstGeneric // (Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0xd67374
	void Pre-Sequence Change(); // Function GCN_Irwin_RezOut_Simple.GCN_Irwin_RezOut_Simple_C.Pre-Sequence Change // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Set Additional Niagara Parameters on Spawned FX(struct UNiagaraComponent* Spawned Death FX); // Function GCN_Irwin_RezOut_Simple.GCN_Irwin_RezOut_Simple_C.Set Additional Niagara Parameters on Spawned FX // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCN_Irwin_RezOut_Simple(int32_t EntryPoint); // Function GCN_Irwin_RezOut_Simple.GCN_Irwin_RezOut_Simple_C.ExecuteUbergraph_GCN_Irwin_RezOut_Simple // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

