// Class GameplayInteractionsModule.AITask_UseGameplayInteraction
// Size: 0x130 (Inherited: 0x68)
struct UAITask_UseGameplayInteraction : UAITask {
	struct FMulticastInlineDelegate OnFinished; // 0x68(0x10)
	struct FGameplayInteractionContext GameplayInteractionContext; // 0x78(0xa0)
	struct FSmartObjectClaimHandle ClaimedHandle; // 0x118(0x10)
	struct FGameplayInteractionAbortContext AbortContext; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)

	struct UAITask_UseGameplayInteraction* UseClaimedGameplayInteractionSmartObject(struct AAIController* Controller, struct FSmartObjectClaimHandle ClaimHandle, bool bLockAILogic); // Function GameplayInteractionsModule.AITask_UseGameplayInteraction.UseClaimedGameplayInteractionSmartObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x70e3bdc
	void RequestAbort(); // Function GameplayInteractionsModule.AITask_UseGameplayInteraction.RequestAbort // (Final|Native|Public|BlueprintCallable) // @ game+0x70e39e8
};

// Class GameplayInteractionsModule.GameplayActuationComponent
// Size: 0xd8 (Inherited: 0xa0)
struct UGameplayActuationComponent : UActorComponent {
	char pad_A0[0x8]; // 0xa0(0x08)
	struct FInstancedStruct ActuationState; // 0xa8(0x10)
	char pad_B8[0x8]; // 0xb8(0x08)
	struct TArray<struct FInstancedStruct> Transitions; // 0xc0(0x10)
	bool bEnableTransitions; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
};

// Class GameplayInteractionsModule.GameplayActuationStateProvider
// Size: 0x28 (Inherited: 0x28)
struct UGameplayActuationStateProvider : UInterface {
};

// Class GameplayInteractionsModule.GameplayInteractionSmartObjectBehaviorDefinition
// Size: 0x40 (Inherited: 0x28)
struct UGameplayInteractionSmartObjectBehaviorDefinition : USmartObjectBehaviorDefinition {
	struct FStateTreeReference StateTreeReference; // 0x28(0x18)
};

// Class GameplayInteractionsModule.GameplayInteractionStateTreeSchema
// Size: 0x38 (Inherited: 0x28)
struct UGameplayInteractionStateTreeSchema : UStateTreeSchema {
	struct TArray<struct FStateTreeExternalDataDesc> NamedExternalDataDescs; // 0x28(0x10)
};

// Class GameplayInteractionsModule.GameplayTaskTransition
// Size: 0x28 (Inherited: 0x28)
struct UGameplayTaskTransition : UInterface {
};

// Class GameplayInteractionsModule.GameplayTask_MoveTo
// Size: 0x210 (Inherited: 0x60)
struct UGameplayTask_MoveTo : UGameplayTask {
	char pad_60[0x8]; // 0x60(0x08)
	struct FMulticastInlineDelegate OnRequestFailed; // 0x68(0x10)
	struct FMulticastInlineDelegate OnCompleted; // 0x78(0x10)
	struct UCharacterMovementComponent* MovementComponent; // 0x88(0x08)
	struct UGameplayActuationComponent* ActuationComponent; // 0x90(0x08)
	struct FAIMoveRequest MoveRequest; // 0x98(0x48)
	char pad_E0[0x120]; // 0xe0(0x120)
	struct UGameplayTask* StartTransitionTask; // 0x200(0x08)
	struct UGameplayTask* EndTransitionTask; // 0x208(0x08)

	struct UGameplayTask_MoveTo* MoveTo(struct AActor* Actor, struct FVector GoalLocation, struct AActor* GoalActor, enum class EGameplayTaskMoveToIntent EndOfPathIntent, float AcceptanceRadius, enum class EAIOptionFlag StopOnOverlap, enum class EAIOptionFlag AcceptPartialPath, bool bUsePathfinding, bool bUseContinuousGoalTracking, enum class EAIOptionFlag ProjectGoalOnNavigation); // Function GameplayInteractionsModule.GameplayTask_MoveTo.MoveTo // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x70e327c
};

// Class GameplayInteractionsModule.GameplayTask_MoveToContextualAnim
// Size: 0x268 (Inherited: 0x210)
struct UGameplayTask_MoveToContextualAnim : UGameplayTask_MoveTo {
	struct FGameplayActuationState_ContextualAnim NextState; // 0x210(0x58)

	struct UGameplayTask_MoveToContextualAnim* EnterContextualAnim(struct AActor* Interactor, struct FName InteractorRole, struct AActor* InteractableObject, struct FName InteractableObjectRole, struct FName SectionName, struct FName ExitSectionName, struct UContextualAnimSceneAsset* SceneAsset); // Function GameplayInteractionsModule.GameplayTask_MoveToContextualAnim.EnterContextualAnim // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x70e3060
};

