// BlueprintGeneratedClass GCNL_RollingEffects_Parent.GCNL_RollingEffects_Parent_C
// Size: 0xae8 (Inherited: 0xac0)
struct AGCNL_RollingEffects_Parent_C : AFortGameplayCueNotifyLoop_PhysicsObjectRolling {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xac0(0x08)
	struct USoundBase* SoundAssetDefault; // 0xac8(0x08)
	struct USoundBase* SoundAssetSmall; // 0xad0(0x08)
	struct USoundBase* SoundAssetMedium; // 0xad8(0x08)
	struct USoundBase* SoundAssetLarge; // 0xae0(0x08)

	void GetObjectSizeParam(struct AActor* PhysicsObject, int32_t& Size); // Function GCNL_RollingEffects_Parent.GCNL_RollingEffects_Parent_C.GetObjectSizeParam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void GetSoundAsset(struct AActor* PhysicsObject, struct USoundBase*& Asset); // Function GCNL_RollingEffects_Parent.GCNL_RollingEffects_Parent_C.GetSoundAsset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void OnApplicationGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_RollingEffects_Parent.GCNL_RollingEffects_Parent_C.OnApplicationGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnRemovalGeneric(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<struct UFXSystemComponent*>& ParticleComponents, struct TArray<struct UAudioComponent*>& AudioComponents, struct ULegacyCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_RollingEffects_Parent.GCNL_RollingEffects_Parent_C.OnRemovalGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCNL_RollingEffects_Parent(int32_t EntryPoint); // Function GCNL_RollingEffects_Parent.GCNL_RollingEffects_Parent_C.ExecuteUbergraph_GCNL_RollingEffects_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

