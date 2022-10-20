// Class AudioGameplay.AudioGameplayComponent
// Size: 0xa8 (Inherited: 0xa0)
struct UAudioGameplayComponent : UActorComponent {
	char pad_A0[0x8]; // 0xa0(0x08)
};

// Class AudioGameplay.AudioRequirementPreset
// Size: 0x78 (Inherited: 0x30)
struct UAudioRequirementPreset : UDataAsset {
	struct FGameplayTagQuery Query; // 0x30(0x48)
};

// Class AudioGameplay.AudioGameplayCondition
// Size: 0x28 (Inherited: 0x28)
struct UAudioGameplayCondition : UInterface {

	bool ConditionMet_Position(struct FVector& Position); // Function AudioGameplay.AudioGameplayCondition.ConditionMet_Position // (RequiredAPI|Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1ad5f50
	bool ConditionMet(); // Function AudioGameplay.AudioGameplayCondition.ConditionMet // (RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1df7e6c
};

// Class AudioGameplay.AudioGameplayVolumeInteraction
// Size: 0x28 (Inherited: 0x28)
struct UAudioGameplayVolumeInteraction : UInterface {

	void OnListenerExit(); // Function AudioGameplay.AudioGameplayVolumeInteraction.OnListenerExit // (RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x28b7bd0
	void OnListenerEnter(); // Function AudioGameplay.AudioGameplayVolumeInteraction.OnListenerEnter // (RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x28806b4
};

