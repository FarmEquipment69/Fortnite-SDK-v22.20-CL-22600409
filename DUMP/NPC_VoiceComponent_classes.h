// BlueprintGeneratedClass NPC_VoiceComponent.NPC_VoiceComponent_C
// Size: 0xd8 (Inherited: 0xa8)
struct UNPC_VoiceComponent_C : UFortAIComponent_Voice {
	struct UFortTaggedSoundBank* DeprecatedBPSoundBank; // 0xa8(0x08)
	struct USceneComponent* AttachComponent; // 0xb0(0x08)
	double TriggerTimeThreshold; // 0xb8(0x08)
	double LastTriggerTime; // 0xc0(0x08)
	struct UAudioComponent* Audio Component; // 0xc8(0x08)
	struct USoundEffectSourcePresetChain* SourceChainToApply; // 0xd0(0x08)

	void PlaySoundCue(struct USoundCue* SoundToPlay, struct UAudioComponent* AudioComponent, bool& Success); // Function NPC_VoiceComponent.NPC_VoiceComponent_C.PlaySoundCue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void SetSourceEffectChainToApply(struct USoundEffectSourcePresetChain* SourceEffectChain); // Function NPC_VoiceComponent.NPC_VoiceComponent_C.SetSourceEffectChainToApply // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Internal Get Voice Sound Bank(struct UFortTaggedSoundBank*& Sound Bank); // Function NPC_VoiceComponent.NPC_VoiceComponent_C.Internal Get Voice Sound Bank // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void Deprecated Set Sound Bank(struct UFortTaggedSoundBank* SoundBank); // Function NPC_VoiceComponent.NPC_VoiceComponent_C.Deprecated Set Sound Bank // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void PlayVoiceLine(struct FGameplayTag& Gameplay Tag, struct UAudioComponent* AudioComponent, bool& Success); // Function NPC_VoiceComponent.NPC_VoiceComponent_C.PlayVoiceLine // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

