// Class FortniteConversationRuntime.FortConversationMarkerInterface
// Size: 0x28 (Inherited: 0x28)
struct UFortConversationMarkerInterface : UInterface {
};

// Class FortniteConversationRuntime.FortConversationParticipantComponent
// Size: 0x1a0 (Inherited: 0x1a0)
struct UFortConversationParticipantComponent : UConversationParticipantComponent {
};

// Class FortniteConversationRuntime.FortConversationContextCondition
// Size: 0x28 (Inherited: 0x28)
struct UFortConversationContextCondition : UObject {

	bool DoesContextPass(struct FConversationContext& Context); // Function FortniteConversationRuntime.FortConversationContextCondition.DoesContextPass // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x64d2020
};

// Class FortniteConversationRuntime.FortConversationContextCondition_ParticipantHasCID
// Size: 0x40 (Inherited: 0x28)
struct UFortConversationContextCondition_ParticipantHasCID : UFortConversationContextCondition {
	struct FGameplayTag ParticipantID; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FSoftObjectPath> AllowedCIDs; // 0x30(0x10)
};

// Class FortniteConversationRuntime.FortConversationContextCondition_ParticipantHasMetaTag
// Size: 0x30 (Inherited: 0x28)
struct UFortConversationContextCondition_ParticipantHasMetaTag : UFortConversationContextCondition {
	struct FGameplayTag ParticipantID; // 0x28(0x04)
	struct FGameplayTag MetaTag; // 0x2c(0x04)
};

// Class FortniteConversationRuntime.FortConversationContextCondition_ParticipantHasOwnedTag
// Size: 0x30 (Inherited: 0x28)
struct UFortConversationContextCondition_ParticipantHasOwnedTag : UFortConversationContextCondition {
	struct FGameplayTag ParticipantID; // 0x28(0x04)
	struct FGameplayTag OwnedTag; // 0x2c(0x04)
};

// Class FortniteConversationRuntime.FortConversationContextCondition_ParticipantControllerMeetsRequirement
// Size: 0x38 (Inherited: 0x28)
struct UFortConversationContextCondition_ParticipantControllerMeetsRequirement : UFortConversationContextCondition {
	struct FGameplayTag ParticipantID; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UFortControllerRequirement* Requirement; // 0x30(0x08)
};

// Class FortniteConversationRuntime.FortConversationContextConditionHelpers
// Size: 0x28 (Inherited: 0x28)
struct UFortConversationContextConditionHelpers : UBlueprintFunctionLibrary {

	bool GetMessageForContext(struct FFortConversationNodeConditionalMessages& Messages, struct FConversationContext& Context, struct FText& OutText); // Function FortniteConversationRuntime.FortConversationContextConditionHelpers.GetMessageForContext // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x64d23b8
};

// Class FortniteConversationRuntime.FortConversationParamLibrary
// Size: 0x28 (Inherited: 0x28)
struct UFortConversationParamLibrary : UBlueprintFunctionLibrary {

	bool ExtractConversationParameterValue(struct TArray<struct FConversationNodeParameterPair>& ConversationParameters, struct FString DesiredParameterName, struct FString& ParameterValueOut); // Function FortniteConversationRuntime.FortConversationParamLibrary.ExtractConversationParameterValue // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x64d20e4
};

// Class FortniteConversationRuntime.FortPlayerConversationComponent
// Size: 0x400 (Inherited: 0x1a0)
struct UFortPlayerConversationComponent : UFortConversationParticipantComponent {
	char pad_1A0[0x8]; // 0x1a0(0x08)
	struct TArray<struct UFortNonPlayerConversationParticipantComponent*> ConversationParticipantsInRange; // 0x1a8(0x10)
	struct TSoftClassPtr<UObject> DialogWidgetSoftClass; // 0x1b8(0x28)
	struct TSoftClassPtr<UObject> DialogMarkerSoftClass; // 0x1e0(0x28)
	struct TSoftClassPtr<UObject> MobileDialogWidgetSoftClass; // 0x208(0x28)
	struct TArray<struct UDynamicUIScene*> ConversationScenes; // 0x230(0x10)
	struct TArray<struct UDynamicUIScene*> MobileConversationScenes; // 0x240(0x10)
	struct UUserWidget* DialogWidgetClass; // 0x250(0x08)
	struct UUserWidget* DialogMarkerClass; // 0x258(0x08)
	float GreetSphereRadius; // 0x260(0x04)
	float IconVisibilityRadius; // 0x264(0x04)
	float AbortConversationRange; // 0x268(0x04)
	char pad_26C[0x3c]; // 0x26c(0x3c)
	struct FUserWidgetPool DialogWidgetPool; // 0x2a8(0x88)
	struct TMap<struct UFortNonPlayerConversationParticipantComponent*, struct UUserWidget*> ComponentToIndicator; // 0x330(0x50)
	char pad_380[0x8]; // 0x380(0x08)
	bool bMoveShouldAbortConversation; // 0x388(0x01)
	char pad_389[0x77]; // 0x389(0x77)

	void RequestServerAbortConversation(); // Function FortniteConversationRuntime.FortPlayerConversationComponent.RequestServerAbortConversation // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x1906db4
	void HandleWaponEquipped(struct AFortWeapon* NewWeapon, struct AFortWeapon* PrevWeapon); // Function FortniteConversationRuntime.FortPlayerConversationComponent.HandleWaponEquipped // (Final|Native|Private) // @ game+0x64c99dc
	void HandleViewTargetChanged(); // Function FortniteConversationRuntime.FortPlayerConversationComponent.HandleViewTargetChanged // (Final|Native|Private) // @ game+0x64d26d4
	void HandleFollowedPlayerChanged(struct AFortPlayerControllerSpectating* SpectatingPC, struct AFortPlayerState* FollowedPlayerState); // Function FortniteConversationRuntime.FortPlayerConversationComponent.HandleFollowedPlayerChanged // (Final|Native|Private) // @ game+0x64d2610
	void HandleDBNOChanged(struct AFortPawn* Pawn, bool bIsDBNO); // Function FortniteConversationRuntime.FortPlayerConversationComponent.HandleDBNOChanged // (Final|Native|Private) // @ game+0x64d256c
	void ClientSpectatorOpenUI(); // Function FortniteConversationRuntime.FortPlayerConversationComponent.ClientSpectatorOpenUI // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x64d2008
	void ClientSpectatorCloseUI(); // Function FortniteConversationRuntime.FortPlayerConversationComponent.ClientSpectatorCloseUI // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x64d1ff0
	void ClientReceiveConversationGiftUINotification(struct FGiftUINotificationInfo ConversationGiftUINotification); // Function FortniteConversationRuntime.FortPlayerConversationComponent.ClientReceiveConversationGiftUINotification // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x64d1f40
};

