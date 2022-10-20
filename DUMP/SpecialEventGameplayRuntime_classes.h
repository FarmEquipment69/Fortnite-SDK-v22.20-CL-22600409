// Class SpecialEventGameplayRuntime.FortCheatManager_DestroyActorsAndComponents
// Size: 0x38 (Inherited: 0x38)
struct UFortCheatManager_DestroyActorsAndComponents : UFortCheatManager_Coupled {

	void DestroyActorsAndComponentsMutator_SetActorDefinitionsEnabled(struct FString TagString, bool bEnabled); // Function SpecialEventGameplayRuntime.FortCheatManager_DestroyActorsAndComponents.DestroyActorsAndComponentsMutator_SetActorDefinitionsEnabled // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x69ef1f8
	void DestroyActorsAndComponentsMutator_ListActorComponents(struct FString InActorName); // Function SpecialEventGameplayRuntime.FortCheatManager_DestroyActorsAndComponents.DestroyActorsAndComponentsMutator_ListActorComponents // (Final|Exec|Native|Public|Const) // @ game+0x69ef0b4
};

// Class SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents
// Size: 0x360 (Inherited: 0x330)
struct AFortAthenaMutator_DestroyActorsAndComponents : AFortAthenaMutator {
	struct TArray<struct FDestroyActorsAndComponentsMutator_ActorDefinition> ActorDefinitions; // 0x330(0x10)
	char pad_340[0x20]; // 0x340(0x20)

	void SetActorDefinitionsEnabled(struct FGameplayTagContainer& InTags, bool bEnabled); // Function SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents.SetActorDefinitionsEnabled // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x69eeef4
	void PermanentlyDisableActorDefinitions(struct FGameplayTagContainer& InTags); // Function SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents.PermanentlyDisableActorDefinitions // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x69f10cc
	void OnTrackedActorDestroyed(struct AActor* DestroyedActor); // Function SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents.OnTrackedActorDestroyed // (Final|Native|Private) // @ game+0x69f0c70
	void OnRep_ActorDefinitions(struct TArray<struct FDestroyActorsAndComponentsMutator_ActorDefinition>& OldActorDefinitions); // Function SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents.OnRep_ActorDefinitions // (Final|Native|Private|HasOutParms) // @ game+0x69f09d4
	void OnActorSpawned(struct AActor* Actor); // Function SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents.OnActorSpawned // (Final|Native|Private) // @ game+0x69efee4
};

// Class SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy
// Size: 0x38 (Inherited: 0x38)
struct UFortCheatManager_FakeKillRelevancy : UFortCheatManager_Coupled {

	void FakeKillRelevancyTestAlgorithm(int32_t NumPlayers, struct FString MaxPlayersRemainingAfterPhases, int32_t MinSquadSize, int32_t MaxSquadSize, int32_t Iterations, int32_t LogVerbosity); // Function SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancyTestAlgorithm // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x69ef56c
	void FakeKillRelevancyStartNextWave(); // Function SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancyStartNextWave // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x24841e4
	void FakeKillRelevancySetUpPhase(int32_t MaxPlayersRemaining, struct FString ReasonGameplayTagString, int32_t NumWaves, float RelevancyDelay); // Function SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancySetUpPhase // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x69ef37c
	void FakeKillRelevancyReset(); // Function SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancyReset // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x24841e4
	void FakeKillRelevancyDebug(float TextScale); // Function SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy.FakeKillRelevancyDebug // (Final|Exec|Native|Public) // @ game+0x64a21bc
};

// Class SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy
// Size: 0x228 (Inherited: 0xa0)
struct UFortControllerComponent_FakeKillRelevancy : UFortControllerComponent {
	struct FFakeKillRelevancyPlayerDataArray PlayerDataArray; // 0xa0(0x120)
	struct TMap<struct AFortPlayerStateAthena*, enum class EFakeKillRelevancyPlayerKillStep> ClientPlayerStateKillStepMap; // 0x1c0(0x50)
	char ResetCounter; // 0x210(0x01)
	char pad_211[0x7]; // 0x211(0x07)
	struct TArray<struct AFortPlayerStateAthena*> DebugSupergroupPlayerStates; // 0x218(0x10)

	void ResetRelevancy(); // Function SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.ResetRelevancy // (Final|BlueprintAuthorityOnly|Native|Protected) // @ game+0x24841e4
	void PlayKillEffects(struct FFakeKillRelevancyPlayerDataEntry& FakeKillData, float RelevancyDelay); // Function SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.PlayKillEffects // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnRep_ResetCounter(); // Function SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.OnRep_ResetCounter // (Final|Native|Private) // @ game+0x69f0ba4
	void OnKillEffectsPlayed(struct AFortPlayerStateAthena* PlayerState); // Function SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.OnKillEffectsPlayed // (Final|BlueprintCosmetic|Native|Protected|BlueprintCallable) // @ game+0x69f0244
	struct FVector GetDeathLocation(struct AFortPlayerStateAthena* PlayerState); // Function SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.GetDeathLocation // (Final|Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x69ef934
	void CancelKillEffectsOnServer(); // Function SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.CancelKillEffectsOnServer // (BlueprintAuthorityOnly|Event|Protected|BlueprintEvent) // @ game+0xd67374
	void CancelKillEffectsOnClient(struct TArray<struct AFortPlayerStateAthena*>& PlayerStates); // Function SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.CancelKillEffectsOnClient // (BlueprintCosmetic|Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
};

// Class SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy
// Size: 0x498 (Inherited: 0x438)
struct AFortAthenaMutator_FakeKillRelevancy : AFortAthenaMutator_SpecialRelevancy {
	struct UFortControllerComponent_FakeKillRelevancy* FakeKillControllerComponentClass; // 0x438(0x08)
	struct TArray<struct FFakeKillRelevancyPhaseData> RelevancyPhaseDataArray; // 0x440(0x10)
	int32_t PhaseNum; // 0x450(0x04)
	char pad_454[0x44]; // 0x454(0x44)

