// Class GameplayMessages.AsyncAction_RegisterGameplayMessageReceiver
// Size: 0x98 (Inherited: 0x30)
struct UAsyncAction_RegisterGameplayMessageReceiver : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnMessageReceived; // 0x30(0x10)
	struct FMulticastInlineDelegate HandleSavedState; // 0x40(0x10)
	struct FMulticastInlineDelegate HandleStateCleared; // 0x50(0x10)
	char pad_60[0x38]; // 0x60(0x38)

	void Unregister(); // Function GameplayMessages.AsyncAction_RegisterGameplayMessageReceiver.Unregister // (Final|Native|Public|BlueprintCallable) // @ game+0x26d2f98
	struct UAsyncAction_RegisterGameplayMessageReceiver* RegisterGameplayMessageReceiver(struct UObject* WorldContextObject, struct FEventMessageTag Channel, struct UScriptStruct* PayloadType, enum class EGameplayMessageMatchType MatchType, struct AActor* ActorContext); // Function GameplayMessages.AsyncAction_RegisterGameplayMessageReceiver.RegisterGameplayMessageReceiver // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x636ad68
	bool GetPayload(int32_t& OutPayload); // Function GameplayMessages.AsyncAction_RegisterGameplayMessageReceiver.GetPayload // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x636a940
};

// Class GameplayMessages.GameplayMessageReplicator
// Size: 0x288 (Inherited: 0x288)
struct AGameplayMessageReplicator : AActor {

	void Multicast_ServerMessageTriggered(struct FEventMessageTag Channel, struct FReplicatedMessage MessageData); // Function GameplayMessages.GameplayMessageReplicator.Multicast_ServerMessageTriggered // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x636ac6c
};

// Class GameplayMessages.GameplayMessageRouter
// Size: 0xd8 (Inherited: 0x30)
struct UGameplayMessageRouter : UGameInstanceSubsystem {
	char pad_30[0xa0]; // 0x30(0xa0)
	struct AGameplayMessageReplicator* MessageReplicator; // 0xd0(0x08)

	void K2_BroadcastMessage(struct FEventMessageTag Channel, int32_t& message, bool bSaveToChannel, struct AActor* ActorContext); // Function GameplayMessages.GameplayMessageRouter.K2_BroadcastMessage // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x636aaf0
	bool HasValidSavedMessage(struct FEventMessageTag Channel); // Function GameplayMessages.GameplayMessageRouter.HasValidSavedMessage // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x636aa64
	void ClearSavedMessage(struct FEventMessageTag Channel); // Function GameplayMessages.GameplayMessageRouter.ClearSavedMessage // (Final|Native|Public|BlueprintCallable) // @ game+0x636a838
};

// Class GameplayMessages.BlueprintEventMessageTagLibrary
// Size: 0x28 (Inherited: 0x28)
struct UBlueprintEventMessageTagLibrary : UBlueprintFunctionLibrary {

	struct FEventMessageTag GetEventMessageTagFromGameplayTag(struct FGameplayTag InTag); // Function GameplayMessages.BlueprintEventMessageTagLibrary.GetEventMessageTagFromGameplayTag // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x636a8b8
};

