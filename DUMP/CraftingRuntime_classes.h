// Class CraftingRuntime.CraftingCheatManager
// Size: 0x28 (Inherited: 0x28)
struct UCraftingCheatManager : UChildCheatManager {

	void ToggleFreeCrafting(); // Function CraftingRuntime.CraftingCheatManager.ToggleFreeCrafting // (Final|Exec|Native|Public) // @ game+0x24841e4
	void StartSelfCrafting(struct FName FormulaName); // Function CraftingRuntime.CraftingCheatManager.StartSelfCrafting // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x6745f74
};

// Class CraftingRuntime.CraftingGlobals
// Size: 0x28 (Inherited: 0x28)
struct UCraftingGlobals : UObject {
};

// Class CraftingRuntime.CraftingLibrary
// Size: 0x28 (Inherited: 0x28)
struct UCraftingLibrary : UBlueprintFunctionLibrary {

	void StartCrafting(struct AFortPlayerController* Instigator, struct AActor* CraftingObject, struct FName& CraftingFormulaName, int32_t NumberToCraft); // Function CraftingRuntime.CraftingLibrary.StartCrafting // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6745da8
	void ReportCraftingSuccess(struct AFortPlayerController* Instigator, struct AActor* CraftingObject); // Function CraftingRuntime.CraftingLibrary.ReportCraftingSuccess // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x67457c8
	void PickupItemAndStartCrafting(struct AFortPlayerController* Instigator, struct AActor* CraftingObject, struct AFortPickup* PickUp, struct FName& CraftingFormulaName); // Function CraftingRuntime.CraftingLibrary.PickupItemAndStartCrafting // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x67455cc
	bool IsValidIngredient(struct AFortPlayerController* FortPC, struct AActor* CraftingObject, struct UFortItemDefinition* ItemDef); // Function CraftingRuntime.CraftingLibrary.IsValidIngredient // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6744fbc
	void GiveItemToCraftingObject(struct AFortPlayerController* Instigator, struct AActor* CraftingObject, struct FFortItemEntry& ItemEntryToGrant); // Function CraftingRuntime.CraftingLibrary.GiveItemToCraftingObject // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x6744760
	void GetValidIngredientsInInventory(struct AFortPlayerController* FortPC, struct AActor* CraftingObject, struct TArray<struct UFortWorldItem*>& OutIngredients); // Function CraftingRuntime.CraftingLibrary.GetValidIngredientsInInventory // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6744384
	void GetUIDataForCraftingIngredientTags(struct UObject* WorldContextObject, struct FGameplayTagContainer& IngredientTags, struct TArray<struct TSoftObjectPtr<UFortItemDefinition>>& OutItemDefs, struct TArray<struct TSoftObjectPtr<UObject>>& OutIcons); // Function CraftingRuntime.CraftingLibrary.GetUIDataForCraftingIngredientTags // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x67441d4
	void GetKnownCraftingFormulas(struct AFortPlayerController* FortPC, struct AActor* CraftingObject, struct TArray<struct FName>& OutFormulas); // Function CraftingRuntime.CraftingLibrary.GetKnownCraftingFormulas // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6744050
	struct TArray<struct UFortWorldItem*> GetIngredientsInCraftingObject(struct AActor* CraftingObject); // Function CraftingRuntime.CraftingLibrary.GetIngredientsInCraftingObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6743ea4
	void GetCraftingResultsForRowName(struct UObject* WorldContextObject, struct FName& CraftingFormulaRow, struct TArray<struct FItemAndCount>& OutResults, int32_t NumToCraft); // Function CraftingRuntime.CraftingLibrary.GetCraftingResultsForRowName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6743d30
	float GetCraftingObjectCurrentCraftingStateTimeLeft(struct AActor* CraftingObject); // Function CraftingRuntime.CraftingLibrary.GetCraftingObjectCurrentCraftingStateTimeLeft // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6743c80
	float GetCraftingObjectCurrentCraftingStateStartTime(struct AActor* CraftingObject); // Function CraftingRuntime.CraftingLibrary.GetCraftingObjectCurrentCraftingStateStartTime // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6743bec
	float GetCraftingObjectCurrentCraftingStateEndTime(struct AActor* CraftingObject); // Function CraftingRuntime.CraftingLibrary.GetCraftingObjectCurrentCraftingStateEndTime // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6743b4c
	enum class ECraftingObjectState GetCraftingObjectCraftingState(struct AActor* CraftingObject); // Function CraftingRuntime.CraftingLibrary.GetCraftingObjectCraftingState // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x6743abc
	struct TArray<struct UFortWorldItem*> GetCraftingIngredients_TempItems(struct AActor* CraftingObject); // Function CraftingRuntime.CraftingLibrary.GetCraftingIngredients_TempItems // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6743940
	struct FName GetCraftingFormulaNameBeingCrafted(struct AActor* CraftingObject); // Function CraftingRuntime.CraftingLibrary.GetCraftingFormulaNameBeingCrafted // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x67438b0
	bool GetCraftingFormulaIngredientRequirements(struct UObject* WorldContextObject, struct FName& CraftingFormulaRow, struct TArray<struct FCraftingIngredientRequirement>& OutIngredientRequirements); // Function CraftingRuntime.CraftingLibrary.GetCraftingFormulaIngredientRequirements // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6743770
	struct TArray<struct UFortWorldItem*> GetCraftedResults_TempItems(struct AActor* CraftingObject); // Function CraftingRuntime.CraftingLibrary.GetCraftedResults_TempItems // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x67435f4
	void GetAllValidIngredients(struct AFortPlayerController* FortPC, struct AActor* CraftingObject, struct TArray<struct FGameplayTagContainer>& OutIngredients); // Function CraftingRuntime.CraftingLibrary.GetAllValidIngredients // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6743478
	void GetAllCraftableFormulas(struct AFortPlayerController* FortPC, struct AActor* CraftingObject, struct TArray<struct FName>& OutFormulas); // Function CraftingRuntime.CraftingLibrary.GetAllCraftableFormulas // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6743360
	void EjectItems(struct AFortPlayerController* Instigator, struct AActor* CraftingObject); // Function CraftingRuntime.CraftingLibrary.EjectItems // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6743248
	void ClaimCraftingResults(struct AFortPlayerController* Instigator, struct AActor* CraftingObject); // Function CraftingRuntime.CraftingLibrary.ClaimCraftingResults // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6742f70
	bool CanCraftFormulaWithAdditionalItems(struct AFortPlayerController* FortPC, struct AActor* CraftingObject, struct FName CraftingFormulaRow, struct TArray<struct FItemAndCount>& AdditionalItems, struct TArray<struct FCraftingIngredientQueryState>& OutIngredientStates, int32_t NumberToCraft); // Function CraftingRuntime.CraftingLibrary.CanCraftFormulaWithAdditionalItems // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6742c38
	bool CanCraftFormula(struct AFortPlayerController* FortPC, struct AActor* CraftingObject, struct FName CraftingFormulaRow, struct TArray<struct FCraftingIngredientQueryState>& OutIngredientStates, int32_t NumberToCraft); // Function CraftingRuntime.CraftingLibrary.CanCraftFormula // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6742aa4
	void CancelCrafting(struct AFortPlayerController* Instigator, struct AActor* CraftingObject); // Function CraftingRuntime.CraftingLibrary.CancelCrafting // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6742e40
};

