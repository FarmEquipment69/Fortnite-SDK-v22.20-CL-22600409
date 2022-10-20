// Enum GameplayBehaviorsModule.EGameplayBehaviorInstantiationPolicy
enum class EGameplayBehaviorInstantiationPolicy : uint8 {
	Instantiate = 0,
	ConditionallyInstantiate = 1,
	DontInstantiate = 2,
	EGameplayBehaviorInstantiationPolicy_MAX = 3
};

// ScriptStruct GameplayBehaviorsModule.AgentGameplayBehaviors
// Size: 0x10 (Inherited: 0x00)
struct FAgentGameplayBehaviors {
	struct TArray<struct UGameplayBehavior*> Behaviors; // 0x00(0x10)
};

// ScriptStruct GameplayBehaviorsModule.MontagePlaybackData
// Size: 0x40 (Inherited: 0x00)
struct FMontagePlaybackData {
	struct AActor* Avatar; // 0x00(0x08)
	struct UAnimMontage* AnimMontage; // 0x08(0x08)
	struct UAbilitySystemComponent* AbilityComponent; // 0x10(0x08)
	char pad_18[0x28]; // 0x18(0x28)
};

