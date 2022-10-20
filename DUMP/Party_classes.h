// Class Party.Chatroom
// Size: 0x58 (Inherited: 0x28)
struct UChatroom : UObject {
	struct FString CurrentChatRoomId; // 0x28(0x10)
	int32_t MaxChatRoomRetries; // 0x38(0x04)
	int32_t NumChatRoomRetries; // 0x3c(0x04)
	char pad_40[0x18]; // 0x40(0x18)
};

// Class Party.SocialManager
// Size: 0x1a8 (Inherited: 0x28)
struct USocialManager : UObject {
	char pad_28[0x28]; // 0x28(0x28)
	struct TArray<struct USocialToolkit*> SocialToolkits; // 0x50(0x10)
	struct USocialDebugTools* SocialDebugTools; // 0x60(0x08)
	char pad_68[0x140]; // 0x68(0x140)
};

// Class Party.SocialParty
// Size: 0x380 (Inherited: 0x28)
struct USocialParty : UObject {
	char pad_28[0x38]; // 0x28(0x38)
	struct APartyBeaconClient* ReservationBeaconClientClass; // 0x60(0x08)
	struct ASpectatorBeaconClient* SpectatorBeaconClientClass; // 0x68(0x08)
	char pad_70[0x10]; // 0x70(0x10)
	struct FUniqueNetIdRepl OwningLocalUserId; // 0x80(0x30)
	struct FUniqueNetIdRepl CurrentLeaderId; // 0xb0(0x30)
	struct TMap<struct FUniqueNetIdRepl, struct UPartyMember*> PartyMembersById; // 0xe0(0x50)
	bool bEnableAutomaticPartyRejoin; // 0x130(0x01)
	char pad_131[0x57]; // 0x131(0x57)
	double PlatformUserInviteCooldown; // 0x188(0x08)
	double PrimaryUserInviteCooldown; // 0x190(0x08)
	char pad_198[0x70]; // 0x198(0x70)
	struct TWeakObjectPtr<struct APartyBeaconClient> ReservationBeaconClient; // 0x208(0x08)
	char pad_210[0x8]; // 0x210(0x08)
	struct ASpectatorBeaconClient* SpectatorBeaconClient; // 0x218(0x08)
	char pad_220[0x28]; // 0x220(0x28)
	float JoinInProgressTimerRate; // 0x248(0x04)
	int32_t JoinInProgressRequestTimeout; // 0x24c(0x04)
	int32_t JoinInProgressResponseTimeout; // 0x250(0x04)
	char pad_254[0x12c]; // 0x254(0x12c)
};

// Class Party.PartyMember
// Size: 0x110 (Inherited: 0x28)
struct UPartyMember : UObject {
	char pad_28[0x48]; // 0x28(0x48)
	struct USocialUser* SocialUser; // 0x70(0x08)
	char pad_78[0x98]; // 0x78(0x98)
};

// Class Party.SocialToolkit
// Size: 0x2a8 (Inherited: 0x28)
struct USocialToolkit : UObject {
	char pad_28[0x40]; // 0x28(0x40)
	struct USocialUser* LocalUser; // 0x68(0x08)
	struct TArray<struct USocialUser*> AllUsers; // 0x70(0x10)
	char pad_80[0x50]; // 0x80(0x50)
	struct TWeakObjectPtr<struct ULocalPlayer> LocalPlayerOwner; // 0xd0(0x08)
	struct USocialChatManager* SocialChatManager; // 0xd8(0x08)
	char pad_E0[0x1c8]; // 0xe0(0x1c8)
};

// Class Party.SocialChatManager
// Size: 0x220 (Inherited: 0x28)
struct USocialChatManager : UObject {
	char pad_28[0x50]; // 0x28(0x50)
	struct TMap<struct TWeakObjectPtr<struct USocialUser>, struct USocialPrivateMessageChannel*> DirectChannelsByTargetUser; // 0x78(0x50)
	struct TMap<struct FString, struct USocialChatRoom*> ChatRoomsById; // 0xc8(0x50)
	struct TMap<struct FString, struct USocialReadOnlyChatChannel*> ReadOnlyChannelsByDisplayName; // 0x118(0x50)
	bool bEnableChatSlashCommands; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct TMap<struct FUniqueNetIdRepl, struct USocialGroupChannel*> GroupChannels; // 0x170(0x50)
	char pad_1C0[0x60]; // 0x1c0(0x60)
};

// Class Party.SocialChatChannel
// Size: 0xe8 (Inherited: 0x28)
struct USocialChatChannel : UObject {
	char pad_28[0xc0]; // 0x28(0xc0)
};

// Class Party.SocialChatRoom
// Size: 0xf8 (Inherited: 0xe8)
struct USocialChatRoom : USocialChatChannel {
	char pad_E8[0x10]; // 0xe8(0x10)
};

// Class Party.SocialDebugTools
// Size: 0x88 (Inherited: 0x28)
struct USocialDebugTools : UObject {
	char pad_28[0x60]; // 0x28(0x60)
};

// Class Party.SocialGroupChannel
// Size: 0x98 (Inherited: 0x28)
struct USocialGroupChannel : UObject {
	struct USocialUser* SocialUser; // 0x28(0x08)
	struct FUniqueNetIdRepl GroupId; // 0x30(0x30)
	struct FText DisplayName; // 0x60(0x18)
	struct TArray<struct USocialUser*> Members; // 0x78(0x10)
	char pad_88[0x10]; // 0x88(0x10)
};

// Class Party.SocialPartyChatRoom
// Size: 0xf8 (Inherited: 0xf8)
struct USocialPartyChatRoom : USocialChatRoom {
};

// Class Party.SocialPrivateMessageChannel
// Size: 0xf0 (Inherited: 0xe8)
struct USocialPrivateMessageChannel : USocialChatChannel {
	struct USocialUser* TargetUser; // 0xe8(0x08)
};

// Class Party.SocialReadOnlyChatChannel
// Size: 0xe8 (Inherited: 0xe8)
struct USocialReadOnlyChatChannel : USocialChatChannel {
};

// Class Party.SocialSettings
// Size: 0x60 (Inherited: 0x28)
struct USocialSettings : UObject {
	struct TArray<struct FName> OssNamesWithEnvironmentIdPrefix; // 0x28(0x10)
	int32_t DefaultMaxPartySize; // 0x38(0x04)
	bool bPreferPlatformInvites; // 0x3c(0x01)
	bool bMustSendPrimaryInvites; // 0x3d(0x01)
	bool bLeavePartyOnDisconnect; // 0x3e(0x01)
	bool bSetDesiredPrivacyOnLocalPlayerBecomesLeader; // 0x3f(0x01)
	float UserListAutoUpdateRate; // 0x40(0x04)
	int32_t MinNicknameLength; // 0x44(0x04)
	int32_t MaxNicknameLength; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct FSocialPlatformDescription> SocialPlatformDescriptions; // 0x50(0x10)
};

// Class Party.SocialUser
// Size: 0x1c0 (Inherited: 0x28)
struct USocialUser : UObject {
	char pad_28[0x198]; // 0x28(0x198)
};

