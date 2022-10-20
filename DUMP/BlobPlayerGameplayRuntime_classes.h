// Class BlobPlayerGameplayRuntime.BlobGameplayAbility_Keybind
// Size: 0xb40 (Inherited: 0xb20)
struct UBlobGameplayAbility_Keybind : UFortGameplayAbility {
	struct TArray<struct FActionDisplayTextInfo> ActionDisplays; // 0xb20(0x10)
	struct UFortInputComponent* KeybindInputComponent; // 0xb30(0x08)
	bool bIsDisplayActive; // 0xb38(0x01)
	char pad_B39[0x7]; // 0xb39(0x07)

	void SetActionDisplayActive(bool bWillDisplayActive); // Function BlobPlayerGameplayRuntime.BlobGameplayAbility_Keybind.SetActionDisplayActive // (Final|Native|Public|BlueprintCallable) // @ game+0x653f664
};

// Class BlobPlayerGameplayRuntime.FortBlobPlayerBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UFortBlobPlayerBlueprintLibrary : UBlueprintFunctionLibrary {

	void CheckForResumeTeleport(struct AFortPlayerPawn* TargetPawn, bool& bForceCrouch, float UnburrowLaunchXYSpeed, float UnburrowLaunchZSpeed, float ExitHorizontalOffset, float ExitUpVerticalOffset, float ExitDownVerticalOffset); // Function BlobPlayerGameplayRuntime.FortBlobPlayerBlueprintLibrary.CheckForResumeTeleport // (Final|BlueprintAuthorityOnly|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x653f44c
	void BlobLog(struct UObject* WorldContextObject, struct FString InString, bool bLogInShipping); // Function BlobPlayerGameplayRuntime.FortBlobPlayerBlueprintLibrary.BlobLog // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x2807260
};

// Class BlobPlayerGameplayRuntime.FortBlobPlayerMovmentControls
// Size: 0xb8 (Inherited: 0x30)
struct UFortBlobPlayerMovmentControls : UFortMovementControls {
	struct FScalableFloat LandSpeedModifier; // 0x30(0x28)
	struct FScalableFloat SwimSpeed; // 0x58(0x28)
	struct FScalableFloat SwimImmersionDepth; // 0x80(0x28)
	char pad_A8[0x10]; // 0xa8(0x10)
};

// Class BlobPlayerGameplayRuntime.FortPawnComponent_BlobPlayer
// Size: 0xd0 (Inherited: 0xa0)
struct UFortPawnComponent_BlobPlayer : UFortPawnComponent {
	struct FFortPawnSkeltalMeshSettings MeshSetting; // 0xa0(0x28)
	bool bShouldReapplyMeshSetting; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)

	void RecoverFromSpecialMeshSetting(); // Function BlobPlayerGameplayRuntime.FortPawnComponent_BlobPlayer.RecoverFromSpecialMeshSetting // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x24841e4
	void OnRep_MeshSetting(); // Function BlobPlayerGameplayRuntime.FortPawnComponent_BlobPlayer.OnRep_MeshSetting // (Final|Native|Protected) // @ game+0x2426858
	void HandleFinishedCharacterCustomization(struct AFortPlayerPawn* Pawn); // Function BlobPlayerGameplayRuntime.FortPawnComponent_BlobPlayer.HandleFinishedCharacterCustomization // (Final|Native|Protected) // @ game+0x24268d8
	void ApplySpecialMeshSetting(struct UAnimInstance* BlobAnimInstance, struct USkeletalMesh* BlobSkeletalMesh, struct TArray<struct UMaterialInterface*>& BlobMeshMaterials); // Function BlobPlayerGameplayRuntime.FortPawnComponent_BlobPlayer.ApplySpecialMeshSetting // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x653f34c
};

