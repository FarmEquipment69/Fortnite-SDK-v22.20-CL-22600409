// Enum Account.EExternalAccountType
enum class EExternalAccountType : uint8 {
	None = 0,
	Facebook = 1,
	Google = 2,
	Epic_PSN = 3,
	Epic_XBL = 4,
	Epic_Erebus = 5,
	Epic_Facebook = 6,
	Epic_Google = 7,
	Epic_Portal = 8,
	Epic_Portal_Kairos = 9,
	EExternalAccountType_MAX = 10
};

// Enum Account.EConsoleAuthLinkState
enum class EConsoleAuthLinkState : uint8 {
	NotOnConsole = 0,
	ConsoleNotLoggedIn = 1,
	EpicNotLoggedIn = 2,
	ThisEpicAccountLinked = 3,
	OtherEpicAccountLinked = 4,
	NoEpicAccountLinked = 5,
	PrimaryIdNotLinked = 6,
	SecondaryIdNotLinked = 7,
	EConsoleAuthLinkState_MAX = 8
};

// Enum Account.ELoginResult
enum class ELoginResult : uint8 {
	NotStarted = 0,
	Pending = 1,
	Success = 2,
	Console_LoginFailed = 3,
	Console_AuthFailed = 4,
	Console_MissingAuthAssociation = 5,
	Console_DuplicateAuthAssociation = 6,
	Console_AddedAuthAssociation = 7,
	Console_AuthAssociationFailure = 8,
	Console_NotEntitled = 9,
	Console_EntitlementCheckFailed = 10,
	Console_PrivilegeCheck = 11,
	Console_PatchOrUpdateRequired = 12,
	AuthFailed = 13,
	AuthFailed_RefreshInvalid = 14,
	AuthFailed_InvalidMFA = 15,
	AuthFailed_RequiresMFA = 16,
	AuthFailed_AgeVerificationIncomplete = 17,
	AuthFailed_LoginLockout = 18,
	AuthFailed_InvalidCredentials = 19,
	AuthParentalLock = 20,
	PlatformNotAllowed = 21,
	NotEntitled = 22,
	Banned = 23,
	EULACheckFailed = 24,
	WaitingRoomFailed = 25,
	ServiceUnavailable = 26,
	GenericError = 27,
	RegisterSecondaryPlayerInPrimaryPartyFailed = 28,
	RejoinCheckFailure = 29,
	ConnectionFailed = 30,
	NetworkConnectionUnavailable = 31,
	AlreadyLoggingIn = 32,
	ExternalAuth_AddedAuthAssociation = 33,
	ExternalAuth_ConnectionTimeout = 34,
	ExternalAuth_AuthFailure = 35,
	ExternalAuth_AssociationFailure = 36,
	ExternalAuth_MissingAuthAssociation = 37,
	ExternalAuth_Canceled = 38,
	FailedToCreateParty = 39,
	ProfileQueryFailed = 40,
	QueryKeychainFailed = 41,
	ClientSettingsDownloadFailed = 42,
	SupervisedSettingsDownloadFailed = 43,
	PinGrantFailure = 44,
	PinGrantTimeout = 45,
	PinGrantCanceled = 46,
	LoginStepTimeout = 47,
	ELoginResult_MAX = 48
};

// Enum Account.ECreateAccountResult
enum class ECreateAccountResult : uint8 {
	NotStarted = 0,
	Pending = 1,
	Success = 2,
	Console_LoginFailed = 3,
	Console_DuplicateAuthAssociation = 4,
	DuplicateAccount = 5,
	GenericError = 6,
	ECreateAccountResult_MAX = 7
};

// ScriptStruct Account.ExternalAccountServiceConfig
// Size: 0x08 (Inherited: 0x00)
struct FExternalAccountServiceConfig {
	enum class EExternalAccountType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName ExternalServiceName; // 0x04(0x04)
};

// ScriptStruct Account.WebEnvUrl
// Size: 0x30 (Inherited: 0x00)
struct FWebEnvUrl {
	struct FString URL; // 0x00(0x10)
	struct FString RedirectUrl; // 0x10(0x10)
	struct FString Environment; // 0x20(0x10)
};

