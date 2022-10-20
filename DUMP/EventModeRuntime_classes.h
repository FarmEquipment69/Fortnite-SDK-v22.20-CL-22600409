// Class EventModeRuntime.FortGameFrameworkComponent_EventMode
// Size: 0x220 (Inherited: 0xa0)
struct UFortGameFrameworkComponent_EventMode : UGameFrameworkComponent {
	char pad_A0[0x60]; // 0xa0(0x60)
	struct TSoftObjectPtr<UFortWeaponItemDefinition> ActivatorAsset; // 0x100(0x28)
	struct TArray<struct FUIExtension> UIExtensions; // 0x128(0x10)
	struct TMap<struct FGameplayTag, struct TSoftClassPtr<UObject>> TaggedUIExtensions; // 0x138(0x50)
	struct TArray<struct FEventModeFocusActor> FocusActors; // 0x188(0x10)
	char pad_198[0x8]; // 0x198(0x08)
	struct UInputComponent* InputComponent; // 0x1a0(0x08)
	struct TArray<struct FEventModeWidgetCachedData> CachedWidgetData; // 0x1a8(0x10)
	struct TSoftObjectPtr<AActor> CurrentlyFocusedActor; // 0x1b8(0x28)
	char pad_1E0[0x40]; // 0x1e0(0x40)

	void OnPlayerPawnPossessed(struct APawn* PossessedPawn); // Function EventModeRuntime.FortGameFrameworkComponent_EventMode.OnPlayerPawnPossessed // (Final|Native|Private) // @ game+0x64a2a4c
	void OnExitVehicle(); // Function EventModeRuntime.FortGameFrameworkComponent_EventMode.OnExitVehicle // (Final|Native|Private) // @ game+0x6868120
	void OnEnterVehicle(); // Function EventModeRuntime.FortGameFrameworkComponent_EventMode.OnEnterVehicle // (Final|Native|Private) // @ game+0x6868104
	bool GetIsFocusing(); // Function EventModeRuntime.FortGameFrameworkComponent_EventMode.GetIsFocusing // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68680ec
	bool GetIsFocusAvailable(); // Function EventModeRuntime.FortGameFrameworkComponent_EventMode.GetIsFocusAvailable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68680d4
	bool GetIsEventModeActive(); // Function EventModeRuntime.FortGameFrameworkComponent_EventMode.GetIsEventModeActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x68680bc
};

// Class EventModeRuntime.FortWeapon_EventMode
// Size: 0x1028 (Inherited: 0x1028)
struct AFortWeapon_EventMode : AFortWeapon {
};

