// BlueprintGeneratedClass GCNL_Jetpack_Hover_Lateral.GCNL_Jetpack_Hover_Lateral_C
// Size: 0xb88 (Inherited: 0xaa0)
struct AGCNL_Jetpack_Hover_Lateral_C : AGameplayCueNotify_Jetpack_Hovering {
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
	bool bIsFirstJump; // 0xae8(0x01)
	char pad_AE9[0x7]; // 0xae9(0x07)
	struct UParticleSystemComponent* GroundInteract; // 0xaf0(0x08)
	struct TSoftObjectPtr<USkeletalMeshComponent> Milo Check; // 0xaf8(0x28)
	struct TSoftObjectPtr<UObject> Milo Backpack; // 0xb20(0x28)
	struct FVector Milo_LightScale; // 0xb48(0x18)
	struct UParticleSystem* HoverEffect; // 0xb60(0x08)
	struct FName AttachSocketName; // 0xb68(0x04)
	char pad_B6C[0x4]; // 0xb6c(0x04)
	struct UParticleSystem* P_GroundInteract; // 0xb70(0x08)
	struct UFXSystemComponent* HoverFXSystem; // 0xb78(0x08)
	struct UFXSystemAsset* NS_Hover; // 0xb80(0x08)

	void SetJetpackAudioEnabled(bool Enabled); // Function GCNL_Jetpack_Hover_Lateral.GCNL_Jetpack_Hover_Lateral_C.SetJetpackAudioEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GCNL_Jetpack_Hover_Lateral.GCNL_Jetpack_Hover_Lateral_C.OnRemove // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	bool OnActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GCNL_Jetpack_Hover_Lateral.GCNL_Jetpack_Hover_Lateral_C.OnActive // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ResetFX(); // Function GCNL_Jetpack_Hover_Lateral.GCNL_Jetpack_Hover_Lateral_C.ResetFX // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters); // Function GCNL_Jetpack_Hover_Lateral.GCNL_Jetpack_Hover_Lateral_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ReceiveDestroyed(); // Function GCNL_Jetpack_Hover_Lateral.GCNL_Jetpack_Hover_Lateral_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void TryToPlayGroundEffects(); // Function GCNL_Jetpack_Hover_Lateral.GCNL_Jetpack_Hover_Lateral_C.TryToPlayGroundEffects // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral(int32_t EntryPoint); // Function GCNL_Jetpack_Hover_Lateral.GCNL_Jetpack_Hover_Lateral_C.ExecuteUbergraph_GCNL_Jetpack_Hover_Lateral // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

