// BlueprintGeneratedClass GCL_BoostJumpPack_Hovering_Infinite.GCL_BoostJumpPack_Hovering_Infinite_C
// Size: 0xae0 (Inherited: 0xaa0)
struct AGCL_BoostJumpPack_Hovering_Infinite_C : AGameplayCueNotify_Jetpack_Hovering {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xaa0(0x08)
	bool bJetpackAudioEnabled; // 0xaa8(0x01)
	char pad_AA9[0x7]; // 0xaa9(0x07)
	struct USoundBase* SoundOnStart; // 0xab0(0x08)
	struct USoundBase* SoundOnStop; // 0xab8(0x08)
	struct USoundBase* SoundLoopOnIdle; // 0xac0(0x08)
	struct USoundBase* SoundLoopOnAccel; // 0xac8(0x08)
	bool bIsFirstJump; // 0xad0(0x01)
	char pad_AD1[0x7]; // 0xad1(0x07)
	struct UFXSystemComponent* VFX_Reference; // 0xad8(0x08)

	void SetJetpackAudioEnabled(bool Enabled); // Function GCL_BoostJumpPack_Hovering_Infinite.GCL_BoostJumpPack_Hovering_Infinite_C.SetJetpackAudioEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GCL_BoostJumpPack_Hovering_Infinite.GCL_BoostJumpPack_Hovering_Infinite_C.OnRemove // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	bool OnActive(struct AActor* MyTarget, struct FGameplayCueParameters& Parameters); // Function GCL_BoostJumpPack_Hovering_Infinite.GCL_BoostJumpPack_Hovering_Infinite_C.OnActive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void On Pawn Landed(struct FHitResult& Hit); // Function GCL_BoostJumpPack_Hovering_Infinite.GCL_BoostJumpPack_Hovering_Infinite_C.On Pawn Landed // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCL_BoostJumpPack_Hovering_Infinite(int32_t EntryPoint); // Function GCL_BoostJumpPack_Hovering_Infinite.GCL_BoostJumpPack_Hovering_Infinite_C.ExecuteUbergraph_GCL_BoostJumpPack_Hovering_Infinite // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

