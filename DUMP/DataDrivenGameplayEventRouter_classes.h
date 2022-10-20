// Class DataDrivenGameplayEventRouter.GameplayEventDescriptorLibrary
// Size: 0x28 (Inherited: 0x28)
struct UGameplayEventDescriptorLibrary : UBlueprintFunctionLibrary {

	bool BroadcastEvent(struct FGameplayEventDescriptor& EventDescriptor, struct UObject* EventContext, int32_t& event, struct UObject* EventRouterScope, struct AActor* RouterContextActor); // Function DataDrivenGameplayEventRouter.GameplayEventDescriptorLibrary.BroadcastEvent // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x6307280
};

// Class DataDrivenGameplayEventRouter.GameplayEventLegacyBroadcast
// Size: 0x28 (Inherited: 0x28)
struct UGameplayEventLegacyBroadcast : UInterface {
};

