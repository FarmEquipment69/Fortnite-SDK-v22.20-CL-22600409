// Class CreativeRoyaleRuntime.AthenaAIServicePlayerBots_CreativeRoyale
// Size: 0xe00 (Inherited: 0xdf0)
struct UAthenaAIServicePlayerBots_CreativeRoyale : UAthenaAIServiceCreativePlayerBots {
	struct AFortMinigame* CachedMinigame; // 0xde8(0x08)
	enum class EFortMinigameState MinigameStateToStartSpawning; // 0xdf0(0x01)
	char pad_DF9[0x7]; // 0xdf9(0x07)

	void OnMinigameStateChanged(struct AFortMinigame* Minigame, enum class EFortMinigameState MinigameState); // Function CreativeRoyaleRuntime.AthenaAIServicePlayerBots_CreativeRoyale.OnMinigameStateChanged // (Native|Protected) // @ game+0x67503b8
};

// Class CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_PlayerSpawning
// Size: 0xb0 (Inherited: 0xb0)
struct UCreativeRoyalePlayspaceComponent_PlayerSpawning : UFortPlayspaceComponent_PlayerSpawning {
};

// Class CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace
// Size: 0x630 (Inherited: 0x620)
struct ACreativeRoyaleRootPlayspace : AFortPlayspace {
	struct AFortPlayerControllerAthena* EditorIslandOwnerPlayerController; // 0x620(0x08)
	char pad_628[0x8]; // 0x628(0x08)

	void TeleportPlayersToPlayerStarts(); // Function CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace.TeleportPlayersToPlayerStarts // (Final|Native|Protected) // @ game+0x24841e4
	void OnPlotLoadComplete(); // Function CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace.OnPlotLoadComplete // (Final|Native|Private) // @ game+0x24841e4
	void Cheat_LoadEditorIsland(); // Function CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace.Cheat_LoadEditorIsland // (Final|Native|Protected) // @ game+0x24841e4
};

// Class CreativeRoyaleRuntime.FortAthenaMutator_CreativeRoyaleSafeZoneOverride
// Size: 0x330 (Inherited: 0x330)
struct AFortAthenaMutator_CreativeRoyaleSafeZoneOverride : AFortAthenaMutator {
};

// Class CreativeRoyaleRuntime.FortCheatManager_CreativeRoyale
// Size: 0x48 (Inherited: 0x38)
struct UFortCheatManager_CreativeRoyale : UFortCheatManager_Coupled {
	struct UFortCreativeRealEstatePlotItemDefinition* CreativeRoyaleEditPlotDefinition; // 0x38(0x08)
	struct FGameplayTag CreativeRoyaleVolumeTag; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)

	void TeleportToPlotAferLoad(); // Function CreativeRoyaleRuntime.FortCheatManager_CreativeRoyale.TeleportToPlotAferLoad // (Final|Native|Protected|Const) // @ game+0x6750480
	void CreativeRoyaleTeleportToEditZone(); // Function CreativeRoyaleRuntime.FortCheatManager_CreativeRoyale.CreativeRoyaleTeleportToEditZone // (Final|Exec|Native|Public|Const) // @ game+0x24841e4
	void CreativeRoyaleResetIslandFile(); // Function CreativeRoyaleRuntime.FortCheatManager_CreativeRoyale.CreativeRoyaleResetIslandFile // (Final|Exec|Native|Public|Const) // @ game+0x675038c
	void CreativeRoyaleLoadEditPlot(); // Function CreativeRoyaleRuntime.FortCheatManager_CreativeRoyale.CreativeRoyaleLoadEditPlot // (Final|Exec|Native|Public|Const) // @ game+0x24841e4
};

// Class CreativeRoyaleRuntime.FortProjectEditComponent_CreativeRoyale
// Size: 0x3f0 (Inherited: 0x3e0)
struct UFortProjectEditComponent_CreativeRoyale : UFortProjectEditComponent {
	char pad_3E0[0x8]; // 0x3e0(0x08)
	struct UFortCreativeRealEstatePlotItemDefinition* CreativeRoyaleEditPlotDefinition; // 0x3e8(0x08)

	void OnPlayerLoggedIn(struct APlayerController* PlayerController); // Function CreativeRoyaleRuntime.FortProjectEditComponent_CreativeRoyale.OnPlayerLoggedIn // (Final|Native|Protected) // @ game+0x64a2a4c
	void LoadPlotFromProject(); // Function CreativeRoyaleRuntime.FortProjectEditComponent_CreativeRoyale.LoadPlotFromProject // (Final|Native|Protected) // @ game+0x24841e4
};

