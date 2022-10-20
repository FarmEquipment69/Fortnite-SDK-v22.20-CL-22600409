// Class CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility
// Size: 0xb88 (Inherited: 0xb20)
struct UCreativeVideoPlayerFullscreenGameplayAbility : UFortGameplayAbility {
	struct UGameplayEffect* NoCollisionGameplayEffectClass; // 0xb20(0x08)
	struct UGameplayEffect* NoDamageGameplayEffectClass; // 0xb28(0x08)
	struct TArray<struct UGameplayEffect*> AnimationStateGameplayEffectClasses; // 0xb30(0x10)
	struct UUserWidget* FullscreenWidgetClass; // 0xb40(0x08)
	enum class ECreativeVideoPlayerFullscreenEffects FullscreenEffects; // 0xb48(0x01)
	bool bPromptToConfirmFullscreen; // 0xb49(0x01)
	char pad_B4A[0x6]; // 0xb4a(0x06)
	struct UFortInputComponent* OverrideMovementInputComponent; // 0xb50(0x08)
	struct UFortInputComponent* SelectFullscreenModeInputComponent; // 0xb58(0x08)
	struct TArray<struct FActiveGameplayEffectHandle> ActiveGameplayEffects; // 0xb60(0x10)
	enum class ECreativeVideoPlayerFullscreenEffects RequestedFullscreenEffects; // 0xb70(0x01)
	char pad_B71[0x7]; // 0xb71(0x07)
	struct UUserWidget* VideoPlayerWidget; // 0xb78(0x08)
	bool bActivatedFullscreen; // 0xb80(0x01)
	char pad_B81[0x7]; // 0xb81(0x07)

	void ServerLeaveFullscreenMode(); // Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ServerLeaveFullscreenMode // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x67535bc
	void ServerEnterFullscreenMode(); // Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ServerEnterFullscreenMode // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x67535a4
	void OnFullscreenUIEnds(); // Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.OnFullscreenUIEnds // (Final|Native|Private) // @ game+0x6753590
	void HandleEnterFullscreenActionReleased(); // Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.HandleEnterFullscreenActionReleased // (Final|Native|Private) // @ game+0x6753548
	void HandleEnterFullscreenActionPressed(); // Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.HandleEnterFullscreenActionPressed // (Final|Native|Private) // @ game+0x24841e4
	void ExitFullscreenState(); // Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ExitFullscreenState // (Final|Native|Public|BlueprintCallable) // @ game+0x675351c
	void EnterFullscreenStateWithOptions(struct FCreativeVideoPlayerFullscreenOptions Options); // Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.EnterFullscreenStateWithOptions // (Final|Native|Public|BlueprintCallable) // @ game+0x6753498
	void EnterFullscreenState(); // Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.EnterFullscreenState // (Final|Native|Public|BlueprintCallable) // @ game+0x675346c
	void ClientTransitionToFullscreenVideo(); // Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ClientTransitionToFullscreenVideo // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0x63cb748
	void ClientLeaveFullscreenVideo(); // Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ClientLeaveFullscreenVideo // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0x63cb730
};

// Class CreativeVideoPlayerRuntime.CreativeVideoPlayerFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UCreativeVideoPlayerFunctionLibrary : UBlueprintFunctionLibrary {

	void ShutdownFullscreenVideoMode(struct AController* Controller); // Function CreativeVideoPlayerRuntime.CreativeVideoPlayerFunctionLibrary.ShutdownFullscreenVideoMode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x67535d4
};

// Class CreativeVideoPlayerRuntime.CreativeVideoPlayerWorldSubsystem
// Size: 0x40 (Inherited: 0x30)
struct UCreativeVideoPlayerWorldSubsystem : UWorldSubsystem {
	struct FMulticastInlineDelegate OnNotifyFullscreenChange; // 0x30(0x10)
};

