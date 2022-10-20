// Enum DataDrivenGameplayEventRouter.EGameplayEventNetPolicy
enum class EGameplayEventNetPolicy : uint8 {
	ServerOnly = 0,
	ClientOrServer = 1,
	EGameplayEventNetPolicy_MAX = 2
};

// ScriptStruct DataDrivenGameplayEventRouter.GameplayEventDefinition
// Size: 0x10 (Inherited: 0x00)
struct FGameplayEventDefinition {
	struct UScriptStruct* EventType; // 0x00(0x08)
	bool bIsStateful; // 0x08(0x01)
	enum class EGameplayEventNetPolicy NetPolicy; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct DataDrivenGameplayEventRouter.GameplayEventDescriptor
// Size: 0x08 (Inherited: 0x00)
struct FGameplayEventDescriptor {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct DataDrivenGameplayEventRouter.GameplayEventSubscription
// Size: 0x78 (Inherited: 0x00)
struct FGameplayEventSubscription {
	struct TSoftObjectPtr<UObject> Object; // 0x00(0x28)
	struct FMemberReference EventDescriptor; // 0x28(0x30)
	struct FGameplayEventListenerHandle EventHandle; // 0x58(0x1c)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct DataDrivenGameplayEventRouter.GameplayEventHandlerFunction
// Size: 0x80 (Inherited: 0x00)
struct FGameplayEventHandlerFunction {
	struct FMemberReference EventHandlerFunction; // 0x00(0x30)
	struct TMap<struct FName, struct FString> EventHandlerFunctionDefaultValues; // 0x30(0x50)
};

// ScriptStruct DataDrivenGameplayEventRouter.GameplayEventHandlerFunctions
// Size: 0x180 (Inherited: 0x00)
struct FGameplayEventHandlerFunctions {
	struct FGameplayEventHandlerFunction OnEventReceived; // 0x00(0x80)
	struct FGameplayEventHandlerFunction OnStatefulEventApplied; // 0x80(0x80)
	struct FGameplayEventHandlerFunction OnStatefulEventCleared; // 0x100(0x80)
};

// ScriptStruct DataDrivenGameplayEventRouter.GameplayEventFunction
// Size: 0x18 (Inherited: 0x00)
struct FGameplayEventFunction {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct FGameplayEventSubscription> EventSubscriptions; // 0x08(0x10)
};

