// Class SpookyEventGameplayRuntime.SpookyEventEmotePad
// Size: 0xef8 (Inherited: 0xdc8)
struct ASpookyEventEmotePad : ABuildingSMActor {
	char pad_DC8[0x8]; // 0xdc8(0x08)
	char bCanBeMarked : 1; // 0xdd0(0x01)
	char bBlockMarking : 1; // 0xdd0(0x01)
	char pad_DD0_2 : 6; // 0xdd0(0x01)
	char pad_DD1[0x7]; // 0xdd1(0x07)
	struct FMarkedActorDisplayInfo MarkerDisplay; // 0xdd8(0x98)
	struct FVector MarkerPositionOffset; // 0xe70(0x18)
	bool bUseEmoteCategory; // 0xe88(0x01)
	char pad_E89[0x7]; // 0xe89(0x07)
	struct FExternalEmoteCategory EmoteCategoryToGrant; // 0xe90(0x50)
	struct TArray<struct FEmoteActionBinding> UncategorizedEmotesToGrant; // 0xee0(0x10)
	bool bAllowGrantingUnownedEmotes; // 0xef0(0x01)
	char pad_EF1[0x7]; // 0xef1(0x07)

	void RevokeEmotes(struct AFortPlayerController* PlayerController); // Function SpookyEventGameplayRuntime.SpookyEventEmotePad.RevokeEmotes // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x64a2a4c
	void GrantEmotes(struct AFortPlayerController* PlayerController); // Function SpookyEventGameplayRuntime.SpookyEventEmotePad.GrantEmotes // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // @ game+0x64a2a4c
	enum class EMarkableResult CanBeMarkedBy(struct AFortPlayerController* InMarker); // Function SpookyEventGameplayRuntime.SpookyEventEmotePad.CanBeMarkedBy // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x6a4cd70
};

