// Class Reflex.ReflexBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UReflexBlueprintLibrary : UBlueprintFunctionLibrary {

	void SetReflexMode(enum class EReflexMode Mode); // Function Reflex.ReflexBlueprintLibrary.SetReflexMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6fa397c
	void SetFlashIndicatorEnabled(bool bEnabled); // Function Reflex.ReflexBlueprintLibrary.SetFlashIndicatorEnabled // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x6fa390c
	float GetRenderLatencyInMs(); // Function Reflex.ReflexBlueprintLibrary.GetRenderLatencyInMs // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x6fa38e4
	enum class EReflexMode GetReflexMode(); // Function Reflex.ReflexBlueprintLibrary.GetReflexMode // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x6fa3858
	bool GetReflexAvailable(); // Function Reflex.ReflexBlueprintLibrary.GetReflexAvailable // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x6fa3834
	float GetGameToRenderLatencyInMs(); // Function Reflex.ReflexBlueprintLibrary.GetGameToRenderLatencyInMs // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x6fa380c
	float GetGameLatencyInMs(); // Function Reflex.ReflexBlueprintLibrary.GetGameLatencyInMs // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x6fa37e4
	bool GetFlashIndicatorEnabled(); // Function Reflex.ReflexBlueprintLibrary.GetFlashIndicatorEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x6fa3760
};

