// Class LootController.FortAthenaMutator_CR_CreativeAllowLootItem
// Size: 0x350 (Inherited: 0x330)
struct AFortAthenaMutator_CR_CreativeAllowLootItem : AFortAthenaMutator {
	struct FGameplayTagContainer ItemGameplayTagsNotAllowed; // 0x330(0x20)

	void SetItemGameplayTagsNotAllowed(struct FGameplayTagContainer& InItemGameplayTagsNotAllowed); // Function LootController.FortAthenaMutator_CR_CreativeAllowLootItem.SetItemGameplayTagsNotAllowed // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x67522cc
};

// Class LootController.FortAthenaMutator_CR_LootChoice
// Size: 0x330 (Inherited: 0x330)
struct AFortAthenaMutator_CR_LootChoice : AFortAthenaMutator {

	struct UDataTable* GetLootTierDataTable(); // Function LootController.FortAthenaMutator_CR_LootChoice.GetLootTierDataTable // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x5d0c950
	struct FString GetLootSelectionString(); // Function LootController.FortAthenaMutator_CR_LootChoice.GetLootSelectionString // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x67520dc
	struct UDataTable* GetLootPackageTable(); // Function LootController.FortAthenaMutator_CR_LootChoice.GetLootPackageTable // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x5d0c950
	struct FGameplayTagContainer GetContextTagsToRemove(); // Function LootController.FortAthenaMutator_CR_LootChoice.GetContextTagsToRemove // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x6752078
	struct FGameplayTagContainer GetContextTagsToAdd(); // Function LootController.FortAthenaMutator_CR_LootChoice.GetContextTagsToAdd // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x6752078
};

// Class LootController.LootControllerNativeComponent
// Size: 0xc0 (Inherited: 0xa0)
struct ULootControllerNativeComponent : UActorComponent {
	struct TArray<struct AActor*> OutActors; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnAsyncGetActorsOfClassCompleted; // 0xb0(0x10)

	void PrintDebugString(struct FString DebugString, bool LogWarning); // Function LootController.LootControllerNativeComponent.PrintDebugString // (Final|Native|Protected|BlueprintCallable) // @ game+0x6752138
	bool IsThrottleEnabled(); // Function LootController.LootControllerNativeComponent.IsThrottleEnabled // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x675211c
	void AsyncGetActorsOfClass(struct UObject* WorldContextObject, struct AActor* ActorClass); // Function LootController.LootControllerNativeComponent.AsyncGetActorsOfClass // (Final|Native|Protected|BlueprintCallable) // @ game+0x6751fb4
};

