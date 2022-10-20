// Class Curie.CurieComponent
// Size: 0xb0 (Inherited: 0xa0)
struct UCurieComponent : UActorComponent {
	char pad_A0[0x10]; // 0xa0(0x10)
};

// Class Curie.CurieElementGameplayEffectOwner
// Size: 0x28 (Inherited: 0x28)
struct UCurieElementGameplayEffectOwner : UObject {
};

// Class Curie.CurieEntityStateBehavior
// Size: 0xc0 (Inherited: 0x28)
struct UCurieEntityStateBehavior : UCurieElementGameplayEffectOwner {
	struct FGameplayTagContainer RequiredAttachedElements; // 0x28(0x20)
	struct FGameplayTagContainer RequiredInteractingElements; // 0x48(0x20)
	struct FGameplayTagContainer AllowedAttachmentEntityTypes; // 0x68(0x20)
	struct TArray<struct FCurieEffectContainer> OnBeginEffects; // 0x88(0x10)
	struct TArray<struct FCurieEffectContainer> OngoingEffects; // 0x98(0x10)
	struct TArray<struct FCurieEffectContainer> OnEndEffects; // 0xa8(0x10)
	char bShouldDetach : 1; // 0xb8(0x01)
	char bSkipExecuteAttachDetach : 1; // 0xb8(0x01)
	char pad_B8_2 : 6; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
};

// Class Curie.CurieGlobals
// Size: 0x50 (Inherited: 0x28)
struct UCurieGlobals : UObject {
	bool bEnableCurie; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FSoftClassPath CurieGlobalsClassName; // 0x30(0x18)
	struct UCurieManager* RegisteredCurieManager; // 0x48(0x08)
};

// Class Curie.CurieElementAllocationHandler
// Size: 0x28 (Inherited: 0x28)
struct UCurieElementAllocationHandler : UObject {
};

// Class Curie.CurieElementInteractWithElementHandler
// Size: 0x30 (Inherited: 0x28)
struct UCurieElementInteractWithElementHandler : UObject {
	enum class ECurieHandlerPriority HandlerPriority; // 0x28(0x01)
	enum class ECurieHandlerBehavior HandlerBehavior; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	struct FGameplayTag ElementTag; // 0x2c(0x04)
};

// Class Curie.CurieElementInteractWithMaterialHandler
// Size: 0x30 (Inherited: 0x28)
struct UCurieElementInteractWithMaterialHandler : UObject {
	enum class ECurieHandlerPriority HandlerPriority; // 0x28(0x01)
	enum class ECurieHandlerBehavior HandlerBehavior; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	struct FGameplayTag ElementTag; // 0x2c(0x04)
};

// Class Curie.CurieElementAttachHandler
// Size: 0x60 (Inherited: 0x28)
struct UCurieElementAttachHandler : UCurieElementGameplayEffectOwner {
	enum class ECurieHandlerPriority HandlerPriority; // 0x28(0x01)
	enum class ECurieHandlerBehavior HandlerBehavior; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	struct FGameplayTag ElementTag; // 0x2c(0x04)
	struct TArray<struct FCurieEffectContainer> OnBeginAttachmentEffects; // 0x30(0x10)
	struct TArray<struct FCurieEffectContainer> OngoingAttachmentEffects; // 0x40(0x10)
	struct TArray<struct FCurieEffectContainer> OnEndAttachmentEffects; // 0x50(0x10)
};

// Class Curie.CurieElementAttachConditionHandler
// Size: 0x30 (Inherited: 0x28)
struct UCurieElementAttachConditionHandler : UObject {
	enum class ECurieHandlerPriority HandlerPriority; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FGameplayTag ElementTag; // 0x2c(0x04)
};

// Class Curie.CurieElementInteractWithContainerHandler
// Size: 0x70 (Inherited: 0x28)
struct UCurieElementInteractWithContainerHandler : UCurieElementGameplayEffectOwner {
	enum class ECurieHandlerPriority HandlerPriority; // 0x28(0x01)
	enum class ECurieHandlerBehavior HandlerBehavior; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	struct FGameplayTag ElementTag; // 0x2c(0x04)
	struct TArray<struct FCurieEffectContainer> OnInstantInteractionEffects; // 0x30(0x10)
	struct TArray<struct FCurieEffectContainer> OnBeginInteractionEffects; // 0x40(0x10)
	struct TArray<struct FCurieEffectContainer> OngoingInteractionEffects; // 0x50(0x10)
	struct TArray<struct FCurieEffectContainer> OnEndInteractionEffects; // 0x60(0x10)
};