// Class CraftingRuntime.CraftingObjectBGA
// Size: 0xa30 (Inherited: 0x9c8)
struct ACraftingObjectBGA : ABuildingGameplayActor {
	char pad_9C8[0x8]; // 0x9c8(0x08)
	struct AFortInventory* Inventory; // 0x9d0(0x08)
	char pad_9D8[0x18]; // 0x9d8(0x18)
	struct USphereComponent* SphereComponent_InteractionRange; // 0x9f0(0x08)
	struct TSoftClassPtr<UObject> MenuWidget; // 0x9f8(0x28)
	struct UWidgetComponent* WidgetComponent_PotContents; // 0xa20(0x08)
	bool bShowCraftingUI; // 0xa28(0x01)
	bool bSendEventMessageOnLocalInteract; // 0xa29(0x01)
	char pad_A2A[0x6]; // 0xa2a(0x06)

	void HandleInteractionRangeEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function CraftingRuntime.CraftingObjectBGA.HandleInteractionRangeEndOverlap // (Final|Native|Private) // @ game+0x6744cd4
	void HandleInteractionRangeBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function CraftingRuntime.CraftingObjectBGA.HandleInteractionRangeBeginOverlap // (Final|Native|Private|HasOutParms) // @ game+0x6744b00
};

// Class CraftingRuntime.CraftingObjectComponent
// Size: 0x508 (Inherited: 0xa0)
struct UCraftingObjectComponent : UGameFrameworkComponent {
	struct FMulticastInlineDelegate CraftingObjectStateChanged; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnFormulaCraftableChanged; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnCraftingSuccess; // 0xc0(0x10)
	struct FCraftingObjectRepStateData CraftingObjectRepStateData; // 0xd0(0x08)
	struct FName CraftingFormulaRow; // 0xd8(0x04)
	int32_t NumToCraft; // 0xdc(0x04)
	struct TWeakObjectPtr<struct AFortPlayerController> CraftingInstigator; // 0xe0(0x08)
	struct TArray<struct FFortItemEntry> AllOfTheIngredientItems; // 0xe8(0x10)
	struct TArray<int32_t> NonConsumedIngredientItemIndices; // 0xf8(0x10)
	struct FString LastIngredientStringForAnalytics; // 0x108(0x10)
	struct FString LastFormulaStringForAnalytics; // 0x118(0x10)
	struct FString LastResultsStringForAnalytics; // 0x128(0x10)
	struct TArray<struct FItemAndCount> CraftingResults; // 0x138(0x10)
	struct FGameplayAbilitySpecHandle WhileCraftingAbilitySpecHandle; // 0x148(0x04)
	struct FGameplayAbilitySpecHandle OwnerCraftingAbilitySpecHandle; // 0x14c(0x04)
	struct FGameplayTag CraftingObjectTag; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct FScalableFloat CraftingTimeLength; // 0x158(0x28)
	struct FScalableFloat ReadyTimeLength; // 0x180(0x28)
	struct FScalableFloat OverCraftingTimeLength; // 0x1a8(0x28)
	struct FScalableFloat ResettingTimeLength; // 0x1d0(0x28)
	struct FName OverCraftingLootTierKey; // 0x1f8(0x04)
	char bTakeItemsAtCraftingStart : 1; // 0x1fc(0x01)
	char bGiveIngredientsToCraftingObject : 1; // 0x1fc(0x01)
	char bGiveIngredientsToInstigator : 1; // 0x1fc(0x01)
	char pad_1FC_3 : 5; // 0x1fc(0x01)
	char pad_1FD[0x3]; // 0x1fd(0x03)
	struct FVector IngredientSpawnOffset; // 0x200(0x18)
	char bGiveToCraftingObject : 1; // 0x218(0x01)
	char bGiveResultToInstigator : 1; // 0x218(0x01)
	char pad_218_2 : 6; // 0x218(0x01)
	char pad_219[0x7]; // 0x219(0x07)
	struct TSoftClassPtr<UObject> OwnerCraftingAbility; // 0x220(0x28)
	struct FGameplayTagContainer CraftingFailedTags; // 0x248(0x20)
	struct AFortPickup* PendingPickupCraftingItem; // 0x268(0x08)
	struct FName PendingPickupCraftingFormula; // 0x270(0x04)
	char pad_274[0x4]; // 0x274(0x04)
	struct FFortItemEntry PendingPickupCraftingItemEntry; // 0x278(0x1a0)
	int32_t PendingPickupHeldCount; // 0x418(0x04)
	char pad_41C[0xe4]; // 0x41c(0xe4)
	bool FreeCraftingEnabled; // 0x500(0x01)
	char pad_501[0x7]; // 0x501(0x07)

