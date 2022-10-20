// ScriptStruct ModularGameplay.ActorInitStateChangedParams
// Size: 0x20 (Inherited: 0x00)
struct FActorInitStateChangedParams {
	struct AActor* OwningActor; // 0x00(0x08)
	struct FName FeatureName; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UObject* Implementer; // 0x10(0x08)
	struct FGameplayTag FeatureState; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