// Class Curie.CurieInterface
// Size: 0x28 (Inherited: 0x28)
struct UCurieInterface : UInterface {

	void OnCurieStateDetached_BP(struct FCurieContainerHandle CurieContainerHandle, struct FGameplayTag StateTag); // Function Curie.CurieInterface.OnCurieStateDetached_BP // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnCurieStateAttached_BP(struct FCurieContainerHandle CurieContainerHandle, struct FGameplayTag StateTag); // Function Curie.CurieInterface.OnCurieStateAttached_BP // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnCurieElementInteractEnded_BP(struct FCurieContainerHandle CurieContainerHandle, struct FGameplayTag ElementTag, struct FCurieInteractParamsHandle& InteractParamsHandle); // Function Curie.CurieInterface.OnCurieElementInteractEnded_BP // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnCurieElementInteractBegun_BP(struct FCurieContainerHandle CurieContainerHandle, struct FGameplayTag ElementTag, struct FCurieInteractParamsHandle& InteractParamsHandle); // Function Curie.CurieInterface.OnCurieElementInteractBegun_BP // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnCurieElementInteract_BP(struct FCurieContainerHandle CurieContainerHandle, struct FGameplayTag ElementTag, struct FCurieInteractParamsHandle& InteractParamsHandle); // Function Curie.CurieInterface.OnCurieElementInteract_BP // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnCurieElementDetached_BP(struct FCurieContainerHandle CurieContainerHandle, struct FGameplayTag ElementTag); // Function Curie.CurieInterface.OnCurieElementDetached_BP // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnCurieElementAttached_BP(struct FCurieContainerHandle CurieContainerHandle, struct FGameplayTag ElementTag); // Function Curie.CurieInterface.OnCurieElementAttached_BP // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnCurieContainerReparented_BP(struct FCurieContainerHandle CurieContainerHandle); // Function Curie.CurieInterface.OnCurieContainerReparented_BP // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnCurieContainerReleased_BP(struct FCurieContainerHandle CurieContainerHandle); // Function Curie.CurieInterface.OnCurieContainerReleased_BP // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnCurieContainerAcquired_BP(struct FCurieContainerHandle CurieContainerHandle); // Function Curie.CurieInterface.OnCurieContainerAcquired_BP // (Event|Public|BlueprintEvent) // @ game+0xd67374
};

// Class Curie.CurieManager
// Size: 0x630 (Inherited: 0xa0)
struct UCurieManager : UGameStateComponent {
	struct UCurieComponent* CurieComponentClass; // 0xa0(0x08)
	struct FName CurieManagerRegistryName; // 0xa8(0x04)
	struct FName MaterialDataRegistryName; // 0xac(0x04)
	struct FName ElementDataRegistryName; // 0xb0(0x04)
	struct FName EntityStateDataRegistryName; // 0xb4(0x04)
	char pad_B8[0x298]; // 0xb8(0x298)
	struct TMap<struct FGameplayTag, struct UCurieElementAllocationHandler*> ElementAllocationHandlers; // 0x350(0x50)
	struct TMap<struct FGameplayTag, struct FCurieElementAttachHandlersContainer> ElementAttachmentHandlers; // 0x3a0(0x50)
	struct TMap<struct FGameplayTag, struct FCurieElementAttachConditionHandlersContainer> ElementAttachmentConditionHandlers; // 0x3f0(0x50)
	struct TMap<struct FCurieElementPairKey, struct FCurieElementInteractWithElementHandlersContainer> ElementInteractWithElementHandlers; // 0x440(0x50)
	struct TMap<struct FGameplayTag, struct FCurieElementInteractWithMaterialHandlersContainer> ElementInteractWithMaterialHandlers; // 0x490(0x50)
	struct TMap<struct FGameplayTag, struct FCurieElementInteractWithContainerHandlersContainer> ElementInteractWithContainerHandlers; // 0x4e0(0x50)
	struct TArray<struct UCurieManagerComponent*> CurieManagerComponents; // 0x530(0x10)
	char pad_540[0xf0]; // 0x540(0xf0)

