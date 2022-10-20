// Class ModularGameplay.GameFrameworkComponent
// Size: 0xa0 (Inherited: 0xa0)
struct UGameFrameworkComponent : UActorComponent {
};

// Class ModularGameplay.ControllerComponent
// Size: 0xa0 (Inherited: 0xa0)
struct UControllerComponent : UGameFrameworkComponent {
};

// Class ModularGameplay.GameFrameworkComponentManager
// Size: 0x238 (Inherited: 0x30)
struct UGameFrameworkComponentManager : UGameInstanceSubsystem {
	char pad_30[0x208]; // 0x30(0x208)

	bool UnregisterClassInitStateDelegate(struct TSoftClassPtr<UObject> ActorClass, struct FDelegate DelegateToRemove); // Function ModularGameplay.GameFrameworkComponentManager.UnregisterClassInitStateDelegate // (Final|Native|Public|BlueprintCallable) // @ game+0x5f88178
	bool UnregisterActorInitStateDelegate(struct AActor* Actor, struct FDelegate DelegateToRemove); // Function ModularGameplay.GameFrameworkComponentManager.UnregisterActorInitStateDelegate // (Final|Native|Public|BlueprintCallable) // @ game+0x5f87f50
	void SendExtensionEvent(struct AActor* Receiver, struct FName EventName, bool bOnlyInGameWorlds); // Function ModularGameplay.GameFrameworkComponentManager.SendExtensionEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x5f87e10
	void RemoveReceiver(struct AActor* Receiver); // Function ModularGameplay.GameFrameworkComponentManager.RemoveReceiver // (Final|Native|Public|BlueprintCallable) // @ game+0x5f87d94
	bool RegisterAndCallForClassInitState(struct TSoftClassPtr<UObject> ActorClass, struct FName FeatureName, struct FGameplayTag RequiredState, struct FDelegate Delegate, bool bCallImmediately); // Function ModularGameplay.GameFrameworkComponentManager.RegisterAndCallForClassInitState // (Final|Native|Public|BlueprintCallable) // @ game+0x5f87a88
	bool RegisterAndCallForActorInitState(struct AActor* Actor, struct FName FeatureName, struct FGameplayTag RequiredState, struct FDelegate Delegate, bool bCallImmediately); // Function ModularGameplay.GameFrameworkComponentManager.RegisterAndCallForActorInitState // (Final|Native|Public|BlueprintCallable) // @ game+0x5f877ec
	void AddReceiver(struct AActor* Receiver, bool bAddOnlyInGameWorlds); // Function ModularGameplay.GameFrameworkComponentManager.AddReceiver // (Final|Native|Public|BlueprintCallable) // @ game+0x5f87610
};

// Class ModularGameplay.GameFrameworkInitStateInterface
// Size: 0x28 (Inherited: 0x28)
struct UGameFrameworkInitStateInterface : UInterface {

	bool UnregisterInitStateDelegate(struct FDelegate Delegate); // Function ModularGameplay.GameFrameworkInitStateInterface.UnregisterInitStateDelegate // (Native|Public|BlueprintCallable) // @ game+0x5f88298
	bool RegisterAndCallForInitStateChange(struct FGameplayTag RequiredState, struct FDelegate Delegate, bool bCallImmediately); // Function ModularGameplay.GameFrameworkInitStateInterface.RegisterAndCallForInitStateChange // (Native|Public|BlueprintCallable) // @ game+0x5f87c6c
	bool HasReachedInitState(struct FGameplayTag DesiredState); // Function ModularGameplay.GameFrameworkInitStateInterface.HasReachedInitState // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5f8775c
	struct FGameplayTag GetInitState(); // Function ModularGameplay.GameFrameworkInitStateInterface.GetInitState // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5f87730
	struct FName GetFeatureName(); // Function ModularGameplay.GameFrameworkInitStateInterface.GetFeatureName // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5f87704
};

// Class ModularGameplay.GameStateComponent
// Size: 0xa0 (Inherited: 0xa0)
struct UGameStateComponent : UGameFrameworkComponent {
};

// Class ModularGameplay.PawnComponent
// Size: 0xa0 (Inherited: 0xa0)
struct UPawnComponent : UGameFrameworkComponent {
};

// Class ModularGameplay.PlayerStateComponent
// Size: 0xa0 (Inherited: 0xa0)
struct UPlayerStateComponent : UGameFrameworkComponent {
};