	void OnRep_CraftingObjectRepStateData(); // Function CraftingRuntime.CraftingObjectComponent.OnRep_CraftingObjectRepStateData // (Final|Native|Private) // @ game+0x67455a4
	void HandlePickupCraftingItemPickedUp(struct AFortPickup* PickUp, struct AFortPawn* InteractingPawn, struct UFortWorldItemDefinition* WorldItemDefinition, struct FVector PickupLocation); // Function CraftingRuntime.CraftingObjectComponent.HandlePickupCraftingItemPickedUp // (Final|Native|Private|HasDefaults) // @ game+0x6744e90
	void CraftingObjectStateChanged__DelegateSignature(enum class ECraftingObjectState CraftingState, float CraftingStateStartTime, float CraftingStateDuration); // DelegateFunction CraftingRuntime.CraftingObjectComponent.CraftingObjectStateChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xd67374
	void CraftingObjectOnFormulaCraftableChanged__DelegateSignature(struct FName& FormulaRowName, bool bIsCraftable); // DelegateFunction CraftingRuntime.CraftingObjectComponent.CraftingObjectOnFormulaCraftableChanged__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0xd67374
};

// Class CraftingRuntime.FortContextualTutorial_CraftingComplete
// Size: 0xf8 (Inherited: 0xf8)
struct UFortContextualTutorial_CraftingComplete : UFortContextualTutorial {

	void OnCraftingSuccess(struct AFortPlayerController* Instigator, struct AActor* CraftingObject, struct FName& FormulaRowName); // Function CraftingRuntime.FortContextualTutorial_CraftingComplete.OnCraftingSuccess // (Final|Native|Private|HasOutParms) // @ game+0x6745380
};

// Class CraftingRuntime.FortContextualTutorial_CraftingReady
// Size: 0xf8 (Inherited: 0xf8)
struct UFortContextualTutorial_CraftingReady : UFortContextualTutorial {

	void HandleFormulaCraftableChanged(struct FName& FormulaRowName, bool bIsCraftable); // Function CraftingRuntime.FortContextualTutorial_CraftingReady.HandleFormulaCraftableChanged // (Final|Native|Private|HasOutParms) // @ game+0x6744970
};

