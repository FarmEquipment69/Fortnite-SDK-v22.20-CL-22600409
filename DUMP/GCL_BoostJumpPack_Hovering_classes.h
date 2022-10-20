// BlueprintGeneratedClass GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C
// Size: 0xb78 (Inherited: 0xaa0)
struct AGCL_BoostJumpPack_Hovering_C : AGameplayCueNotify_Jetpack_Hovering {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xaa0(0x08)
	bool bJetpackAudioEnabled; // 0xaa8(0x01)
	char pad_AA9[0x7]; // 0xaa9(0x07)
	struct USoundBase* SoundOnStart; // 0xab0(0x08)
	struct USoundBase* SoundOnStop; // 0xab8(0x08)
	struct USoundBase* SoundLoopOnIdle; // 0xac0(0x08)
	struct USoundBase* SoundLoopOnAccel; // 0xac8(0x08)
	struct USoundBase* SoundLoopOnOutOfFuel; // 0xad0(0x08)
	struct USoundBase* SoundOnFuelWarning; // 0xad8(0x08)
	struct USoundBase* SoundOnOutOfFuel; // 0xae0(0x08)
	struct UParticleSystemComponent* GroundInteract; // 0xae8(0x08)
	struct TSoftObjectPtr<USkeletalMeshComponent> Milo Check; // 0xaf0(0x28)
	struct TSoftObjectPtr<UObject> Milo Backpack; // 0xb18(0x28)
	struct FVector Milo_LightScale; // 0xb40(0x18)
	struct FName AttachSocketName; // 0xb58(0x04)
	char pad_B5C[0x4]; // 0xb5c(0x04)
	struct UFXSystemComponent* VFX; // 0xb60(0x08)
	struct UParticleSystem* P_GroundInteraction; // 0xb68(0x08)
	struct UFXSystemAsset* NS_Hover; // 0xb70(0x08)

	void SetJetpackAudioEnabled(bool Enabled); // Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.SetJetpackAudioEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.OnRemove // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	bool OnActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.OnActive // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ResetFX(); // Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.ResetFX // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ReceiveDestroyed(); // Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void PlayLowFuelWarning(); // Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.PlayLowFuelWarning // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void TryToPlayGroundEffects(); // Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.TryToPlayGroundEffects // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCL_BoostJumpPack_Hovering(int32_t EntryPoint); // Function GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C.ExecuteUbergraph_GCL_BoostJumpPack_Hovering // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

