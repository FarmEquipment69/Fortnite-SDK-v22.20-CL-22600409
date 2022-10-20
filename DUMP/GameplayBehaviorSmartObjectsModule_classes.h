// Class GameplayBehaviorSmartObjectsModule.AITask_UseGameplayBehaviorSmartObject
// Size: 0xa8 (Inherited: 0x68)
struct UAITask_UseGameplayBehaviorSmartObject : UAITask {
	struct FMulticastInlineDelegate OnFinished; // 0x68(0x10)
	struct UAITask_MoveTo* MoveToTask; // 0x78(0x08)
	struct UGameplayBehavior* GameplayBehavior; // 0x80(0x08)
	char pad_88[0x20]; // 0x88(0x20)

	struct UAITask_UseGameplayBehaviorSmartObject* UseGameplayBehaviorSmartObject(struct AAIController* Controller, struct AActor* SmartObjectActor, struct USmartObjectComponent* SmartObjectComponent, bool bLockAILogic); // Function GameplayBehaviorSmartObjectsModule.AITask_UseGameplayBehaviorSmartObject.UseGameplayBehaviorSmartObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7131f88
	struct UAITask_UseGameplayBehaviorSmartObject* UseClaimedGameplayBehaviorSmartObject(struct AAIController* Controller, struct FSmartObjectClaimHandle ClaimHandle, bool bLockAILogic); // Function GameplayBehaviorSmartObjectsModule.AITask_UseGameplayBehaviorSmartObject.UseClaimedGameplayBehaviorSmartObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7131d3c
};

// Class GameplayBehaviorSmartObjectsModule.BTTask_FindAndUseGameplayBehaviorSmartObject
// Size: 0xc0 (Inherited: 0x70)
struct UBTTask_FindAndUseGameplayBehaviorSmartObject : UBTTaskNode {
	struct FGameplayTagQuery ActivityRequirements; // 0x70(0x48)
	float Radius; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// Class GameplayBehaviorSmartObjectsModule.GameplayBehaviorSmartObjectBehaviorDefinition
// Size: 0x30 (Inherited: 0x28)
struct UGameplayBehaviorSmartObjectBehaviorDefinition : USmartObjectBehaviorDefinition {
	struct UGameplayBehaviorConfig* GameplayBehaviorConfig; // 0x28(0x08)
};

// Class GameplayBehaviorSmartObjectsModule.GameplayBehaviorSmartObjectsBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	bool UseGameplayBehaviorSmartObject(struct AActor* Avatar, struct AActor* SmartObject); // Function GameplayBehaviorSmartObjectsModule.GameplayBehaviorSmartObjectsBlueprintFunctionLibrary.UseGameplayBehaviorSmartObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x713211c
};