// ScriptStruct Account.ExchangeAccessParams
// Size: 0x40 (Inherited: 0x00)
struct FExchangeAccessParams {
	struct FString EntitlementId; // 0x00(0x10)
	struct FString ReceiptId; // 0x10(0x10)
	struct FString VendorReceipt; // 0x20(0x10)
	struct FString AppStore; // 0x30(0x10)
};

// ScriptStruct Account.GiftMessage
// Size: 0x30 (Inherited: 0x00)
struct FGiftMessage {
	struct FString GiftCode; // 0x00(0x10)
	struct FString SenderName; // 0x10(0x10)
	char pad_20[0x10]; // 0x20(0x10)
};

// ScriptStruct Account.OnlineAccountTexts_FailedLoginConsole
// Size: 0x138 (Inherited: 0x00)
struct FOnlineAccountTexts_FailedLoginConsole {
	struct FText AgeRestriction; // 0x00(0x18)
	struct FText Generic; // 0x18(0x18)
	struct FText MissingAuthAssociation; // 0x30(0x18)
	struct FText NeedPremiumAccount; // 0x48(0x18)
	struct FText OnlinePlayRestriction; // 0x60(0x18)
	struct FText PatchAvailable; // 0x78(0x18)
	struct FText PleaseSignIn; // 0x90(0x18)
	struct FText SystemUpdateAvailable; // 0xa8(0x18)
	struct FText UI; // 0xc0(0x18)
	struct FText UnableToComplete; // 0xd8(0x18)
	struct FText UnableToSignIn; // 0xf0(0x18)
	struct FText UnableToStartPrivCheck; // 0x108(0x18)
	struct FText UnexpectedError; // 0x120(0x18)
};