	void StartNextKillWave(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy.StartNextKillWave // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x24841e4
	void SetUpKillPhase(int32_t MaxPlayersRemaining, struct FGameplayTag& Reason, int32_t NumWaves, float RelevancyDelay); // Function SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy.SetUpKillPhase // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x69f19f4
	void ResetRelevancy(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy.ResetRelevancy // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x24841e4
	void EndWave(int32_t EndPhaseNum, int32_t WaveNum); // Function SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy.EndWave // (Final|Native|Private) // @ game+0x680d56c
};

// Class SpecialEventGameplayRuntime.FortAthenaMutator_LoadGameFeature
// Size: 0x340 (Inherited: 0x330)
struct AFortAthenaMutator_LoadGameFeature : AFortAthenaMutator {
	struct FString GameFeatureToLoad; // 0x330(0x10)

	void OnPlaylistDataReady(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags); // Function SpecialEventGameplayRuntime.FortAthenaMutator_LoadGameFeature.OnPlaylistDataReady // (Final|Native|Protected|HasOutParms) // @ game+0x69f0788
};

// Class SpecialEventGameplayRuntime.FortAthenaMutator_RemoveGameFeatures
// Size: 0x340 (Inherited: 0x330)
struct AFortAthenaMutator_RemoveGameFeatures : AFortAthenaMutator {
	struct TArray<struct FString> AllowedGameFeatures; // 0x330(0x10)

	void OnPlaylistDataReady(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags); // Function SpecialEventGameplayRuntime.FortAthenaMutator_RemoveGameFeatures.OnPlaylistDataReady // (Final|Native|Protected|HasOutParms) // @ game+0x69f08b8
};

// Class SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent
// Size: 0x38 (Inherited: 0x38)
struct UFortCheatManager_SpecialEvent : UFortCheatManager_Coupled {

	void UnloadTerrainMaps(struct FName MapTag); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.UnloadTerrainMaps // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x6745f74
	void ToggleDisableParachutes(bool bIsDisabled); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ToggleDisableParachutes // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x64a1f14
	void TeleportAllPlayers(int32_t SafeZoneIndex); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.TeleportAllPlayers // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x651e558
	void StartEventScript(int32_t InStartingIndex); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.StartEventScript // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x651e558
	void SpecialEventSetAdditionalViewpoint(float X, float Y, float Z); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SpecialEventSetAdditionalViewpoint // (Final|Exec|Native|Protected) // @ game+0x68a4c68
	void SpecialEventGameUserSettings_ClearDataForAllPlayers(); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SpecialEventGameUserSettings_ClearDataForAllPlayers // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x24841e4
	void SpecialEventClearAdditionalViewpoint(); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SpecialEventClearAdditionalViewpoint // (Final|Exec|Native|Protected) // @ game+0x24841e4
	void ShrinkSafeZone(); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ShrinkSafeZone // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x24841e4
	void SetReturnToMainMenuDelay(float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SetReturnToMainMenuDelay // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x69f1950
	void SetMatchTime(int32_t NewMatchTime); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SetMatchTime // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x651e558
	void SetLockingOnFocalPoint(bool bInLockingOnFocalPoint); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SetLockingOnFocalPoint // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x64a1f14
	void SetIsSimulatingDamage(bool bIsSimulating); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SetIsSimulatingDamage // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x64a1f14
	void SetDestroyVehiclesInStorm(bool bDestroyVehiclesInStorm); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SetDestroyVehiclesInStorm // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x64a1f14
	void SendToNightNight(); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.SendToNightNight // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x24841e4
	void ResumeWinCondition(); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ResumeWinCondition // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x24841e4
	void ResetWinConditionProgressToZero(); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ResetWinConditionProgressToZero // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x24841e4
	void ResetWinCondition(); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ResetWinCondition // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x24841e4
	void ResetSpecialEventAircraft(); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ResetSpecialEventAircraft // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x24841e4
	void ResetMatchTimeToPrevious(); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ResetMatchTimeToPrevious // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x24841e4
	void PlacePlayersInAircraft(); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.PlacePlayersInAircraft // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x24841e4
	void PauseWinCondition(bool bLockScores); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.PauseWinCondition // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x64a1f14
	void CloseParachutes(); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.CloseParachutes // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x24841e4
	void ChangeWinCondition(float NewGoalScore); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.ChangeWinCondition // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x64a21bc
	void AutobalanceTargetScore(); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.AutobalanceTargetScore // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x24841e4
	void AddCSVEvent(struct FString CSVEventName); // Function SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent.AddCSVEvent // (Final|BlueprintAuthorityOnly|Exec|Native|Protected) // @ game+0x651e628
};

// Class SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent
// Size: 0x738 (Inherited: 0x330)
struct AFortAthenaMutator_SpecialEvent : AFortAthenaMutator {
	struct FMulticastInlineDelegate TeleportAllPlayersFinished; // 0x330(0x10)
	struct FMulticastInlineDelegate OnPawnLoaded; // 0x340(0x10)
	struct FMulticastInlineDelegate OnInitController; // 0x350(0x10)
	struct FMulticastInlineDelegate OnResumeGame; // 0x360(0x10)
	struct FMulticastInlineDelegate OnSpecialClientEvent; // 0x370(0x10)
	struct FMulticastInlineDelegate OnHandleLogout; // 0x380(0x10)
	struct FMulticastInlineDelegate OnClientInitialLoadingFinished; // 0x390(0x10)
	char pad_3A0[0x68]; // 0x3a0(0x68)
	bool bPlayersAreInvincible; // 0x408(0x01)
	char pad_409[0x27]; // 0x409(0x27)
	int32_t MinimumScoreBumpForAutomadeGoal; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
	struct TArray<float> ScoreBrackets; // 0x438(0x10)
	bool bEnforceInfiniteSafeZonePhase; // 0x448(0x01)
	char pad_449[0x3]; // 0x449(0x03)
	struct FName WarmupIslandPlayerStartTag; // 0x44c(0x04)
	bool bAllowInventoryOpen; // 0x450(0x01)
	char pad_451[0x7]; // 0x451(0x07)
	struct FScalableFloat bAllowFullScreenMap; // 0x458(0x28)
	bool bShouldClearFrontEndMapMarkers; // 0x480(0x01)
	bool bBlockTeamIndicators; // 0x481(0x01)
	char pad_482[0x2]; // 0x482(0x02)
	int32_t ForceDisplaySquadInfoDuringGamePhases; // 0x484(0x04)
	struct FGameplayTagContainer UIToHideDuringSpecialEvent; // 0x488(0x20)
	struct FGameplayTagContainer UIToHideWhenInInfiniteWarmup; // 0x4a8(0x20)
	struct FGameplayTagContainer ClientEventsThatUnhideHiddenWhileLoadingHUDElements; // 0x4c8(0x20)
	bool bForceGarbageCollectionAfterUnloadOnServer; // 0x4e8(0x01)
	bool bForceGarbageCollectionAfterUnloadOnClient; // 0x4e9(0x01)
	bool bFullPurgeGC; // 0x4ea(0x01)
	char pad_4EB[0x5]; // 0x4eb(0x05)
	struct AFortAthenaAircraft* EventAircraft; // 0x4f0(0x08)
	struct FAircraftFlightInfo EventAircraftInfo; // 0x4f8(0x48)
	struct AFortAthenaAircraft* EventAircraftClass; // 0x540(0x08)
	struct ASpecialEventScript* ScriptActor; // 0x548(0x08)
	bool bDisableHUD; // 0x550(0x01)
	char GameResumed; // 0x551(0x01)
	char pad_552[0x6]; // 0x552(0x06)
	struct FVector AdditionalViewpoint; // 0x558(0x18)
	bool bParachutesDisabled; // 0x570(0x01)
	char pad_571[0x7]; // 0x571(0x07)
	struct FString LastCSVEventName; // 0x578(0x10)
	bool bCanStreamBuildingFoundationsIn; // 0x588(0x01)
	char pad_589[0x3]; // 0x589(0x03)
	int32_t AllPlayerTeleportedCount; // 0x58c(0x04)
	struct FFortDelayRTMMData DelayPlayersFromReturningToLobbyData; // 0x590(0x10)
	struct FName NamedWeightForContainerLootRoll; // 0x5a0(0x04)
	float WeightForContainerLootRoll; // 0x5a4(0x04)
	char pad_5A8[0x30]; // 0x5a8(0x30)
	struct TArray<struct FFortSpecialEventEmoteData> SpecialEventEmoteData; // 0x5d8(0x10)
	struct FGameplayTagContainer BlockedNativeActions; // 0x5e8(0x20)
	struct UInputComponent* SpecialEventsInputComponent; // 0x608(0x08)
	bool bLockingOnFocalPoint; // 0x610(0x01)
	char pad_611[0x7]; // 0x611(0x07)
	struct TArray<struct FFortSpecialEventOverrideParts> SpecialEventOverrideParts; // 0x618(0x10)
	struct FFortSpecialEventGEData GameplayEffectToApplyOnSwapToDefault; // 0x628(0x10)
	struct TMap<struct FUniqueNetIdRepl, int32_t> OverridePartsArrayIndexMap; // 0x638(0x50)
	struct TArray<struct FFortSpecialEventGEData> GameplayEffectsToApplyOnLogin; // 0x688(0x10)
	struct TArray<struct FSpecialEventMapData> TerrainMapsToUnload; // 0x698(0x10)
	char pad_6A8[0x10]; // 0x6a8(0x10)
	struct TArray<struct AFortPlayerControllerAthena*> UnhandledPlayerControllers; // 0x6b8(0x10)
	struct TArray<struct FName> HLODActorsToHideNames; // 0x6c8(0x10)
	bool bForceAllowCloth; // 0x6d8(0x01)
	char pad_6D9[0x1]; // 0x6d9(0x01)
	bool bCanToggleCursorModeInStasis; // 0x6da(0x01)
	char pad_6DB[0x5]; // 0x6db(0x05)
	struct FScalableFloat MannequinRecentlyRenderedCheckToleranceValue; // 0x6e0(0x28)
	struct TArray<struct ASpecialEventPlayerMannequin*> SpecialEventMannequins; // 0x708(0x10)
	struct TArray<struct AActor*> ActorSpawnDelegateClasses; // 0x718(0x10)
	char pad_728[0x10]; // 0x728(0x10)

	void WarmUpIslandUpdated(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.WarmUpIslandUpdated // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x69f24b0
	void UnloadTerrainMaps(struct FGameplayTag& MapTag); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.UnloadTerrainMaps // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x69f2424
	void ToggleHUDs(bool bHide); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ToggleHUDs // (Final|Native|Public|BlueprintCallable) // @ game+0x69f23a4
	void ToggleDisableWeapons(bool bDisableWeapons); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ToggleDisableWeapons // (Final|Native|Public|BlueprintCallable) // @ game+0x69f22c0
	void ToggleDisableParachutes(bool bDisable); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ToggleDisableParachutes // (Final|Native|Public|BlueprintCallable) // @ game+0x69f2240
	void ToggleAllPlayersInvincibility(bool bInvincible); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ToggleAllPlayersInvincibility // (Final|Native|Public|BlueprintCallable) // @ game+0x69f21c0
	void TeleportAllPlayers(struct FGameplayTagContainer EventTags, int32_t TeleportsPerFrame, int32_t SafeZoneIndex); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.TeleportAllPlayers // (Final|Native|Public|BlueprintCallable) // @ game+0x69f2034
	void SwapBodyParts(int32_t ArrayIndex, struct AFortPlayerController* FortPC); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SwapBodyParts // (Final|Native|Public|BlueprintCallable) // @ game+0x69f1c78
	void StartSafeZoneOverrideForEvent(int32_t SafeZoneIndexForEvent); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.StartSafeZoneOverrideForEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x69f1bf8
	void ShrinkSafeZone(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ShrinkSafeZone // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x69f1ba0
	void SetWeightForContainerLootRoll(float Weight); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetWeightForContainerLootRoll // (Final|Native|Public|BlueprintCallable) // @ game+0x69f1b1c
	void SetReturnToMainMenuDelay(float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetReturnToMainMenuDelay // (Final|Native|Public|BlueprintCallable) // @ game+0x69f188c
	void SetNamedWeightForContainerLootRoll(struct FName WeightName); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetNamedWeightForContainerLootRoll // (Final|Native|Public|BlueprintCallable) // @ game+0x69f1810
	void SetMatchTime(int32_t NewMatchTime); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetMatchTime // (Final|Native|Public|BlueprintCallable) // @ game+0x69f1748
	void SetLockingOnFocalPoint(bool bInLockingOnFocalPoint); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetLockingOnFocalPoint // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x69f1684
	void SetIsSimulatingDamage(bool bIsSimulating); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetIsSimulatingDamage // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x69f1604
	void SetDestroyVehiclesInStorm(bool bDestroyVehiclesInStorm); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetDestroyVehiclesInStorm // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x69f1574
	void SetCanStreamBuildingFoundationsIn(bool bEnable); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetCanStreamBuildingFoundationsIn // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x69f14b0
	void SetAdditionalViewpoint(struct FVector WorldLocation); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetAdditionalViewpoint // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x69f1420
	void SendToNightNight(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SendToNightNight // (Final|Native|Public|BlueprintCallable) // @ game+0x24841e4
	void ResumeWinCondition(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResumeWinCondition // (Final|Native|Public|BlueprintCallable) // @ game+0x69f13c0
	void ResetWinConditionProgressToZero(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetWinConditionProgressToZero // (Final|Native|Public|BlueprintCallable) // @ game+0x69f13ac
	void ResetWinCondition(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetWinCondition // (Final|Native|Public|BlueprintCallable) // @ game+0x69f1328
	void ResetSpecialEventAircraft(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetSpecialEventAircraft // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x69f12ec
	void ResetSafeZoneOverrideAfterEvent(int32_t MinResetSafeZoneIndex, float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetSafeZoneOverrideAfterEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x69f11f4
	void ResetMatchTimeToPrevious(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetMatchTimeToPrevious // (Final|Native|Public|BlueprintCallable) // @ game+0x69f11a0
	void RemoveFromBlockedNativeActions(struct FGameplayTagContainer& Actions); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.RemoveFromBlockedNativeActions // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x69f10cc
	void PushSpecialEventEmoteInputComponent(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PushSpecialEventEmoteInputComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x69f118c
	void PopSpecialEventEmoteInputComponent(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PopSpecialEventEmoteInputComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x69f1178
	void PlacePlayersInAircraft(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PlacePlayersInAircraft // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x69f1164
	void PauseWinCondition(bool bLockScores); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PauseWinCondition // (Final|Native|Public|BlueprintCallable) // @ game+0x69f0ff4
	void PauseSupplyDrops(bool bPause); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PauseSupplyDrops // (Final|Native|Public|BlueprintCallable) // @ game+0x69f0f20
	void PauseStormProgression(bool bPause); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PauseStormProgression // (Final|Native|Public|BlueprintCallable) // @ game+0x69f0ea0
	void PauseStormDamage(bool bPause); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PauseStormDamage // (Final|Native|Public|BlueprintCallable) // @ game+0x69f0dc4
	void OnWarmUpTeleportComplete(struct AFortPlayerPawn* PlayerPawn); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnWarmUpTeleportComplete // (Final|Native|Protected) // @ game+0x69f0d1c
	void OnRep_TerrainMapsToUnload(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_TerrainMapsToUnload // (Final|Native|Protected) // @ game+0x69f0bb8
	void OnRep_LastCSVEventName(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_LastCSVEventName // (Final|Native|Protected) // @ game+0x69f0b58
	void OnRep_GameResumed(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_GameResumed // (Final|Native|Protected) // @ game+0x69f0b3c
	void OnRep_DelayPlayersFromReturningToLobbyData(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_DelayPlayersFromReturningToLobbyData // (Final|Native|Protected) // @ game+0x69f0ae4
	void OnRep_bPlayersAreInvincible(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_bPlayersAreInvincible // (Final|Native|Protected) // @ game+0x69f0c5c
	void OnRep_bLockingOnFocalPoint(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_bLockingOnFocalPoint // (Final|Native|Protected) // @ game+0x69f0c48
	void OnRep_bDisableHUD(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_bDisableHUD // (Final|Native|Protected) // @ game+0x69f0c34
	void OnRep_bCanStreamBuildingFoundationsIn(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_bCanStreamBuildingFoundationsIn // (Final|Native|Protected) // @ game+0x69f0c20
	void OnRep_AllPlayerTeleportedCount(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_AllPlayerTeleportedCount // (Final|Native|Protected) // @ game+0x69f0ac8
	void OnRep_Aircraft(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_Aircraft // (Final|Native|Protected) // @ game+0x69f0a80
	void OnRep_AdditionalViewpoint(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_AdditionalViewpoint // (Final|Native|Protected) // @ game+0x69f0a6c
	void OnGameViewportActivationChanged(bool bHasFocus); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnGameViewportActivationChanged // (Final|Native|Public) // @ game+0x69f01c4
	void OnGamePhaseStepChanged(struct TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnGamePhaseStepChanged // (Final|Native|Protected|HasOutParms) // @ game+0x69f00e4
	void OnAircraftFlightEnded(struct AFortAthenaAircraft* FortAthenaAircraft); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnAircraftFlightEnded // (Final|Native|Protected) // @ game+0x69f0064
	void OnAircraftExitedDropZone(struct AFortAthenaAircraft* FortAthenaAircraft); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnAircraftExitedDropZone // (Final|Native|Protected) // @ game+0x69effe4
	void OnAircraftEnteredDropZone(struct AFortAthenaAircraft* FortAthenaAircraft); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnAircraftEnteredDropZone // (Final|Native|Protected) // @ game+0x69eff64
	void OnActorSpawned(struct AActor* Actor); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnActorSpawned // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnActorPreSpawnInitialization(struct AActor* Actor); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnActorPreSpawnInitialization // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void NotifyClientsGameResumed(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.NotifyClientsGameResumed // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x69efe84
	void NetMulticast_CheatClearSpecialEventGameUserSettings(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.NetMulticast_CheatClearSpecialEventGameUserSettings // (Net|NetReliableNative|Event|NetMulticast|Public) // @ game+0x69efe6c
	void JumpToSafeZonePhase(struct FVector PawnSpawnCenterLocation, float PawnSpawnMinDistance, float PawnSpawnMaxDistance); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.JumpToSafeZonePhase // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x69efd60
	void HandleSpecialEventMannequinDestroyed(struct AActor* MannequinActor); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.HandleSpecialEventMannequinDestroyed // (Final|Native|Protected) // @ game+0x69efce0
	struct ASpecialEventScript* GetScript(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.GetScript // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x69efcc8
	bool GetHasInfiniteSafeZonePhase(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.GetHasInfiniteSafeZonePhase // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x69efcb0
	void ForceSafeZoneFinalLocation(struct FVector NewFinalLocation, float DefaultAircraftOffsetFromMidLine, float MinDefaultMidlineAngle, float MaxDefaultMidlineAngle); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ForceSafeZoneFinalLocation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x69ef7e4
	void FlushUnhandledPlayerControllers(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.FlushUnhandledPlayerControllers // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x69ef7d0
	void CloseParachutes(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.CloseParachutes // (Final|Native|Public|BlueprintCallable) // @ game+0x69ef0a0
	void ClearBlockedNativeActions(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ClearBlockedNativeActions // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x24841e4
	void ClearAdditionalViewpoint(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ClearAdditionalViewpoint // (Final|Native|Public|BlueprintCallable) // @ game+0x69ef064
	void ChangeWinCondition(float NewGoalScore); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ChangeWinCondition // (Final|Native|Public|BlueprintCallable) // @ game+0x69eefe0
	void AutobalanceTargetScore(); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.AutobalanceTargetScore // (Final|Native|Public|BlueprintCallable) // @ game+0x69eefcc
	void AddToBlockedNativeActions(struct FGameplayTagContainer& Actions, bool bCancelAbilities); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.AddToBlockedNativeActions // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x69eeef4
	void AddCSVEvent(struct FString CSVEventName, bool bShouldRepToClient); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.AddCSVEvent // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x69eeba4
	void AddClientCSVEvent(struct FString CSVEventName); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.AddClientCSVEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x69eed98
};

// Class SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEventTODM
// Size: 0x360 (Inherited: 0x330)
struct AFortAthenaMutator_SpecialEventTODM : AFortAthenaMutator {
	struct TArray<struct FSpecialEventTODMPhaseData> PhaseDataArray; // 0x330(0x10)
	struct ASpecialEventScript* SpecialEventScript; // 0x340(0x08)
	char pad_348[0x10]; // 0x348(0x10)
	struct AFortTimeOfDayManager* SpawnedTODM; // 0x358(0x08)

	void OnPhaseActivated(struct ASpecialEventScript* InSpecialEventScript, struct ASpecialEventPhase* InSpecialEventPhase); // Function SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEventTODM.OnPhaseActivated // (Final|Native|Private) // @ game+0x69f39e4
};

// Class SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint
// Size: 0x1af0 (Inherited: 0x1ae0)
struct UFortCameraMode_SpecialEventFocalPoint : UFortCameraMode_FocalPoint {
	float OverrideTransitionTime; // 0x1ae0(0x04)
	char pad_1AE4[0xc]; // 0x1ae4(0x0c)

	void UpdateCameraBP(struct AActor* ViewTarget, float DeltaTime, struct FTViewTarget& OutVT); // Function SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint.UpdateCameraBP // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void SetOverrideTransitionTime(float InTransitionTime); // Function SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint.SetOverrideTransitionTime // (Final|Native|Public|BlueprintCallable) // @ game+0x69f42f8
	void OnBecomeInactiveBP(struct AActor* ViewTarget); // Function SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint.OnBecomeInactiveBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnBecomeActiveBP(struct AActor* ViewTarget); // Function SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint.OnBecomeActiveBP // (Event|Protected|BlueprintEvent) // @ game+0xd67374
};

// Class SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent
// Size: 0x920 (Inherited: 0xa0)
struct UFortCharacterMovementMutatorComponent : UActorComponent {
	struct ACharacter* CharacterOwner; // 0xa0(0x08)
	struct UFortMovementComp_CharacterAthena* MovementComponent; // 0xa8(0x08)
	struct UFortMovementComp_CharacterAthena* CDOMovementComponent; // 0xb0(0x08)
	char pad_B8[0x10]; // 0xb8(0x10)
	struct FScalableFloat BuffetBubblesMoveToBoxSpeed; // 0xc8(0x28)
	struct FScalableFloat BuffetBubblesRelativeVelocityInterpSpeed; // 0xf0(0x28)
	struct FScalableFloat BuffetBubblesLocationInterpSpeed; // 0x118(0x28)
	struct FScalableFloat BuffetBubblesRotationInterpSpeed; // 0x140(0x28)
	struct FScalableFloat BuffetBubblesMinRelativeX; // 0x168(0x28)
	struct FScalableFloat BuffetBubblesMaxRelativeX; // 0x190(0x28)
	struct FScalableFloat BuffetBubblesMinRelativeY; // 0x1b8(0x28)
	struct FScalableFloat BuffetBubblesMaxRelativeY; // 0x1e0(0x28)
	struct FScalableFloat BuffetBubblesMinRelativeZ; // 0x208(0x28)
	struct FScalableFloat BuffetBubblesMaxRelativeZ; // 0x230(0x28)
	struct FRotator BuffetBubblesRotationRate; // 0x258(0x18)
	struct FScalableFloat BuffetBubblesMaxAcceleration; // 0x270(0x28)
	struct FScalableFloat BuffetBubblesMaxRelativeSpeed; // 0x298(0x28)
	struct FScalableFloat BuffetBubblesRelativeDeceleration; // 0x2c0(0x28)
	struct FScalableFloat BuffetBubblesSphereRadius; // 0x2e8(0x28)
	struct AActor* BuffetBubblesFollowActor; // 0x310(0x08)
	struct FVector BuffetBubblesInitialFollowBoxOffsetPercent; // 0x318(0x18)
	char pad_330[0xe0]; // 0x330(0xe0)
	struct FBuffetBubblesReplicatedData BuffetBubblesReplicatedData; // 0x410(0x80)
	char pad_490[0x280]; // 0x490(0x280)
	struct FScalableFloat BuffetBubblesIntroSpeed; // 0x710(0x28)
	char pad_738[0x8]; // 0x738(0x08)
	struct FTransform BuffetBubblesIntroTargetTransform; // 0x740(0x60)
	struct FScalableFloat BuffetFlyingMaxPitchDegrees; // 0x7a0(0x28)
	struct FScalableFloat BuffetFlyingMaxSpeed; // 0x7c8(0x28)
	struct FScalableFloat BuffetFlyingVelocityDirectionInterpSpeed; // 0x7f0(0x28)
	struct FRotator BuffetFlyingRotationRate; // 0x818(0x18)
	float BuffetFlyingMaxSpeedOverride; // 0x830(0x04)
	float BuffetFlyingMaxSpeedInterpSpeed; // 0x834(0x04)
	char pad_838[0x4]; // 0x838(0x04)
	float BuffetFlyingVelocityDirectionInterpSpeedOverride; // 0x83c(0x04)
	struct FScalableFloat BuffetFlyingRicochetSphereSize; // 0x840(0x28)
	struct FScalableFloat BuffetFlyingRicochetRotationDuration; // 0x868(0x28)
	struct FScalableFloat BuffetFlyingRicochetControlRotationInterpSpeed; // 0x890(0x28)
	char pad_8B8[0x48]; // 0x8b8(0x48)
	struct FBuffetFlyingRicochetReplicatedData BuffetFlyingRicochetReplicatedData; // 0x900(0x20)

	void SetBuffetBubblesIntroTargetTransform(struct FTransform& Transform); // Function SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.SetBuffetBubblesIntroTargetTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x69f41c0
	void SetBuffetBubblesInitialFollowBoxOffsetPercent(struct FVector BoxOffsetPercent); // Function SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.SetBuffetBubblesInitialFollowBoxOffsetPercent // (Final|Native|Protected|HasDefaults|BlueprintCallable) // @ game+0x69f40e4
	void SetBuffetBubblesFollowActor(struct AActor* Actor); // Function SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.SetBuffetBubblesFollowActor // (Final|Native|Protected|BlueprintCallable) // @ game+0x69f3f88
	void OverrideBuffetFlyingVelocityDirectionInterpSpeed(float Value, bool bAsMultiplier); // Function SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OverrideBuffetFlyingVelocityDirectionInterpSpeed // (Final|Native|Protected|BlueprintCallable) // @ game+0x69f3d20
	void OverrideBuffetFlyingMaxSpeed(float Value, bool bAsMultiplier, float InterpSpeed); // Function SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OverrideBuffetFlyingMaxSpeed // (Final|Native|Protected|BlueprintCallable) // @ game+0x69f3c3c
	void OnRep_BuffetFlyingRicochetReplicatedData(); // Function SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OnRep_BuffetFlyingRicochetReplicatedData // (Final|Native|Private) // @ game+0x69f3b94
	void OnRep_BuffetBubblesFollowActor(); // Function SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OnRep_BuffetBubblesFollowActor // (Final|Native|Protected) // @ game+0x69f3aa8
	void OnMovementModeChanged(struct ACharacter* Character, enum class EMovementMode PreviousMovementMode, char PreviousCustomMode); // Function SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OnMovementModeChanged // (Final|Native|Private) // @ game+0x69f3638
};

// Class SpecialEventGameplayRuntime.FortCharacterMovementMutator
// Size: 0x338 (Inherited: 0x330)
struct AFortCharacterMovementMutator : AFortAthenaMutator {
	struct UFortCharacterMovementMutatorComponent* MovementMutatorComponentClass; // 0x330(0x08)

	void OnFortPawnChanged(struct AFortPawn* NewPawn); // Function SpecialEventGameplayRuntime.FortCharacterMovementMutator.OnFortPawnChanged // (Final|Native|Protected) // @ game+0x64a2a4c
};

// Class SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic
// Size: 0xf8 (Inherited: 0xa0)
struct UFortControllerComponent_GameplayCinematic : UFortControllerComponent {
	char pad_A0[0x30]; // 0xa0(0x30)
	struct FMulticastInlineDelegate BP_OnStartGameplayOutro; // 0xd0(0x10)
	struct FMulticastInlineDelegate BP_OnGameplayIntroFinished; // 0xe0(0x10)
	bool bIsReadyForGameplay; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)

	void ShowCinematicWidget(struct FName WidgetName); // Function SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.ShowCinematicWidget // (Final|BlueprintCosmetic|Exec|Native|Public|BlueprintCallable) // @ game+0x69f437c
	void SetReadyForGameplay(bool bIsReady); // Function SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.SetReadyForGameplay // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x64a1f14
	void ServerOnGameplayIntroFinished(); // Function SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.ServerOnGameplayIntroFinished // (Net|NetReliableNative|Event|Protected|NetServer) // @ game+0x25bac98
	void OnRep_bIsReadyForGameplay(); // Function SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.OnRep_bIsReadyForGameplay // (Final|Native|Protected) // @ game+0x69f3bfc
	void HideHUDElementsForLoadingScreen(bool bHideElements); // Function SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.HideHUDElementsForLoadingScreen // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x69f35b8
};

// Class SpecialEventGameplayRuntime.FortControllerComponent_SpecialEvent
// Size: 0xa8 (Inherited: 0xa0)
struct UFortControllerComponent_SpecialEvent : UFortControllerComponent {
	struct TWeakObjectPtr<struct AFortAthenaMutator_SpecialEvent> SpecialEventMutator; // 0xa0(0x08)

	void ServerHandleSpecialClientEvent(struct FGameplayTag EventTag, int32_t Count); // Function SpecialEventGameplayRuntime.FortControllerComponent_SpecialEvent.ServerHandleSpecialClientEvent // (Net|NetReliableNative|Event|Protected|NetServer) // @ game+0x69f3ec0
	void SendSpecialClientEvent(struct FGameplayTag EventTag, int32_t Count); // Function SpecialEventGameplayRuntime.FortControllerComponent_SpecialEvent.SendSpecialClientEvent // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x69f3dc8
};

// Class SpecialEventGameplayRuntime.FortCustomTickComponent
// Size: 0x1a0 (Inherited: 0xa0)
struct UFortCustomTickComponent : UActorComponent {
	enum class EFortCustomTickComponentCondition Condition; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	struct FGameplayTag AuthorityQualitySettingsTag; // 0xa4(0x04)
	struct FGameplayTag DefaultClientQualitySettingsTag; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct TMap<enum class ECommonPlatformType, struct FGameplayTag> ClientPlatformQualitySettingsTagMap; // 0xb0(0x50)
	struct TMap<struct FGameplayTag, struct FCustomTickComonentQualitySettings> QualitySettingsMap; // 0x100(0x50)
	float WasRecentlyRenderedTolerance; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct FMulticastInlineDelegate OnCustomTick; // 0x158(0x10)
	char pad_168[0x38]; // 0x168(0x38)
};

// Class SpecialEventGameplayRuntime.FortSpecialRelevancyActorSpawner
// Size: 0x2c0 (Inherited: 0x2b8)
struct AFortSpecialRelevancyActorSpawner : AFortActorSpawner {
	char pad_2B8[0x8]; // 0x2b8(0x08)

	void BP_OnActorSpawnedPerRelevancyGroup(struct TArray<struct AActor*>& InSpawnedActors); // Function SpecialEventGameplayRuntime.FortSpecialRelevancyActorSpawner.BP_OnActorSpawnedPerRelevancyGroup // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
};

// Class SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent
// Size: 0xc0 (Inherited: 0xa0)
struct USpecialEventAudioAnalysisBaseComponent : UActorComponent {
	float CurrentTime; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct ULoudnessNRT* LoudnessNRT; // 0xa8(0x08)
	struct UOnsetNRT* OnsetNRT; // 0xb0(0x08)
	struct UConstantQNRT* ConstantQNRT; // 0xb8(0x08)

	void UpdateTime(float NewTime); // Function SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.UpdateTime // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x69f45b8
	void UpdateOnset(float Time); // Function SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.UpdateOnset // (Native|Event|Protected|BlueprintEvent) // @ game+0x69f4530
	void UpdateLoudness(float Time); // Function SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.UpdateLoudness // (Native|Event|Protected|BlueprintEvent) // @ game+0x69f44a8
	void UpdateConstantQ(float Time); // Function SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.UpdateConstantQ // (Native|Event|Protected|BlueprintEvent) // @ game+0x69f4420
	struct UOnsetNRT* GetOnsetNRT(); // Function SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.GetOnsetNRT // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x29af5f8
	struct ULoudnessNRT* GetLoudnessNRT(); // Function SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.GetLoudnessNRT // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x69f35a0
	float GetCurrentNormalizedLoudness(); // Function SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.GetCurrentNormalizedLoudness // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x69f3588
	struct UConstantQNRT* GetConstantQNRT(); // Function SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.GetConstantQNRT // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x69f3570
};

// Class SpecialEventGameplayRuntime.SpecialEventAudioHapticsComponent
// Size: 0xe8 (Inherited: 0xc0)
struct USpecialEventAudioHapticsComponent : USpecialEventAudioAnalysisBaseComponent {
	struct TArray<struct FSpecialEventAudioHapticsAction> HapticsActions; // 0xc0(0x10)
	bool bStartHapticsOnBeginPlay; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	float IntensityMultiplier; // 0xd4(0x04)
	char pad_D8[0x10]; // 0xd8(0x10)

	void StopHaptics(); // Function SpecialEventGameplayRuntime.SpecialEventAudioHapticsComponent.StopHaptics // (Final|Native|Public|BlueprintCallable) // @ game+0x69f440c
	void StartHaptics(); // Function SpecialEventGameplayRuntime.SpecialEventAudioHapticsComponent.StartHaptics // (Final|Native|Public|BlueprintCallable) // @ game+0x69f43f8
	bool AreHapticsActive(); // Function SpecialEventGameplayRuntime.SpecialEventAudioHapticsComponent.AreHapticsActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x69f3558
};

// Class SpecialEventGameplayRuntime.SpecialEventCinematicCameraMode
// Size: 0x60 (Inherited: 0x60)
struct USpecialEventCinematicCameraMode : UFortCinematicCamera {
};

// Class SpecialEventGameplayRuntime.SpecialEventCursorInstigatorInterface
// Size: 0x28 (Inherited: 0x28)
struct USpecialEventCursorInstigatorInterface : UInterface {

	bool SpecialEventCursorTrace(struct FHitResult& OutHitResult, struct USpecialEventCursorPawnComponent* CursorPawnComponent, struct FGameplayTag& CursorModeTag, struct UCameraComponent* CameraComponent, struct FVector& CursorWorldDirection); // Function SpecialEventGameplayRuntime.SpecialEventCursorInstigatorInterface.SpecialEventCursorTrace // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x69f7474
};

// Class SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent
// Size: 0x3a8 (Inherited: 0xa0)
struct USpecialEventCursorPawnComponent : UPawnComponent {
	char pad_A0[0x8]; // 0xa0(0x08)
	struct FMulticastInlineDelegate OnDesiredVisibilityChanged; // 0xa8(0x10)
	bool bAllowOnNonOwningClients; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct APawn* OwningPawn; // 0xc0(0x08)
	struct AFortPlayerController* OwningController; // 0xc8(0x08)
	char pad_D0[0x10]; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnCursorModeChanged; // 0xe0(0x10)
	struct FGameplayTag DefaultCursorModeTag; // 0xf0(0x04)
	bool bDefaultCursorModeAutoActivate; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
	struct TMap<struct FGameplayTag, struct FSpecialEventCursorMode> CursorModes; // 0xf8(0x50)
	struct TArray<struct FSpecialEventCursorStackEntry> CursorStack; // 0x148(0x10)
	struct FSpecialEventCursorStackEntry ReplicatedCursorStackEntry; // 0x158(0x0c)
	char pad_164[0x4]; // 0x164(0x04)
	struct USpecialEventInputHelperComponent* InputHelperClass; // 0x168(0x08)
	bool bUseGamepadLookInput; // 0x170(0x01)
	bool bUseGamepadMoveInput; // 0x171(0x01)
	bool bUseGyroInput; // 0x172(0x01)
	bool bObeyInvertedPitchUserSetting; // 0x173(0x01)
	char pad_174[0x4]; // 0x174(0x04)
	struct UCommonInputSubsystem* CommonInputSubsystem; // 0x178(0x08)
	struct USpecialEventInputHelperComponent* InputHelperComponent; // 0x180(0x08)
	char pad_188[0x38]; // 0x188(0x38)
	struct FMulticastInlineDelegate OnViewportLocationChanged; // 0x1c0(0x10)
	struct FScalableFloat NonOwningInterpSpeed; // 0x1d0(0x28)
	struct FScalableFloat MinDeltaToSendWorldLocationToServer; // 0x1f8(0x28)
	char pad_220[0x8]; // 0x220(0x08)
	struct FVector ReplicatedWorldLocation; // 0x228(0x18)
	char pad_240[0x50]; // 0x240(0x50)
	struct TArray<struct UUserWidget*> Widgets; // 0x290(0x10)
	char pad_2A0[0xe9]; // 0x2a0(0xe9)
	bool bAdditiveRotationAllowedByDefault; // 0x389(0x01)
	char pad_38A[0x1]; // 0x38a(0x01)
	bool bZoomAllowedByDefault; // 0x38b(0x01)
	struct FName ZoomActionName; // 0x38c(0x04)
	char pad_390[0x8]; // 0x390(0x08)
	struct UCameraComponent* AdditiveOffsetCameraComponent; // 0x398(0x08)
	char pad_3A0[0x8]; // 0x3a0(0x08)

	void SetZoomAllowed(bool bInZoomAllowed); // Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.SetZoomAllowed // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x69f73f4
	void SetAllowOnNonOwningClients(bool bAllow); // Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.SetAllowOnNonOwningClients // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x69f7374
	void SetAdditiveRotationAllowed(bool bInAdditiveRotationAllowed); // Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.SetAdditiveRotationAllowed // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x69f72f4
	void ServerOnWorldLocationChanged(struct FVector WorldLocation); // Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ServerOnWorldLocationChanged // (Final|Net|Native|Event|Private|NetServer|HasDefaults) // @ game+0x69f7274
	void PushCursor(struct FGameplayTag& CursorModeTag, struct UObject* InstigatingObject, bool bActivate); // Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.PushCursor // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x69f7160
	void PopCursor(struct FGameplayTag& CursorModeTag, struct UObject* InstigatingObject, bool bDeactivateIfStackEmpty); // Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.PopCursor // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x69f704c
	void PopAllCursorsForObject(struct UObject* InstigatingObject, bool bDeactivateIfStackEmpty); // Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.PopAllCursorsForObject // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x69f6f84
	void OnRep_ReplicatedWorldLocation(); // Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnRep_ReplicatedWorldLocation // (Final|Native|Private) // @ game+0x69f6f58
	void OnRep_ReplicatedCursorStackEntry(struct FSpecialEventCursorStackEntry& OldCursorStackEntry); // Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnRep_ReplicatedCursorStackEntry // (Final|Native|Private|HasOutParms) // @ game+0x69f6ec4
	void OnRep_bAllowOnNonOwningClients(); // Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnRep_bAllowOnNonOwningClients // (Final|Native|Private) // @ game+0x69f6f70
	void OnLocallyControlledCursorVisibilityChanged(struct USpecialEventCursorPawnComponent* CursorPawnComponent, struct FGameplayTag& CursorModeTag, bool bShouldBeVisible); // Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnLocallyControlledCursorVisibilityChanged // (Final|Native|Private|HasOutParms) // @ game+0x69f6c8c
	void OnInputMethodChanged(enum class ECommonInputType InputType); // Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnInputMethodChanged // (Final|Native|Private) // @ game+0x69f6c0c
	void OnHUDPostRender(struct AHUD* HUD, struct UCanvas* Canvas); // Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnHUDPostRender // (Final|Native|Private) // @ game+0x64c99dc
	void MoveInputUpdate(struct FVector& InInputVector); // Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.MoveInputUpdate // (Final|Native|Private|HasOutParms|HasDefaults) // @ game+0x69f68c0
	void LookInputUpdate(struct FVector& InInputVector); // Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.LookInputUpdate // (Final|Native|Private|HasOutParms|HasDefaults) // @ game+0x69f6838
	bool IsZoomAllowed(); // Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.IsZoomAllowed // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x69f6820
	bool IsLocallyControlled(); // Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.IsLocallyControlled // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x69f6808
	bool IsAdditiveRotationAllowed(); // Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.IsAdditiveRotationAllowed // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x69f67f0
	void InputPressed(struct FName& ActionName, bool bPressed); // Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.InputPressed // (Final|Native|Private|HasOutParms) // @ game+0x69f671c
	void GyroInputUpdate(struct FVector& InInputVector); // Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GyroInputUpdate // (Final|Native|Private|HasOutParms|HasDefaults) // @ game+0x69f6694
	bool GetWorldLocationAndDirection(struct FVector& OutWorldLocation, struct FVector& OutWorldDirection); // Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetWorldLocationAndDirection // (Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const) // @ game+0x69f659c
	bool GetViewportSize(struct FVector2D& OutViewportSize); // Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetViewportSize // (Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const) // @ game+0x69f6508
	bool GetViewportLocation(struct FVector2D& OutViewportLocation); // Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetViewportLocation // (Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const) // @ game+0x69f6468
	bool GetViewportCenter(struct FVector2D& OutViewportCenter); // Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetViewportCenter // (Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const) // @ game+0x69f63a4
	struct USpecialEventCursorPawnComponent* GetSpecialEventCursorPawnComponent(struct APawn* Pawn, struct FGameplayTag& CursorModeTag, bool bMustBeActive); // Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetSpecialEventCursorPawnComponent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x69f618c
	struct FVector2D GetNormalizedLocation(); // Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetNormalizedLocation // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x69f6170
	struct APlayerController* GetLocalController(); // Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetLocalController // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x69f614c
	enum class ECommonInputType GetInputType(); // Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetInputType // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x69f6134
	struct FGameplayTagContainer GetCursorModeTagsForWidget(struct UUserWidget* Widget); // Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCursorModeTagsForWidget // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x69f608c
	struct UUserWidget* GetCurrentWidget(); // Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCurrentWidget // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x69f6034
	bool GetCurrentHitResult(struct FHitResult& OutHitResult); // Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCurrentHitResult // (Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x69f5e64
	struct FGameplayTag GetCurrentCursorModeTag(); // Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCurrentCursorModeTag // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x69f5e4c
	struct FVector2D GetCenteredWidgetLocation(struct UUserWidget* Widget, struct FVector2D& ViewportLocation); // Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCenteredWidgetLocation // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x69f5c2c
	struct UCameraComponent* GetCameraComponent(); // Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCameraComponent // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x69f5c08
	bool ConvertWorldToViewportLocation(struct FVector2D& OutViewportLocation, struct FVector& WorldLocation); // Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ConvertWorldToViewportLocation // (Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const) // @ game+0x69f5b18
	bool ConvertWorldToNormalizedLocation(struct FVector2D& OutNormalizedLocation, struct FVector& WorldLocation); // Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ConvertWorldToNormalizedLocation // (Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const) // @ game+0x69f5a28
	bool ConvertViewportToWorldLocationAndDirection(struct FVector& OutWorldLocation, struct FVector& OutWorldDirection, struct FVector2D& ViewportLocation); // Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ConvertViewportToWorldLocationAndDirection // (Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const) // @ game+0x69f58ec
	bool ConvertViewportToNormalizedLocation(struct FVector2D& OutNormalizedLocation, struct FVector2D& ViewportLocation); // Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ConvertViewportToNormalizedLocation // (Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const) // @ game+0x69f57fc
	bool ConvertNormalizedToWorldLocationAndDirection(struct FVector& OutWorldLocation, struct FVector& OutWorldDirection, struct FVector2D& NormalizedLocation); // Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ConvertNormalizedToWorldLocationAndDirection // (Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const) // @ game+0x69f56c0
	bool ConvertNormalizedToViewportLocation(struct FVector2D& OutViewportLocation, struct FVector2D& NormalizedLocation); // Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ConvertNormalizedToViewportLocation // (Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const) // @ game+0x69f55d0
	bool CanBeVisible(); // Function SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.CanBeVisible // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x69f55ac
};

// Class SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent
// Size: 0x138 (Inherited: 0xa0)
struct USpecialEventCursorWeaponComponent : UFortWeaponComponent {
	char pad_A0[0x8]; // 0xa0(0x08)
	struct FMulticastInlineDelegate OnCursorPawnComponentSet; // 0xa8(0x10)
	struct USpecialEventCursorPawnComponent* CursorPawnComponentClass; // 0xb8(0x08)
	struct FGameplayTag CursorModeTag; // 0xc0(0x04)
	bool bAlignFXToCursor; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
	struct AFortWeapon* OwningWeapon; // 0xc8(0x08)
	struct AFortPlayerPawn* Pawn; // 0xd0(0x08)
	struct USpecialEventCursorPawnComponent* CursorPawnComponent; // 0xd8(0x08)
	char pad_E0[0x58]; // 0xe0(0x58)

	void OnRep_CursorPawnComponent(); // Function SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnRep_CursorPawnComponent // (Final|Native|Protected) // @ game+0x69f6eb0
	void OnPlayImpactFX(struct AFortWeapon* Weapon, struct FHitResult& HitResult, struct UFXSystemComponent* FXSystemComponent); // Function SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnPlayImpactFX // (Final|Native|Private|HasOutParms) // @ game+0x69f6d88
	bool OnGetAimRotOverride(struct AFortWeapon* Weapon, struct FRotator& OutOverride, enum class EFortAbilityTargetingSource TargetingSource); // Function SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnGetAimRotOverride // (Final|Native|Private|HasOutParms|HasDefaults) // @ game+0x69f6aec
	void OnBeamFired(struct AFortWeapon* Weapon, bool bUsePersistentBeam, struct UFXSystemComponent* PSC, struct FVector& BeamOrigin, struct FVector& HitLocation); // Function SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnBeamFired // (Final|Native|Private|HasOutParms|HasDefaults) // @ game+0x69f6948
	struct USpecialEventCursorPawnComponent* GetSpecialEventCursorPawnComponentForWeapon(struct AFortWeapon* Weapon); // Function SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.GetSpecialEventCursorPawnComponentForWeapon // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x69f6324
	struct USpecialEventCursorPawnComponent* GetSpecialEventCursorPawnComponentForCurrentWeapon(struct AFortPlayerPawn* Pawn); // Function SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.GetSpecialEventCursorPawnComponentForCurrentWeapon // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x69f6294
	struct USpecialEventCursorPawnComponent* GetCursorPawnComponent(); // Function SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.GetCursorPawnComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x23b2464
	struct USpecialEventCursorWeaponComponent* GetCurrentSpecialEventCursorWeaponComponent(struct AFortPlayerPawn* Pawn); // Function SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.GetCurrentSpecialEventCursorWeaponComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x69f5fb4
	bool GetCurrentHitResult(struct FHitResult& OutHitResult); // Function SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.GetCurrentHitResult // (Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x69f5f0c
};

// Class SpecialEventGameplayRuntime.SpecialEventGameplayGlobals
// Size: 0x28 (Inherited: 0x28)
struct USpecialEventGameplayGlobals : UObject {
};

// Class SpecialEventGameplayRuntime.SpecialEventGameplayLibrary
// Size: 0x28 (Inherited: 0x28)
struct USpecialEventGameplayLibrary : UBlueprintFunctionLibrary {

	void StreamOutAllBuildingFoundations(struct UObject* WorldContextObject); // Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.StreamOutAllBuildingFoundations // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x69f9918
	void SetNextLoadingScreen(struct UObject* WorldContextObject, struct UAthenaLoadingScreenItemDefinition* LoadingScreenDefinition, bool bCanShowLoadingBar); // Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.SetNextLoadingScreen // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x69f9744
	void SetLODOnLandscapProxies(struct UObject* WorldContextObject, bool bForced, int32_t InLODValue); // Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.SetLODOnLandscapProxies // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x69f964c
	void HideSkydivingShadowProxy(struct UObject* WorldContextObject); // Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.HideSkydivingShadowProxy // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x69f925c
	struct ASpecialEventScript* GetSpecialEventScript(struct UObject* WorldContextObject); // Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.GetSpecialEventScript // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x69f915c
	struct FString GetSpecialEventPlayerDisplayName(struct AFortPlayerControllerAthena* LocalController, struct AFortPlayerStateAthena* PlayerState); // Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.GetSpecialEventPlayerDisplayName // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x69f9084
	struct AFortAthenaMutator_SpecialEvent* GetSpecialEventMutator(struct UObject* WorldContextObject); // Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.GetSpecialEventMutator // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x69f9004
	struct FFortAthenaLoadout GetLocalPlayerLoadout(struct UObject* WorldContextObject); // Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.GetLocalPlayerLoadout // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x69f8e94
	bool GetHasInfiniteSafeZonePhase(struct UObject* WorldContextObject); // Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.GetHasInfiniteSafeZonePhase // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x69f8e08
	void ForceUpdateGrass(struct UObject* WorldContextObject, struct FVector Location); // Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.ForceUpdateGrass // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x69f8b84
	void ForceDestroyComponents(struct TArray<struct UActorComponent*>& Components, bool bPromoteChildren, struct FString LogContext); // Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.ForceDestroyComponents // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x69f88c8
	struct UFortControllerComponent_SpecialEvent* FindSpecialEventComponent(struct AController* Controller); // Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.FindSpecialEventComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x69f8820
	struct UFortControllerComponent_GameplayCinematic* FindGameplayCinematicComponent(struct AController* Controller); // Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.FindGameplayCinematicComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x69f8658
	bool DetachPawnFromComponent(struct AFortPawn* Pawn, struct USceneComponent* Component, enum class EDetachmentRule LocationRule, enum class EDetachmentRule RotationRule, enum class EDetachmentRule ScaleRule); // Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.DetachPawnFromComponent // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x69f84dc
	bool DetachPawn(struct AFortPawn* Pawn, enum class EDetachmentRule LocationRule, enum class EDetachmentRule RotationRule, enum class EDetachmentRule ScaleRule); // Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.DetachPawn // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x69f83a4
	void CreateSpecialEventPlayerEliminationWorldMarker(struct AFortPlayerControllerAthena* LocalController, struct AFortPlayerStateAthena* VictimPlayerState, struct FVector& DeathLocation); // Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.CreateSpecialEventPlayerEliminationWorldMarker // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x69f8290
	bool AttachPawnToComponent(struct AFortPawn* Pawn, struct USceneComponent* Component, struct FName SocketName, enum class EAttachmentRule LocationRule, enum class EAttachmentRule RotationRule, enum class EAttachmentRule ScaleRule, bool bWeldSimulatedBodies); // Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.AttachPawnToComponent // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // @ game+0x69f808c
	void AddSpecialEventRecentElimination(struct FVector& Location, struct AFortPlayerStateAthena* PlayerState); // Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.AddSpecialEventRecentElimination // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x69f7f6c
	void AddSpecialEventKillFeedEntry(struct UObject* WorldContextObject, struct AFortPlayerStateAthena* VictimPlayerState, struct AFortPlayerStateAthena* KillerPlayerState, struct FText NonPlayerVictimName, struct FText NonPlayerKillerName, struct FGameplayTag& DeathCauseTag, enum class EDeathCauseReason DeathCauseReason, float Distance); // Function SpecialEventGameplayRuntime.SpecialEventGameplayLibrary.AddSpecialEventKillFeedEntry // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x69f7cd4
};

// Class SpecialEventGameplayRuntime.FortAsyncAction_GameplayCinematicComponentReady
// Size: 0x48 (Inherited: 0x30)
struct UFortAsyncAction_GameplayCinematicComponentReady : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnReady; // 0x30(0x10)
	char pad_40[0x8]; // 0x40(0x08)

	struct UFortAsyncAction_GameplayCinematicComponentReady* FindGameplayCinematicComponentAsync(struct AController* Conroller); // Function SpecialEventGameplayRuntime.FortAsyncAction_GameplayCinematicComponentReady.FindGameplayCinematicComponentAsync // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x69f86e4
};

// Class SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent
// Size: 0xe8 (Inherited: 0xa0)
struct USpecialEventGameUserSettingsControllerComponent : UActorComponent {
	struct FMulticastInlineDelegate OnLoaded; // 0xa0(0x10)
	struct FString Version; // 0xb0(0x10)
	float MinTimeBetweenSaves; // 0xc0(0x04)
	char pad_C4[0x24]; // 0xc4(0x24)

	void SpecialEventGameUserSettings_ToggleDebug(); // Function SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SpecialEventGameUserSettings_ToggleDebug // (Final|BlueprintCosmetic|Exec|Native|Public) // @ game+0x24841e4
	void SpecialEventGameUserSettings_SetData(struct FString Data); // Function SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SpecialEventGameUserSettings_SetData // (Final|BlueprintCosmetic|Exec|Native|Public) // @ game+0x69ef0b4
	void SpecialEventGameUserSettings_LogData(); // Function SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SpecialEventGameUserSettings_LogData // (Final|BlueprintCosmetic|Exec|Native|Public|Const) // @ game+0x24841e4
	void SpecialEventGameUserSettings_ClearData(); // Function SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SpecialEventGameUserSettings_ClearData // (Final|BlueprintCosmetic|Exec|Native|Public) // @ game+0x24841e4
	void SetData(struct FString Data, bool bForceSave); // Function SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SetData // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x69f93b0
	void ParseLoadedData(struct FString Data); // Function SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.ParseLoadedData // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	struct USpecialEventGameUserSettingsControllerComponent* GetSpecialEventGameUserSettingsControllerComponent(struct UObject* WorldContextObject); // Function SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.GetSpecialEventGameUserSettingsControllerComponent // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x69f8f54
	void GetData(enum class ESpecialEventGameUserSettingsResult& OutResult, struct FString& OutData); // Function SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.GetData // (Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x69f8c48
};

// Class SpecialEventGameplayRuntime.FortAsyncAction_SpecialEventGameUserSettingsReady
// Size: 0x48 (Inherited: 0x30)
struct UFortAsyncAction_SpecialEventGameUserSettingsReady : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnReady; // 0x30(0x10)
	char pad_40[0x8]; // 0x40(0x08)

	struct UFortAsyncAction_SpecialEventGameUserSettingsReady* SpecialEventGameUserSettingsReadyAsync(struct UObject* WorldContextObject); // Function SpecialEventGameplayRuntime.FortAsyncAction_SpecialEventGameUserSettingsReady.SpecialEventGameUserSettingsReadyAsync // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x69f9840
};

// Class SpecialEventGameplayRuntime.SpecialEventPhase
// Size: 0x328 (Inherited: 0x288)
struct ASpecialEventPhase : AInfo {
	char pad_288[0x18]; // 0x288(0x18)
	struct FGameplayTag PhaseTag; // 0x2a0(0x04)
	bool bApplyGameplayEffects; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	struct TArray<struct UGameplayEffect*> GameplayEffectsToApply; // 0x2a8(0x10)
	struct TArray<struct FSpecialEventPhaseComponentNetModeInfo> ControllerComponentsToApplyInfoList; // 0x2b8(0x10)
	struct TArray<struct FSpecialEventPhaseComponentNetModeInfo> PawnComponentsToApplyInfoList; // 0x2c8(0x10)
	struct UCameraModifier* CameraModifierToApply; // 0x2d8(0x08)
	bool bRemoveModifierOnPhaseDeactivation; // 0x2e0(0x01)
	bool bRemoveGameplayEffects; // 0x2e1(0x01)
	char pad_2E2[0x6]; // 0x2e2(0x06)
	struct TArray<struct UGameplayEffect*> GameplayEffectsToRemove; // 0x2e8(0x10)
	struct TArray<struct FSpecialEventPhaseComponentNetModeInfo> ControllerComponentsToRemoveInfoList; // 0x2f8(0x10)
	struct TArray<struct FSpecialEventPhaseComponentNetModeInfo> PawnComponentsToRemoveInfoList; // 0x308(0x10)
	struct UCameraModifier* AppliedCameraModifier; // 0x318(0x08)
	enum class ESpecialEventPhaseState PhaseState; // 0x320(0x01)
	char pad_321[0x7]; // 0x321(0x07)

	void SetHUDElementVisibility(struct FGameplayTagContainer& HUDElementTags, bool bHideElements); // Function SpecialEventGameplayRuntime.SpecialEventPhase.SetHUDElementVisibility // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x69f9548
	void PrePhaseActivation_Server(); // Function SpecialEventGameplayRuntime.SpecialEventPhase.PrePhaseActivation_Server // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnRep_PhaseState(); // Function SpecialEventGameplayRuntime.SpecialEventPhase.OnRep_PhaseState // (Final|Native|Protected) // @ game+0x69f92e0
	void OnPhaseFinished(); // Function SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseFinished // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x69f92cc
	void OnPhaseDeactivation_Server(); // Function SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseDeactivation_Server // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnPhaseDeactivation_Client(); // Function SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseDeactivation_Client // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnPhaseActivation_Server(); // Function SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseActivation_Server // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnPhaseActivation_Client(); // Function SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseActivation_Client // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	struct FGameplayTag GetPhaseTag(); // Function SpecialEventGameplayRuntime.SpecialEventPhase.GetPhaseTag // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6762598
	void DebugActivatePhase(); // Function SpecialEventGameplayRuntime.SpecialEventPhase.DebugActivatePhase // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x24841e4
};

// Class SpecialEventGameplayRuntime.SpecialEventPlayerMannequin
// Size: 0x5d0 (Inherited: 0x5c8)
struct ASpecialEventPlayerMannequin : AFortPlayerMannequin {
	char bDisableCollisionOnBeginPlay : 1; // 0x5c8(0x01)
	char bDisableComponentsTickOnServer : 1; // 0x5c8(0x01)
	char bRegisterWithSpecialEventMutatorOnClient : 1; // 0x5c8(0x01)
	char bDestroyUnusedSkeletalMeshComponentsOnClientFirstInitialization : 1; // 0x5c8(0x01)
	char pad_5C8_4 : 4; // 0x5c8(0x01)
	char pad_5C9[0x7]; // 0x5c9(0x07)

	void RegisterWithSpecialEventMutator(); // Function SpecialEventGameplayRuntime.SpecialEventPlayerMannequin.RegisterWithSpecialEventMutator // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x69f939c
	void HandleOnMutatorAdded(struct AFortGameplayMutator* NewMutator); // Function SpecialEventGameplayRuntime.SpecialEventPlayerMannequin.HandleOnMutatorAdded // (Final|Native|Protected) // @ game+0x69f91dc
	void DestroyUnusedSkeletalMeshComponents(); // Function SpecialEventGameplayRuntime.SpecialEventPlayerMannequin.DestroyUnusedSkeletalMeshComponents // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x69f8390
};

// Class SpecialEventGameplayRuntime.SpecialEventRewindComponent
// Size: 0xc8 (Inherited: 0xa0)
struct USpecialEventRewindComponent : UActorComponent {
	float MaxRecordingDuration; // 0xa0(0x04)
	float LocalRecordingFPS; // 0xa4(0x04)
	float ReplicatedRecordingFPS; // 0xa8(0x04)
	bool bAutoStartRecording; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	float RewindLerpTime; // 0xb0(0x04)
	float DefaultRewindDuration; // 0xb4(0x04)
	float DefaultRewindPlaybackSpeed; // 0xb8(0x04)
	struct FSpecialEventRewindComponentStateData StateData; // 0xbc(0x08)
	float ReplicatedRewindDuration; // 0xc4(0x04)

	bool TryStartRewinding(float Duration, float PlaybackSpeed); // Function SpecialEventGameplayRuntime.SpecialEventRewindComponent.TryStartRewinding // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x69f9988
	void OnRep_StateData(struct FSpecialEventRewindComponentStateData& OldStateData); // Function SpecialEventGameplayRuntime.SpecialEventRewindComponent.OnRep_StateData // (Final|Native|Private|HasOutParms) // @ game+0x69f9304
};

// Class SpecialEventGameplayRuntime.SpecialEventRewindComponent_PlayerPawn
// Size: 0x388 (Inherited: 0xc8)
struct USpecialEventRewindComponent_PlayerPawn : USpecialEventRewindComponent {
	bool bStartServerRecordingOnLastGroundFrame; // 0xc8(0x01)
	char pad_C9[0x27]; // 0xc9(0x27)
	struct FSpecialEventRewindComponentRecording_PlayerPawn ReplicatedRecording; // 0xf0(0x20)
	char pad_110[0x118]; // 0x110(0x118)
	struct FSpecialEventRewindComponentRecordingFastArray_PlayerPawn ReplicatedRecordingFastArray; // 0x228(0x118)
	char pad_340[0x48]; // 0x340(0x48)

	void OnServerLanded(struct FHitResult& Hit); // Function SpecialEventGameplayRuntime.SpecialEventRewindComponent_PlayerPawn.OnServerLanded // (Final|Native|Private|HasOutParms) // @ game+0x6a0822c
};

// Class SpecialEventGameplayRuntime.SpecialEventScript
// Size: 0x308 (Inherited: 0x288)
struct ASpecialEventScript : AInfo {
	struct FMulticastInlineDelegate OnSpecialEventPhaseActivated; // 0x288(0x10)
	struct FMulticastInlineDelegate OnSpecialEventPhaseDeactivated; // 0x298(0x10)
	struct TArray<struct FPhaseInfo> PhaseInfoArray; // 0x2a8(0x10)
	struct ALevelSequenceActor* MasterSequence; // 0x2b8(0x08)
	float DropDeadWindowSizeInSeconds; // 0x2c0(0x04)
	float DelayAfterConentLoad; // 0x2c4(0x04)
	float DelayAfterWarmup; // 0x2c8(0x04)
	float ForceReturnToMainMenuTime; // 0x2cc(0x04)
	float ForceReturnToMainMenuTimeRandomness; // 0x2d0(0x04)
	float MinDelayReturnToMainMenu; // 0x2d4(0x04)
	float MaxDelayReturnToMainMenu; // 0x2d8(0x04)
	bool bPreloadAllLevelsOnServer; // 0x2dc(0x01)
	bool bAllowGarbageCollectionAfterUnload; // 0x2dd(0x01)
	bool bFullPurgeGC; // 0x2de(0x01)
	char pad_2DF[0x1]; // 0x2df(0x01)
	int32_t ReplicatedActivePhaseIndex; // 0x2e0(0x04)
	char pad_2E4[0xc]; // 0x2e4(0x0c)
	struct UMeshNetworkComponent* MeshNetworkComponent; // 0x2f0(0x08)
	char pad_2F8[0x10]; // 0x2f8(0x10)

	void UpdateMasterSequence(float Time); // Function SpecialEventGameplayRuntime.SpecialEventScript.UpdateMasterSequence // (Native|Event|Protected|BlueprintEvent) // @ game+0x6a083ac
	void StartEventAtIndex(int32_t InStartingIndex); // Function SpecialEventGameplayRuntime.SpecialEventScript.StartEventAtIndex // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x6a0832c
	void SetLocalPlayersSignificantForSpecialEventSequence(bool bIsSignificant); // Function SpecialEventGameplayRuntime.SpecialEventScript.SetLocalPlayersSignificantForSpecialEventSequence // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x6a082c4
	void OnRep_ReplicatedActivePhaseIndex(); // Function SpecialEventGameplayRuntime.SpecialEventScript.OnRep_ReplicatedActivePhaseIndex // (Final|Native|Protected) // @ game+0x6a08190
	int32_t GetActivePhaseIndex(); // Function SpecialEventGameplayRuntime.SpecialEventScript.GetActivePhaseIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6a07c5c
	void BP_OnScriptReady(); // Function SpecialEventGameplayRuntime.SpecialEventScript.BP_OnScriptReady // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnScriptFinished(); // Function SpecialEventGameplayRuntime.SpecialEventScript.BP_OnScriptFinished // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void AttemptStartNextPhase(struct FGameplayTag CurrentPhaseTag); // Function SpecialEventGameplayRuntime.SpecialEventScript.AttemptStartNextPhase // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x6a07b8c
	void AttemptFinishPhase(struct FGameplayTag PhaseTag); // Function SpecialEventGameplayRuntime.SpecialEventScript.AttemptFinishPhase // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x6a07b0c
};

// Class SpecialEventGameplayRuntime.SpecialEventScriptMeshActor
// Size: 0x2b8 (Inherited: 0x288)
struct ASpecialEventScriptMeshActor : AInfo {
	struct FDateTime RootStartTime; // 0x288(0x08)
	struct FString CalendarEventName; // 0x290(0x10)
	float CalenderEventOffsetInSeconds; // 0x2a0(0x04)
	float EncryptionKeyDeliveryTimeOffset; // 0x2a4(0x04)
	char pad_2A8[0x8]; // 0x2a8(0x08)
	struct UMeshNetworkComponent* MeshNetworkComponent; // 0x2b0(0x08)

	void OnRep_RootStartTime(); // Function SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.OnRep_RootStartTime // (Final|Native|Protected) // @ game+0x6a081a8
	void MeshRootStartEvent(); // Function SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootStartEvent // (Final|Exec|Native|Public) // @ game+0x6a08124
	void MeshRootStartCalendarTimerOnly(); // Function SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootStartCalendarTimerOnly // (Final|Exec|Native|Public) // @ game+0x6a080b4
	void MeshRootStartCalendarTimer(); // Function SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootStartCalendarTimer // (Final|Exec|Native|Public) // @ game+0x6a080a0
	void MeshRootResetEvent(); // Function SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootResetEvent // (Final|Exec|Native|Public) // @ game+0x6a0808c
	void MeshRootLogCalendarTimer(); // Function SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootLogCalendarTimer // (Final|Exec|Native|Public) // @ game+0x6a08078
	void MeshRootClearCalendarTimer(); // Function SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootClearCalendarTimer // (Final|Exec|Native|Public) // @ game+0x6a08064
};

// Class SpecialEventGameplayRuntime.SpecialEventStatComponent
// Size: 0x1e0 (Inherited: 0xa0)
struct USpecialEventStatComponent : UActorComponent {
	struct FMulticastInlineDelegate OnValueChangedDelegate; // 0xa0(0x10)
	struct TArray<struct FSpecialEventStatDefinition> StatDefinitions; // 0xb0(0x10)
	struct FSpecialEventStatArray StatFastArray; // 0xc0(0x120)

	struct FSpecialEventStatArrayEntry GetStat(bool& bOutValid, struct FGameplayTag LookupTag); // Function SpecialEventGameplayRuntime.SpecialEventStatComponent.GetStat // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x6a07f68
	struct FSpecialEventStatArrayEntry GetSpecialEventStat(bool& bOutValid, struct AActor* Actor, struct FGameplayTag LookupTag); // Function SpecialEventGameplayRuntime.SpecialEventStatComponent.GetSpecialEventStat // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x6a07e4c
	bool AdjustStat(struct FGameplayTag LookupTag, float Adjustment, bool bLogError); // Function SpecialEventGameplayRuntime.SpecialEventStatComponent.AdjustStat // (Final|Native|Public|BlueprintCallable) // @ game+0x6a07a0c
	void AdjustSpecialEventStat(struct AActor* Actor, struct FGameplayTag LookupTag, float Adjustment); // Function SpecialEventGameplayRuntime.SpecialEventStatComponent.AdjustSpecialEventStat // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6a07910
};

// Class SpecialEventGameplayRuntime.DamageRecordEntry
// Size: 0x148 (Inherited: 0x28)
struct UDamageRecordEntry : UObject {
	float DamageTotal; // 0x28(0x04)
	float EndReplicationTime; // 0x2c(0x04)
	struct FGameplayTagContainer DamageTags; // 0x30(0x20)
	struct FGameplayEffectContextHandle EffectContext; // 0x50(0x18)
	struct FGameplayCueParameters GameplayCueParams; // 0x68(0xd0)
	char pad_138[0x10]; // 0x138(0x10)

	void OnRep_DamageTotal(); // Function SpecialEventGameplayRuntime.DamageRecordEntry.OnRep_DamageTotal // (Final|Native|Public) // @ game+0x6a08138
};

// Class SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent
// Size: 0x108 (Inherited: 0xa0)
struct USpecialRelevancyHealthComponent : USpecialRelevancyComponentBase {
	struct FScalableFloat RelevancyDeathTimeLength; // 0xa0(0x28)
	bool bSetLifespanOnLastRelevancyDeath; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float OwnerMaxHealthCached; // 0xcc(0x04)
	struct TArray<struct UDamageRecordEntry*> ReplicatedDamageRecords; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnSpecialRelevancyDeath; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnSpecialRelevancyDamage; // 0xf0(0x10)
	struct AFortAthenaMutator_SpecialRelevancy* CachedMutator; // 0x100(0x08)

	void OnKilled(struct AFortPlayerState* KillingPlayerState, int32_t RelevancyGroupIndex); // Function SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.OnKilled // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnDamaged(struct AFortPlayerState* DamagingPlayerState, int32_t RelevancyGroupIndex, float DealtDamage, float ActualDealtDamage, float TotalDamage, float DealtDamagePercent, float ActualDealtDamagePercent, float TotalDamagePercent, float MaxHealth, bool bKilled); // Function SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.OnDamaged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	float GetHealthPercentFromRelevancyIndex(int32_t Index); // Function SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.GetHealthPercentFromRelevancyIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6a07dbc
	float GetHealthPercent(struct AActor* RelevancyActor); // Function SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.GetHealthPercent // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6a07c74
	float GetHealthFromRelevancyIndex(int32_t Index); // Function SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.GetHealthFromRelevancyIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6a07d2c
	float GetHealth(struct AActor* RelevancyActor); // Function SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.GetHealth // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6a07c74
	float ClientGetHealthPercent(); // Function SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.ClientGetHealthPercent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6a07c34
	float ClientGetHealth(); // Function SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.ClientGetHealth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x6a07c0c
};