// Class CraftingRuntime.FortContextualTutorial_CraftingTabOpen
// Size: 0x100 (Inherited: 0xf8)
struct UFortContextualTutorial_CraftingTabOpen : UFortContextualTutorial {
	char pad_F8[0x8]; // 0xf8(0x08)

	void HandleInventoryTabChanged(struct FName InventoryTabNameId); // Function CraftingRuntime.FortContextualTutorial_CraftingTabOpen.HandleInventoryTabChanged // (Final|Native|Private) // @ game+0x6744e10
	void HandleFormulaCraftableChanged(struct FName& FormulaRowName, bool bIsCraftable); // Function CraftingRuntime.FortContextualTutorial_CraftingTabOpen.HandleFormulaCraftableChanged // (Final|Native|Private|HasOutParms) // @ game+0x6744a40
};

// Class CraftingRuntime.FortControllerComponent_CraftingNetworkEvents
// Size: 0xb0 (Inherited: 0xa0)
struct UFortControllerComponent_CraftingNetworkEvents : UFortControllerComponent {
	struct FMulticastInlineDelegate OnCraftingSuccess; // 0xa0(0x10)

	void ServerStartCrafting(struct AActor* CraftingObject, struct FName CraftingFormulaName, int32_t NumberToCraft); // Function CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerStartCrafting // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x6745c84
	void ServerReportCraftingSuccess(struct AActor* CraftingObject); // Function CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerReportCraftingSuccess // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x6745be4
	void ServerPickupItemAndStartCrafting(struct AActor* CraftingObject, struct AFortPickup* PickUp, struct FName CraftingFormulaName); // Function CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerPickupItemAndStartCrafting // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x6745ac0
	void ServerEjectItems(struct AActor* CraftingObject); // Function CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerEjectItems // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x6745a20
	void ServerClaimCraftingResults(struct AActor* CraftingObject); // Function CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerClaimCraftingResults // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x6745980
	void ServerCancelCrafting(struct AActor* CraftingObject); // Function CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerCancelCrafting // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x67458e0
	void NotifyCraftingSuccess(struct AActor* CraftingObject, struct FName& FormulaRowName); // Function CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.NotifyCraftingSuccess // (Final|Native|Public|HasOutParms) // @ game+0x6745274
	void ClientNotifyCraftingSuccess(struct AActor* CraftingObject, struct FName FormulaRowName); // Function CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ClientNotifyCraftingSuccess // (Net|Native|Event|Public|NetClient) // @ game+0x6743180
	void ClientNotifyCraftingFailed(struct AActor* CraftingObject, struct FGameplayTagContainer FailedReason); // Function CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ClientNotifyCraftingFailed // (Net|Native|Event|Public|NetClient) // @ game+0x6743088
};

// Class CraftingRuntime.FortGameStateComponent_Crafting
// Size: 0x248 (Inherited: 0xa0)
struct UFortGameStateComponent_Crafting : UFortGameStateComponent {
	struct FDataRegistryType CraftingFormulaRegistryType; // 0xa0(0x04)
	struct FDataRegistryType CraftingIngredientsUIDataRegistryType; // 0xa4(0x04)
	char pad_A8[0x140]; // 0xa8(0x140)
	struct TArray<struct FCraftingResult> CraftingResultsList; // 0x1e8(0x10)
	char pad_1F8[0x50]; // 0x1f8(0x50)

	void OnRep_CraftingResultsList(); // Function CraftingRuntime.FortGameStateComponent_Crafting.OnRep_CraftingResultsList // (Final|Native|Protected) // @ game+0x67455b8
	void OnPlaylistDataReady(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags); // Function CraftingRuntime.FortGameStateComponent_Crafting.OnPlaylistDataReady // (Final|Native|Protected|HasOutParms) // @ game+0x6745488
};

// Class CraftingRuntime.FortPickupInteractOverrideComponent_Crafting
// Size: 0xe0 (Inherited: 0xc0)
struct UFortPickupInteractOverrideComponent_Crafting : UFortPickupInteractOverrideComponent {
	struct UFortItemDefinition* LastPickupItemDef; // 0xc0(0x08)
	struct UFortItemDefinition* LastFocusedItemDef; // 0xc8(0x08)
	struct FName LastTargetFormulaName; // 0xd0(0x04)
	float ContextualCraftingInteractDuration; // 0xd4(0x04)
	enum class TInteractionType CachedInteractionType; // 0xd8(0x01)
	enum class EInteractionBeingAttempted CachedInteractionBeingAttempted; // 0xd9(0x01)
	char pad_DA[0x6]; // 0xda(0x06)
};