// Class GameplayInteractionsModule.GameplayTask_MoveToStandTransition
// Size: 0x140 (Inherited: 0x60)
struct UGameplayTask_MoveToStandTransition : UGameplayTask {
	char pad_60[0x10]; // 0x60(0x10)
	struct UCharacterMovementComponent* MovementComponent; // 0x70(0x08)
	char pad_78[0xc8]; // 0x78(0xc8)
};

// Class GameplayInteractionsModule.GameplayTask_PlayContextualAnim
// Size: 0x220 (Inherited: 0x60)
struct UGameplayTask_PlayContextualAnim : UGameplayTask {
	char pad_60[0x80]; // 0x60(0x80)
	struct FMulticastInlineDelegate OnRequestFailed; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnCompleted; // 0xf0(0x10)
	int32_t SectionIdx; // 0x100(0x04)
	int32_t AnimSetIdx; // 0x104(0x04)
	struct TArray<struct FTransform> Pivots; // 0x108(0x10)
	struct UContextualAnimSceneAsset* SceneAsset; // 0x118(0x08)
	struct FName InteractorRole; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct AActor* InteractableObject; // 0x128(0x08)
	struct FName InteractableObjectRole; // 0x130(0x04)
	struct FName ExitSectionName; // 0x134(0x04)
	struct UContextualAnimSceneInstance* SceneInstance; // 0x138(0x08)
	struct UGameplayActuationComponent* ActuationComponent; // 0x140(0x08)
	struct FContextualAnimStartSceneParams SceneParams; // 0x148(0x68)
	struct FTransform SafeExitPoint; // 0x1b0(0x60)
	enum class EPlayContextualAnimStatus Status; // 0x210(0x01)
	bool bTeleportOnTaskEnd; // 0x211(0x01)
	char pad_212[0xe]; // 0x212(0x0e)

	void SetExit(enum class EPlayContextualAnimExitMode ExitMode, struct FName NewExitSectionName); // Function GameplayInteractionsModule.GameplayTask_PlayContextualAnim.SetExit // (Final|Native|Public|BlueprintCallable) // @ game+0x70e3a04
	struct UGameplayTask_PlayContextualAnim* PlayContextualAnim(struct AActor* Interactor, struct FName InteractorRole, struct AActor* InteractableObject, struct FName InteractableObjectRole, struct FName SectionName, struct FName ExitSectionName, struct UContextualAnimSceneAsset* SceneAsset); // Function GameplayInteractionsModule.GameplayTask_PlayContextualAnim.PlayContextualAnim // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x70e37e4
	void OnSectionEndTimeReached(struct UContextualAnimSceneInstance* SceneInstance); // Function GameplayInteractionsModule.GameplayTask_PlayContextualAnim.OnSectionEndTimeReached // (Final|Native|Protected) // @ game+0x70e3764
	enum class EPlayContextualAnimStatus GetStatus(); // Function GameplayInteractionsModule.GameplayTask_PlayContextualAnim.GetStatus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x70e3264
};

// Class GameplayInteractionsModule.GameplayTask_StandAt
// Size: 0x128 (Inherited: 0x60)
struct UGameplayTask_StandAt : UGameplayTask {
	char pad_60[0x8]; // 0x60(0x08)
	struct FMulticastInlineDelegate OnRequestFailed; // 0x68(0x10)
	struct FMulticastInlineDelegate OnCompleted; // 0x78(0x10)
	char pad_88[0x98]; // 0x88(0x98)
	struct UCharacterMovementComponent* MovementComponent; // 0x120(0x08)

	struct UGameplayTask_StandAt* StandAt(struct APawn* Pawn, float Duration); // Function GameplayInteractionsModule.GameplayTask_StandAt.StandAt // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x70e3ad0
};

// Class GameplayInteractionsModule.GameplayTask_StandToMoveTransition
// Size: 0x140 (Inherited: 0x60)
struct UGameplayTask_StandToMoveTransition : UGameplayTask {
	char pad_60[0x10]; // 0x60(0x10)
	struct UCharacterMovementComponent* MovementComponent; // 0x70(0x08)
	char pad_78[0xc8]; // 0x78(0xc8)
};

// Class GameplayInteractionsModule.GameplayTask_SuddenTurnTransition
// Size: 0x140 (Inherited: 0x60)
struct UGameplayTask_SuddenTurnTransition : UGameplayTask {
	char pad_60[0x10]; // 0x60(0x10)
	struct UCharacterMovementComponent* MovementComponent; // 0x70(0x08)
	char pad_78[0xc8]; // 0x78(0xc8)
};

