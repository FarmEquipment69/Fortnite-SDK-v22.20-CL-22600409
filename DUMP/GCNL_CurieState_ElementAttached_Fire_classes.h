// BlueprintGeneratedClass GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C
// Size: 0x9d8 (Inherited: 0x9b2)
struct AGCNL_CurieState_ElementAttached_Fire_C : AGCNL_VisualState_ElementAttached_Fire_C {
	char pad_9B2[0x6]; // 0x9b2(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9b8(0x08)
	struct UAudioComponent* ; // 0x9c0(0x08)
	struct USkeletalMeshComponent* ; // 0x9c8(0x08)
	struct UNiagaraComponent* ; // 0x9d0(0x08)

	void GetNiagaraSystemTemplate(struct UNiagaraSystem*& NiagaraSystem); // Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.GetNiagaraSystemTemplate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void GetPlayerFireStateInternal(enum class B_Enum_PlayerFireStates& PlayerState); // Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.GetPlayerFireStateInternal // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnCurieStateChanged(struct UObject* Owner, struct FCurieContainerHandle ContainerHandle, struct FGameplayTag& StateIdentifier); // Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.OnCurieStateChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnRemoval(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.OnRemoval // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnApplication(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UParticleSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.OnApplication // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void FadeBodyFXOut(); // Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.FadeBodyFXOut // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCNL_CurieState_ElementAttached_Fire(int32_t EntryPoint); // Function GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C.ExecuteUbergraph_GCNL_CurieState_ElementAttached_Fire // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