// ScriptStruct Account.OnlineAccountTexts
// Size: 0x9d8 (Inherited: 0x00)
struct FOnlineAccountTexts {
	struct FText AllGiftCodesUsed; // 0x00(0x18)
	struct FText AssociateConsoleAuth; // 0x18(0x18)
	struct FText AutoLoginFailed; // 0x30(0x18)
	struct FText AutoLoginFailedMobile; // 0x48(0x18)
	struct FText BannedFromGame; // 0x60(0x18)
	struct FText CheckEntitledToPlay; // 0x78(0x18)
	struct FText CheckingRejoin; // 0x90(0x18)
	struct FText CheckServiceAvailability; // 0xa8(0x18)
	struct FText ConsolePrivileges; // 0xc0(0x18)
	struct FText CreateAccountCompleted; // 0xd8(0x18)
	struct FText CreateAccountFailure; // 0xf0(0x18)
	struct FText CreateHeadless; // 0x108(0x18)
	struct FText DoQosPingTests; // 0x120(0x18)
	struct FText DowntimeMinutesWarningText; // 0x138(0x18)
	struct FText DowntimeSecondsWarningText; // 0x150(0x18)
	struct FText DuplicateAuthAssociaton; // 0x168(0x18)
	struct FText EulaCheck; // 0x180(0x18)
	struct FText ExchangeConsoleGiftsForAccess; // 0x198(0x18)
	struct FText ExchangeConsolePurchaseForAccess; // 0x1b0(0x18)
	struct FText FailedAccountCreate; // 0x1c8(0x18)
	struct FText FailedEulaCheck_EulaAcceptanceFailed; // 0x1e0(0x18)
	struct FText FailedEulaCheck_MustAcceptEula; // 0x1f8(0x18)
	struct FText FailedLoginCredentialsMsg; // 0x210(0x18)
	struct FText FailedLoginAgeVerificationIncomplete; // 0x228(0x18)
	struct FText FailedLoginParentalLock; // 0x240(0x18)
	struct FText FailedLoginNoRealId; // 0x258(0x18)
	struct FText FailedLoginLockoutMsg; // 0x270(0x18)
	struct FText FailedLoginRequiresMFA; // 0x288(0x18)
	struct FText FailedLoginRequiresAuthAppMFA; // 0x2a0(0x18)
	struct FText FailedInvalidMFA; // 0x2b8(0x18)
	struct FText FailedLoginMsg; // 0x2d0(0x18)
	struct FText FailedLoginMsg_InvalidRefreshToken; // 0x2e8(0x18)
	struct FText FailedLoginTencent_UnableToSignIn; // 0x300(0x18)
	struct FText FailedLoginTencent_NotSignedInToWeGame; // 0x318(0x18)
	struct FText FailedLoginTencent_FailedToInitializeWeGame; // 0x330(0x18)
	struct FText FailedLoginTencent_WeGameSystemOffline; // 0x348(0x18)
	struct FText Tencent_ExitByAntiAddiction; // 0x360(0x18)
	struct FText FailedStartLogin; // 0x378(0x18)
	struct FText FounderChatExitedText; // 0x390(0x18)
	struct FText FounderChatJoinedText; // 0x3a8(0x18)
	struct FText GameDisplayName; // 0x3c0(0x18)
	struct FText GeneralLoginFailure; // 0x3d8(0x18)
	struct FText GlobalChatExitedText; // 0x3f0(0x18)
	struct FText GlobalChatJoinedText; // 0x408(0x18)
	struct FText HeadlessAccountFailed; // 0x420(0x18)
	struct FText InMatchShutdownTimeWarningText; // 0x438(0x18)
	struct FText InvalidUser; // 0x450(0x18)
	struct FText LoggedOutofMCP; // 0x468(0x18)
	struct FText DisconnectedFromMCP; // 0x480(0x18)
	struct FText LoggedOutReturnedToTitle; // 0x498(0x18)
	struct FText LoggedOutSwitchedProfile; // 0x4b0(0x18)
	struct FText LoggingIn; // 0x4c8(0x18)
	struct FText LoggingInConsoleAuth; // 0x4e0(0x18)
	struct FText LoggingOut; // 0x4f8(0x18)
	struct FText LoginConsole; // 0x510(0x18)
	struct FText LoginFailure; // 0x528(0x18)
	struct FText Logout_Unlink; // 0x540(0x18)
	struct FText LogoutCompleted; // 0x558(0x18)
	struct FText LostConnection; // 0x570(0x18)
	struct FText LoginStepTimeout; // 0x588(0x18)
	struct FText MCPTimeout; // 0x5a0(0x18)
	struct FText LightswitchCheckNetworkFailureMsg; // 0x5b8(0x18)
	struct FText NetworkConnectionUnavailable; // 0x5d0(0x18)
	struct FText NoPlayEntitlement; // 0x5e8(0x18)
	struct FText NoServerAccess; // 0x600(0x18)
	struct FText PlayAccessRevoked; // 0x618(0x18)
	struct FText PremiumAccountName_Default; // 0x630(0x18)
	struct FText PremiumAccountName_Sony; // 0x648(0x18)
	struct FText PremiumAccountName_Switch; // 0x660(0x18)
	struct FText PremiumAccountName_XboxOne; // 0x678(0x18)
	struct FText RedeemOfflinePurchases; // 0x690(0x18)
	struct FText ServiceDowntime; // 0x6a8(0x18)
	struct FText SignInCompleting; // 0x6c0(0x18)
	struct FText SignIntoConsoleServices; // 0x6d8(0x18)
	struct FText TokenExpired; // 0x6f0(0x18)
	struct FText UnableToConnect; // 0x708(0x18)
	struct FText UnableToJoinWaitingRoomLoginQueue; // 0x720(0x18)
	struct FText UnexpectedConsoleAuthFailure; // 0x738(0x18)
	struct FText UnlinkConsoleFailed; // 0x750(0x18)
	struct FText UserLoginFailed; // 0x768(0x18)
	struct FText WaitingRoom; // 0x780(0x18)
	struct FText WaitingRoomError; // 0x798(0x18)
	struct FText WaitingRoomFailure; // 0x7b0(0x18)
	struct FText WaitingRoomWaiting; // 0x7c8(0x18)
	struct FOnlineAccountTexts_FailedLoginConsole FailedLoginConsole; // 0x7e0(0x138)
	struct FText LoggingInExternalAuth; // 0x918(0x18)
	struct FText CreateDeviceAuth; // 0x930(0x18)
	struct FText ExtAuthCanceled; // 0x948(0x18)
	struct FText ExtAuthFailure; // 0x960(0x18)
	struct FText ExtAuthAssociationFailure; // 0x978(0x18)
	struct FText ExtAuthTimeout; // 0x990(0x18)
	struct FText ExtAuthMissingAuthAssociation; // 0x9a8(0x18)
	struct FText UnableToQueryReceipts; // 0x9c0(0x18)
};