	void UnbindDelegateForCurieStateDetached(struct UObject* CurieOwner, struct FDelegate& Delegate); // Function Curie.CurieManager.UnbindDelegateForCurieStateDetached // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5fc5fa0
	void UnbindDelegateForCurieStateAttached(struct UObject* CurieOwner, struct FDelegate& Delegate); // Function Curie.CurieManager.UnbindDelegateForCurieStateAttached // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5fc5cc4
	void UnbindDelegateForCurieElementInteract(struct UObject* CurieOwner, struct FDelegate& Delegate); // Function Curie.CurieManager.UnbindDelegateForCurieElementInteract // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5fc59d8
	void UnbindDelegateForCurieElementEndInteract(struct UObject* CurieOwner, struct FDelegate& Delegate); // Function Curie.CurieManager.UnbindDelegateForCurieElementEndInteract // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5fc56ec
	void UnbindDelegateForCurieElementDetached(struct UObject* CurieOwner, struct FDelegate& Delegate); // Function Curie.CurieManager.UnbindDelegateForCurieElementDetached // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5fc5400
	void UnbindDelegateForCurieElementBeginInteract(struct UObject* CurieOwner, struct FDelegate& Delegate); // Function Curie.CurieManager.UnbindDelegateForCurieElementBeginInteract // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5fc5114
	void UnbindDelegateForCurieElementAttached(struct UObject* CurieOwner, struct FDelegate& Delegate); // Function Curie.CurieManager.UnbindDelegateForCurieElementAttached // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5fc4e28
	void HandleContainerOwnerDestroyed(struct AActor* OwnerActor); // Function Curie.CurieManager.HandleContainerOwnerDestroyed // (Final|Native|Private) // @ game+0x5fc4da4
	void BindDelegateForCurieStateDetached(struct UObject* CurieOwner, struct FDelegate& Delegate); // Function Curie.CurieManager.BindDelegateForCurieStateDetached // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5fc4b58
	void BindDelegateForCurieStateAttached(struct UObject* CurieOwner, struct FDelegate& Delegate); // Function Curie.CurieManager.BindDelegateForCurieStateAttached // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5fc490c
	void BindDelegateForCurieElementInteract(struct UObject* CurieOwner, struct FDelegate& Delegate); // Function Curie.CurieManager.BindDelegateForCurieElementInteract // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5fc46c0
	void BindDelegateForCurieElementEndInteract(struct UObject* CurieOwner, struct FDelegate& Delegate); // Function Curie.CurieManager.BindDelegateForCurieElementEndInteract // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5fc4474
	void BindDelegateForCurieElementDetached(struct UObject* CurieOwner, struct FDelegate& Delegate); // Function Curie.CurieManager.BindDelegateForCurieElementDetached // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5fc4228
	void BindDelegateForCurieElementBeginInteract(struct UObject* CurieOwner, struct FDelegate& Delegate); // Function Curie.CurieManager.BindDelegateForCurieElementBeginInteract // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5fc3fdc
	void BindDelegateForCurieElementAttached(struct UObject* CurieOwner, struct FDelegate& Delegate); // Function Curie.CurieManager.BindDelegateForCurieElementAttached // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5fc3d90
};

// Class Curie.CurieManagerComponentInterface
// Size: 0x28 (Inherited: 0x28)
struct UCurieManagerComponentInterface : UInterface {
};

// Class Curie.CurieManagerComponentConfig
// Size: 0x40 (Inherited: 0x30)
struct UCurieManagerComponentConfig : UPrimaryDataAsset {
	char pad_30[0x8]; // 0x30(0x08)
	struct FName ConfigName; // 0x38(0x04)
	struct FGameplayTag ConfigTag; // 0x3c(0x04)
};

// Class Curie.CurieManagerComponent
// Size: 0x30 (Inherited: 0x28)
struct UCurieManagerComponent : UObject {
	struct UCurieManagerComponentConfig* CachedConfig; // 0x28(0x08)
};

