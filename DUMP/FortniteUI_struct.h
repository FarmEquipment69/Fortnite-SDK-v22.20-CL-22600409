// Enum FortniteUI.EFortUIFeature
enum class EFortUIFeature : uint8 {
	ShowHome = 0,
	ShowPlay = 1,
	ShowCommand = 2,
	ShowHeros = 3,
	ShowSquads = 4,
	ShowArmory = 5,
	ShowLocker = 6,
	ShowSkillTree = 7,
	ShowStore = 8,
	ShowQuests = 9,
	ShowMainStore = 10,
	ShowContextHelpMenu = 11,
	ShowCampaign = 12,
	ShowActiveBoost = 13,
	ShowJournal = 14,
	ShowPartyBar = 15,
	ShowChatWindow = 16,
	ShowFriendsMenu = 17,
	ShowObjectives = 18,
	ShowRatingIconsInTopbar = 19,
	ShowAntiAddictionMessage = 20,
	ShowMinorShutdownMessage = 21,
	ShowHealthWarningScreen = 22,
	ShowSimplifiedHUD = 23,
	LargeHeaderFooterButtons = 24,
	ShowAthenaFavoriting = 25,
	ShowAthenaItemRandomization = 26,
	ShowBattlePass = 27,
	ShowNewBattlePass = 28,
	ShowDynamicBattlePass = 29,
	ShowBattlePassFAQ = 30,
	ShowReplays = 31,
	ShowProfileStatsUI = 32,
	ShowAthenaItemShop = 33,
	ShowNewAthenaItemShop = 34,
	ShowAthenaCataba = 35,
	ShowShowdown = 36,
	ShowSpecialEvent = 37,
	ShowSpatialUI = 38,
	ShowSocial = 39,
	ShowAccountBoosts = 40,
	ShowCustomerSupport = 41,
	ShowGlobalChat = 42,
	ShowEULA = 43,
	ShowEndOfZoneCinematic = 44,
	ShowOnboardingCinematics = 45,
	ShowFounderBannerIcons = 46,
	ShowCurrentRegionInLobby = 47,
	ShowPrerollLlamas = 48,
	EnableFoundersDailyRewards = 49,
	EnableTwitchIntegration = 50,
	EnableMatchmakingRegionSetting = 51,
	EnableLanguageSetting = 52,
	EnableFriendCodeSetting = 53,
	EnableEarlyAccessLoadingScreenBanner = 54,
	EnableAlterationModifications = 55,
	EnableSchematicRarityUpgrade = 56,
	EnableMissionActivationVote = 57,
	EnableLtmRetrieveTheData = 58,
	EnableUpgradesVideos = 59,
	ShowPreviewTestTab = 60,
	Max_None = 61,
	EFortUIFeature_MAX = 62
};

// Enum FortniteUI.EFortFrontEndFeatureStateReason
enum class EFortFrontEndFeatureStateReason : uint8 {
	Default = 0,
	NoHeroes = 1,
	Tutorial = 2,
	BROnly = 3,
	NoPlayerController = 4,
	UnexpectedFeature = 5,
	Invalid = 6,
	EFortFrontEndFeatureStateReason_MAX = 7
};

// Enum FortniteUI.EFortFrontEndFeatureState
enum class EFortFrontEndFeatureState : uint8 {
	Enabled = 0,
	Disabled = 1,
	Hidden = 2,
	Invalid = 3,
	EFortFrontEndFeatureState_MAX = 4
};

// Enum FortniteUI.EFortFrontEndFeature
enum class EFortFrontEndFeature : uint8 {
	ShowHomeBase = 0,
	ShowHeroList = 1,
	ShowVault = 2,
	ShowStore = 3,
	PlayZone = 4,
	ShowDailyRewards = 5,
	ShowHeroSelect = 6,
	RecruitHero = 7,
	ShowHomeBaseOverview = 8,
	STWArmory_Transform = 9,
	STWArmory_CollectionBook = 10,
	MAX_None = 11,
	EFortFrontEndFeature_MAX = 12
};

// Enum FortniteUI.EFortItemCooldownType
enum class EFortItemCooldownType : uint8 {
	None = 0,
	AmmoRegeneration = 1,
	ItemActivation = 2,
	WeaponReloading = 3,
	Death = 4,
	AthenaWeaponFireCooldown = 5,
	AbilitySetActivateByInputAbility = 6,
	EFortItemCooldownType_MAX = 7
};

// Enum FortniteUI.EFortBuildingInteraction
enum class EFortBuildingInteraction : uint8 {
	None = 0,
	Build = 1,
	Repair = 2,
	Upgrade = 3,
	Edit = 4,
	BeingModified = 5,
	ConfirmEdit = 6,
	Creative = 7,
	EFortBuildingInteraction_MAX = 8
};

// Enum FortniteUI.EFortBuildingHealthDisplayRule
enum class EFortBuildingHealthDisplayRule : uint8 {
	Never = 0,
	Allowed = 1,
	Always = 2,
	EFortBuildingHealthDisplayRule_MAX = 3
};

// Enum FortniteUI.EFortHitPointModificationReason
enum class EFortHitPointModificationReason : uint8 {
	Invalid = 0,
	InitalSet = 1,
	AutoRegen = 2,
	ItemRegen = 3,
	DamageOverTime = 4,
	DamageReceived = 5,
	EFortHitPointModificationReason_MAX = 6
};

// Enum FortniteUI.EFortStoreState
enum class EFortStoreState : uint8 {
	Error = 0,
	Closed = 1,
	CardPackStore = 2,
	CurrencyStore = 3,
	WebPayment = 4,
	PurchaseOpen = 5,
	PackOpen = 6,
	CardEnter = 7,
	CardBackReveal = 8,
	CardFlip = 9,
	CardFrontReveal = 10,
	CardExit = 11,
	SummaryAdd = 12,
	PackDestroy = 13,
	Summary = 14,
	PresentChoice = 15,
	ChoiceMade = 16,
	SummaryAddTransition = 17,
	MAX_None = 18,
	EFortStoreState_MAX = 19
};

// Enum FortniteUI.EFortUIFeatureStateReason
enum class EFortUIFeatureStateReason : uint8 {
	Default = 0,
	Tutorial = 1,
	ContentInstall = 2,
	AccountRestrictions = 3,
	Platform = 4,
	SeasonOrEventNotActive = 5,
	NoPlayerController = 6,
	UnexpectedFeature = 7,
	Invalid = 8,
	EFortUIFeatureStateReason_MAX = 9
};

// Enum FortniteUI.EFortUIFeatureState
enum class EFortUIFeatureState : uint8 {
	Enabled = 0,
	Disabled = 1,
	Hidden = 2,
	Invalid = 3,
	EFortUIFeatureState_MAX = 4
};

// Enum FortniteUI.EChallengeListEntryType
enum class EChallengeListEntryType : uint8 {
	GoalCard = 0,
	Header = 1,
	Normal = 2,
	Replace = 3,
	PartyUp = 4,
	LockedQuest = 5,
	AllQuestsComplete = 6,
	CustomMessage = 7,
	EChallengeListEntryType_MAX = 8
};

// Enum FortniteUI.EPostGameHUDMode
enum class EPostGameHUDMode : uint8 {
	None = 0,
	AllHidden = 1,
	Spectating = 2,
	AllHiddenExceptXP = 3,
	EPostGameHUDMode_MAX = 4
};

// Enum FortniteUI.EPostGameClickCatcherMode
enum class EPostGameClickCatcherMode : uint8 {
	Catch_None = 0,
	Catch_MobileOnly = 1,
	Catch_MouseOnly = 2,
	Catch_All = 3,
	Catch_MAX = 4
};

// Enum FortniteUI.EInputPriority
enum class EInputPriority : uint8 {
	Normal = 0,
	Menu = 1,
	Chat = 2,
	Modal = 3,
	Confirmation = 4,
	Error = 5,
	HUD = 6,
	EInputPriority_MAX = 7
};

// Enum FortniteUI.EFlagStatus
enum class EFlagStatus : uint8 {
	FlagPresent = 0,
	FlagNotPresent = 1,
	EFlagStatus_MAX = 2
};

// Enum FortniteUI.EFortInputMode
enum class EFortInputMode : uint8 {
	Frontend = 0,
	InGame = 1,
	InGameCursor = 2,
	EFortInputMode_MAX = 3
};

// Enum FortniteUI.EFortUrlType
enum class EFortUrlType : uint8 {
	NormalWebLink = 0,
	AccountCreationLink = 1,
	HelpLink = 2,
	EULALink = 3,
	EFortUrlType_MAX = 4
};

// Enum FortniteUI.EGridSortKind
enum class EGridSortKind : uint8 {
	None = 0,
	ByNumber = 1,
	ByString = 2,
	ByNumberThenString = 3,
	ByStringThenNumber = 4,
	EGridSortKind_MAX = 5
};

// Enum FortniteUI.EFortItemCardSize
enum class EFortItemCardSize : uint8 {
	XXS = 0,
	XS = 1,
	Wide_S = 2,
	S = 3,
	M = 4,
	L = 5,
	XL = 6,
	XXL = 7,
	EFortItemCardSize_MAX = 8
};

// Enum FortniteUI.EFortPlayerPowerRatingType
enum class EFortPlayerPowerRatingType : uint8 {
	Auto = 0,
	Campaign = 1,
	Phoenix = 2,
	Max_None = 3,
	EFortPlayerPowerRatingType_MAX = 4
};

// Enum FortniteUI.EFortUISpecialEvents
enum class EFortUISpecialEvents : uint8 {
	NoEvent = 0,
	FritTemp = 1,
	EFortUISpecialEvents_MAX = 2
};

// Enum FortniteUI.EAvailableSquadSlotsListEntryState
enum class EAvailableSquadSlotsListEntryState : uint8 {
	Detailed = 0,
	Simplified = 1,
	EAvailableSquadSlotsListEntryState_MAX = 2
};

// Enum FortniteUI.EBattleMapTimelineWidgetState
enum class EBattleMapTimelineWidgetState : uint8 {
	None = 0,
	HasNext = 1,
	HasPrevious = 2,
	IsInReplay = 4,
	CanBeScrubbed = 8,
	IsStreaming = 16,
	Invalid = 32,
	EBattleMapTimelineWidgetState_MAX = 33
};

// Enum FortniteUI.ECrewDetailsTag
enum class ECrewDetailsTag : uint8 {
	SeasonLaunchBenefit = 0,
	MonthlyBenefit = 1,
	CrewMonthBenefit = 2,
	AvailableUntilBenefit = 3,
	MonthlySubscription = 4,
	None = 5,
	ECrewDetailsTag_MAX = 6
};

// Enum FortniteUI.ECrewTileType
enum class ECrewTileType : uint8 {
	None = 0,
	Basic = 1,
	BattlePass = 2,
	CrewPack = 3,
	ProgressiveCosmetic = 4,
	ECrewTileType_MAX = 5
};

// Enum FortniteUI.ECountdownDisplay
enum class ECountdownDisplay : uint8 {
	EventEndTime = 0,
	ChallengeUnlockTime = 1,
	ChallengeBundleUnlockTime = 2,
	UnlockAlreadySet = 3,
	MAX = 4
};

// Enum FortniteUI.EChallengeListSection
enum class EChallengeListSection : uint8 {
	SpecialOffers = 0,
	CompletionRewards = 1,
	AllChallenges = 2,
	FreeChallenges = 3,
	PaidChallenges = 4,
	Objectives = 5,
	EChallengeListSection_MAX = 6
};

// Enum FortniteUI.ELocationEntryState
enum class ELocationEntryState : uint8 {
	Found = 0,
	NotFound = 1,
	Unused = 2,
	ELocationEntryState_MAX = 3
};

// Enum FortniteUI.EAthenaConfirmationResult
enum class EAthenaConfirmationResult : uint8 {
	Confirmed = 0,
	Declined = 1,
	Canceled = 2,
	Max_NONE = 3,
	EAthenaConfirmationResult_MAX = 4
};

// Enum FortniteUI.EEquippedWeaponDisplay
enum class EEquippedWeaponDisplay : uint8 {
	None = 0,
	Resource = 1,
	Magazine = 2,
	Utility = 3,
	Chargeable = 4,
	EEquippedWeaponDisplay_MAX = 5
};

// Enum FortniteUI.EAthenaEventMatchInfoSortMethod
enum class EAthenaEventMatchInfoSortMethod : uint8 {
	Eliminations = 0,
	Place = 1,
	Count = 2,
	EAthenaEventMatchInfoSortMethod_MAX = 3
};

// Enum FortniteUI.EQuestCategoryButtonTimerState
enum class EQuestCategoryButtonTimerState : uint8 {
	Countdown = 0,
	Custom = 1,
	Disabled = 2,
	None = 3,
	EQuestCategoryButtonTimerState_MAX = 4
};

// Enum FortniteUI.EAthenaGameFeatureStatus
enum class EAthenaGameFeatureStatus : uint8 {
	InProgress = 0,
	ProgressPaused = 1,
	ErrorOccured = 2,
	EAthenaGameFeatureStatus_MAX = 3
};

// Enum FortniteUI.EAthenaPlayerActionAlert
enum class EAthenaPlayerActionAlert : uint8 {
	PlayerDown = 0,
	PlayerKill = 1,
	EnteredStorm = 2,
	NewZebulonDrone = 3,
	NewZebulonDroneYou = 4,
	EAthenaPlayerActionAlert_MAX = 5
};

// Enum FortniteUI.ELockerScreenState
enum class ELockerScreenState : uint8 {
	Equipping = 0,
	Archiving = 1,
	Unarchiving = 2,
	ELockerScreenState_MAX = 3
};

// Enum FortniteUI.EItemShopCurrency
enum class EItemShopCurrency : uint8 {
	VBucks = 0,
	RealMOney = 1,
	EItemShopCurrency_MAX = 2
};

// Enum FortniteUI.EItemShopTileSize
enum class EItemShopTileSize : uint8 {
	Mini = 0,
	Small = 1,
	Normal = 2,
	DoubleWide = 3,
	TripleWide = 4,
	Max = 5
};

// Enum FortniteUI.EViolatorIntensity
enum class EViolatorIntensity : uint8 {
	Low = 0,
	Medium = 1,
	High = 2,
	EViolatorIntensity_MAX = 3
};

// Enum FortniteUI.EFortAthenaPlaylist
enum class EFortAthenaPlaylist : uint8 {
	AthenaSolo = 0,
	AthenaDuo = 1,
	AthenaSquad = 2,
	EFortAthenaPlaylist_MAX = 3
};

// Enum FortniteUI.EAthenaLockerInfoRestrictionWarning
enum class EAthenaLockerInfoRestrictionWarning : uint8 {
	UnsatisfiedExclusiveItem = 0,
	LockedEmote = 1,
	CosmeticRestriction = 2,
	AllItemsAreArchived = 3,
	Unknown = 4,
	EAthenaLockerInfoRestrictionWarning_MAX = 5
};

// Enum FortniteUI.EFortMarkerActions
enum class EFortMarkerActions : uint8 {
	None = 0,
	Cancel = 1,
	Confirm = 2,
	CancelAndReturnNPC = 3,
	EFortMarkerActions_MAX = 4
};

// Enum FortniteUI.EMinigameActivityWidgetStatFormat
enum class EMinigameActivityWidgetStatFormat : uint8 {
	Score = 0,
	Time = 1,
	AddTime = 2,
	Distance = 3,
	Laps = 4,
	EMinigameActivityWidgetStatFormat_MAX = 5
};

// Enum FortniteUI.EAthenaNewsEntryType
enum class EAthenaNewsEntryType : uint8 {
	Text = 0,
	Item = 1,
	Website = 2,
	NavigateToTab = 3,
	Challenge = 4,
	Playlist = 5,
	Setting = 6,
	SpatialScreen = 7,
	SmallNews = 8,
	NavigateToBattlePassSubPage = 9,
	Creative = 10,
	NavigateToSubscriptionSubPage = 11,
	ProgressiveItemLearnMore = 12,
	ProgressiveItemReminder = 13,
	ProgressiveItemClaimRewards = 14,
	Event = 15,
	Discovery = 16,
	NavigateToCompetitiveSubPage = 17,
	NavigateToSocialMenu = 18,
	NavigateToSocialTagsSubPage = 19,
	NavigateToRebootRallySubPage = 20,
	Invalid = 21,
	EAthenaNewsEntryType_MAX = 22
};

// Enum FortniteUI.EAthenaNewsStyle
enum class EAthenaNewsStyle : uint8 {
	None = 0,
	SpecialEvent = 1,
	SpecialEvent2 = 2,
	EAthenaNewsStyle_MAX = 3
};

// Enum FortniteUI.EHealthBarType
enum class EHealthBarType : uint8 {
	Health = 0,
	Shield = 1,
	Overshield = 2,
	Stamina = 3,
	VehicleHealth = 4,
	SignalInStorm = 5,
	EHealthBarType_MAX = 6
};

// Enum FortniteUI.EBPStatus
enum class EBPStatus : uint8 {
	UnpurchasedBP = 0,
	PurchasedBP = 1,
	EBPStatus_MAX = 2
};

// Enum FortniteUI.EAthenaSquadListUpdateType
enum class EAthenaSquadListUpdateType : uint8 {
	None = 0,
	CanResurrect = 1,
	FindResurrectChip = 2,
	EAthenaSquadListUpdateType_MAX = 3
};

// Enum FortniteUI.ERespawnUIState
enum class ERespawnUIState : uint8 {
	Hidden = 0,
	ShowRespawnEnabled = 1,
	ShowRespawnDisabled = 2,
	ERespawnUIState_MAX = 3
};

// Enum FortniteUI.ESpectatorBuildCountType
enum class ESpectatorBuildCountType : uint8 {
	BuildCount = 0,
	Wood = 1,
	Stone = 2,
	Metal = 3,
	Gold = 4,
	ESpectatorBuildCountType_MAX = 5
};

// Enum FortniteUI.ESpectatorMapPlayerListState
enum class ESpectatorMapPlayerListState : uint8 {
	Default = 0,
	Irrelevant = 1,
	Eliminated = 2,
	ESpectatorMapPlayerListState_MAX = 3
};

// Enum FortniteUI.EAthenaSpectatorNameplateDistanceState
enum class EAthenaSpectatorNameplateDistanceState : uint8 {
	Near = 0,
	MidDistance = 1,
	FurtherThanMaxDistance = 2,
	EAthenaSpectatorNameplateDistanceState_MAX = 3
};

// Enum FortniteUI.EAthenaSpectatorNameplateDetailState
enum class EAthenaSpectatorNameplateDetailState : uint8 {
	High = 0,
	Low = 1,
	Arrow = 2,
	Off = 3,
	EAthenaSpectatorNameplateDetailState_MAX = 4
};

// Enum FortniteUI.ESpectatorPlayerListSortMethod
enum class ESpectatorPlayerListSortMethod : uint8 {
	SquadId = 0,
	PlayerName = 1,
	Eliminations = 2,
	EventScore = 3,
	State = 4,
	Count = 5,
	ESpectatorPlayerListSortMethod_MAX = 6
};

// Enum FortniteUI.EStormSurgeThresholdType
enum class EStormSurgeThresholdType : uint8 {
	None = 0,
	Above = 1,
	Below = 2,
	Equal = 3,
	EStormSurgeThresholdType_MAX = 4
};

// Enum FortniteUI.EFrontendVisibilityMode
enum class EFrontendVisibilityMode : uint8 {
	Normal = 0,
	HideTopTabsOnly = 1,
	HideTopTabsOnlyWithoutBottomBar = 2,
	OnlyBottom = 3,
	OnlyTop = 4,
	OnlyTitleBar = 5,
	Empty = 6,
	EFrontendVisibilityMode_MAX = 7
};

// Enum FortniteUI.EOptionalFlowSteps
enum class EOptionalFlowSteps : uint8 {
	TryShowMobileGuidedTutorial = 0,
	TryPlaySeasonTrailer = 1,
	TryPlayBattlePassTrailer = 2,
	TryShowMOTDs = 3,
	TryShowNormalBanModal = 4,
	TryShowSocialBanModal = 5,
	TryShowMFAModal = 6,
	TryShowCrossplayDialog = 7,
	TryShowSocialImport = 8,
	TryShowSurveys = 9,
	TryShowFireModeModal = 10,
	TryShowBadMatchPopup = 11,
	TryShowMobileInGameAppRating = 12,
	TryShowSamsungSensorWarning = 13,
	TryShowBattlePassPurchaseScreen = 14,
	TryShowMultipleSubscriptionsAlert = 15,
	TryPushGiftingScreen = 16,
	TryPushMessagingScreen = 17,
	TryGoToBattlePassTab = 18,
	TryShowRefundTokenNotification = 19,
	TryShowPriceChangeAcknowledgeNotification = 20,
	TryShowFireModeSelectionReminderModal = 21,
	TryShowSettingsChangeAcknowledgementScreen = 22,
	TryShowMatchmaking = 23,
	EOptionalFlowSteps_MAX = 24
};

// Enum FortniteUI.EWinConditionParentType
enum class EWinConditionParentType : uint8 {
	None = 0,
	Desktop = 1,
	Mobile = 2,
	EWinConditionParentType_MAX = 3
};

// Enum FortniteUI.EComboSlotType
enum class EComboSlotType : uint8 {
	Primary = 0,
	Secondary = 1,
	Combo = 2,
	Creative = 3,
	COUNT = 4,
	EComboSlotType_MAX = 5
};

// Enum FortniteUI.EBacchusSignalQuality
enum class EBacchusSignalQuality : uint8 {
	None = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	EBacchusSignalQuality_MAX = 4
};

// Enum FortniteUI.EBattleLabAlertType
enum class EBattleLabAlertType : uint8 {
	QuestComplete = 0,
	QuestGranted = 1,
	Reward = 2,
	EBattleLabAlertType_MAX = 3
};

// Enum FortniteUI.EBattlePassInputs
enum class EBattlePassInputs : uint8 {
	Back = 0,
	ViewItem = 1,
	PreviewAction = 2,
	ReplayTrailer = 3,
	ShowAbout = 4,
	BulkBuyRewards = 5,
	ShowAboutCustomization = 6,
	COUNT = 7,
	EBattlePassInputs_MAX = 8
};

// Enum FortniteUI.EBattlePassPurchaseButtonLayout
enum class EBattlePassPurchaseButtonLayout : uint8 {
	Normal = 0,
	Bundle = 1,
	Normal_PaysForSelf = 2,
	EBattlePassPurchaseButtonLayout_MAX = 3
};

// Enum FortniteUI.EBattlePassView
enum class EBattlePassView : uint8 {
	None = 0,
	LandingPage = 1,
	RewardOverview = 2,
	ItemDetails = 3,
	BulkBuyRewards = 4,
	CharacterCustomizer = 5,
	BonusRewards = 6,
	Quests = 7,
	EBattlePassView_MAX = 8
};

// Enum FortniteUI.EBattlePassFeatures
enum class EBattlePassFeatures : uint8 {
	None = 0,
	BuyBattlePass = 1,
	GiftBattlePass = 2,
	BuySubscription = 3,
	ViewDetails = 4,
	WatchVideo = 5,
	ShowAbout = 6,
	PurchaseResources = 7,
	EBattlePassFeatures_MAX = 8
};

// Enum FortniteUI.EBattlePassCurrencyType
enum class EBattlePassCurrencyType : uint8 {
	BattleStar = 0,
	CustomSkin = 1,
	TOTAL_CURRENCIES = 2,
	EBattlePassCurrencyType_MAX = 3
};

// Enum FortniteUI.ERewardPageType
enum class ERewardPageType : uint8 {
	Reward = 0,
	Quest = 1,
	Bonus = 2,
	Customization = 3,
	MAX = 4
};

// Enum FortniteUI.ECobaltStatusTeam
enum class ECobaltStatusTeam : uint8 {
	Ally = 0,
	Enemy = 1,
	MAX = 255
};

// Enum FortniteUI.EBracketNodeState
enum class EBracketNodeState : uint8 {
	LocalTeam = 0,
	EnemyTeam = 1,
	Neutral = 2,
	EBracketNodeState_MAX = 3
};

// Enum FortniteUI.ESurvivalObjectiveIconState
enum class ESurvivalObjectiveIconState : uint8 {
	None = 0,
	Spawned = 1,
	Destroyed = 2,
	ESurvivalObjectiveIconState_MAX = 3
};

// Enum FortniteUI.EDiscoCaptureUIState
enum class EDiscoCaptureUIState : uint8 {
	None = 0,
	Hidden = 1,
	Dance = 2,
	Capturing = 3,
	Contested = 4,
	EDiscoCaptureUIState_MAX = 5
};

// Enum FortniteUI.EDiscoCaptureIconState
enum class EDiscoCaptureIconState : uint8 {
	None = 0,
	Hidden = 1,
	Neutral = 2,
	AllyCaptured = 3,
	EnemyCaptured = 4,
	EDiscoCaptureIconState_MAX = 5
};

// Enum FortniteUI.EDiscoCaptureProgressState
enum class EDiscoCaptureProgressState : uint8 {
	None = 0,
	AllyProgress = 1,
	EnemyProgress = 2,
	EDiscoCaptureProgressState_MAX = 3
};

// Enum FortniteUI.EDiscoScoreProgressTypes
enum class EDiscoScoreProgressTypes : uint8 {
	None = 0,
	ProgressSoundMild = 1,
	ProgressSoundMedium = 2,
	ProgressSoundStrong = 3,
	CountdownSoundNormal = 4,
	CountdownSoundStrong = 5,
	EDiscoScoreProgressTypes_MAX = 6
};

// Enum FortniteUI.EFortDonutIdleGameObject
enum class EFortDonutIdleGameObject : uint8 {
	UnsetObject = 0,
	Tree = 1,
	Mound = 2,
	SmallMound = 3,
	JumpPad = 4,
	Torch = 5,
	PeelMonster = 6,
	Chimichanga = 7,
	Arm = 8,
	EFortDonutIdleGameObject_MAX = 9
};

// Enum FortniteUI.EEndOfMatchQuestCategoryType
enum class EEndOfMatchQuestCategoryType : uint8 {
	Completed = 0,
	InProgress = 1,
	EEndOfMatchQuestCategoryType_MAX = 2
};

// Enum FortniteUI.UFortActivatableVideoEvents
enum class UFortActivatableVideoEvents : uint8 {
	Finished = 0,
	Skipped = 1,
	UFortActivatableVideoEvents_MAX = 2
};

// Enum FortniteUI.UFortActivatablePrePostRollStates
enum class UFortActivatablePrePostRollStates : uint8 {
	None = 0,
	PreRoll = 1,
	PreRollComplete = 2,
	PostRoll = 3,
	PostRollComplete = 4,
	BeginningStepOne = 5,
	BeginningStepTwo = 6,
	Middle = 7,
	End = 8,
	UFortActivatablePrePostRollStates_MAX = 9
};

// Enum FortniteUI.UFortActivatableVideoPanelEvents
enum class UFortActivatableVideoPanelEvents : uint8 {
	Finished = 0,
	Skipped = 1,
	UFortActivatableVideoPanelEvents_MAX = 2
};

// Enum FortniteUI.EFortActivityBrowserTagType
enum class EFortActivityBrowserTagType : uint8 {
	Default = 0,
	EpicOriginal = 1,
	SquadSize = 2,
	MaxPlayers = 3,
	XP = 4,
	PurchaseRequired = 5,
	DownloadRequired = 6,
	EFortActivityBrowserTagType_MAX = 7
};

// Enum FortniteUI.EFortAlterationWidgetState
enum class EFortAlterationWidgetState : uint8 {
	Normal = 0,
	Upgrade = 1,
	Evolution = 2,
	EFortAlterationWidgetState_MAX = 3
};

// Enum FortniteUI.ESpectatorQueueType
enum class ESpectatorQueueType : uint8 {
	Invalid = 0,
	Player = 1,
	BroadcastSpectator = 2,
	ESpectatorQueueType_MAX = 3
};

// Enum FortniteUI.EServerAccessSetting
enum class EServerAccessSetting : uint8 {
	Invalid = 0,
	FriendsOfCurrentPlayers = 1,
	LeaderInviteOnly = 2,
	EServerAccessSetting_MAX = 3
};

// Enum FortniteUI.EFillDisableReason
enum class EFillDisableReason : uint8 {
	Enabled = 0,
	FillDisabledOnPlaylist = 1,
	NotPartyLeader = 2,
	AlreadyMatchmaking = 3,
	PartyTooSmall = 4,
	PartyTooBig = 5,
	InactiveTournament = 6,
	NoSplitscreen = 7,
	EFillDisableReason_MAX = 8
};

// Enum FortniteUI.EFortAthenaMOTDCloseReason
enum class EFortAthenaMOTDCloseReason : uint8 {
	Unknown = 0,
	NoMOTDs = 1,
	NullPRM = 2,
	User = 3,
	Action = 4,
	DeepLink = 5,
	EFortAthenaMOTDCloseReason_MAX = 6
};

// Enum FortniteUI.EFortAthenaRewardState
enum class EFortAthenaRewardState : uint8 {
	LevelAchieved = 0,
	Claimed = 1,
	ForceLocked = 2,
	Owned = 3,
	Max_None = 4,
	EFortAthenaRewardState_MAX = 5
};

// Enum FortniteUI.ETutorialButtonInteractionType
enum class ETutorialButtonInteractionType : uint8 {
	Click = 0,
	Press = 1,
	ETutorialButtonInteractionType_MAX = 2
};

// Enum FortniteUI.EHighlightType
enum class EHighlightType : uint8 {
	ESquareHighlight = 0,
	ECircleHighlight_Big = 1,
	ECircleHighlight_Small = 2,
	EHighlightType_MAX = 3
};

// Enum FortniteUI.EFortAthenaTutorialStep
enum class EFortAthenaTutorialStep : uint8 {
	Look = 0,
	Move = 1,
	Harvest = 2,
	Clamber = 3,
	Pickup = 4,
	Shoot = 5,
	Ambush = 6,
	Heal = 7,
	Build = 8,
	Chest = 9,
	Scoping = 10,
	Completed = 11,
	Count = 12,
	EFortAthenaTutorialStep_MAX = 13
};

// Enum FortniteUI.EFortAthenaTutorialSubstep
enum class EFortAthenaTutorialSubstep : uint8 {
	ScreenSwipeToLook = 0,
	ScreenFindMarker = 1,
	ScreenUseLeftStick = 2,
	ScreenMoveToBuilding = 3,
	ScreenJump = 4,
	ScreenCrouch = 5,
	ScreenReachMarker = 6,
	ScreenUsePickaxe = 7,
	ScreenReachClamber = 8,
	ScreenClamber = 9,
	ScreenReachPickUp = 10,
	ScreenPickUpItems = 11,
	ScreenEquipItem = 12,
	ScreenShootTargets = 13,
	ScreenReload = 14,
	ScreenReachLocation = 15,
	ScreenDefendYourself = 16,
	ScreenHealthAlert = 17,
	ScreenDestroyEnemies = 18,
	ScreenCollectLoot = 19,
	ScreenUseMedkit = 20,
	ScreenUseShield = 21,
	ScreenShieldInfo = 22,
	ScreenLookForChest = 23,
	ScreenChestFound = 24,
	ScreenSelectBuildMode = 25,
	ScreenShowMaterials = 26,
	ScreenShowBuildPieces = 27,
	ScreenSelectStairs = 28,
	ScreenPlaceStairs = 29,
	ScreenReachChest = 30,
	ScreenExitBuildMode = 31,
	ScreenLootChest = 32,
	ScreenCollectLootChest = 33,
	ScreenEquipRifle = 34,
	ScreenUseScope = 35,
	ScreenShootTargetsScoping = 36,
	ScreenCompleted = 37,
	HealingInterrupted = 38,
	Count = 39,
	EFortAthenaTutorialSubstep_MAX = 40
};

// Enum FortniteUI.EFortAthenaTutorialScreenExtraWidget
enum class EFortAthenaTutorialScreenExtraWidget : uint8 {
	None = 0,
	DragToTurn = 1,
	Completed = 2,
	Count = 3,
	EFortAthenaTutorialScreenExtraWidget_MAX = 4
};

// Enum FortniteUI.EFuelTankState
enum class EFuelTankState : uint8 {
	Empty = 0,
	LowFuel = 1,
	RegularFuel = 2,
	EFuelTankState_MAX = 3
};

// Enum FortniteUI.EFortMemberConnectionState
enum class EFortMemberConnectionState : uint8 {
	Open = 0,
	Connecting = 1,
	Connected = 2,
	Invalid = 3,
	EFortMemberConnectionState_MAX = 4
};

// Enum FortniteUI.EColorPickerType
enum class EColorPickerType : uint8 {
	Swatches = 0,
	CustomColor = 1,
	Both = 2,
	EColorPickerType_MAX = 3
};

// Enum FortniteUI.EColorPickerColorRepresentation
enum class EColorPickerColorRepresentation : uint8 {
	HSV = 0,
	RGB = 1,
	Max_NONE = 2,
	EColorPickerColorRepresentation_MAX = 3
};

// Enum FortniteUI.ELeaderboardDisplayType
enum class ELeaderboardDisplayType : uint8 {
	Default = 0,
	Extra = 1,
	ELeaderboardDisplayType_MAX = 2
};

// Enum FortniteUI.EFortLoadoutCardType
enum class EFortLoadoutCardType : uint8 {
	Items = 0,
	RandomTile = 1,
	AddTile = 2,
	AddPreviewItems = 3,
	Blank = 4,
	EFortLoadoutCardType_MAX = 5
};

// Enum FortniteUI.EFortCosmeticLoadoutScreenMode
enum class EFortCosmeticLoadoutScreenMode : uint8 {
	Browse = 0,
	Save = 1,
	EFortCosmeticLoadoutScreenMode_MAX = 2
};

// Enum FortniteUI.EShowChannelDetails
enum class EShowChannelDetails : uint8 {
	FromMinigameSettings = 0,
	ForceShow = 1,
	ForceHide = 2,
	EShowChannelDetails_MAX = 3
};

// Enum FortniteUI.EFortCreativeItemType
enum class EFortCreativeItemType : uint8 {
	Chest = 0,
	Item = 1,
	Collection = 2,
	SubItems = 3,
	NoCreativeItems = 4,
	EFortCreativeItemType_MAX = 5
};

// Enum FortniteUI.EFortCreativeIslandLinkValidationResult
enum class EFortCreativeIslandLinkValidationResult : uint8 {
	Unknown = 0,
	Success = 1,
	IslandNotFound = 2,
	InvalidKeyTooShort = 3,
	InvalidKeyTooLong = 4,
	InvalidKeyCharacters = 5,
	IneligibleParty = 6,
	IslandPrivate = 7,
	EFortCreativeIslandLinkValidationResult_MAX = 8
};

// Enum FortniteUI.EFortCreativeIslandLinkCategory
enum class EFortCreativeIslandLinkCategory : uint8 {
	Default = 0,
	Favorite = 1,
	Published = 2,
	Recent = 3,
	EFortCreativeIslandLinkCategory_MAX = 4
};

// Enum FortniteUI.EFortCreativeIslandSelectTabType
enum class EFortCreativeIslandSelectTabType : uint8 {
	IslandCode = 0,
	ListView = 1,
	EFortCreativeIslandSelectTabType_MAX = 2
};

// Enum FortniteUI.EFortContentBrowserQuickbarState
enum class EFortContentBrowserQuickbarState : uint8 {
	Disabled = 0,
	Creative = 1,
	Primary = 2,
	Trap = 3,
	EFortContentBrowserQuickbarState_MAX = 4
};

// Enum FortniteUI.EFortCreativeServerPrivacySetting
enum class EFortCreativeServerPrivacySetting : uint8 {
	Unknown = 0,
	Private = 1,
	Public = 2,
	EFortCreativeServerPrivacySetting_MAX = 3
};

// Enum FortniteUI.EFortDefenderSlotType
enum class EFortDefenderSlotType : uint8 {
	Invalid = 0,
	Defender = 1,
	Weapon = 2,
	EFortDefenderSlotType_MAX = 3
};

// Enum FortniteUI.EDynamicEntryPatternDirection
enum class EDynamicEntryPatternDirection : uint8 {
	FirstToLast = 0,
	LastToFirst = 1,
	EDynamicEntryPatternDirection_MAX = 2
};

// Enum FortniteUI.DateFormat
enum class DateFormat : uint8 {
	CountdownTextual = 0,
	CountdownNumeric = 1,
	CountdownNumUnder12Hours = 2,
	Date = 3,
	DateFormat_MAX = 4
};

// Enum FortniteUI.EEventScreenView
enum class EEventScreenView : uint8 {
	None = 0,
	LandingPage = 1,
	RewardPreview = 2,
	MoreInfo = 3,
	PurchaseReward = 4,
	LoadError = 5,
	EEventScreenView_MAX = 6
};

// Enum FortniteUI.EShareButtonType
enum class EShareButtonType : uint8 {
	IOS = 0,
	Android = 1,
	Generic = 2,
	EShareButtonType_MAX = 3
};

// Enum FortniteUI.EFortSupportPerkWidgetState
enum class EFortSupportPerkWidgetState : uint8 {
	Normal = 0,
	Upgrade = 1,
	Evolution = 2,
	EFortSupportPerkWidgetState_MAX = 3
};

// Enum FortniteUI.ECenterPopupMessageStateEnum
enum class ECenterPopupMessageStateEnum : uint8 {
	NotVisible = 0,
	WaitingForOutpostOwner = 1,
	ECenterPopupMessageStateEnum_MAX = 2
};

// Enum FortniteUI.EBuildingFocusType
enum class EBuildingFocusType : uint8 {
	Contextual = 0,
	Interactable = 1,
	Normal = 2,
	Count = 3,
	EBuildingFocusType_MAX = 4
};

// Enum FortniteUI.EContextPositionPlatform
enum class EContextPositionPlatform : uint8 {
	NonMobile = 0,
	Mobile = 1,
	EContextPositionPlatform_MAX = 2
};

// Enum FortniteUI.EVaultItemLimitStatus
enum class EVaultItemLimitStatus : uint8 {
	WellBelowCapacity = 0,
	NearCapacity = 1,
	AtCapacity = 2,
	OverCapacity = 3,
	EVaultItemLimitStatus_MAX = 4
};

// Enum FortniteUI.EItemRecyclingRestrictionReason
enum class EItemRecyclingRestrictionReason : uint8 {
	InnatelyUnrecyclable = 0,
	IsSlottedGroundOperative = 1,
	MissingCatalyst = 2,
	ItemOutOnExpedition = 3,
	InUseByCrafting = 4,
	MulchingNotAllowed = 5,
	IsSlottedAttributeWorker = 6,
	EItemRecyclingRestrictionReason_MAX = 7
};

// Enum FortniteUI.EItemRecyclingWarning
enum class EItemRecyclingWarning : uint8 {
	HighLevel = 0,
	HighRarity = 1,
	CanSlotInCollectionBook = 2,
	EItemRecyclingWarning_MAX = 3
};

// Enum FortniteUI.EConversionControlKeyRequest
enum class EConversionControlKeyRequest : uint8 {
	AllKeys = 0,
	NonConsumableKeys = 1,
	ConsumableKeys = 2,
	EConversionControlKeyRequest_MAX = 3
};

// Enum FortniteUI.EFortItemCountStyle
enum class EFortItemCountStyle : uint8 {
	StackCount = 0,
	OverrideCount = 1,
	StackCountOverOverride = 2,
	EFortItemCountStyle_MAX = 3
};

// Enum FortniteUI.EFortItemManagementMode
enum class EFortItemManagementMode : uint8 {
	Details = 0,
	Comparison = 1,
	Mulch = 2,
	EFortItemManagementMode_MAX = 3
};

// Enum FortniteUI.EPresentationMode
enum class EPresentationMode : uint8 {
	ItemList = 0,
	VariantList = 1,
	EPresentationMode_MAX = 2
};

// Enum FortniteUI.EItemContextAction
enum class EItemContextAction : uint8 {
	Equip = 0,
	GoToBattlePassRewards = 1,
	GoToBattlePassCustomization = 2,
	Count = 3,
	EItemContextAction_MAX = 4
};

// Enum FortniteUI.ESceneTransitionType
enum class ESceneTransitionType : uint8 {
	NoTransition = 0,
	Clockwise = 1,
	CounterClockwise = 2,
	ESceneTransitionType_MAX = 3
};

// Enum FortniteUI.EFortKeybindForcedHoldStatus
enum class EFortKeybindForcedHoldStatus : uint8 {
	NoForcedHold = 0,
	ForcedHold = 1,
	NeverShowHold = 2,
	EFortKeybindForcedHoldStatus_MAX = 3
};

// Enum FortniteUI.EFortLegacySlateWidget
enum class EFortLegacySlateWidget : uint8 {
	None = 0,
	Minimap = 1,
	MAX = 2
};

// Enum FortniteUI.EFortModifiedStatus
enum class EFortModifiedStatus : uint8 {
	IsDefault = 0,
	IsModified = 1,
	Unsupported = 2,
	EFortModifiedStatus_MAX = 3
};

// Enum FortniteUI.EFortMaterialProgressBarSection
enum class EFortMaterialProgressBarSection : uint8 {
	Primary = 0,
	Secondary = 1,
	Tertiary = 2,
	Negative = 3,
	MAX_PROGRESS_BAR_SECTIONS = 4,
	EFortMaterialProgressBarSection_MAX = 5
};

// Enum FortniteUI.EFortMaterialProgressBarSectionColorNumber
enum class EFortMaterialProgressBarSectionColorNumber : uint8 {
	Color1 = 0,
	Color2 = 1,
	EFortMaterialProgressBarSectionColorNumber_MAX = 2
};

// Enum FortniteUI.EFortMaterialProgressBarSectionOverflowBehavior
enum class EFortMaterialProgressBarSectionOverflowBehavior : uint8 {
	PreserveValues = 0,
	ReverseCollapse = 1,
	EFortMaterialProgressBarSectionOverflowBehavior_MAX = 2
};

// Enum FortniteUI.EFortMissionActivationWidgetState
enum class EFortMissionActivationWidgetState : uint8 {
	Default = 0,
	StartObjective = 1,
	IncreaseDifficulty = 2,
	Invalid = 3,
	EFortMissionActivationWidgetState_MAX = 4
};

// Enum FortniteUI.ETagComparisonType
enum class ETagComparisonType : uint8 {
	HasAny = 0,
	HasAll = 1,
	HasNone = 2,
	HasAnyExact = 3,
	HasAllExact = 4,
	ETagComparisonType_MAX = 5
};

// Enum FortniteUI.EActionBindingComparisonType
enum class EActionBindingComparisonType : uint8 {
	NoneBound = 0,
	AnyBound = 1,
	AllBound = 2,
	EActionBindingComparisonType_MAX = 3
};

// Enum FortniteUI.EFortFortMobileShareButtonOS
enum class EFortFortMobileShareButtonOS : uint8 {
	Android = 0,
	iOS = 1,
	EFortFortMobileShareButtonOS_MAX = 2
};

// Enum FortniteUI.EModalContainerSlot
enum class EModalContainerSlot : uint8 {
	Top = 0,
	Middle = 1,
	Bottom = 2,
	Background = 3,
	Max = 4
};

// Enum FortniteUI.EFortMtxOfferDisplaySize
enum class EFortMtxOfferDisplaySize : uint8 {
	Small = 0,
	Medium = 1,
	Large = 2,
	EFortMtxOfferDisplaySize_MAX = 3
};

// Enum FortniteUI.EFortMtxStoreOfferType
enum class EFortMtxStoreOfferType : uint8 {
	FoundersPack = 0,
	CurrencyPack = 1,
	Unknown = 2,
	Max_None = 3,
	EFortMtxStoreOfferType_MAX = 4
};

// Enum FortniteUI.EFortNotificationEntryCompletionStatus
enum class EFortNotificationEntryCompletionStatus : uint8 {
	New = 0,
	Active = 1,
	Completed = 2,
	MAX = 3
};

// Enum FortniteUI.ESettingType
enum class ESettingType : uint8 {
	None = 0,
	Header = 1,
	WindowMode = 2,
	DisplayResolution = 3,
	FrameRateLimit = 4,
	VideoQuality = 5,
	ThreeDResolution = 6,
	ViewDistance = 7,
	Shadows = 8,
	AntiAliasing = 9,
	Textures = 10,
	Effects = 11,
	PostProcessing = 12,
	VSync = 13,
	MotionBlur = 14,
	ShowGrass = 15,
	MobileFPSType = 16,
	ShowFPS = 17,
	AllowLowPower = 18,
	AllowVideoPlayback = 19,
	AllowDynamicResolution = 20,
	Disabled_AllowMultithreadedRendering = 21,
	RenderingAPI = 22,
	UseGPUCrashDebugging = 23,
	RegionHeader = 24,
	Language = 25,
	Region = 26,
	MouseSensitivityYaw = 27,
	MouseSensitivityPitch = 28,
	MouseSensitivityMultiplierForAircraft = 29,
	TouchDragSensitivity = 30,
	ControllerLookSensitivityYaw = 31,
	ControllerLookSensitivityPitch = 32,
	MouseTargetingMultiplier = 33,
	MouseScopedMultiplier = 34,
	GamepadTargetingMultiplier = 35,
	GamepadScopedMultiplier = 36,
	GamepadBuildingMultiplier = 37,
	GamepadEditModeMultiplier = 38,
	TouchLookAccelerationMultiplier = 39,
	TouchDragTargetingSensitivity = 40,
	TouchDragScopedSensitivity = 41,
	TouchBuildingMultiplier = 42,
	TouchEditModeMultiplier = 43,
	TouchVerticalSensitivity = 44,
	InvertPitch = 45,
	InvertYaw = 46,
	InvertPitchForMotion = 47,
	InvertPitchForAircraftPrimary = 48,
	InvertPitchForAircraftSecondary = 49,
	InvertYawForMotion = 50,
	GyroEnabled = 51,
	GyroYawAxis = 52,
	GyroSensitivity = 53,
	GyroTargetingSensitivity = 54,
	GyroScopedSensitivity = 55,
	GyroHarvestingToolSensitivity = 56,
	SafeZone = 57,
	AnonymousMode = 58,
	AnonymousCharacterMode = 59,
	HideOtherPlayerNames = 60,
	HiddenMatchmakingDelay = 61,
	AutoJoinGameVoiceChannel = 62,
	ShowVoiceIndicators = 63,
	HUDScale = 64,
	ShowViewerCount = 65,
	FirstPersonCamera = 66,
	PeripheralLighting = 67,
	PingPlaceDangerMarkerWhenTargeting = 68,
	ShowGlobalChat = 69,
	ConsoleUnlockedFPS = 70,
	ToggleSprint = 71,
	SprintByDefault = 72,
	SprintCancelsReload = 73,
	TapInteract = 74,
	InWorldInteract = 75,
	ToggleTargeting = 76,
	HoldToSwapPickup = 77,
	AutoEquipBetterItems = 78,
	EquipFirstBuildingPieceWhenSwappingQuickbars = 79,
	EquipFirstBuildingPieceWhenSwappingQuickbarsAthena = 80,
	DisablePreEditsWhenPlacingBuilding = 81,
	AimAssist = 82,
	EditModeAimAssist = 83,
	TouchEdit = 84,
	EditConfirmOnRelease = 85,
	QuickEdit = 86,
	TurboBuild = 87,
	CreativeTurboDelete = 88,
	AutoChangeMaterial = 89,
	GamepadAutoRun = 90,
	CrossplayPreference = 91,
	AutoOpenDoors = 92,
	AutoPickupWeapons = 93,
	AutoPickupWeaponsConsolePC = 94,
	AutoSortConsumablesToRight = 95,
	EnableTryBuildOnFocus = 96,
	EditButtonHoldTime = 97,
	SlideButtonHoldTime = 98,
	AccessoriesHeader = 99,
	ForceFeedback = 100,
	ContextTutorial = 101,
	ReplayRecording = 102,
	ReplayRecordingLargeTeams = 103,
	ReplayRecordingCreativeMode = 104,
	UsePowerSavingMode = 105,
	ShadowPlayHighlights = 106,
	ShowTemperature = 107,
	BuildingPossession = 108,
	GammaValue = 109,
	MasterVolume = 110,
	MusicVolume = 111,
	SoundFXVolume = 112,
	DialogVolume = 113,
	VoiceChatVolume = 114,
	CinematicsVolume = 115,
	Subtitles = 116,
	Quality = 117,
	VoiceChat = 118,
	PushToTalk = 119,
	ProximityVoiceChat = 120,
	VoiceChatInputDevice = 121,
	VoiceChatOutputDevice = 122,
	AllowBackgroundAudio = 123,
	ColorBlindMode = 124,
	ColorBlindStrength = 125,
	IgnoreGamepadInput = 126,
	LockPrimaryInputMethodToMouse = 127,
	EnableRudderControl = 128,
	RudderDeadZone = 129,
	RudderMaxThrottle = 130,
	VisualizeSoundEffects = 131,
	VisualizeSoundEffectsHeader = 132,
	MoveStickDeadZone = 133,
	LookStickDeadZone = 134,
	LookSensitivityPreset = 135,
	LookSensitivityPresetAds = 136,
	LookBuildModeMultiplier = 137,
	LookEditModeMultiplier = 138,
	UseAdvancedOptions = 139,
	LookHorizontalSpeed = 140,
	LookVerticalSpeed = 141,
	LookHorizontalSpeedAds = 142,
	LookVerticalSpeedAds = 143,
	LookHorizontalBoostSpeed = 144,
	LookVerticalBoostSpeed = 145,
	LookBoostAccelerationTime = 146,
	LookHorizontalBoostSpeedAds = 147,
	LookVerticalBoostSpeedAds = 148,
	LookBoostAccelerationTimeAds = 149,
	InstantBoostWhenBuilding = 150,
	LookEaseTime = 151,
	LookInputCurve = 152,
	AimAssistStrength = 153,
	UseLegacyControls = 154,
	PlayerSurveysAllowed = 155,
	LocalNotifications = 156,
	FireMode = 157,
	COUNT = 158,
	ESettingType_MAX = 159
};

// Enum FortniteUI.EParentalControlsViewState
enum class EParentalControlsViewState : uint8 {
	Invalid = 0,
	EnterPin = 1,
	AskToEnableControls = 2,
	VerifyEmail = 3,
	SetupEmail = 4,
	SetupPin = 5,
	DisplaySettings = 6,
	DisableParentalControls = 7,
	AskToReEnable = 8,
	ReEnabling = 9,
	EParentalControlsViewState_MAX = 10
};

// Enum FortniteUI.EFortPerksWidgetState
enum class EFortPerksWidgetState : uint8 {
	Normal = 0,
	Upgrade = 1,
	Evolution = 2,
	EFortPerksWidgetState_MAX = 3
};

// Enum FortniteUI.ESaveProfileForBanners
enum class ESaveProfileForBanners : uint8 {
	SaveTheWorld = 0,
	BattleRoyale = 1,
	ESaveProfileForBanners_MAX = 2
};

// Enum FortniteUI.EFortPlayerSurveyQuestionType
enum class EFortPlayerSurveyQuestionType : uint8 {
	SingleChoice = 0,
	MultipleChoice = 1,
	Rating = 2,
	EFortPlayerSurveyQuestionType_MAX = 3
};

// Enum FortniteUI.EFortPlayerSurveyResponseChoiceType
enum class EFortPlayerSurveyResponseChoiceType : uint8 {
	CheckBox = 0,
	Radio = 1,
	EFortPlayerSurveyResponseChoiceType_MAX = 2
};

// Enum FortniteUI.EPostGameScreenContinueBehavior
enum class EPostGameScreenContinueBehavior : uint8 {
	Next = 0,
	Previous = 1,
	EPostGameScreenContinueBehavior_MAX = 2
};

// Enum FortniteUI.EProgressiveSetProgress
enum class EProgressiveSetProgress : uint8 {
	NoProgress = 0,
	PartialProgress = 1,
	Completed = 2,
	Expired = 3,
	EProgressiveSetProgress_MAX = 4
};

// Enum FortniteUI.EFortRadialControllingStick
enum class EFortRadialControllingStick : uint8 {
	Right = 0,
	Left = 1,
	EFortRadialControllingStick_MAX = 2
};

// Enum FortniteUI.ERedeemCodeFailureReason
enum class ERedeemCodeFailureReason : uint8 {
	InvalidCode = 0,
	CodeAlreadyUsed = 1,
	AlreadyHasAccess = 2,
	FailedToGetItem = 3,
	Unknown = 4,
	ERedeemCodeFailureReason_MAX = 5
};

// Enum FortniteUI.EFortRewardItemType
enum class EFortRewardItemType : uint8 {
	RewardedBadges = 0,
	MissedBadges = 1,
	RewardedItems = 2,
	RewardedAccountItems = 3,
	EFortRewardItemType_MAX = 4
};

// Enum FortniteUI.EFortServerBrowserAction
enum class EFortServerBrowserAction : uint8 {
	BattleLabServerCreate = 0,
	PlaygroundServerCreate = 1,
	CreativeServerCreate = 2,
	Play = 3,
	CreativeIslandCode = 4,
	CreativeDiscovery = 5,
	EFortServerBrowserAction_MAX = 6
};

// Enum FortniteUI.EFortServerItemIneligibleReason
enum class EFortServerItemIneligibleReason : uint8 {
	None = 0,
	PartyTooBig = 1,
	PartyTooSmall = 2,
	NotPartyLeader = 3,
	MatchmakingAlready = 4,
	NotSupportedByLeto = 5,
	InvalidData = 6,
	EFortServerItemIneligibleReason_MAX = 7
};

// Enum FortniteUI.EFortSettingGameVisibility
enum class EFortSettingGameVisibility : uint8 {
	None = 0,
	Campaign = 1,
	Athena = 2,
	EFortSettingGameVisibility_MAX = 3
};

// Enum FortniteUI.EFortDateTimeStyle
enum class EFortDateTimeStyle : uint8 {
	Default = 0,
	Short = 1,
	Medium = 2,
	Long = 3,
	Full = 4,
	EFortDateTimeStyle_MAX = 5
};

// Enum FortniteUI.EFortShowdownMatchType
enum class EFortShowdownMatchType : uint8 {
	Unknown = 0,
	Solo = 1,
	Duos = 2,
	Squads = 3,
	EFortShowdownMatchType_MAX = 4
};

// Enum FortniteUI.EFortShowdownEventState
enum class EFortShowdownEventState : uint8 {
	Unknown = 0,
	FutureTBD = 1,
	FutureScheduled = 2,
	FutureNext = 3,
	Live = 4,
	LiveParticipating = 5,
	LiveNotParticipating = 6,
	Completed = 7,
	CompletedParticipated = 8,
	CompletedNotPartipated = 9,
	Cancelled = 10,
	EFortShowdownEventState_MAX = 11
};

// Enum FortniteUI.EFortEventWindowEligibility
enum class EFortEventWindowEligibility : uint8 {
	Unknown = 0,
	Public = 1,
	Private = 2,
	Locked = 3,
	EFortEventWindowEligibility_MAX = 4
};

// Enum FortniteUI.EFortShowdownPinState
enum class EFortShowdownPinState : uint8 {
	None = 0,
	Locked = 1,
	Unlocked = 2,
	EFortShowdownPinState_MAX = 3
};

// Enum FortniteUI.EFortSidebarButtonType
enum class EFortSidebarButtonType : uint8 {
	PartyUp = 0,
	FindFriends = 1,
	VoiceChat = 2,
	Settings = 3,
	YourProfile = 4,
	Tags = 5,
	Exit = 6,
	EFortSidebarButtonType_MAX = 7
};

// Enum FortniteUI.ESidebarExitActions
enum class ESidebarExitActions : uint8 {
	None = 0,
	LeaveExperience = 1,
	AthenaLeaveAction = 2,
	LogOut = 3,
	QuitGame = 4,
	ESidebarExitActions_MAX = 5
};

// Enum FortniteUI.ESocialTutorialType
enum class ESocialTutorialType : uint8 {
	None = 0,
	TagsEditor = 1,
	LookingForParty = 2,
	LikeIsland = 3,
	RebootRallyUsers = 4,
	KWSSidebarSupervisedSettings = 5,
	KWSVoiceChannelPanelSupervisedSettings = 6,
	ESocialTutorialType_MAX = 7
};

// Enum FortniteUI.EFortSidebarSocialInteractionArrow
enum class EFortSidebarSocialInteractionArrow : uint8 {
	None = 0,
	Up = 1,
	Down = 2,
	Left = 3,
	Right = 4,
	EFortSidebarSocialInteractionArrow_MAX = 5
};

// Enum FortniteUI.ECardinalPoint
enum class ECardinalPoint : uint8 {
	E = 0,
	NE = 1,
	N = 2,
	NW = 3,
	W = 4,
	SW = 5,
	S = 6,
	SE = 7,
	None = 8,
	ECardinalPoint_MAX = 9
};

// Enum FortniteUI.ERadialOrderingMode
enum class ERadialOrderingMode : uint8 {
	CounterClockwise = 0,
	Clockwise = 1,
	Cardinal = 2,
	Custom = 3,
	ERadialOrderingMode_MAX = 4
};

// Enum FortniteUI.ESocialImportPanelType
enum class ESocialImportPanelType : uint8 {
	Athena = 0,
	SaveTheWorld = 1,
	ESocialImportPanelType_MAX = 2
};

// Enum FortniteUI.EFortSidebarSpecialNavType
enum class EFortSidebarSpecialNavType : uint8 {
	None = 0,
	GoPrevious = 1,
	GoRebootRally = 2,
	GoPartyUp = 3,
	EFortSidebarSpecialNavType_MAX = 4
};

// Enum FortniteUI.EFriendLinkShareButtonType
enum class EFriendLinkShareButtonType : uint8 {
	IOS = 0,
	Android = 1,
	Generic = 2,
	EFriendLinkShareButtonType_MAX = 3
};

// Enum FortniteUI.ESidebarState
enum class ESidebarState : uint8 {
	TabButtons = 0,
	UserListPanels = 1,
	ExitPopup = 2,
	ESidebarState_MAX = 3
};

// Enum FortniteUI.EListHeaderType
enum class EListHeaderType : uint8 {
	TeamMember = 0,
	PartyMember = 1,
	JoinableParty = 2,
	PlatformOnlineFriend = 3,
	McpOnlineFriend = 4,
	OfflineFriend = 5,
	Blocked = 6,
	FriendInvite = 7,
	SuggestedFriend = 8,
	RecentPlayer = 9,
	SearchResults = 10,
	JoinRequests = 11,
	LfgFilter = 12,
	LfgPlayers = 13,
	LfgInvites = 14,
	RebootPlayers = 15,
	GameVoice = 16,
	PartyVoice = 17,
	PlatformVoice = 18,
	AwayFriend = 19,
	Invalid = 20,
	EListHeaderType_MAX = 21
};

// Enum FortniteUI.EReferFriendOrigin
enum class EReferFriendOrigin : uint8 {
	AddFriend = 0,
	PartyUp = 1,
	EReferFriendOrigin_MAX = 2
};

// Enum FortniteUI.ELocalUserOnlineStatus
enum class ELocalUserOnlineStatus : uint8 {
	Online = 0,
	Offline = 1,
	Away = 2,
	ExtendedAway = 3,
	DoNotDisturb = 4,
	Chat = 5,
	ELocalUserOnlineStatus_MAX = 6
};

// Enum FortniteUI.ELfgState
enum class ELfgState : uint8 {
	NoResults = 0,
	Shuffling = 1,
	NoSocialTagsAdded = 2,
	LfgOff = 3,
	LfgUnavailable = 4,
	LfgOffNoSocialTags = 5,
	NoSocialTagsSelected = 6,
	NoFriendsSuggestLFG = 7,
	RebootInvitePlayerButton = 8,
	RebootInviteAllRallied = 9,
	ChangeTagsButton = 10,
	ApplyButton = 11,
	ShuffleButton = 12,
	LfgOffSocialBan = 13,
	ELfgState_MAX = 14
};

// Enum FortniteUI.EFortSquadSlottingRestrictionReason
enum class EFortSquadSlottingRestrictionReason : uint8 {
	ItemIsInInventoryOverflow = 0,
	MandatorySlotWouldBeEmptied = 1,
	ItemIsOnActiveExpedition = 2,
	HeroRequiresMissingGameplayTag = 3,
	HeroAlreadyEquippedInLoadout = 4,
	EFortSquadSlottingRestrictionReason_MAX = 5
};

// Enum FortniteUI.ECardPackPurchaseError
enum class ECardPackPurchaseError : uint8 {
	PendingServerConfirmation = 0,
	CannotAffordItem = 1,
	NoneLeft = 2,
	PurchaseAlreadyPending = 3,
	NoConnection = 4,
	ECardPackPurchaseError_MAX = 5
};

// Enum FortniteUI.EPauseType
enum class EPauseType : uint8 {
	NoPause = 0,
	Rare = 1,
	New = 2,
	NewAndRare = 3,
	EPauseType_MAX = 4
};

// Enum FortniteUI.ESubgameLoadFromCMS
enum class ESubgameLoadFromCMS : uint8 {
	DoNotLoadFromCMS = 0,
	LoadImageFromCMS = 1,
	ESubgameLoadFromCMS_MAX = 2
};

// Enum FortniteUI.ESubgameTileType
enum class ESubgameTileType : uint8 {
	Campaign = 0,
	Athena = 1,
	Creative = 2,
	ESubgameTileType_MAX = 3
};

// Enum FortniteUI.ESubscriptionCancellability
enum class ESubscriptionCancellability : uint8 {
	NotCancellable = 0,
	CancellabeOnPlatform = 1,
	CancellableAnywhere = 2,
	ESubscriptionCancellability_MAX = 3
};

// Enum FortniteUI.EFortTouchControlRegion
enum class EFortTouchControlRegion : uint8 {
	MovePlayer = 0,
	RotateCamera = 1,
	NoRegion = 2,
	COUNT = 3,
	EFortTouchControlRegion_MAX = 4
};

// Enum FortniteUI.EFortControlType
enum class EFortControlType : uint8 {
	None = 0,
	CameraAndMovement = 1,
	Picking = 2,
	COUNT = 3,
	EFortControlType_MAX = 4
};

// Enum FortniteUI.ETouchState
enum class ETouchState : uint8 {
	None = 0,
	WaitingForStart = 1,
	Started = 2,
	Active = 3,
	COUNT = 4,
	ETouchState_MAX = 5
};

// Enum FortniteUI.ETournmentPosterViolatorState
enum class ETournmentPosterViolatorState : uint8 {
	Hidden = 0,
	Live = 1,
	Countdown = 2,
	Info = 3,
	ETournmentPosterViolatorState_MAX = 4
};

// Enum FortniteUI.EActivatePanelOption
enum class EActivatePanelOption : uint8 {
	Show = 0,
	Hide = 1,
	PlatformDefault = 2,
	EActivatePanelOption_MAX = 3
};

// Enum FortniteUI.EFortNamedBundle
enum class EFortNamedBundle : uint8 {
	Menu = 0,
	MenuCampaign = 1,
	MenuAthena = 2,
	Zone = 3,
	ZoneCampaign = 4,
	ZoneAthena = 5,
	Client = 6,
	ClientCampaign = 7,
	ClientAthena = 8,
	EFortNamedBundle_MAX = 9
};

// Enum FortniteUI.ELetoDisplayMode
enum class ELetoDisplayMode : uint8 {
	PrimaryOnly = 0,
	SingleToggle = 1,
	Simultaneous = 2,
	ELetoDisplayMode_MAX = 3
};

// Enum FortniteUI.EFortUINavigationOp
enum class EFortUINavigationOp : uint8 {
	PopContentStack = 0,
	FeatureSwitch = 1,
	NavigateToSkillTree = 2,
	NavigateToSquadSlot = 3,
	NavigateToQuest = 4,
	NavigateToItemManagement = 5,
	NavigateToExpeditions = 6,
	NavigateToCollectionBook = 7,
	None = 8,
	EFortUINavigationOp_MAX = 9
};

// Enum FortniteUI.EForcedIntroTextDisplayState
enum class EForcedIntroTextDisplayState : uint8 {
	Initialized = 0,
	WaitingForPlaylistPlugin = 1,
	WaitingForMatchmakingStartTime = 2,
	InitialDelay = 3,
	Matchmaking = 4,
	Success = 5,
	Failure = 6,
	EForcedIntroTextDisplayState_MAX = 7
};

// Enum FortniteUI.EFortLoginDisplay
enum class EFortLoginDisplay : uint8 {
	LoginStatus = 0,
	SplashScreen = 1,
	SignIn = 2,
	SafeZoneEditor = 3,
	HealthWarning = 4,
	QualityPresetSelection = 5,
	EFortLoginDisplay_MAX = 6
};

// Enum FortniteUI.EFortToastType
enum class EFortToastType : uint8 {
	Default = 0,
	Subdued = 1,
	Impactful = 2,
	EFortToastType_MAX = 3
};

// Enum FortniteUI.EFortUIState
enum class EFortUIState : uint8 {
	Invalid = 0,
	Login = 1,
	JoinServer = 2,
	SubgameSelect = 3,
	FrontEnd = 4,
	InGame_Custom = 5,
	UNUSED = 6,
	InGame_STW = 7,
	Cinematic = 8,
	InGame_BR = 9,
	AthenaSpectator = 10,
	Replay = 11,
	InGame_STW_Custom = 12,
	MAX = 13
};

// Enum FortniteUI.EFortInventoryContext
enum class EFortInventoryContext : uint8 {
	Game = 0,
	Lobby = 1,
	FrontEnd = 2,
	Pickup = 3,
	EFortInventoryContext_MAX = 4
};

// Enum FortniteUI.ENotificationResult
enum class ENotificationResult : uint8 {
	Confirmed = 0,
	Declined = 1,
	Unknown = 2,
	ENotificationResult_MAX = 3
};

// Enum FortniteUI.ENotificationType
enum class ENotificationType : uint8 {
	Basic = 0,
	Friends = 1,
	ENotificationType_MAX = 2
};

// Enum FortniteUI.EModalContainerSize
enum class EModalContainerSize : uint8 {
	ExtraSmall = 0,
	Small = 1,
	Medium = 2,
	Large = 3,
	Max = 4
};

// Enum FortniteUI.EFortSocialPanelType
enum class EFortSocialPanelType : uint8 {
	Join = 0,
	Invite = 1,
	Max = 2
};

// Enum FortniteUI.EFortSocialPanelTab
enum class EFortSocialPanelTab : uint8 {
	PartyInvitations = 0,
	Friends = 1,
	RecentPlayers = 2,
	Max = 3
};

// Enum FortniteUI.EFortBangSize
enum class EFortBangSize : uint8 {
	XXS = 0,
	XS = 1,
	S = 2,
	M = 3,
	L = 4,
	XL = 5,
	EFortBangSize_MAX = 6
};

// Enum FortniteUI.EFortTutorialGlowType
enum class EFortTutorialGlowType : uint8 {
	None = 0,
	Look = 1,
	Click = 2,
	EFortTutorialGlowType_MAX = 3
};

// Enum FortniteUI.EFortAnimSpeed
enum class EFortAnimSpeed : uint8 {
	Instant = 0,
	Fast = 1,
	Normal = 2,
	EFortAnimSpeed_MAX = 3
};

// Enum FortniteUI.EFortStatValueDisplayType
enum class EFortStatValueDisplayType : uint8 {
	BasicPaired = 0,
	BasicSingle = 1,
	Unique = 2,
	ElementalFire = 3,
	ElementalIce = 4,
	ElementalElectric = 5,
	EFortStatValueDisplayType_MAX = 6
};

// Enum FortniteUI.EFortBuffState
enum class EFortBuffState : uint8 {
	NoChange = 0,
	Better = 1,
	Worse = 2,
	EFortBuffState_MAX = 3
};

// Enum FortniteUI.EFortClampState
enum class EFortClampState : uint8 {
	NoClamp = 0,
	MinClamp = 1,
	MaxClamp = 2,
	EFortClampState_MAX = 3
};

// Enum FortniteUI.EFortComparisonType
enum class EFortComparisonType : uint8 {
	None = 0,
	HigherValue = 1,
	LowerValue = 2,
	Upgrade = 3,
	EFortComparisonType_MAX = 4
};

// Enum FortniteUI.EPlayerReportReasons
enum class EPlayerReportReasons : uint8 {
	None = 0,
	Communication = 1,
	Offensive = 2,
	AFK = 3,
	IgnoringObjective = 4,
	Harassment = 5,
	Exploiting = 6,
	TradeScam = 7,
	CommunicationsAbuse = 8,
	OffensiveName = 9,
	TeamingUpWithEnemies = 10,
	InappropriateContent = 11,
	ExploitingOrHacking = 12,
	Harassment_Threatening = 13,
	Harassment_Annoying = 14,
	Harassment_Selling = 15,
	Harassment_Verbal = 16,
	Harassment_GameBehavior = 17,
	EPlayerReportReasons_MAX = 18
};

// Enum FortniteUI.ESubscriptionContentTab
enum class ESubscriptionContentTab : uint8 {
	SubscriptionManagementScreen = 0,
	ProgressiveItemScreen = 1,
	ESubscriptionContentTab_MAX = 2
};

// Enum FortniteUI.EItemShopNavigationAction
enum class EItemShopNavigationAction : uint8 {
	None = 0,
	ShowOfferDetails = 1,
	NavigateToOffer = 2,
	EItemShopNavigationAction_MAX = 3
};

// Enum FortniteUI.EChannelSpeakerStyle
enum class EChannelSpeakerStyle : uint8 {
	InGame = 0,
	InLobby = 1,
	OutOfClient = 2,
	Max = 3
};

// Enum FortniteUI.EHeistExitCraftUIState
enum class EHeistExitCraftUIState : uint8 {
	None = 0,
	OnTheWay = 1,
	Incoming = 2,
	Arrived = 3,
	EHeistExitCraftUIState_MAX = 4
};

// Enum FortniteUI.EHeistBlingIconState
enum class EHeistBlingIconState : uint8 {
	None = 0,
	SupplyDrop = 1,
	PickupItem = 2,
	CarriedEnemy = 3,
	CarriedAlly = 4,
	EHeistBlingIconState_MAX = 5
};

// Enum FortniteUI.EHeistExitCraftIconState
enum class EHeistExitCraftIconState : uint8 {
	None = 0,
	Incoming = 1,
	Spawned = 2,
	Exited = 3,
	EHeistExitCraftIconState_MAX = 4
};

// Enum FortniteUI.ENumericalIndicatorActionType
enum class ENumericalIndicatorActionType : uint8 {
	Adding = 0,
	Removing = 1,
	Nothing = 2,
	ENumericalIndicatorActionType_MAX = 3
};

// Enum FortniteUI.ELinkAcrossSimpleAction
enum class ELinkAcrossSimpleAction : uint8 {
	AddToAll = 0,
	RemovedFromAll = 1,
	Custom = 2,
	Nothing = 3,
	ELinkAcrossSimpleAction_MAX = 4
};

// Enum FortniteUI.EHUDLayoutToolPopupType
enum class EHUDLayoutToolPopupType : uint8 {
	Warning = 0,
	Generic = 1,
	EHUDLayoutToolPopupType_MAX = 2
};

// Enum FortniteUI.EHUDLayoutToolTextInputPopupType
enum class EHUDLayoutToolTextInputPopupType : uint8 {
	Rename = 0,
	ImportLayoutID = 1,
	EHUDLayoutToolTextInputPopupType_MAX = 2
};

// Enum FortniteUI.EHUDLayoutToolToasterType
enum class EHUDLayoutToolToasterType : uint8 {
	Success = 0,
	Failure = 1,
	LocalFailure = 2,
	CloudFailure = 3,
	EHUDLayoutToolToasterType_MAX = 4
};

// Enum FortniteUI.ELiveStreamStandaloneBlocked
enum class ELiveStreamStandaloneBlocked : uint8 {
	StreamInWorldActive = 0,
	ELiveStreamStandaloneBlocked_MAX = 1
};

// Enum FortniteUI.EMatchmakingInputSource
enum class EMatchmakingInputSource : uint8 {
	Local = 0,
	Remote = 1,
	Pool = 2,
	EMatchmakingInputSource_MAX = 3
};

// Enum FortniteUI.ESpectatorLeaderboardEntryType
enum class ESpectatorLeaderboardEntryType : uint8 {
	ScoreWithEndScore = 0,
	NoEndScore = 1,
	Time = 2,
	Invalid = 3,
	ESpectatorLeaderboardEntryType_MAX = 4
};

// Enum FortniteUI.EMinigameCaptureObjectiveIconState
enum class EMinigameCaptureObjectiveIconState : uint8 {
	NotCaptured = 0,
	Captured = 1,
	EMinigameCaptureObjectiveIconState_MAX = 2
};

// Enum FortniteUI.EPlayerFeedbackSubmitState
enum class EPlayerFeedbackSubmitState : uint8 {
	Start = 0,
	Submitting = 1,
	SubmitFailed = 2,
	SubmitSucceeded = 3,
	EPlayerFeedbackSubmitState_MAX = 4
};

// Enum FortniteUI.EPlayerFeedback_EpicQAState
enum class EPlayerFeedback_EpicQAState : uint8 {
	SignInPage = 0,
	SigningInFailed = 1,
	SigningIn = 2,
	SelectBugComponent = 3,
	EPlayerFeedback_MAX = 4
};

// Enum FortniteUI.EFortPlayerFeedbackFlags
enum class EFortPlayerFeedbackFlags : uint8 {
	SubscreenFlow_ForceDisplayFreeText = 0,
	SubscreenFlow_IncludeScreenshotSubscreen = 1,
	DoNotDisplay_SaveTheWorld = 2,
	DoNotDisplay_Athena = 3,
	DoNotDisplay_Creative = 4,
	Submit_TryDisplayBlockUser = 5,
	Submit_TryDisplayCommunityRulesURL = 6,
	EFortPlayerFeedbackFlags_MAX = 7
};

// Enum FortniteUI.EFortPrioritizedWidgetPriority
enum class EFortPrioritizedWidgetPriority : uint8 {
	 = 0,
	 = 1,
	 = 2,
	 = 3,
	 = 4,
	 = 5,
	NumberOfPrios = 6,
	EFortPrioritizedWidgetPriority_MAX = 7
};

// Enum FortniteUI.EFortPrioritizedWidgetContestedBehavior
enum class EFortPrioritizedWidgetContestedBehavior : uint8 {
	QueueBehind = 0,
	StompOther = 1,
	EFortPrioritizedWidgetContestedBehavior_MAX = 2
};

// Enum FortniteUI.EFortPrioritizedWidgetInterruptedBehavior
enum class EFortPrioritizedWidgetInterruptedBehavior : uint8 {
	RemainInQueue = 0,
	Drop = 1,
	EFortPrioritizedWidgetInterruptedBehavior_MAX = 2
};

// Enum FortniteUI.ECooldownTrackingType
enum class ECooldownTrackingType : uint8 {
	Cue = 0,
	AbilityCooldownTags = 1,
	COUNT = 2,
	ECooldownTrackingType_MAX = 3
};

// Enum FortniteUI.ESocialTagListHighlightPolicy
enum class ESocialTagListHighlightPolicy : uint8 {
	All = 0,
	TagList = 1,
	LocalUser = 2,
	FullColor = 3,
	ESocialTagListHighlightPolicy_MAX = 4
};

// Enum FortniteUI.ESocialTagCategory
enum class ESocialTagCategory : uint8 {
	GameModes = 0,
	Mood = 1,
	Utility = 2,
	Competitive = 3,
	Other = 4,
	ESocialTagCategory_MAX = 5
};

// Enum FortniteUI.ESpatialCustomizationRoomState
enum class ESpatialCustomizationRoomState : uint8 {
	None = 0,
	CategorySelection = 1,
	CustomizationSelection = 2,
	ESpatialCustomizationRoomState_MAX = 3
};

// Enum FortniteUI.ESpatialCustomizationCategoryState
enum class ESpatialCustomizationCategoryState : uint8 {
	LockedByBattlePass = 0,
	LockedByChallenge = 1,
	LockedByChallengeCompletion = 2,
	UnlockAvailable = 3,
	UnlockUsed = 4,
	Max_NONE = 5,
	ESpatialCustomizationCategoryState_MAX = 6
};

// Enum FortniteUI.ESpatialStyleCharacterUnlockPrerequisite
enum class ESpatialStyleCharacterUnlockPrerequisite : uint8 {
	BattlepassPurchase = 0,
	BattlepassLevel = 1,
	ESpatialStyleCharacterUnlockPrerequisite_MAX = 2
};

// Enum FortniteUI.EFortSubscriptionContentInterfaceCloseReason
enum class EFortSubscriptionContentInterfaceCloseReason : uint8 {
	Normal = 0,
	SubscriptionPurchased = 1,
	EFortSubscriptionContentInterfaceCloseReason_MAX = 2
};

// Enum FortniteUI.ETDMScoreProgressTypes
enum class ETDMScoreProgressTypes : uint8 {
	None = 0,
	ProgressSoundMild = 1,
	ProgressSoundMedium = 2,
	ProgressSoundStrong = 3,
	CountdownSoundNormal = 4,
	CountdownSoundStrong = 5,
	ETDMScoreProgressTypes_MAX = 6
};

// Enum FortniteUI.EFortEarnedSubRewardType
enum class EFortEarnedSubRewardType : uint8 {
	XP = 0,
	Bars = 1,
	EFortEarnedSubRewardType_MAX = 2
};

// ScriptStruct FortniteUI.GridSortKey
// Size: 0x18 (Inherited: 0x00)
struct FGridSortKey {
	float Number; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString String; // 0x08(0x10)
};

// ScriptStruct FortniteUI.FortFocusedBuildingInfo
// Size: 0x48 (Inherited: 0x00)
struct FFortFocusedBuildingInfo {
	bool bIsInteractable; // 0x00(0x01)
	bool bCanBePlayerEdited; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FVector IndicatorRelativeLocation; // 0x08(0x18)
	enum class EFortBuildingHealthDisplayRule HealthDisplayRule; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float MaxHealth; // 0x24(0x04)
	bool bIsAnyTrapAttached; // 0x28(0x01)
	bool bIsTrapAttachedFacingPlayer; // 0x29(0x01)
	bool bIsPreviewTrapAttached; // 0x2a(0x01)
	char pad_2B[0x1]; // 0x2b(0x01)
	float AttachedTrapMaxDurability; // 0x2c(0x04)
	enum class EFortBuildingInteraction InteractionType; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t InteractionCost; // 0x34(0x04)
	enum class EFortResourceType BuildingMaterial; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FName QuickEditClass; // 0x3c(0x04)
	bool bIsPlayerBuilt; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct FortniteUI.FortHUDState
// Size: 0x04 (Inherited: 0x00)
struct FFortHUDState {
	char bInBuildMode : 1; // 0x00(0x01)
	char bInCombatMode : 1; // 0x00(0x01)
	char bInEditMode : 1; // 0x00(0x01)
	char bInCreativeMode : 1; // 0x00(0x01)
	char bInBattleLabMode : 1; // 0x00(0x01)
	char bIsParachuteOpen : 1; // 0x00(0x01)
	char bIsFreeFalling : 1; // 0x00(0x01)
	char bInLockedBus : 1; // 0x00(0x01)
	char bInUnlockedBus : 1; // 0x01(0x01)
	char bOnTargeting : 1; // 0x01(0x01)
	char bOnUsingScopeTargeting : 1; // 0x01(0x01)
	char bOnCanTarget : 1; // 0x01(0x01)
	char bOnCanUseScopeTargeting : 1; // 0x01(0x01)
	char bOnCanUseSecondaryAbility : 1; // 0x01(0x01)
	char bCanOpenChute : 1; // 0x01(0x01)
	char bCrouching : 1; // 0x01(0x01)
	char bDBNO : 1; // 0x02(0x01)
	char bIsControllingRCPawn : 1; // 0x02(0x01)
	char bIsInVehicle : 1; // 0x02(0x01)
	char bIsDrivingVehicle : 1; // 0x02(0x01)
	char bCanSwapSeats : 1; // 0x02(0x01)
	char bIsCarryingDBNO : 1; // 0x02(0x01)
	char bIsCarryingHeldObject : 1; // 0x02(0x01)
	char bIsZiplining : 1; // 0x02(0x01)
	char bIsCreativeFlying : 1; // 0x03(0x01)
	char bImprovedDBNO : 1; // 0x03(0x01)
	char pad_3_2 : 6; // 0x03(0x01)
};

// ScriptStruct FortniteUI.UINavigationData
// Size: 0x28 (Inherited: 0x00)
struct FUINavigationData {
	struct FText DisplayName; // 0x00(0x18)
	struct UObject* ObjectData; // 0x18(0x08)
	struct FName IdData; // 0x20(0x04)
	int32_t IntData; // 0x24(0x04)
};

// ScriptStruct FortniteUI.FortTabButtonLabelInfo
// Size: 0xe0 (Inherited: 0x00)
struct FFortTabButtonLabelInfo {
	struct FText DisplayName; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
	struct FSlateBrush IconBrush; // 0x20(0xc0)
};

// ScriptStruct FortniteUI.FortAthenaItemManagementInventoryFilterTabLabelInfo
// Size: 0x120 (Inherited: 0xe0)
struct FFortAthenaItemManagementInventoryFilterTabLabelInfo : FFortTabButtonLabelInfo {
	struct FName FilterTabNameId; // 0xe0(0x04)
	bool bAllowEmptySlotItem; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	struct FText EmptyFilterDisplay; // 0xe8(0x18)
	struct FText EmptyArchivedFilterDisplay; // 0x100(0x18)
	char pad_118[0x8]; // 0x118(0x08)
};

// ScriptStruct FortniteUI.AthenaWinnerInfo
// Size: 0x20 (Inherited: 0x00)
struct FAthenaWinnerInfo {
	struct FString BigNameWinnerName; // 0x00(0x10)
	struct TArray<struct FString> WinnerNames; // 0x10(0x10)
};

// ScriptStruct FortniteUI.FortPostGameScreenConfig
// Size: 0x04 (Inherited: 0x00)
struct FFortPostGameScreenConfig {
	enum class EPostGameClickCatcherMode ClickCatcherState; // 0x00(0x01)
	enum class EPostGameHUDMode PostGameHUDMode; // 0x01(0x01)
	bool bSohwCinematicBars; // 0x02(0x01)
	bool bShowPlacementOverlay; // 0x03(0x01)
};

// ScriptStruct FortniteUI.FortUIStatStyle
// Size: 0x100 (Inherited: 0x00)
struct FFortUIStatStyle {
	struct FText Name; // 0x00(0x18)
	struct FText HighestText; // 0x18(0x18)
	struct FSlateBrush Icon; // 0x30(0xc0)
	enum class ECommonNumericType NumericType; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	float MinimalNotableValue; // 0xf4(0x04)
	char pad_F8[0x8]; // 0xf8(0x08)
};

// ScriptStruct FortniteUI.PrimaryContentSetup
// Size: 0x03 (Inherited: 0x00)
struct FPrimaryContentSetup {
	bool bShowBottomBar; // 0x00(0x01)
	bool bShowChatWidget; // 0x01(0x01)
	bool bShowTopBar; // 0x02(0x01)
};

// ScriptStruct FortniteUI.FortTabListRegistrationInfo
// Size: 0x110 (Inherited: 0x00)
struct FFortTabListRegistrationInfo {
	struct FName TabNameID; // 0x00(0x04)
	bool bHidden; // 0x04(0x01)
	bool bAllowedInZone; // 0x05(0x01)
	char pad_6[0xa]; // 0x06(0x0a)
	struct FFortTabButtonLabelInfo TabLabelInfo; // 0x10(0xe0)
	struct UCommonButtonBase* TabButtonType; // 0xf0(0x08)
	struct UCommonUserWidget* TabContentType; // 0xf8(0x08)
	struct UWidget* CreatedTabContentWidget; // 0x100(0x08)
	char pad_108[0x8]; // 0x108(0x08)
};

// ScriptStruct FortniteUI.FortBackendVersion
// Size: 0x98 (Inherited: 0x00)
struct FFortBackendVersion {
	char pad_0[0x98]; // 0x00(0x98)
};

// ScriptStruct FortniteUI.FortUIFeatureStruct
// Size: 0x18 (Inherited: 0x00)
struct FFortUIFeatureStruct {
	enum class EFortUIFeatureState CurrentState; // 0x00(0x01)
	enum class EFortUIFeatureState ForcedState; // 0x01(0x01)
	enum class EFortUIFeatureStateReason ForcedStateReason; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct FMulticastInlineDelegate ChangeDelegate; // 0x08(0x10)
};

// ScriptStruct FortniteUI.FortAttributeModifierDisplayData
// Size: 0xc0 (Inherited: 0x00)
struct FFortAttributeModifierDisplayData {
	struct FGameplayAttribute Attribute; // 0x00(0x38)
	float Value; // 0x38(0x04)
	enum class EGameplayModOp ModifierType; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FGameplayTagRequirements SourceTags; // 0x40(0x40)
	struct FGameplayTagRequirements TargetTags; // 0x80(0x40)
};

// ScriptStruct FortniteUI.FortReceivedItemLootInfo
// Size: 0xc8 (Inherited: 0x00)
struct FFortReceivedItemLootInfo {
	struct FFortItemHeaderInformation HeaderInformation; // 0x00(0x98)
	struct UFortItem* GeneratedItemInstance; // 0x98(0x08)
	struct UFortItemDefinition* ItemDef; // 0xa0(0x08)
	struct FString TemplateId; // 0xa8(0x10)
	int32_t Quantity; // 0xb8(0x04)
	char pad_BC[0xc]; // 0xbc(0x0c)
};

// ScriptStruct FortniteUI.FortSettingsFilterState
// Size: 0x3b8 (Inherited: 0x00)
struct FFortSettingsFilterState {
	bool bIncludeDisabled; // 0x00(0x01)
	bool bIncludeHidden; // 0x01(0x01)
	bool bIncludeResetable; // 0x02(0x01)
	bool bIncludeNestedPages; // 0x03(0x01)
	char pad_4[0x394]; // 0x04(0x394)
	struct TArray<struct UFortSetting*> SettingRootList; // 0x398(0x10)
	struct TArray<struct UFortSetting*> SettingWhiteList; // 0x3a8(0x10)
};

// ScriptStruct FortniteUI.FortSimpleWidgetAnimations
// Size: 0x30 (Inherited: 0x00)
struct FFortSimpleWidgetAnimations {
	struct FName Name; // 0x00(0x04)
	bool bIsEnabled; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct TArray<struct FFortSimpleWidgetAnimation> Targets; // 0x08(0x10)
	struct FMulticastInlineDelegate OnAnimationsFinished; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct FortniteUI.FortSimpleWidgetAnimation
// Size: 0x68 (Inherited: 0x00)
struct FFortSimpleWidgetAnimation {
	struct FName TargetName; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UCurveVector* Translation; // 0x08(0x08)
	struct UCurveVector* Scale; // 0x10(0x08)
	struct UCurveFloat* Alpha; // 0x18(0x08)
	bool bResetOnFinish; // 0x20(0x01)
	bool bShouldAnimateTranslation; // 0x21(0x01)
	bool bShouldAnimateScale; // 0x22(0x01)
	bool bShouldAnimateAlpha; // 0x23(0x01)
	char pad_24[0xc]; // 0x24(0x0c)
	struct TWeakObjectPtr<struct UWorld> WeakWorld; // 0x30(0x08)
	char pad_38[0x30]; // 0x38(0x30)
};

// ScriptStruct FortniteUI.FortItemSorterDefinition
// Size: 0x50 (Inherited: 0x00)
struct FFortItemSorterDefinition {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct FortniteUI.FortItemFilterDefinition
// Size: 0x60 (Inherited: 0x00)
struct FFortItemFilterDefinition {
	struct TArray<enum class EFortItemType> ItemTypeFilters; // 0x00(0x10)
	char pad_10[0x40]; // 0x10(0x40)
	bool bRequiresItemDetails; // 0x50(0x01)
	char pad_51[0xf]; // 0x51(0x0f)
};

// ScriptStruct FortniteUI.AthenaSubscriptionProgressiveInfo
// Size: 0x28 (Inherited: 0x00)
struct FAthenaSubscriptionProgressiveInfo {
	struct TArray<struct FText> InfoModalEntries; // 0x00(0x10)
	struct FText NewStagesUnlockFinePrint; // 0x10(0x18)
};

// ScriptStruct FortniteUI.SubscriptionModalInfo
// Size: 0x38 (Inherited: 0x00)
struct FSubscriptionModalInfo {
	struct FString ModalId; // 0x00(0x10)
	enum class EAppStore PlatformId; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FText> Entries; // 0x18(0x10)
	struct FString QrCodeImage; // 0x28(0x10)
};

// ScriptStruct FortniteUI.SubscriptionModals
// Size: 0x10 (Inherited: 0x00)
struct FSubscriptionModals {
	struct TArray<struct FSubscriptionModalInfo> Modals; // 0x00(0x10)
};

// ScriptStruct FortniteUI.CrewTileImages
// Size: 0x20 (Inherited: 0x00)
struct FCrewTileImages {
	struct FString TileImageURL; // 0x00(0x10)
	struct FString NextTileImageURL; // 0x10(0x10)
};

// ScriptStruct FortniteUI.BattlePassPurchaseData
// Size: 0xa0 (Inherited: 0x00)
struct FBattlePassPurchaseData {
	struct FString BattlePassPurchaseBackgroundURL; // 0x00(0x10)
	struct FText BattlePassPurchaseDisclaimer; // 0x10(0x18)
	struct FText BattlePassScreenDisclaimer; // 0x28(0x18)
	struct FText BattlePassPurchaseLevelDisclaimer; // 0x40(0x18)
	struct FText BattlePassPurchaseDescription; // 0x58(0x18)
	struct FString BattlePassPurchaseConfirmBackgroundURL; // 0x70(0x10)
	struct FCrewTileImages BattlePassTileImages; // 0x80(0x20)
};

// ScriptStruct FortniteUI.CrewDefaultData
// Size: 0x40 (Inherited: 0x00)
struct FCrewDefaultData {
	struct FText Title; // 0x00(0x18)
	struct FText Description; // 0x18(0x18)
	struct FString BackgroundURL; // 0x30(0x10)
};

// ScriptStruct FortniteUI.CrewTileDetailsData
// Size: 0x88 (Inherited: 0x00)
struct FCrewTileDetailsData {
	struct FString TileImageURL; // 0x00(0x10)
	struct FText Title; // 0x10(0x18)
	struct FText Description; // 0x28(0x18)
	enum class ECrewDetailsTag tag; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FString BackgroundImageURL; // 0x48(0x10)
	struct FString ColorA; // 0x58(0x10)
	struct FString ColorB; // 0x68(0x10)
	struct FString ColorC; // 0x78(0x10)
};

// ScriptStruct FortniteUI.CrewTileDataBasic
// Size: 0xb0 (Inherited: 0x00)
struct FCrewTileDataBasic {
	char pad_0[0x8]; // 0x00(0x08)
	enum class ECrewTileType TileType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FText TileLabel; // 0x10(0x18)
	struct FCrewTileDetailsData Details; // 0x28(0x88)
};

// ScriptStruct FortniteUI.CrewTileDataBattlePass
// Size: 0xb0 (Inherited: 0xb0)
struct FCrewTileDataBattlePass : FCrewTileDataBasic {
};

// ScriptStruct FortniteUI.CrewTileDataCrewPack
// Size: 0x160 (Inherited: 0xb0)
struct FCrewTileDataCrewPack : FCrewTileDataBasic {
	struct TArray<struct FString> CrewPackItems; // 0xb0(0x10)
	bool bHasNextCrewPackDetails; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
	struct FCrewTileDetailsData NextDetails; // 0xc8(0x88)
	struct TArray<struct FString> NextCrewPackItems; // 0x150(0x10)
};

// ScriptStruct FortniteUI.CrewTileDataProgressiveCosmetic
// Size: 0xb0 (Inherited: 0xb0)
struct FCrewTileDataProgressiveCosmetic : FCrewTileDataBasic {
};

// ScriptStruct FortniteUI.CrewBenefits
// Size: 0x20 (Inherited: 0x00)
struct FCrewBenefits {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct FortniteUI.CrewSubscriptionStateModal
// Size: 0x18 (Inherited: 0x00)
struct FCrewSubscriptionStateModal {
	enum class EMcpSubscriptionState SubscriptionState; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FText> BulletPoints; // 0x08(0x10)
};

// ScriptStruct FortniteUI.CrewPlatformAndCountriesPair
// Size: 0x18 (Inherited: 0x00)
struct FCrewPlatformAndCountriesPair {
	enum class EAppStore SubscriptionPlatform; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString CountryCodes; // 0x08(0x10)
};

// ScriptStruct FortniteUI.CrewTableRow
// Size: 0x18 (Inherited: 0x00)
struct FCrewTableRow {
	struct TArray<struct FText> RowData; // 0x00(0x10)
	bool bIsHeaderRow; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct FortniteUI.CrewPlatformTable
// Size: 0x18 (Inherited: 0x00)
struct FCrewPlatformTable {
	enum class EAppStore SubscriptionPlatform; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FCrewTableRow> TableRows; // 0x08(0x10)
};

// ScriptStruct FortniteUI.CrewPlatformAndCountriesNotificationModal
// Size: 0x150 (Inherited: 0x00)
struct FCrewPlatformAndCountriesNotificationModal {
	struct FString NotificationId; // 0x00(0x10)
	struct TArray<struct FCrewPlatformAndCountriesPair> ValidPlatformAndCountriesPairs; // 0x10(0x10)
	struct FText Title; // 0x20(0x18)
	struct FText DefaultBodyText; // 0x38(0x18)
	struct FText BodyTextIfSubscriptionCanceled; // 0x50(0x18)
	struct FText BodyTextIfNoBodyTable; // 0x68(0x18)
	struct FText BodyTextIfNoBodyTableAndSubscriptionCanceled; // 0x80(0x18)
	struct FDateTime EffectiveDate; // 0x98(0x08)
	struct TArray<struct FCrewPlatformTable> PlatformSpecificBodyTables; // 0xa0(0x10)
	struct FText CheckboxText; // 0xb0(0x18)
	struct FText DefaultConfirmButtonText; // 0xc8(0x18)
	struct FText ConfirmButtonTextIfSubscriptionCanceled; // 0xe0(0x18)
	struct FText CancelSubscriptionButtonText; // 0xf8(0x18)
	struct FText MoreInfoText; // 0x110(0x18)
	struct FText MoreInfoUrl; // 0x128(0x18)
	struct FDateTime NotificationStartDate; // 0x140(0x08)
	struct FDateTime NotificationEndDate; // 0x148(0x08)
};

// ScriptStruct FortniteUI.CrewModals
// Size: 0x20 (Inherited: 0x00)
struct FCrewModals {
	struct TArray<struct FCrewSubscriptionStateModal> CancellationInfoErrorStateModals; // 0x00(0x10)
	struct TArray<struct FCrewPlatformAndCountriesNotificationModal> PlatformAndCountriesNotificationModals; // 0x10(0x10)
};

// ScriptStruct FortniteUI.CrewItemShopTileData
// Size: 0x60 (Inherited: 0x00)
struct FCrewItemShopTileData {
	struct FText ViolatorText; // 0x00(0x18)
	enum class EViolatorIntensity ViolatorIntensity; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FText NextViolatorText; // 0x20(0x18)
	enum class EViolatorIntensity NextViolatorIntensity; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FCrewTileImages ItemShopTileImages; // 0x40(0x20)
};

// ScriptStruct FortniteUI.CrewScreenData
// Size: 0x130 (Inherited: 0x00)
struct FCrewScreenData {
	struct FText CrewDisclaimer; // 0x00(0x18)
	struct FCrewDefaultData DefaultData; // 0x18(0x40)
	struct FCrewBenefits Benefits; // 0x58(0x20)
	struct FCrewModals CrewModals; // 0x78(0x20)
	struct FCrewItemShopTileData ItemShopTileData; // 0x98(0x60)
	struct FAthenaSubscriptionProgressiveInfo ProgressiveInfo; // 0xf8(0x28)
	struct FSubscriptionModals SubModals; // 0x120(0x10)
};

// ScriptStruct FortniteUI.AthenaRewardTracker
// Size: 0x14 (Inherited: 0x00)
struct FAthenaRewardTracker {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct FortniteUI.TimerDisplayData
// Size: 0x38 (Inherited: 0x00)
struct FTimerDisplayData {
	struct FLinearColor BrushColor; // 0x00(0x10)
	struct FText TimeRemainingDisplayText; // 0x10(0x18)
	struct FLinearColor TextColor; // 0x28(0x10)
};

// ScriptStruct FortniteUI.GlyphUpdateTransition
// Size: 0x0c (Inherited: 0x00)
struct FGlyphUpdateTransition {
	int32_t Count; // 0x00(0x04)
	float MinTimeOffset; // 0x04(0x04)
	float MaxTimeOffset; // 0x08(0x04)
};

// ScriptStruct FortniteUI.GlyphAllUpdateTransitions
// Size: 0x18 (Inherited: 0x00)
struct FGlyphAllUpdateTransitions {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct FortniteUI.AthenaChallengeListVisualOptions
// Size: 0x0c (Inherited: 0x00)
struct FAthenaChallengeListVisualOptions {
	bool bHideHeaders; // 0x00(0x01)
	bool bHideCompletionRewards; // 0x01(0x01)
	bool bHideQuestRewards; // 0x02(0x01)
	bool bUseCompactActionInfo; // 0x03(0x01)
	bool bHideLockedQuests; // 0x04(0x01)
	bool bHideCompletedQuests; // 0x05(0x01)
	bool bShowOnlyCurentBundleLevelChallenges; // 0x06(0x01)
	bool bSortCompletedToEnd; // 0x07(0x01)
	int32_t PreviewBundleLevel; // 0x08(0x04)
};

// ScriptStruct FortniteUI.AthenaCollectionScreenContainerTabInfo
// Size: 0x68 (Inherited: 0x00)
struct FAthenaCollectionScreenContainerTabInfo {
	struct FText TabTitle; // 0x00(0x18)
	struct TSoftObjectPtr<UObject> TabIcon; // 0x18(0x28)
	struct TSoftClassPtr<UObject> TabClass; // 0x40(0x28)
};

// ScriptStruct FortniteUI.AthenaFeatTimelineDisplayData
// Size: 0x48 (Inherited: 0x08)
struct FAthenaFeatTimelineDisplayData : FTableRowBase {
	struct FGameplayTag FeatChallengeBundleTag; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText SeasonText; // 0x10(0x18)
	struct FLinearColor Color1; // 0x28(0x10)
	struct FLinearColor Color2; // 0x38(0x10)
};

// ScriptStruct FortniteUI.GenericAction
// Size: 0x28 (Inherited: 0x00)
struct FGenericAction {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct FortniteUI.GoalsPageCategoryTabData
// Size: 0x28 (Inherited: 0x00)
struct FGoalsPageCategoryTabData {
	struct UObject* TabDisplayAsset; // 0x00(0x08)
	struct FText DisplayName; // 0x08(0x18)
	struct FGameplayTag IncludeTag; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct FortniteUI.MutatorAddedWidgets
// Size: 0x10 (Inherited: 0x00)
struct FMutatorAddedWidgets {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct FortniteUI.AthenaInventoryDropStackSizeRow
// Size: 0x30 (Inherited: 0x08)
struct FAthenaInventoryDropStackSizeRow : FTableRowBase {
	struct FGameplayTagContainer ItemTags; // 0x08(0x20)
	int32_t StackSize; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct FortniteUI.StatBound
// Size: 0x08 (Inherited: 0x00)
struct FStatBound {
	float Minimum; // 0x00(0x04)
	float Maximum; // 0x04(0x04)
};

// ScriptStruct FortniteUI.AthenaInventoryItemStatBoundsRow
// Size: 0x48 (Inherited: 0x08)
struct FAthenaInventoryItemStatBoundsRow : FTableRowBase {
	struct FGameplayTagContainer ItemTags; // 0x08(0x20)
	struct FStatBound Damage; // 0x28(0x08)
	struct FStatBound FireRate; // 0x30(0x08)
	struct FStatBound MagazineSize; // 0x38(0x08)
	struct FStatBound ReloadTime; // 0x40(0x08)
};

// ScriptStruct FortniteUI.AthenaCustomizationParams
// Size: 0x48 (Inherited: 0x00)
struct FAthenaCustomizationParams {
	enum class EAthenaCustomizationCategory category; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t CategorySubslotIndex; // 0x04(0x04)
	struct FText CategoryDisplayName; // 0x08(0x18)
	struct FText ItemDisplayTypeName; // 0x20(0x18)
	bool bAllowUnownedItems; // 0x38(0x01)
	bool bOneItemPerSlot; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct UMaterialInstance* OverrideSlotImage; // 0x40(0x08)
};

// ScriptStruct FortniteUI.AthenaItemShopReloadMtxInfo
// Size: 0x90 (Inherited: 0x00)
struct FAthenaItemShopReloadMtxInfo {
	struct TArray<struct FName> StaticStorefrontNames; // 0x00(0x10)
	struct TArray<struct FName> DynamicStorefrontNames; // 0x10(0x10)
	struct FName IncrementalStorefrontName; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString DynamicOtherOptionOfferId; // 0x28(0x10)
	int32_t MaxMtxQuantityToShowDynamicReloadMtx; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TSoftClassPtr<UObject> StaticReloadMtxScreenClass; // 0x40(0x28)
	struct TSoftClassPtr<UObject> DynamicReloadMtxScreenClass; // 0x68(0x28)
};

// ScriptStruct FortniteUI.AthenaItemShopSectionData
// Size: 0x50 (Inherited: 0x00)
struct FAthenaItemShopSectionData {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct FortniteUI.AthenaPlaylistLeaderboardData
// Size: 0x68 (Inherited: 0x00)
struct FAthenaPlaylistLeaderboardData {
	struct FName StatId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText StatDisplayName; // 0x08(0x18)
	struct FText TabDisplayName; // 0x20(0x18)
	struct FText RowDisplayName; // 0x38(0x18)
	struct FString BaseGameplayTag; // 0x50(0x10)
	bool bIsGlobal; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct FortniteUI.AthenaLeaderboardData
// Size: 0x40 (Inherited: 0x08)
struct FAthenaLeaderboardData : FTableRowBase {
	enum class EFortAthenaPlaylist Playlist; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FName PlaylistName; // 0x0c(0x04)
	enum class ECommonInputType InputType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FAthenaPlaylistLeaderboardData> Stats; // 0x18(0x10)
	bool bExcludePlaylistNames; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TArray<struct FString> PlaylistNames; // 0x30(0x10)
};

// ScriptStruct FortniteUI.PlaylistFilter
// Size: 0x10 (Inherited: 0x00)
struct FPlaylistFilter {
	struct UDataTable* PlaylistsData; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct FortniteUI.LeaderboardFilter
// Size: 0x18 (Inherited: 0x10)
struct FLeaderboardFilter : FPlaylistFilter {
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct FortniteUI.LevelEffectsData
// Size: 0x50 (Inherited: 0x00)
struct FLevelEffectsData {
	int32_t MinPlayerLevel; // 0x00(0x04)
	struct FLinearColor ContentColor; // 0x04(0x10)
	struct FLinearColor OutlineColor; // 0x14(0x10)
	char pad_24[0x4]; // 0x24(0x04)
	struct TSoftObjectPtr<UObject> FlameDisplayObject; // 0x28(0x28)
};

// ScriptStruct FortniteUI.SelectedChallengesData
// Size: 0x20 (Inherited: 0x00)
struct FSelectedChallengesData {
	char pad_0[0x10]; // 0x00(0x10)
	bool bIsCompleted; // 0x10(0x01)
	bool bIsLocked; // 0x11(0x01)
	bool bHasIconOverride; // 0x12(0x01)
	char pad_13[0x1]; // 0x13(0x01)
	float Progress; // 0x14(0x04)
	int32_t NumObjectivesCompleted; // 0x18(0x04)
	int32_t NumObjectives; // 0x1c(0x04)
};

// ScriptStruct FortniteUI.DisabledQuestData
// Size: 0x10 (Inherited: 0x00)
struct FDisabledQuestData {
	struct FString Name; // 0x00(0x10)
};

// ScriptStruct FortniteUI.AthenaMapScreenContainerTabInfo
// Size: 0x50 (Inherited: 0x00)
struct FAthenaMapScreenContainerTabInfo {
	struct FText TabTitle; // 0x00(0x18)
	struct TSoftObjectPtr<UObject> TabIcon; // 0x18(0x28)
	int32_t Order; // 0x40(0x04)
	bool bDefaultFrontendActiveTab; // 0x44(0x01)
	bool bDefaultInGameActiveTab; // 0x45(0x01)
	bool bShowPlayerProfile; // 0x46(0x01)
	char pad_47[0x1]; // 0x47(0x01)
	struct FName TabId; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct FortniteUI.ImageRef
// Size: 0x18 (Inherited: 0x00)
struct FImageRef {
	int32_t Width; // 0x00(0x04)
	int32_t Height; // 0x04(0x04)
	struct FString URL; // 0x08(0x10)
};

// ScriptStruct FortniteUI.AthenaMOTDBase
// Size: 0xd0 (Inherited: 0x00)
struct FAthenaMOTDBase {
	char pad_0[0x8]; // 0x00(0x08)
	enum class EAthenaNewsEntryType EntryType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Title; // 0x10(0x10)
	struct FString Body; // 0x20(0x10)
	struct TArray<struct FImageRef> Images; // 0x30(0x10)
	struct TArray<struct FImageRef> TileImages; // 0x40(0x10)
	struct FColor CustomDarkColor; // 0x50(0x04)
	struct FColor CustomLightColor; // 0x54(0x04)
	struct FString AdSpace; // 0x58(0x10)
	struct FString TabTitleOverride; // 0x68(0x10)
	struct FString ButtonTextOverride; // 0x78(0x10)
	bool bHasCustomColor; // 0x88(0x01)
	bool bIsFtueMotd; // 0x89(0x01)
	char pad_8A[0x46]; // 0x8a(0x46)
};

// ScriptStruct FortniteUI.SmallNewsMOTD
// Size: 0xd0 (Inherited: 0xd0)
struct FSmallNewsMOTD : FAthenaMOTDBase {
};

// ScriptStruct FortniteUI.ItemMOTD
// Size: 0xe8 (Inherited: 0xd0)
struct FItemMOTD : FAthenaMOTDBase {
	char pad_D0[0x18]; // 0xd0(0x18)
};

// ScriptStruct FortniteUI.NavigateToTabMOTD
// Size: 0xe8 (Inherited: 0xd0)
struct FNavigateToTabMOTD : FAthenaMOTDBase {
	char pad_D0[0x18]; // 0xd0(0x18)
};

// ScriptStruct FortniteUI.SettingsMOTD
// Size: 0xf0 (Inherited: 0xd0)
struct FSettingsMOTD : FAthenaMOTDBase {
	char pad_D0[0x20]; // 0xd0(0x20)
};

// ScriptStruct FortniteUI.ChallengeMOTD
// Size: 0xe0 (Inherited: 0xd0)
struct FChallengeMOTD : FAthenaMOTDBase {
	char pad_D0[0x10]; // 0xd0(0x10)
};

// ScriptStruct FortniteUI.WebsiteMOTD
// Size: 0xf0 (Inherited: 0xd0)
struct FWebsiteMOTD : FAthenaMOTDBase {
	char pad_D0[0x20]; // 0xd0(0x20)
};

// ScriptStruct FortniteUI.SpatialScreenMOTD
// Size: 0xe0 (Inherited: 0xd0)
struct FSpatialScreenMOTD : FAthenaMOTDBase {
	char pad_D0[0x10]; // 0xd0(0x10)
};

// ScriptStruct FortniteUI.PlaylistMOTD
// Size: 0xe0 (Inherited: 0xd0)
struct FPlaylistMOTD : FAthenaMOTDBase {
	char pad_D0[0x10]; // 0xd0(0x10)
};

// ScriptStruct FortniteUI.NavigateToBattlePassSubPageMOTD
// Size: 0xf8 (Inherited: 0xd0)
struct FNavigateToBattlePassSubPageMOTD : FAthenaMOTDBase {
	char pad_D0[0x28]; // 0xd0(0x28)
};

// ScriptStruct FortniteUI.CreativeMOTD
// Size: 0xf8 (Inherited: 0xd0)
struct FCreativeMOTD : FAthenaMOTDBase {
	char pad_D0[0x28]; // 0xd0(0x28)
};

// ScriptStruct FortniteUI.NavigateToSubscriptionSubPageMOTD
// Size: 0xd8 (Inherited: 0xd0)
struct FNavigateToSubscriptionSubPageMOTD : FAthenaMOTDBase {
	char pad_D0[0x8]; // 0xd0(0x08)
};

// ScriptStruct FortniteUI.NavigateToSocialMenuMOTD
// Size: 0xd8 (Inherited: 0xd0)
struct FNavigateToSocialMenuMOTD : FAthenaMOTDBase {
	char pad_D0[0x8]; // 0xd0(0x08)
};

// ScriptStruct FortniteUI.NavigateToSocialTagsSubPageMOTD
// Size: 0xd0 (Inherited: 0xd0)
struct FNavigateToSocialTagsSubPageMOTD : FAthenaMOTDBase {
};

// ScriptStruct FortniteUI.NavigateToRebootRallySubPageMOTD
// Size: 0xd0 (Inherited: 0xd0)
struct FNavigateToRebootRallySubPageMOTD : FAthenaMOTDBase {
};

// ScriptStruct FortniteUI.EventMOTD
// Size: 0xd8 (Inherited: 0xd0)
struct FEventMOTD : FAthenaMOTDBase {
	char pad_D0[0x8]; // 0xd0(0x08)
};

// ScriptStruct FortniteUI.DiscoveryMOTD
// Size: 0xe8 (Inherited: 0xd0)
struct FDiscoveryMOTD : FAthenaMOTDBase {
	char pad_D0[0x18]; // 0xd0(0x18)
};

// ScriptStruct FortniteUI.NavigateToCompetitiveSubPageMOTD
// Size: 0xe0 (Inherited: 0xd0)
struct FNavigateToCompetitiveSubPageMOTD : FAthenaMOTDBase {
	char pad_D0[0x10]; // 0xd0(0x10)
};

// ScriptStruct FortniteUI.AthenaMessageEntry
// Size: 0x50 (Inherited: 0x00)
struct FAthenaMessageEntry {
	struct FString Title; // 0x00(0x10)
	struct FString Body; // 0x10(0x10)
	struct FString Image; // 0x20(0x10)
	struct FString Type; // 0x30(0x10)
	struct FString AdSpace; // 0x40(0x10)
};

// ScriptStruct FortniteUI.AthenaEmergencyNotice
// Size: 0x40 (Inherited: 0x00)
struct FAthenaEmergencyNotice {
	struct FString Title; // 0x00(0x10)
	struct FString Body; // 0x10(0x10)
	char pad_20[0x20]; // 0x20(0x20)
};

// ScriptStruct FortniteUI.FortResurrectionUIData
// Size: 0x03 (Inherited: 0x00)
struct FFortResurrectionUIData {
	bool bResurrectionChipAvailable; // 0x00(0x01)
	bool bResurrectionChipPickedUp; // 0x01(0x01)
	bool bResurrectionChipRebooting; // 0x02(0x01)
};

// ScriptStruct FortniteUI.StatGroupData
// Size: 0xf0 (Inherited: 0x00)
struct FStatGroupData {
	struct FText GroupName; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
	struct FSlateBrush Group; // 0x20(0xc0)
	float Value; // 0xe0(0x04)
	float ChartValue; // 0xe4(0x04)
	float ChartOrigionalValue; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
};

// ScriptStruct FortniteUI.AthenaReplayBrowserRowData
// Size: 0x40 (Inherited: 0x00)
struct FAthenaReplayBrowserRowData {
	struct FString Name; // 0x00(0x10)
	struct FDateTime Date; // 0x10(0x08)
	float Length; // 0x18(0x04)
	int32_t Rank; // 0x1c(0x04)
	int32_t NumPlayers; // 0x20(0x04)
	int32_t Eliminations; // 0x24(0x04)
	int32_t DownloadModulesCount; // 0x28(0x04)
	char pad_2C[0x14]; // 0x2c(0x14)
};

// ScriptStruct FortniteUI.AthenaTeamDisplayInfo
// Size: 0x88 (Inherited: 0x00)
struct FAthenaTeamDisplayInfo {
	struct TSoftObjectPtr<UObject> Icon; // 0x00(0x28)
	struct TSoftObjectPtr<UObject> Ribbon; // 0x28(0x28)
	struct FText Name; // 0x50(0x18)
	struct FLinearColor TextColor; // 0x68(0x10)
	struct FLinearColor PedestalColor; // 0x78(0x10)
};

// ScriptStruct FortniteUI.MarkerLargeIndicatorType
// Size: 0x18 (Inherited: 0x00)
struct FMarkerLargeIndicatorType {
	struct UMaterialInterface* MarkerMaterial; // 0x00(0x08)
	struct FVector2D ImageSize; // 0x08(0x10)
};

// ScriptStruct FortniteUI.AthenaTeamCountSlotData
// Size: 0x38 (Inherited: 0x00)
struct FAthenaTeamCountSlotData {
	struct FText TeamNameText; // 0x00(0x18)
	struct FText TeamCountText; // 0x18(0x18)
	bool bIsMyTeam; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct FortniteUI.FortTopBarTabButtonInfo
// Size: 0x130 (Inherited: 0x00)
struct FFortTopBarTabButtonInfo {
	struct FName TabId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString CalendarEventName; // 0x08(0x10)
	struct FText DisplayName; // 0x18(0x18)
	struct FSlateBrush IconBrush; // 0x30(0xc0)
	enum class EFortUIFeature LinkedUIFeature; // 0xf0(0x01)
	enum class EFortBangType BangType; // 0xf1(0x01)
	char pad_F2[0x2]; // 0xf2(0x02)
	int32_t SortOrder; // 0xf4(0x04)
	bool bForceImage; // 0xf8(0x01)
	bool bPrimaryPlayerOnly; // 0xf9(0x01)
	bool bInteractAnalytic; // 0xfa(0x01)
	char pad_FB[0x5]; // 0xfb(0x05)
	struct TSoftClassPtr<UObject> OverrideTabWidget; // 0x100(0x28)
	bool bIsDynamicTab; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
};

// ScriptStruct FortniteUI.AthenaVariantFilterTabInfo
// Size: 0x78 (Inherited: 0x00)
struct FAthenaVariantFilterTabInfo {
	struct TSoftObjectPtr<UObject> Icon; // 0x00(0x28)
	struct FText Label; // 0x28(0x18)
	struct FGameplayTagContainer IncludedVariantChannels; // 0x40(0x20)
	struct TArray<struct FMcpVariantChannelInfo> ForcedVariantSelections; // 0x60(0x10)
	float ZoomLevel; // 0x70(0x04)
	bool bDisableScrollBox; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
};

// ScriptStruct FortniteUI.AthenaVariantFilterTabInfo_Primary
// Size: 0x88 (Inherited: 0x00)
struct FAthenaVariantFilterTabInfo_Primary {
	struct FAthenaVariantFilterTabInfo PrimaryTab; // 0x00(0x78)
	struct TArray<struct FAthenaVariantFilterTabInfo> SubTabs; // 0x78(0x10)
};

// ScriptStruct FortniteUI.AthenaVariantFilterSet
// Size: 0x10 (Inherited: 0x00)
struct FAthenaVariantFilterSet {
	struct TArray<struct FAthenaVariantFilterTabInfo_Primary> PrimaryTabs; // 0x00(0x10)
};

// ScriptStruct FortniteUI.WinConditionPlacementData
// Size: 0x14 (Inherited: 0x00)
struct FWinConditionPlacementData {
	struct FMargin Padding; // 0x00(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x10(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
};

// ScriptStruct FortniteUI.WinConditionPlacementDataMapWrapper
// Size: 0x50 (Inherited: 0x00)
struct FWinConditionPlacementDataMapWrapper {
	struct TMap<enum class EHUDMessagePlacement, struct FWinConditionPlacementData> Data; // 0x00(0x50)
};

// ScriptStruct FortniteUI.BarrierObjectState
// Size: 0x10 (Inherited: 0x00)
struct FBarrierObjectState {
	struct AAthenaBarrierObjective* ObjectiveActor; // 0x00(0x08)
	char TeamNum; // 0x08(0x01)
	enum class EBarrierFoodTeam FoodTeam; // 0x09(0x01)
	enum class EBarrierObjectiveDamageState DamageState; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
};

// ScriptStruct FortniteUI.BattleLabDisplayData
// Size: 0x68 (Inherited: 0x00)
struct FBattleLabDisplayData {
	struct FText TitleText; // 0x00(0x18)
	struct FText DescriptionText; // 0x18(0x18)
	enum class EBattleLabAlertType AlertType; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t RewardCount; // 0x34(0x04)
	int32_t RewardCountTotal; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TSoftObjectPtr<UTexture2D> MainIconTexture; // 0x40(0x28)
};

// ScriptStruct FortniteUI.TrackCategoryUI
// Size: 0x50 (Inherited: 0x00)
struct FTrackCategoryUI {
	struct FTrackCategory TrackData; // 0x00(0x48)
	int32_t LastSelectedIndex; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct FortniteUI.BattlePassPageData
// Size: 0x08 (Inherited: 0x00)
struct FBattlePassPageData {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct FortniteUI.PreviewRewardData
// Size: 0xa8 (Inherited: 0x00)
struct FPreviewRewardData {
	char pad_0[0xa8]; // 0x00(0xa8)
};

// ScriptStruct FortniteUI.PreviewUnlockRewardData
// Size: 0x30 (Inherited: 0x00)
struct FPreviewUnlockRewardData {
	int32_t Currency; // 0x00(0x04)
	int32_t NumAdditionalRewards; // 0x04(0x04)
	int32_t TotalRewards; // 0x08(0x04)
	int32_t NumCharacters; // 0x0c(0x04)
	struct TArray<struct FPreviewRewardData> Characters; // 0x10(0x10)
	struct TArray<struct FPreviewRewardData> AdditionalRewards; // 0x20(0x10)
};

// ScriptStruct FortniteUI.PreviewUnlockData
// Size: 0xb0 (Inherited: 0x00)
struct FPreviewUnlockData {
	struct FPreviewUnlockRewardData InstantRewards; // 0x00(0x30)
	struct FPreviewUnlockRewardData EarnedRewards; // 0x30(0x30)
	struct FText ChapterNumberText; // 0x60(0x18)
	struct FText SeasonNumberText; // 0x78(0x18)
	struct FText SummaryText; // 0x90(0x18)
	bool bPaysForSelf; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// ScriptStruct FortniteUI.BattlePassCharacterPreviewDisplayData
// Size: 0x10 (Inherited: 0x00)
struct FBattlePassCharacterPreviewDisplayData {
	struct UAthenaCharacterItemDefinition* CharacterItemDef; // 0x00(0x08)
	struct UMaterialInstance* PreviewMaterial; // 0x08(0x08)
};

// ScriptStruct FortniteUI.BattlePassShowRewardParams
// Size: 0x10 (Inherited: 0x00)
struct FBattlePassShowRewardParams {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct FortniteUI.CycledItemPreviewSettings
// Size: 0xb0 (Inherited: 0x00)
struct FCycledItemPreviewSettings {
	char pad_0[0xb0]; // 0x00(0xb0)
};

// ScriptStruct FortniteUI.FortPhoenixSeasonDisplayInfoMapRow
// Size: 0x20 (Inherited: 0x08)
struct FFortPhoenixSeasonDisplayInfoMapRow : FTableRowBase {
	struct FString EventFlagName; // 0x08(0x10)
	struct UFortPhoenixSeasonDisplayInfo* DisplayInfo; // 0x18(0x08)
};

// ScriptStruct FortniteUI.AthenaBossHealthData
// Size: 0x30 (Inherited: 0x00)
struct FAthenaBossHealthData {
	bool bVisible; // 0x00(0x01)
	bool bShowShields; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FText Name; // 0x08(0x18)
	int32_t Health; // 0x20(0x04)
	int32_t HealthMax; // 0x24(0x04)
	int32_t Shields; // 0x28(0x04)
	int32_t ShieldsMax; // 0x2c(0x04)
};

// ScriptStruct FortniteUI.ShowdownTournamentData
// Size: 0x1f8 (Inherited: 0x00)
struct FShowdownTournamentData {
	struct FString Tournament_Display_Id; // 0x00(0x10)
	struct FText ; // 0x10(0x18)
	struct FText ; // 0x28(0x18)
	struct FText Schedule_Info; // 0x40(0x18)
	struct FString Poster_Front_Image; // 0x58(0x10)
	struct FString Poster_Back_Image; // 0x68(0x10)
	struct FText Flavor_Description; // 0x78(0x18)
	struct FText Details_Description; // 0x90(0x18)
	struct FText Short_Format_Title; // 0xa8(0x18)
	struct FText Long_Format_Title; // 0xc0(0x18)
	struct FText Background_Title; // 0xd8(0x18)
	int32_t Pin_Score_Requirement; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct FText Pin_Earned_Text; // 0xf8(0x18)
	struct FLinearColor Base_Color; // 0x110(0x10)
	struct FLinearColor Primary_Color; // 0x120(0x10)
	struct FLinearColor Secondary_Color; // 0x130(0x10)
	struct FLinearColor Highlight_Color; // 0x140(0x10)
	struct FLinearColor Title_Color; // 0x150(0x10)
	struct FLinearColor Shadow_Color; // 0x160(0x10)
	struct FLinearColor Background_Left_Color; // 0x170(0x10)
	struct FLinearColor Background_Right_Color; // 0x180(0x10)
	struct FLinearColor Background_Text_Color; // 0x190(0x10)
	struct FLinearColor Poster_Fade_Color; // 0x1a0(0x10)
	struct FString Playlist_Tile_Image; // 0x1b0(0x10)
	struct FString Loading_Screen_Image; // 0x1c0(0x10)
	struct FString Style_Info_Id; // 0x1d0(0x10)
	struct FString Alert_Text; // 0x1e0(0x10)
	enum class EFortTournamentAlertType AlertType; // 0x1f0(0x01)
	char pad_1F1[0x7]; // 0x1f1(0x07)
};

// ScriptStruct FortniteUI.ShowdownTournamentJsonObject
// Size: 0x10 (Inherited: 0x00)
struct FShowdownTournamentJsonObject {
	struct TArray<struct FShowdownTournamentData> Tournaments; // 0x00(0x10)
};

// ScriptStruct FortniteUI.ShowdownTournamentSource
// Size: 0x30 (Inherited: 0x00)
struct FShowdownTournamentSource {
	struct FShowdownTournamentJsonObject Tournament_Info; // 0x00(0x10)
	struct FString _title; // 0x10(0x10)
	struct FString _locale; // 0x20(0x10)
};

// ScriptStruct FortniteUI.FortShowdownScoringRuleDisplayInfo
// Size: 0x80 (Inherited: 0x00)
struct FFortShowdownScoringRuleDisplayInfo {
	struct FName Name; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText Description; // 0x08(0x18)
	struct FText PosterDescription; // 0x20(0x18)
	struct FText PosterIntervalDescription; // 0x38(0x18)
	struct TSoftObjectPtr<UTexture2D> Icon; // 0x50(0x28)
	bool bShowScoreToastNotifications; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// ScriptStruct FortniteUI.SubgameDisplayData
// Size: 0x98 (Inherited: 0x00)
struct FSubgameDisplayData {
	struct FText Title; // 0x00(0x18)
	struct FText Description; // 0x18(0x18)
	struct FText SpecialMessage; // 0x30(0x18)
	struct FText StandardMessageLine1; // 0x48(0x18)
	struct FText StandardMessageLine2; // 0x60(0x18)
	struct FString Image; // 0x78(0x10)
	struct FLinearColor Color; // 0x88(0x10)
};

// ScriptStruct FortniteUI.SubgameScreenSource
// Size: 0x1e8 (Inherited: 0x00)
struct FSubgameScreenSource {
	struct FString _title; // 0x00(0x10)
	struct FString __locale; // 0x10(0x10)
	struct FSubgameDisplayData Creative; // 0x20(0x98)
	struct FSubgameDisplayData SaveTheWorld; // 0xb8(0x98)
	struct FSubgameDisplayData BattleRoyale; // 0x150(0x98)
};

// ScriptStruct FortniteUI.KoreanCafeData
// Size: 0x38 (Inherited: 0x00)
struct FKoreanCafeData {
	struct FGameplayTag Korean_Cafe; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText Korean_Cafe_Header; // 0x08(0x18)
	struct FText Korean_Cafe_Description; // 0x20(0x18)
};

// ScriptStruct FortniteUI.KoreanCafeJsonObject
// Size: 0x10 (Inherited: 0x00)
struct FKoreanCafeJsonObject {
	struct TArray<struct FKoreanCafeData> Cafes; // 0x00(0x10)
};

// ScriptStruct FortniteUI.KoreanCafeSource
// Size: 0x30 (Inherited: 0x00)
struct FKoreanCafeSource {
	struct FString _title; // 0x00(0x10)
	struct FString __locale; // 0x10(0x10)
	struct FKoreanCafeJsonObject Cafe_Info; // 0x20(0x10)
};

// ScriptStruct FortniteUI.CreativeAdData
// Size: 0x68 (Inherited: 0x00)
struct FCreativeAdData {
	struct FString Header; // 0x00(0x10)
	struct FString Sub_Header; // 0x10(0x10)
	struct FString Description; // 0x20(0x10)
	struct FString Creator_Name; // 0x30(0x10)
	struct FString Island_Code; // 0x40(0x10)
	enum class EFortCreativeAdType Ad_Type; // 0x50(0x01)
	enum class EFortCreativeAdColorPreset Ad_Color_Preset; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
	struct FString Image; // 0x58(0x10)
};

// ScriptStruct FortniteUI.CreativeAdJsonObject
// Size: 0x10 (Inherited: 0x00)
struct FCreativeAdJsonObject {
	struct TArray<struct FCreativeAdData> Ads; // 0x00(0x10)
};

// ScriptStruct FortniteUI.CreativeAdSource
// Size: 0x30 (Inherited: 0x00)
struct FCreativeAdSource {
	struct FString _title; // 0x00(0x10)
	struct FString __locale; // 0x10(0x10)
	struct FCreativeAdJsonObject Ad_Info; // 0x20(0x10)
};

// ScriptStruct FortniteUI.DynamicBackground
// Size: 0x48 (Inherited: 0x00)
struct FDynamicBackground {
	struct FString _title; // 0x00(0x10)
	struct FString __locale; // 0x10(0x10)
	enum class EDynamicBackgroudKey Key; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FString BackgroundImage; // 0x28(0x10)
	struct FString Stage; // 0x38(0x10)
};

// ScriptStruct FortniteUI.DynamicBackgrounds
// Size: 0x10 (Inherited: 0x00)
struct FDynamicBackgrounds {
	struct TArray<struct FDynamicBackground> Backgrounds; // 0x00(0x10)
};

// ScriptStruct FortniteUI.DynamicBackgroundsSource
// Size: 0x40 (Inherited: 0x00)
struct FDynamicBackgroundsSource {
	struct FString _title; // 0x00(0x10)
	struct FString __locale; // 0x10(0x10)
	struct FString LastModified; // 0x20(0x10)
	struct FDynamicBackgrounds Backgrounds; // 0x30(0x10)
};

// ScriptStruct FortniteUI.CmsJsonMessages
// Size: 0x298 (Inherited: 0x00)
struct FCmsJsonMessages {
	struct FString _title; // 0x00(0x10)
	struct FString _locale; // 0x10(0x10)
	struct FShowdownTournamentSource TournamentInformation; // 0x20(0x30)
	struct FKoreanCafeSource KoreanCafe; // 0x50(0x30)
	struct FSubgameScreenSource SubGameInfo; // 0x80(0x1e8)
	struct FCreativeAdSource CreativeAds; // 0x268(0x30)
};

// ScriptStruct FortniteUI.AthenaShopCarouselItem
// Size: 0x68 (Inherited: 0x00)
struct FAthenaShopCarouselItem {
	struct FText PreviewTitle; // 0x00(0x18)
	struct FText FullTitle; // 0x18(0x18)
	struct FString TileImage; // 0x30(0x10)
	struct FString VideoString; // 0x40(0x10)
	struct FString OfferId; // 0x50(0x10)
	int32_t LandingPriority; // 0x60(0x04)
	enum class EItemShopNavigationAction Action; // 0x64(0x01)
	bool bHidden; // 0x65(0x01)
	char pad_66[0x2]; // 0x66(0x02)
};

// ScriptStruct FortniteUI.AthenaShopSection
// Size: 0x88 (Inherited: 0x00)
struct FAthenaShopSection {
	struct FName SectionId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText SectionDisplayName; // 0x08(0x18)
	bool bSortOffersByOwnership; // 0x20(0x01)
	bool bShowIneligibleOffers; // 0x21(0x01)
	bool bShowIneligibleOffersIfGiftable; // 0x22(0x01)
	bool bShowTimer; // 0x23(0x01)
	bool bEnableToastNotification; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	int32_t LandingPriority; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FDynamicBackground SectionBackground; // 0x30(0x48)
	bool bHidden; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FDateTime DateToResetItemShopLanding; // 0x80(0x08)
};

// ScriptStruct FortniteUI.PlatformPurchaseMessaging
// Size: 0x10 (Inherited: 0x00)
struct FPlatformPurchaseMessaging {
	struct FPlatformPurchaseErrorCodeMessages ErrorCodeMessages; // 0x00(0x10)
};

// ScriptStruct FortniteUI.PlatformPurchaseErrorCodeMessages
// Size: 0x10 (Inherited: 0x00)
struct FPlatformPurchaseErrorCodeMessages {
	struct TArray<struct FPlatformPurchaseErrorCodeMessage> ErrorCodeMessageList; // 0x00(0x10)
};

// ScriptStruct FortniteUI.PlatformPurchaseErrorCodeMessage
// Size: 0x38 (Inherited: 0x00)
struct FPlatformPurchaseErrorCodeMessage {
	struct FString ErrorCode; // 0x00(0x10)
	struct FText Title; // 0x10(0x18)
	struct TArray<struct FText> Messages; // 0x28(0x10)
};

// ScriptStruct FortniteUI.AthenaShopSpecialOffer
// Size: 0x98 (Inherited: 0x00)
struct FAthenaShopSpecialOffer {
	bool bSpecialOfferEnabled; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FVideoWidgetConfig SpecialOfferVideo; // 0x08(0x90)
};

// ScriptStruct FortniteUI.VideoWidgetConfig
// Size: 0x90 (Inherited: 0x00)
struct FVideoWidgetConfig {
	struct UFortStreamMediaSource* StreamingMediaSource; // 0x00(0x08)
	struct FName VideoString; // 0x08(0x04)
	struct FName VideoDisplayDataID; // 0x0c(0x04)
	struct FName FallbackVideoID; // 0x10(0x04)
	bool bCheckAutoPlay; // 0x14(0x01)
	bool bForceAutoPlay; // 0x15(0x01)
	bool bStreamingEnabled; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
	struct FString VideoUID; // 0x18(0x10)
	bool bShouldBeModal; // 0x28(0x01)
	bool bUseSkipBoundaries; // 0x29(0x01)
	bool bHoldToSkip; // 0x2a(0x01)
	bool bFadeFromColor; // 0x2b(0x01)
	bool bEndFadeFromColor; // 0x2c(0x01)
	bool bFadeUpToColor; // 0x2d(0x01)
	bool bAllowSkipping; // 0x2e(0x01)
	char pad_2F[0x1]; // 0x2f(0x01)
	struct FString mimetype; // 0x30(0x10)
	struct FString VideoURL; // 0x40(0x10)
	bool bEnableLooping; // 0x50(0x01)
	bool bAutoClose; // 0x51(0x01)
	bool bHideControls; // 0x52(0x01)
	bool bHideBackground; // 0x53(0x01)
	bool bHideBackgroundUntilVideoDetected; // 0x54(0x01)
	bool bStartMTTransparent; // 0x55(0x01)
	char pad_56[0x2]; // 0x56(0x02)
	struct USoundMix* SoundMixOverride; // 0x58(0x08)
	bool bOverrideSoundMix; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct USoundClass* SoundClassOverride; // 0x68(0x08)
	bool bControlWorldRendering; // 0x70(0x01)
	bool bDisablePiP; // 0x71(0x01)
	char pad_72[0x2]; // 0x72(0x02)
	float PartySyncStartTime; // 0x74(0x04)
	bool bDisableCursor; // 0x78(0x01)
	bool bDisableStreamLimitsFromWidget; // 0x79(0x01)
	bool bStartHidden; // 0x7a(0x01)
	bool bAudioOnlyHandlingFromMetadata; // 0x7b(0x01)
	bool bTreatAudioOnlyAsColorFades; // 0x7c(0x01)
	bool bEnableDebugCommands; // 0x7d(0x01)
	char pad_7E[0x2]; // 0x7e(0x02)
	struct FLinearColor FadeColor; // 0x80(0x10)
};

// ScriptStruct FortniteUI.SocialEventJSON
// Size: 0x28 (Inherited: 0x00)
struct FSocialEventJSON {
	int32_t event_id; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText Title; // 0x08(0x18)
	struct FDateTime starts_at_utc; // 0x20(0x08)
};

// ScriptStruct FortniteUI.SocialEventsJsonObject
// Size: 0x10 (Inherited: 0x00)
struct FSocialEventsJsonObject {
	struct TArray<struct FSocialEventJSON> Events; // 0x00(0x10)
};

// ScriptStruct FortniteUI.SocialEventsSource
// Size: 0x40 (Inherited: 0x00)
struct FSocialEventsSource {
	struct FString _title; // 0x00(0x10)
	struct FString __locale; // 0x10(0x10)
	struct FString LastModified; // 0x20(0x10)
	struct FSocialEventsJsonObject SocialEvents; // 0x30(0x10)
};

// ScriptStruct FortniteUI.CobaltPlayerPortraitIndexInfo
// Size: 0x10 (Inherited: 0x00)
struct FCobaltPlayerPortraitIndexInfo {
	struct TArray<int32_t> PortraitIndexArray; // 0x00(0x10)
};

// ScriptStruct FortniteUI.CreativeContentBrowserAddItemDefinitionMessage
// Size: 0x10 (Inherited: 0x00)
struct FCreativeContentBrowserAddItemDefinitionMessage {
	struct TArray<struct UFortItemDefinition*> ItemDefinitionsToAdd; // 0x00(0x10)
};

// ScriptStruct FortniteUI.CreativeContentBrowserRemoveItemDefinitionMessage
// Size: 0x10 (Inherited: 0x00)
struct FCreativeContentBrowserRemoveItemDefinitionMessage {
	struct TArray<struct UFortItemDefinition*> ItemDefinitionsToRemove; // 0x00(0x10)
};

// ScriptStruct FortniteUI.CreativeContentBrowserTabInitializer
// Size: 0x48 (Inherited: 0x00)
struct FCreativeContentBrowserTabInitializer {
	struct FText TabLabel; // 0x00(0x18)
	struct TSoftClassPtr<UObject> CreativeContentBrowserTabClass; // 0x18(0x28)
	struct UCreativeContentBrowserTab_CreationCondition* CreationCondition; // 0x40(0x08)
};

// ScriptStruct FortniteUI.SurvivalObjectiveIconData
// Size: 0x0c (Inherited: 0x00)
struct FSurvivalObjectiveIconData {
	int32_t IconIndex; // 0x00(0x04)
	enum class ESurvivalObjectiveIconState IconState; // 0x04(0x01)
	enum class ESurvivalObjectiveIconState PrevIconState; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	struct FName SpecialActorID; // 0x08(0x04)
};

// ScriptStruct FortniteUI.SurvivalObjectiveText
// Size: 0x10 (Inherited: 0x00)
struct FSurvivalObjectiveText {
	struct TArray<struct FString> SafezoneStateText; // 0x00(0x10)
};

// ScriptStruct FortniteUI.DiscoCaptureUIData
// Size: 0x40 (Inherited: 0x00)
struct FDiscoCaptureUIData {
	enum class EDiscoCaptureUIState CurrDisplayState; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct AAthenaCapturePoint* CapturePoint; // 0x08(0x08)
	struct AFortPlayerPawnAthena* CurrPawn; // 0x10(0x08)
	struct UMaterialInstanceDynamic* CurrMID; // 0x18(0x08)
	float FillAmount; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FText DisplayText; // 0x28(0x18)
};

// ScriptStruct FortniteUI.DiscoCaptureIconData
// Size: 0x10 (Inherited: 0x00)
struct FDiscoCaptureIconData {
	enum class EDiscoCaptureIconState CurrIconState; // 0x00(0x01)
	enum class EDiscoCaptureProgressState CurrProgressState; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float CurrCapturePercent; // 0x04(0x04)
	struct AAthenaCapturePoint* CapturePoint; // 0x08(0x08)
};

// ScriptStruct FortniteUI.DiscoTeamScoreData
// Size: 0x20 (Inherited: 0x00)
struct FDiscoTeamScoreData {
	struct FText CurrScoreText; // 0x00(0x18)
	float CurrScorePercent; // 0x18(0x04)
	int32_t CurrScore; // 0x1c(0x04)
};

// ScriptStruct FortniteUI.QuestRecapData
// Size: 0x14 (Inherited: 0x00)
struct FQuestRecapData {
	struct TWeakObjectPtr<struct UFortQuestItem> QuestItem; // 0x00(0x08)
	int32_t LastKnownMcpValue; // 0x08(0x04)
	int32_t AchivedCount; // 0x0c(0x04)
	int32_t RequiredCount; // 0x10(0x04)
};

// ScriptStruct FortniteUI.VideoConfig_Mono
// Size: 0x58 (Inherited: 0x00)
struct FVideoConfig_Mono {
	struct UFortStreamMediaSource* StreamingMediaSource; // 0x00(0x08)
	struct FName VideoString; // 0x08(0x04)
	struct FName StreamingVideoID; // 0x0c(0x04)
	struct FName FallbackVideoID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString ProdLinkID; // 0x18(0x10)
	struct FString GamedevLinkID; // 0x28(0x10)
	bool bIsAutoPlay; // 0x38(0x01)
	bool bForceAutoPlay; // 0x39(0x01)
	bool bStreamingEnabled; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
	struct FString VideoUID; // 0x40(0x10)
	bool bShouldBeModal; // 0x50(0x01)
	bool bUseSkipBoundaries; // 0x51(0x01)
	bool bKairosPlayer; // 0x52(0x01)
	bool bHoldToSkip; // 0x53(0x01)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct FortniteUI.FortActivityImageCache
// Size: 0x10 (Inherited: 0x00)
struct FFortActivityImageCache {
	struct UTexture* Texture; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct FortniteUI.FortActivityCompressedImageCache
// Size: 0x18 (Inherited: 0x00)
struct FFortActivityCompressedImageCache {
	struct TArray<char> CompressedImage; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct FortniteUI.FortActivityImagePayload
// Size: 0x28 (Inherited: 0x00)
struct FFortActivityImagePayload {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct FortniteUI.FortActivityScaleFontData
// Size: 0x08 (Inherited: 0x00)
struct FFortActivityScaleFontData {
	int32_t CharacterCountStart; // 0x00(0x04)
	int32_t FontSize; // 0x04(0x04)
};

// ScriptStruct FortniteUI.FortAthenaTutorialHighlightInfo
// Size: 0x48 (Inherited: 0x00)
struct FFortAthenaTutorialHighlightInfo {
	struct FGameplayTag WidgetToHighlight; // 0x00(0x04)
	struct FGameplayTag ItemHighlightTag; // 0x04(0x04)
	struct FMargin HighlightMargin; // 0x08(0x10)
	struct TSoftClassPtr<UObject> HighlightWidgetOverride; // 0x18(0x28)
	bool bIsLegacyHighlight; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct FortniteUI.FortAthenaTutorialScreenInfo
// Size: 0x100 (Inherited: 0x00)
struct FFortAthenaTutorialScreenInfo {
	enum class EFortAthenaTutorialSubstep Substep; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FVector2D TextPromptPosition; // 0x08(0x10)
	struct FVector2D TextPromptPosition_AthenaHUD; // 0x18(0x10)
	struct FAnchors TextPromptAnchors; // 0x28(0x20)
	struct FAnchors TextPromptAnchors_AthenaHUD; // 0x48(0x20)
	struct FText TextPromptText_Touch; // 0x68(0x18)
	struct FText TextPromptText_Gamepad; // 0x80(0x18)
	struct FText TextPromptText_TouchLegacy; // 0x98(0x18)
	struct FDataTableRowHandle ActionWidget_DataTableRow; // 0xb0(0x10)
	struct TArray<struct FName> KeybindWidget_NameArray; // 0xc0(0x10)
	struct TArray<struct FName> KeybindWidget_GamepadNameArray; // 0xd0(0x10)
	bool ForceSingleInputKeybind; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
	struct TArray<struct FFortAthenaTutorialHighlightInfo> HighlightInfo; // 0xe8(0x10)
	bool DisplayNextButton; // 0xf8(0x01)
	bool DisplayTextPromptTarget; // 0xf9(0x01)
	enum class EFortAthenaTutorialScreenExtraWidget ExtraWidget; // 0xfa(0x01)
	char pad_FB[0x5]; // 0xfb(0x05)
};

// ScriptStruct FortniteUI.FortAthenaTutorialStepInfo
// Size: 0x18 (Inherited: 0x00)
struct FFortAthenaTutorialStepInfo {
	enum class EFortAthenaTutorialStep TutorialStep; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FFortAthenaTutorialScreenInfo> StepScreenInfo; // 0x08(0x10)
};

// ScriptStruct FortniteUI.FortAthenaTutorialStandaloneStepInfo
// Size: 0x108 (Inherited: 0x00)
struct FFortAthenaTutorialStandaloneStepInfo {
	enum class EFortAthenaTutorial_StandaloneStep StandaloneStep; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FFortAthenaTutorialScreenInfo StepScreenInfo; // 0x08(0x100)
};

// ScriptStruct FortniteUI.FortAthenaStandaloneTutorialStepInfo
// Size: 0x10 (Inherited: 0x00)
struct FFortAthenaStandaloneTutorialStepInfo {
	struct TArray<struct FFortAthenaTutorialScreenInfo> StepScreenInfo; // 0x00(0x10)
};

// ScriptStruct FortniteUI.FortStateStyle
// Size: 0x4a0 (Inherited: 0x00)
struct FFortStateStyle {
	struct FFortMultiSizeBrush Brush; // 0x00(0x480)
	struct FLinearColor PrimaryColor; // 0x480(0x10)
	struct FLinearColor SecondaryColor; // 0x490(0x10)
};

// ScriptStruct FortniteUI.FortBattlePassVideoAnnotation
// Size: 0x28 (Inherited: 0x00)
struct FFortBattlePassVideoAnnotation {
	float StartTime; // 0x00(0x04)
	float EndTime; // 0x04(0x04)
	struct FVector2D ScreenPosition; // 0x08(0x10)
	int32_t EntryAngle; // 0x18(0x04)
	float EntryMagnitude; // 0x1c(0x04)
	struct UFortItemDefinition* RewardItemDefinition; // 0x20(0x08)
};

// ScriptStruct FortniteUI.VaultVariantOverrideOption
// Size: 0x20 (Inherited: 0x00)
struct FVaultVariantOverrideOption {
	struct FGameplayTag VariantChannelOverride; // 0x00(0x04)
	struct FGameplayTag VariantTagOverride; // 0x04(0x04)
	struct FString CustomDataPayload; // 0x08(0x10)
	struct UFortItemDefinition* OptionalItemVariantIsUsedFor; // 0x18(0x08)
};

// ScriptStruct FortniteUI.ItemPreviewSettings
// Size: 0xa8 (Inherited: 0x00)
struct FItemPreviewSettings {
	struct UFortAccountItemDefinition* ItemToView; // 0x00(0x08)
	int32_t SubslotIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FGameplayTagContainer PreviewExcludedTags; // 0x10(0x20)
	int32_t ItemVariantPreviewIndex; // 0x30(0x04)
	char pad_34[0x4c]; // 0x34(0x4c)
	bool bHasEtherealBackground; // 0x80(0x01)
	char pad_81[0xf]; // 0x81(0x0f)
	struct TArray<struct FVaultVariantOverrideOption> VariantOverrides; // 0x90(0x10)
	char pad_A0[0x8]; // 0xa0(0x08)
};

// ScriptStruct FortniteUI.FortConfirmationButtonInfo
// Size: 0x10 (Inherited: 0x00)
struct FFortConfirmationButtonInfo {
	struct UCommonButtonLegacy* Button; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct FortniteUI.CachedIslandsGroup
// Size: 0x28 (Inherited: 0x00)
struct FCachedIslandsGroup {
	struct TArray<struct UFortCreativeIslandLink*> IslandLinks; // 0x00(0x10)
	char pad_10[0x18]; // 0x10(0x18)
};

// ScriptStruct FortniteUI.ItemListCategoryArray
// Size: 0x28 (Inherited: 0x00)
struct FItemListCategoryArray {
	struct TArray<struct FFortItemEntry> ItemList; // 0x00(0x10)
	struct FText CategoryTitle; // 0x10(0x18)
};

// ScriptStruct FortniteUI.FortCreativeItemListCategoryData
// Size: 0x10 (Inherited: 0x08)
struct FFortCreativeItemListCategoryData : FTableRowBase {
	enum class ECreativeItemCategory category; // 0x08(0x01)
	enum class EFortItemCardSize CardSize; // 0x09(0x01)
	bool bCollapseCardBorderPad; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
};

// ScriptStruct FortniteUI.FortItemListOptionBucket
// Size: 0x20 (Inherited: 0x00)
struct FFortItemListOptionBucket {
	char pad_0[0x8]; // 0x00(0x08)
	int32_t ItemIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct UFortItemListOptionProxy*> ItemOptionData; // 0x10(0x10)
};

// ScriptStruct FortniteUI.FortWeightedObject
// Size: 0x10 (Inherited: 0x00)
struct FFortWeightedObject {
	struct UObject* Object; // 0x00(0x08)
	int32_t Weight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FortniteUI.OptionsReleaseInfo
// Size: 0x08 (Inherited: 0x00)
struct FOptionsReleaseInfo {
	enum class ESettingType SettingType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ReleaseVersion; // 0x04(0x04)
};

// ScriptStruct FortniteUI.RarityArray
// Size: 0x10 (Inherited: 0x00)
struct FRarityArray {
	struct TArray<struct UFortItemDefinition*> Items; // 0x00(0x10)
};

// ScriptStruct FortniteUI.StyleButtonReference
// Size: 0x18 (Inherited: 0x00)
struct FStyleButtonReference {
	struct UCommonButtonBase* Button; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct FortniteUI.FortCreativeServerDisplayOption
// Size: 0x40 (Inherited: 0x08)
struct FFortCreativeServerDisplayOption : FTableRowBase {
	struct TSoftObjectPtr<UTexture> Image; // 0x08(0x28)
	struct FLinearColor Color; // 0x30(0x10)
};

// ScriptStruct FortniteUI.FortEmotePickerCategory
// Size: 0x28 (Inherited: 0x00)
struct FFortEmotePickerCategory {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct FortniteUI.FortEmotePickerSubCategoryIdentifier
// Size: 0x20 (Inherited: 0x00)
struct FFortEmotePickerSubCategoryIdentifier {
	struct FGameplayTag tag; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText Name; // 0x08(0x18)
};

// ScriptStruct FortniteUI.FortLeaderboardRequestIds
// Size: 0x20 (Inherited: 0x00)
struct FFortLeaderboardRequestIds {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct FortniteUI.EventScreenCMSResourceGroupOverride
// Size: 0x18 (Inherited: 0x00)
struct FEventScreenCMSResourceGroupOverride {
	int32_t ResourceValue; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString KeyArtOverrideURL; // 0x08(0x10)
};

// ScriptStruct FortniteUI.EventScreenCMSData
// Size: 0x1c0 (Inherited: 0x00)
struct FEventScreenCMSData {
	struct FString EventCMSId; // 0x00(0x10)
	struct FText EventName; // 0x10(0x18)
	struct FText EventDescription; // 0x28(0x18)
	struct FText ResourceHeader; // 0x40(0x18)
	struct FText StarterHeader; // 0x58(0x18)
	struct FText CompletionHeader; // 0x70(0x18)
	struct FText EventCTA; // 0x88(0x18)
	struct FText EventCTACompleted; // 0xa0(0x18)
	struct FString CTAIconURL; // 0xb8(0x10)
	struct FString KeyArtURL; // 0xc8(0x10)
	struct FLinearColor EventBackgroundColor1; // 0xd8(0x10)
	struct FLinearColor EventBackgroundColor2; // 0xe8(0x10)
	struct FLinearColor RewardBackgroundColor1; // 0xf8(0x10)
	struct FLinearColor RewardBackgroundColor2; // 0x108(0x10)
	struct FLinearColor RewardBackgroundColor3; // 0x118(0x10)
	struct FLinearColor AccentColor; // 0x128(0x10)
	struct FText MoreInfoHeader; // 0x138(0x18)
	struct FText MoreInfoSubHeader; // 0x150(0x18)
	struct FText MoreInfoBody; // 0x168(0x18)
	struct FText MoreInfoLegal; // 0x180(0x18)
	struct FText PurchaseLegal; // 0x198(0x18)
	struct TArray<struct FEventScreenCMSResourceGroupOverride> ResourceGroupOverrides; // 0x1b0(0x10)
};

// ScriptStruct FortniteUI.EventScreenCMSGroup
// Size: 0x10 (Inherited: 0x00)
struct FEventScreenCMSGroup {
	struct TArray<struct FEventScreenCMSData> EventScreens; // 0x00(0x10)
};

// ScriptStruct FortniteUI.FortMissionRewardInfo
// Size: 0xf0 (Inherited: 0x00)
struct FFortMissionRewardInfo {
	struct FSlateBrush Icon; // 0x00(0xc0)
	struct FText DisplayName; // 0xc0(0x18)
	struct UFortItem* Item; // 0xd8(0x08)
	bool bIsMissionAlertReward; // 0xe0(0x01)
	char pad_E1[0xf]; // 0xe1(0x0f)
};

// ScriptStruct FortniteUI.FortMissionDetails
// Size: 0x170 (Inherited: 0x00)
struct FFortMissionDetails {
	enum class EFortTheaterMapTileType TileType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText TheaterDisplayName; // 0x08(0x18)
	struct FText MissionName; // 0x20(0x18)
	struct FText MissionDescription; // 0x38(0x18)
	bool bIsGroupContent; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct UFortMissionGenerator* MissionDefinition; // 0x58(0x08)
	struct FText ZoneName; // 0x60(0x18)
	struct FText ZoneDescription; // 0x78(0x18)
	struct FText RegionThemeName; // 0x90(0x18)
	struct TSoftObjectPtr<USlateBrushAsset> RegionThemeIcon; // 0xa8(0x28)
	struct FText DifficultyName; // 0xd0(0x18)
	struct TArray<struct FFortMissionRewardInfo> MissionRewards; // 0xe8(0x10)
	struct FTimespan AvailableTime; // 0xf8(0x08)
	enum class ERatingsEnforcementType RatingsEnforcement; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	int32_t RequiredBaseRating; // 0x104(0x04)
	int32_t RecommendedBaseRating; // 0x108(0x04)
	int32_t MaxBaseRating; // 0x10c(0x04)
	int32_t ContentDifficultyLevel; // 0x110(0x04)
	bool bIsOnboarding; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
	int32_t LootLevel; // 0x118(0x04)
	bool bOverrideConningText; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
	struct FText ConningOverrideText; // 0x120(0x18)
	struct FString TheaterUniqueId; // 0x138(0x10)
	struct UFortCloudSaveItemDefinition* AssociatedCloudSaveItemDefinition; // 0x148(0x08)
	struct TArray<struct UFortGameplayModifierItemDefinition*> GameplayModifiers; // 0x150(0x10)
	struct TArray<struct FText> Objectives; // 0x160(0x10)
};

// ScriptStruct FortniteUI.UnlockableVariantPreviewInfo
// Size: 0x28 (Inherited: 0x00)
struct FUnlockableVariantPreviewInfo {
	bool bIsValid; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t SetNumber; // 0x04(0x04)
	int32_t SetCount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText UnlockCondition; // 0x10(0x18)
};

// ScriptStruct FortniteUI.FortFrontEndFeatureStruct
// Size: 0x18 (Inherited: 0x00)
struct FFortFrontEndFeatureStruct {
	enum class EFortFrontEndFeatureState CurrentState; // 0x00(0x01)
	enum class EFortFrontEndFeatureState ForcedState; // 0x01(0x01)
	enum class EFortFrontEndFeatureStateReason ForcedStateReason; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct FMulticastInlineDelegate ChangeDelegate; // 0x08(0x10)
};

// ScriptStruct FortniteUI.ViewVaultItemsParams
// Size: 0x18 (Inherited: 0x00)
struct FViewVaultItemsParams {
	struct TArray<struct UFortItemDefinition*> ItemsToView; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct FortniteUI.CheatMenuEntry
// Size: 0x40 (Inherited: 0x00)
struct FCheatMenuEntry {
	struct FString DevName; // 0x00(0x10)
	struct FString DisplayName; // 0x10(0x10)
	struct FString RichText; // 0x20(0x10)
	struct TArray<struct FString> ConsoleCommands; // 0x30(0x10)
};

// ScriptStruct FortniteUI.CheatMenuSection
// Size: 0x48 (Inherited: 0x00)
struct FCheatMenuSection {
	struct FString DevName; // 0x00(0x10)
	struct FString DisplayName; // 0x10(0x10)
	struct FString MinVersion; // 0x20(0x10)
	struct TArray<struct FCheatMenuEntry> Entries; // 0x30(0x10)
	bool bExpanded; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct FortniteUI.NotificationWidgetClass
// Size: 0x20 (Inherited: 0x00)
struct FNotificationWidgetClass {
	struct UFortNotificationEntry* NotificationWidgetClass; // 0x00(0x08)
	int32_t InitialPoolSize; // 0x08(0x04)
	bool bCanIncreasePoolSizeAtRunTime; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct TArray<struct UFortNotificationEntry*> WidgetPool; // 0x10(0x10)
};

// ScriptStruct FortniteUI.FortHeroNamesData
// Size: 0x38 (Inherited: 0x08)
struct FFortHeroNamesData : FTableRowBase {
	struct FString FirstName; // 0x08(0x10)
	struct FString NickName; // 0x18(0x10)
	struct FString LastName; // 0x28(0x10)
};

// ScriptStruct FortniteUI.FortBasicMissionInfo
// Size: 0x4f0 (Inherited: 0x00)
struct FFortBasicMissionInfo {
	struct FText MissionName; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
	struct FFortMultiSizeBrush MissionIcons; // 0x20(0x480)
	struct FText TheaterName; // 0x4a0(0x18)
	struct FText DifficultyName; // 0x4b8(0x18)
	struct UMediaSource* EndOfMissionMediaSource; // 0x4d0(0x08)
	struct UMediaSource* EndOfMissionMediaSourceStreamed; // 0x4d8(0x08)
	bool bSkipEndOfMissionVideo; // 0x4e0(0x01)
	bool bIsGroupContent; // 0x4e1(0x01)
	char pad_4E2[0xe]; // 0x4e2(0x0e)
};

// ScriptStruct FortniteUI.FortItemDelta
// Size: 0x10 (Inherited: 0x00)
struct FFortItemDelta {
	struct UFortItemDefinition* ItemDefinition; // 0x00(0x08)
	int32_t BaseAmount; // 0x08(0x04)
	int32_t DeltaAmount; // 0x0c(0x04)
};

// ScriptStruct FortniteUI.ContextPosition
// Size: 0x20 (Inherited: 0x00)
struct FContextPosition {
	enum class EContextPositionPlatform Platform; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FVector2D Position; // 0x08(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x18(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct FortniteUI.FortActionBeingUnbound
// Size: 0x08 (Inherited: 0x00)
struct FFortActionBeingUnbound {
	struct FName ActionName; // 0x00(0x04)
	int32_t InputIndex; // 0x04(0x04)
};

// ScriptStruct FortniteUI.FortItemListFilter
// Size: 0x18 (Inherited: 0x00)
struct FFortItemListFilter {
	struct FString SearchText; // 0x00(0x10)
	enum class EFortInventoryFilter FilterType; // 0x10(0x01)
	bool bInStorageVault; // 0x11(0x01)
	bool bIncludeVaultOverflow; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
};

// ScriptStruct FortniteUI.FortItemCard_PowerRatingBlock_Configuration
// Size: 0x150 (Inherited: 0x00)
struct FFortItemCard_PowerRatingBlock_Configuration {
	char pad_0[0x10]; // 0x00(0x10)
	struct FSlateBrush MoonbeamBorderBrush; // 0x10(0xc0)
	struct FMargin MoonbeamBorderExteriorPadding; // 0xd0(0x10)
	struct FMargin MoonbeamBorderPadding; // 0xe0(0x10)
	struct FMargin CustomRatingInternalPadding; // 0xf0(0x10)
	struct FVector2D CustomRatingIconSize; // 0x100(0x10)
	struct TSoftClassPtr<UObject> CustomRatingTextStyle; // 0x110(0x28)
	struct FVector2D ComparisonIndicatorSize; // 0x138(0x10)
	char pad_148[0x8]; // 0x148(0x08)
};

// ScriptStruct FortniteUI.FortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration
// Size: 0x330 (Inherited: 0x150)
struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration : FFortItemCard_PowerRatingBlock_Configuration {
	struct FSlateBrush PersonnelPowerRatingIconBrush; // 0x150(0xc0)
	struct TSoftClassPtr<UObject> PersonnelPowerRatingTextStyle; // 0x210(0x28)
	char pad_238[0x8]; // 0x238(0x08)
	struct FSlateBrush SchematicPowerRatingIconBrush; // 0x240(0xc0)
	struct TSoftClassPtr<UObject> SchematicPowerRatingTextStyle; // 0x300(0x28)
	char pad_328[0x8]; // 0x328(0x08)
};

// ScriptStruct FortniteUI.FortItemCard_PowerRatingBlock_ItemInstance_Configuration
// Size: 0x240 (Inherited: 0x150)
struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration : FFortItemCard_PowerRatingBlock_Configuration {
	struct FSlateBrush PowerRatingIconBrush; // 0x150(0xc0)
	struct TSoftClassPtr<UObject> PowerRatingTextStyle; // 0x210(0x28)
	char pad_238[0x8]; // 0x238(0x08)
};

// ScriptStruct FortniteUI.FortItemCard_StackCountBlock_Configuration
// Size: 0x30 (Inherited: 0x00)
struct FFortItemCard_StackCountBlock_Configuration {
	bool bShowShorthandStackCount; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftClassPtr<UObject> TextStyle; // 0x08(0x28)
};

// ScriptStruct FortniteUI.FortItemCard_NameplateBorder_Configuration
// Size: 0xd0 (Inherited: 0x00)
struct FFortItemCard_NameplateBorder_Configuration {
	struct FMargin Padding; // 0x00(0x10)
	struct FSlateBrush Brush; // 0x10(0xc0)
};

// ScriptStruct FortniteUI.FortItemCard_DefenderWeaponTypeIcon_Configuration
// Size: 0x10 (Inherited: 0x00)
struct FFortItemCard_DefenderWeaponTypeIcon_Configuration {
	struct FVector2D IconConstraints; // 0x00(0x10)
};

// ScriptStruct FortniteUI.FortItemCard_DetailAreaBorder_Configuration
// Size: 0x14 (Inherited: 0x00)
struct FFortItemCard_DetailAreaBorder_Configuration {
	float MinimumHeight; // 0x00(0x04)
	struct FMargin Padding; // 0x04(0x10)
};

// ScriptStruct FortniteUI.FortItemCard_TierMeter_Configuration
// Size: 0x18 (Inherited: 0x00)
struct FFortItemCard_TierMeter_Configuration {
	struct FVector2D PipSize; // 0x00(0x10)
	float InterPipPadding; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct FortniteUI.FortItemCard_LevelMeter_Configuration
// Size: 0x14 (Inherited: 0x00)
struct FFortItemCard_LevelMeter_Configuration {
	float MeterThickness; // 0x00(0x04)
	struct FMargin MeterPadding; // 0x04(0x10)
};

// ScriptStruct FortniteUI.FortItemCard_DurabilityMeter_Configuration
// Size: 0x14 (Inherited: 0x00)
struct FFortItemCard_DurabilityMeter_Configuration {
	float MeterThickness; // 0x00(0x04)
	struct FMargin MeterPadding; // 0x04(0x10)
};

// ScriptStruct FortniteUI.FortItemCard_XL_PersonnelAndSchematics_Configuration
// Size: 0x560 (Inherited: 0x00)
struct FFortItemCard_XL_PersonnelAndSchematics_Configuration {
	struct FMargin BackgroundPadding; // 0x00(0x10)
	struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration PowerRatingBlock; // 0x10(0x330)
	struct FVector2D BookmarkImageSize; // 0x340(0x10)
	struct FFortItemCard_NameplateBorder_Configuration Nameplate; // 0x350(0xd0)
	struct TSoftClassPtr<UObject> ItemNameTextStyle; // 0x420(0x28)
	struct FVector2D LeadSurvivorTypeIconSize; // 0x448(0x10)
	struct FVector2D FirstIconSlotSize; // 0x458(0x10)
	float PaddingBetweenIconSlots; // 0x468(0x04)
	char pad_46C[0x4]; // 0x46c(0x04)
	struct FVector2D SecondIconSlotSize; // 0x470(0x10)
	struct FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon; // 0x480(0x10)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder; // 0x490(0x14)
	float RarityNameTextLeftPadding; // 0x4a4(0x04)
	struct TSoftClassPtr<UObject> RarityNameTextStyle; // 0x4a8(0x28)
	float ClassIconImageLeftPadding; // 0x4d0(0x04)
	char pad_4D4[0x4]; // 0x4d4(0x04)
	struct FVector2D ClassIconSize; // 0x4d8(0x10)
	float PaddingBetweenClassIconAndName; // 0x4e8(0x04)
	char pad_4EC[0x4]; // 0x4ec(0x04)
	struct TSoftClassPtr<UObject> ClassNameTextStyle; // 0x4f0(0x28)
	float TierMeterLeftPadding; // 0x518(0x04)
	char pad_51C[0x4]; // 0x51c(0x04)
	struct FFortItemCard_TierMeter_Configuration TierMeter; // 0x520(0x18)
	struct FMargin IconSlotOverNameplatePadding; // 0x538(0x10)
	struct FVector2D IconSlotOverNameplateSize; // 0x548(0x10)
	char pad_558[0x8]; // 0x558(0x08)
};

// ScriptStruct FortniteUI.FortItemCard_XL_ItemInstance_Configuration
// Size: 0x320 (Inherited: 0x00)
struct FFortItemCard_XL_ItemInstance_Configuration {
	struct FMargin BackgroundPadding; // 0x00(0x10)
	struct FMargin PowerRatingBlockPadding; // 0x10(0x10)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock; // 0x20(0x240)
	struct FVector2D BookmarkImageSize; // 0x260(0x10)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock; // 0x270(0x30)
	struct FMargin TraitBoxPadding; // 0x2a0(0x10)
	struct FVector2D FirstTraitSize; // 0x2b0(0x10)
	float PaddingBetweenTraitIcons; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct FVector2D SecondTraitSize; // 0x2c8(0x10)
	struct FMargin TierMeterPadding; // 0x2d8(0x10)
	struct FFortItemCard_TierMeter_Configuration TierMeter; // 0x2e8(0x18)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter; // 0x300(0x14)
	char pad_314[0xc]; // 0x314(0x0c)
};

// ScriptStruct FortniteUI.FortItemCard_XL_TransformKey_Configuration
// Size: 0x50 (Inherited: 0x00)
struct FFortItemCard_XL_TransformKey_Configuration {
	struct FMargin BackgroundPadding; // 0x00(0x10)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock; // 0x10(0x30)
	struct FVector2D TransformKeyIconSize; // 0x40(0x10)
};

// ScriptStruct FortniteUI.FortItemCard_L_PersonnelAndSchematics_Configuration
// Size: 0x4c0 (Inherited: 0x00)
struct FFortItemCard_L_PersonnelAndSchematics_Configuration {
	struct FMargin BackgroundPadding; // 0x00(0x10)
	struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration PowerRatingBlock; // 0x10(0x330)
	struct FVector2D BookmarkImageSize; // 0x340(0x10)
	struct FFortItemCard_NameplateBorder_Configuration Nameplate; // 0x350(0xd0)
	struct FVector2D ClassIconSize; // 0x420(0x10)
	struct FVector2D LeadSurvivorTypeIconSize; // 0x430(0x10)
	struct FVector2D FirstIconSlotSize; // 0x440(0x10)
	float PaddingBetweenIconSlots; // 0x450(0x04)
	char pad_454[0x4]; // 0x454(0x04)
	struct FVector2D SecondIconSlotSize; // 0x458(0x10)
	struct FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon; // 0x468(0x10)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder; // 0x478(0x14)
	struct FFortItemCard_LevelMeter_Configuration LevelMeter; // 0x48c(0x14)
	float TierMeterLeftPadding; // 0x4a0(0x04)
	char pad_4A4[0x4]; // 0x4a4(0x04)
	struct FFortItemCard_TierMeter_Configuration TierMeter; // 0x4a8(0x18)
};

// ScriptStruct FortniteUI.FortItemCard_L_ItemInstance_Configuration
// Size: 0x320 (Inherited: 0x00)
struct FFortItemCard_L_ItemInstance_Configuration {
	struct FMargin BackgroundPadding; // 0x00(0x10)
	struct FMargin PowerRatingBlockPadding; // 0x10(0x10)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock; // 0x20(0x240)
	struct FVector2D BookmarkImageSize; // 0x260(0x10)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock; // 0x270(0x30)
	struct FMargin TraitBoxPadding; // 0x2a0(0x10)
	struct FVector2D FirstTraitSize; // 0x2b0(0x10)
	float PaddingBetweenTraitIcons; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct FVector2D SecondTraitSize; // 0x2c8(0x10)
	struct FMargin TierMeterPadding; // 0x2d8(0x10)
	struct FFortItemCard_TierMeter_Configuration TierMeter; // 0x2e8(0x18)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter; // 0x300(0x14)
	char pad_314[0xc]; // 0x314(0x0c)
};

// ScriptStruct FortniteUI.FortItemCard_L_TransformKey_Configuration
// Size: 0x50 (Inherited: 0x00)
struct FFortItemCard_L_TransformKey_Configuration {
	struct FMargin BackgroundPadding; // 0x00(0x10)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock; // 0x10(0x30)
	struct FVector2D TransformKeyIconSize; // 0x40(0x10)
};

// ScriptStruct FortniteUI.FortItemCard_M_PersonnelAndSchematics_Configuration
// Size: 0x4c0 (Inherited: 0x00)
struct FFortItemCard_M_PersonnelAndSchematics_Configuration {
	struct FMargin BackgroundPadding; // 0x00(0x10)
	struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration PowerRatingBlock; // 0x10(0x330)
	struct FVector2D BookmarkImageSize; // 0x340(0x10)
	struct FFortItemCard_NameplateBorder_Configuration Nameplate; // 0x350(0xd0)
	struct FVector2D ClassIconSize; // 0x420(0x10)
	struct FVector2D LeadSurvivorTypeIconSize; // 0x430(0x10)
	struct FVector2D FirstIconSlotSize; // 0x440(0x10)
	float PaddingBetweenIconSlots; // 0x450(0x04)
	char pad_454[0x4]; // 0x454(0x04)
	struct FVector2D SecondIconSlotSize; // 0x458(0x10)
	struct FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon; // 0x468(0x10)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder; // 0x478(0x14)
	struct FFortItemCard_LevelMeter_Configuration LevelMeter; // 0x48c(0x14)
	float TierMeterLeftPadding; // 0x4a0(0x04)
	char pad_4A4[0x4]; // 0x4a4(0x04)
	struct FFortItemCard_TierMeter_Configuration TierMeter; // 0x4a8(0x18)
};

// ScriptStruct FortniteUI.FortItemCard_M_ItemInstance_Configuration
// Size: 0x320 (Inherited: 0x00)
struct FFortItemCard_M_ItemInstance_Configuration {
	struct FMargin BackgroundPadding; // 0x00(0x10)
	struct FMargin PowerRatingBlockPadding; // 0x10(0x10)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock; // 0x20(0x240)
	struct FVector2D BookmarkImageSize; // 0x260(0x10)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock; // 0x270(0x30)
	struct FMargin TraitBoxPadding; // 0x2a0(0x10)
	struct FVector2D FirstTraitSize; // 0x2b0(0x10)
	float PaddingBetweenTraitIcons; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct FVector2D SecondTraitSize; // 0x2c8(0x10)
	struct FMargin TierMeterPadding; // 0x2d8(0x10)
	struct FFortItemCard_TierMeter_Configuration TierMeter; // 0x2e8(0x18)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter; // 0x300(0x14)
	char pad_314[0xc]; // 0x314(0x0c)
};

// ScriptStruct FortniteUI.FortItemCard_M_TransformKey_Configuration
// Size: 0x50 (Inherited: 0x00)
struct FFortItemCard_M_TransformKey_Configuration {
	struct FMargin BackgroundPadding; // 0x00(0x10)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock; // 0x10(0x30)
	struct FVector2D TransformKeyIconSize; // 0x40(0x10)
};

// ScriptStruct FortniteUI.FortItemCard_S_PersonnelAndSchematics_Configuration
// Size: 0x4c0 (Inherited: 0x00)
struct FFortItemCard_S_PersonnelAndSchematics_Configuration {
	struct FMargin BackgroundPadding; // 0x00(0x10)
	struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration PowerRatingBlock; // 0x10(0x330)
	struct FVector2D BookmarkImageSize; // 0x340(0x10)
	struct FFortItemCard_NameplateBorder_Configuration Nameplate; // 0x350(0xd0)
	struct FVector2D ClassIconSize; // 0x420(0x10)
	struct FVector2D LeadSurvivorTypeIconSize; // 0x430(0x10)
	struct FVector2D FirstIconSlotSize; // 0x440(0x10)
	float PaddingBetweenIconSlots; // 0x450(0x04)
	char pad_454[0x4]; // 0x454(0x04)
	struct FVector2D SecondIconSlotSize; // 0x458(0x10)
	struct FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon; // 0x468(0x10)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder; // 0x478(0x14)
	struct FFortItemCard_LevelMeter_Configuration LevelMeter; // 0x48c(0x14)
	float TierMeterLeftPadding; // 0x4a0(0x04)
	char pad_4A4[0x4]; // 0x4a4(0x04)
	struct FFortItemCard_TierMeter_Configuration TierMeter; // 0x4a8(0x18)
};

// ScriptStruct FortniteUI.FortItemCard_S_ItemInstance_Configuration
// Size: 0x300 (Inherited: 0x00)
struct FFortItemCard_S_ItemInstance_Configuration {
	struct FMargin BackgroundPadding; // 0x00(0x10)
	struct FMargin PowerRatingBlockPadding; // 0x10(0x10)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock; // 0x20(0x240)
	struct FVector2D BookmarkImageSize; // 0x260(0x10)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock; // 0x270(0x30)
	struct FMargin TraitBoxPadding; // 0x2a0(0x10)
	struct FVector2D FirstTraitSize; // 0x2b0(0x10)
	struct FMargin TierMeterPadding; // 0x2c0(0x10)
	struct FFortItemCard_TierMeter_Configuration TierMeter; // 0x2d0(0x18)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter; // 0x2e8(0x14)
	char pad_2FC[0x4]; // 0x2fc(0x04)
};

// ScriptStruct FortniteUI.FortItemCard_S_TransformKey_Configuration
// Size: 0x50 (Inherited: 0x00)
struct FFortItemCard_S_TransformKey_Configuration {
	struct FMargin BackgroundPadding; // 0x00(0x10)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock; // 0x10(0x30)
	struct FVector2D TransformKeyIconSize; // 0x40(0x10)
};

// ScriptStruct FortniteUI.FortItemCard_XS_PersonnelAndSchematics_Configuration
// Size: 0x48 (Inherited: 0x00)
struct FFortItemCard_XS_PersonnelAndSchematics_Configuration {
	struct FMargin BackgroundPadding; // 0x00(0x10)
	struct FVector2D BookmarkImageSize; // 0x10(0x10)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder; // 0x20(0x14)
	char pad_34[0x4]; // 0x34(0x04)
	struct FVector2D AvailableUpgradeIconSize; // 0x38(0x10)
};

// ScriptStruct FortniteUI.FortItemCard_XS_ItemInstance_Configuration
// Size: 0x2e0 (Inherited: 0x00)
struct FFortItemCard_XS_ItemInstance_Configuration {
	struct FMargin BackgroundPadding; // 0x00(0x10)
	struct FMargin PowerRatingBlockPadding; // 0x10(0x10)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock; // 0x20(0x240)
	struct FVector2D BookmarkImageSize; // 0x260(0x10)
	struct FMargin TraitBoxPadding; // 0x270(0x10)
	struct FVector2D FirstTraitSize; // 0x280(0x10)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock; // 0x290(0x30)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter; // 0x2c0(0x14)
	char pad_2D4[0xc]; // 0x2d4(0x0c)
};

// ScriptStruct FortniteUI.FortItemCard_XS_TransformKey_Configuration
// Size: 0x50 (Inherited: 0x00)
struct FFortItemCard_XS_TransformKey_Configuration {
	struct FMargin BackgroundPadding; // 0x00(0x10)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock; // 0x10(0x30)
	struct FVector2D TransformKeyIconSize; // 0x40(0x10)
};

// ScriptStruct FortniteUI.FortItemCard_XXS_ItemInstance_Configuration
// Size: 0x30 (Inherited: 0x00)
struct FFortItemCard_XXS_ItemInstance_Configuration {
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock; // 0x00(0x30)
};

// ScriptStruct FortniteUI.FortItemListViewConfig
// Size: 0xc0 (Inherited: 0x00)
struct FFortItemListViewConfig {
	char pad_0[0xc0]; // 0x00(0xc0)
};

// ScriptStruct FortniteUI.FortItemManagementInventoryFilterTabLabelInfo
// Size: 0xf0 (Inherited: 0xe0)
struct FFortItemManagementInventoryFilterTabLabelInfo : FFortTabButtonLabelInfo {
	struct FName FilterTabNameId; // 0xe0(0x04)
	char pad_E4[0xc]; // 0xe4(0x0c)
};

// ScriptStruct FortniteUI.QuickbarEquipSlotIndicesConfig
// Size: 0x10 (Inherited: 0x00)
struct FQuickbarEquipSlotIndicesConfig {
	struct TArray<int32_t> EquipSlotIndices; // 0x00(0x10)
};

// ScriptStruct FortniteUI.ItemPresentationRestrictionData
// Size: 0x40 (Inherited: 0x00)
struct FItemPresentationRestrictionData {
	struct FText HeaderText; // 0x00(0x18)
	struct TSoftObjectPtr<UObject> Icon; // 0x18(0x28)
};

// ScriptStruct FortniteUI.CurrencyDataWithGiftBox
// Size: 0x10 (Inherited: 0x00)
struct FCurrencyDataWithGiftBox {
	struct TArray<struct FCurrencyData> GiftBoxCurrencyData; // 0x00(0x10)
};

// ScriptStruct FortniteUI.SceneTransitionOptions
// Size: 0x02 (Inherited: 0x00)
struct FSceneTransitionOptions {
	enum class ESceneTransitionType TRANSITION; // 0x00(0x01)
	bool bKeepInputRotation; // 0x01(0x01)
};

// ScriptStruct FortniteUI.InterpolatedTransitionCamera
// Size: 0x70 (Inherited: 0x00)
struct FInterpolatedTransitionCamera {
	struct FTransform CameraTransform; // 0x00(0x60)
	float FieldOfView; // 0x60(0x04)
	char pad_64[0xc]; // 0x64(0x0c)
};

// ScriptStruct FortniteUI.FortItemEntryPreviewData
// Size: 0x08 (Inherited: 0x00)
struct FFortItemEntryPreviewData {
	int32_t Quantity; // 0x00(0x04)
	enum class EFortItemInspectionMode InspectMode; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct FortniteUI.MeasuredText
// Size: 0x30 (Inherited: 0x00)
struct FMeasuredText {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct FortniteUI.FortMaterialProgressBarSectionStyle
// Size: 0x30 (Inherited: 0x00)
struct FFortMaterialProgressBarSectionStyle {
	bool bGradientBar; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName BarParamName; // 0x04(0x04)
	struct FName BarColorOneParamName; // 0x08(0x04)
	struct FName BarColorTwoParamName; // 0x0c(0x04)
	struct FLinearColor BarColorOne; // 0x10(0x10)
	struct FLinearColor BarColorTwo; // 0x20(0x10)
};

// ScriptStruct FortniteUI.FortMaterialProgressBarSectionInfo
// Size: 0x34 (Inherited: 0x00)
struct FFortMaterialProgressBarSectionInfo {
	struct FFortMaterialProgressBarSectionStyle SectionStyle; // 0x00(0x30)
	float Percent; // 0x30(0x04)
};

// ScriptStruct FortniteUI.TagFilterOverride
// Size: 0x48 (Inherited: 0x00)
struct FTagFilterOverride {
	struct FGameplayTagContainer OverridingTags; // 0x00(0x20)
	enum class ETagComparisonType ComparisonTypeToOverride; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FGameplayTagContainer TagsToFilterOut; // 0x28(0x20)
};

// ScriptStruct FortniteUI.TagVisibility
// Size: 0x28 (Inherited: 0x00)
struct FTagVisibility {
	struct FGameplayTagContainer Tags; // 0x00(0x20)
	enum class ETagComparisonType ComparisonType; // 0x20(0x01)
	enum class ESlateVisibility Visibility; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct FortniteUI.IconPicker
// Size: 0x30 (Inherited: 0x00)
struct FIconPicker {
	struct FGameplayTagContainer Tags; // 0x00(0x20)
	enum class ETagComparisonType ComparisonType; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct UPaperSprite* Sprite; // 0x28(0x08)
};

// ScriptStruct FortniteUI.ActionBindingIconPicker
// Size: 0x18 (Inherited: 0x00)
struct FActionBindingIconPicker {
	struct TArray<struct FName> ActionNames; // 0x00(0x10)
	struct UPaperSprite* Sprite; // 0x10(0x08)
};

// ScriptStruct FortniteUI.ActionBindingVisibility
// Size: 0x18 (Inherited: 0x00)
struct FActionBindingVisibility {
	struct TArray<struct FName> ActionNames; // 0x00(0x10)
	enum class EActionBindingComparisonType ComparisonType; // 0x10(0x01)
	enum class ESlateVisibility Visibility; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct FortniteUI.GameplayMessageVisibility
// Size: 0x08 (Inherited: 0x00)
struct FGameplayMessageVisibility {
	struct FEventMessageTag EventMessageTag; // 0x00(0x04)
	enum class ESlateVisibility MessageReceivedVisibility; // 0x04(0x01)
	enum class ESlateVisibility MessageStateClearedVisibility; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
};

// ScriptStruct FortniteUI.QuickHealPriorityExtension
// Size: 0x58 (Inherited: 0x00)
struct FQuickHealPriorityExtension {
	struct FGameplayTag QuickhealPriorityGroupTag; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<struct FGameplayTag, int32_t> GameplayTagInsertions; // 0x08(0x50)
};

// ScriptStruct FortniteUI.FortMobileContextFilter
// Size: 0x40 (Inherited: 0x00)
struct FFortMobileContextFilter {
	struct FGameplayTagContainer ShownInContexts; // 0x00(0x20)
	struct FGameplayTagContainer HiddenInContexts; // 0x20(0x20)
};

// ScriptStruct FortniteUI.FortMobileHUDContextLayout
// Size: 0x20 (Inherited: 0x00)
struct FFortMobileHUDContextLayout {
	char pad_0[0x10]; // 0x00(0x10)
	struct UFortMobileHUDContextModel* HUDContextModel; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct FortniteUI.FortMobileHUDContextModelExtension
// Size: 0x28 (Inherited: 0x00)
struct FFortMobileHUDContextModelExtension {
	struct FGameplayTag ContextLayoutTag; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FGameplayTagContainer UseableHUDWidgetTags; // 0x08(0x20)
};

// ScriptStruct FortniteUI.FortMobileHUDLayoutProfile
// Size: 0x40 (Inherited: 0x00)
struct FFortMobileHUDLayoutProfile {
	struct FText ProfileName; // 0x00(0x18)
	struct TArray<struct FFortMobileHUDContextLayout> ContextLayouts; // 0x18(0x10)
	char pad_28[0x18]; // 0x28(0x18)
};

// ScriptStruct FortniteUI.UserAction
// Size: 0x18 (Inherited: 0x00)
struct FUserAction {
	char pad_0[0x8]; // 0x00(0x08)
	struct FString ActionName; // 0x08(0x10)
};

// ScriptStruct FortniteUI.UserGenericAction
// Size: 0x58 (Inherited: 0x18)
struct FUserGenericAction : FUserAction {
	struct FFortMobileHUDProfileBase ActiveProfile; // 0x18(0x40)
};

// ScriptStruct FortniteUI.UserRenameAction
// Size: 0x38 (Inherited: 0x18)
struct FUserRenameAction : FUserAction {
	struct FString PreviousName; // 0x18(0x10)
	struct FString NewName; // 0x28(0x10)
};

// ScriptStruct FortniteUI.UserSelectProfileAction
// Size: 0x98 (Inherited: 0x18)
struct FUserSelectProfileAction : FUserAction {
	struct FFortMobileHUDProfileBase PreviousProfile; // 0x18(0x40)
	struct FFortMobileHUDProfileBase NewProfile; // 0x58(0x40)
};

// ScriptStruct FortniteUI.FortMobileHUDWidgetLayout
// Size: 0x58 (Inherited: 0x00)
struct FFortMobileHUDWidgetLayout {
	struct FAnchorData LayoutData; // 0x00(0x40)
	int32_t ZOrder; // 0x40(0x04)
	char pad_44[0x14]; // 0x44(0x14)
};

// ScriptStruct FortniteUI.HUDWidgetRegistryEntry
// Size: 0x48 (Inherited: 0x00)
struct FHUDWidgetRegistryEntry {
	struct FGameplayTag HUDWidgetTag; // 0x00(0x04)
	bool bIsMandatory; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float MandatoryOnScreenPercent; // 0x08(0x04)
	int32_t MaximumAmountOfInstances; // 0x0c(0x04)
	int32_t ZOrder; // 0x10(0x04)
	bool bHasDynamicUIUniqueID; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FName DynamicUIUniqueID; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UFortMobileHUDElement* HUDWidgetClass; // 0x20(0x08)
	struct UFortMobileHUDElementProxy* HUDWidgetProxyClass; // 0x28(0x08)
	struct UHUDLayoutToolV2_WidgetPreview* HUDWidgetPreviewClass; // 0x30(0x08)
	struct TArray<struct UFortMobileHUDWidgetCustomPropertyModel*> CustomPropertyModels; // 0x38(0x10)
};

// ScriptStruct FortniteUI.HUDWidgetBehaviorRegistryEntry
// Size: 0x10 (Inherited: 0x00)
struct FHUDWidgetBehaviorRegistryEntry {
	struct FGameplayTag HUDWidgetBehaviorTag; // 0x00(0x04)
	struct FGameplayTag HUDWidgetOverrideTag; // 0x04(0x04)
	struct UHUDWidgetBehavior* HUDWidgetBehaviorClass; // 0x08(0x08)
};

// ScriptStruct FortniteUI.HUDWidgetSchemaInitializer
// Size: 0x10 (Inherited: 0x00)
struct FHUDWidgetSchemaInitializer {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct FortniteUI.HUDWidgetBehaviorExtensionsRegistryEntry
// Size: 0x18 (Inherited: 0x00)
struct FHUDWidgetBehaviorExtensionsRegistryEntry {
	struct FGameplayTag HUDWidgetBehaviorTag; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct UFortMobileHUDWidgetBehaviorExtension*> HUDWidgetBehaviorExtensions; // 0x08(0x10)
};

// ScriptStruct FortniteUI.FortModalContainerSizeEntry
// Size: 0x1c (Inherited: 0x00)
struct FFortModalContainerSizeEntry {
	float AbsoluteWidth; // 0x00(0x04)
	float TopPercent; // 0x04(0x04)
	float MiddlePercent; // 0x08(0x04)
	float BottomPercent; // 0x0c(0x04)
	float VerticalPadding; // 0x10(0x04)
	float HorizontalPadding; // 0x14(0x04)
	float ContentPadding; // 0x18(0x04)
};

// ScriptStruct FortniteUI.FortMtxDetailsAttribute
// Size: 0x30 (Inherited: 0x00)
struct FFortMtxDetailsAttribute {
	struct FText Name; // 0x00(0x18)
	struct FText Value; // 0x18(0x18)
};

// ScriptStruct FortniteUI.FortMtxDescriptionAndDetails
// Size: 0x28 (Inherited: 0x00)
struct FFortMtxDescriptionAndDetails {
	struct FText ShortDescription; // 0x00(0x18)
	struct TArray<struct FFortMtxDetailsAttribute> AssociatedDetailsAttributes; // 0x18(0x10)
};

// ScriptStruct FortniteUI.FortMtxGradient
// Size: 0x20 (Inherited: 0x00)
struct FFortMtxGradient {
	struct FLinearColor Start; // 0x00(0x10)
	struct FLinearColor Stop; // 0x10(0x10)
};

// ScriptStruct FortniteUI.NPCCommandEntry
// Size: 0xf0 (Inherited: 0x00)
struct FNPCCommandEntry {
	struct UAthenaEmojiItemDefinition* EmojiItemDefinition; // 0x00(0x08)
	struct FText Label; // 0x08(0x18)
	struct FSlateBrush Brush; // 0x20(0xc0)
	enum class PingCommandType CommandType; // 0xe0(0x01)
	char pad_E1[0xf]; // 0xe1(0x0f)
};

// ScriptStruct FortniteUI.FortUIPerkTier
// Size: 0x18 (Inherited: 0x00)
struct FFortUIPerkTier {
	struct UFortHeroSpecialization* HeroSpecialization; // 0x00(0x08)
	struct UFortHero* CurrentHero; // 0x08(0x08)
	enum class EFortItemTier Tier; // 0x10(0x01)
	bool bIsUpgrade; // 0x11(0x01)
	bool bIsEvolution; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
};

// ScriptStruct FortniteUI.FortUIPerk
// Size: 0x98 (Inherited: 0x00)
struct FFortUIPerk {
	struct FFortSpecializationSlot SpecializationSlot; // 0x00(0x88)
	struct UFortHero* Hero; // 0x88(0x08)
	enum class EFortItemTier Tier; // 0x90(0x01)
	enum class EFortSupportBonusType SupportBonusType; // 0x91(0x01)
	bool bIsTierPerk; // 0x92(0x01)
	bool bIsUpgrade; // 0x93(0x01)
	bool bIsEvolution; // 0x94(0x01)
	bool bIsEvolutionBranch; // 0x95(0x01)
	char pad_96[0x2]; // 0x96(0x02)
};

// ScriptStruct FortniteUI.FortPhoenixLevelProgressionRewards
// Size: 0x20 (Inherited: 0x00)
struct FFortPhoenixLevelProgressionRewards {
	int32_t NextRewardLevel; // 0x00(0x04)
	struct FFortItemQuantityPair NextReward; // 0x04(0x0c)
	int32_t NextMajorRewardLevel; // 0x10(0x04)
	struct FFortItemQuantityPair NextMajorReward; // 0x14(0x0c)
};

// ScriptStruct FortniteUI.FortPickerTemporaryWheelItem
// Size: 0x20 (Inherited: 0x00)
struct FFortPickerTemporaryWheelItem {
	struct FText LabelOverride; // 0x00(0x18)
	struct UFortItemDefinition* Item; // 0x18(0x08)
};

// ScriptStruct FortniteUI.FortPickerTemporaryWheel
// Size: 0x30 (Inherited: 0x00)
struct FFortPickerTemporaryWheel {
	char pad_0[0x20]; // 0x00(0x20)
	struct TArray<struct FFortPickerTemporaryWheelItem> Items; // 0x20(0x10)
};

// ScriptStruct FortniteUI.TrackedTrapTimeAndCount
// Size: 0x08 (Inherited: 0x00)
struct FTrackedTrapTimeAndCount {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct FortniteUI.RadialOptionData
// Size: 0x110 (Inherited: 0x00)
struct FRadialOptionData {
	struct FText Label; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
	struct FSlateBrush Brush; // 0x20(0xc0)
	struct TSoftObjectPtr<UTexture2D> SoftIcon; // 0xe0(0x28)
	char pad_108[0x8]; // 0x108(0x08)
};

// ScriptStruct FortniteUI.BuildingCategoryOptionData
// Size: 0x110 (Inherited: 0x110)
struct FBuildingCategoryOptionData : FRadialOptionData {
	enum class EFortBuildingType BuildingType; // 0x108(0x01)
};

// ScriptStruct FortniteUI.BuildingOptionData
// Size: 0x120 (Inherited: 0x110)
struct FBuildingOptionData : FRadialOptionData {
	struct FString ClassSuffix; // 0x108(0x10)
	bool ClassMirrored; // 0x118(0x01)
};

// ScriptStruct FortniteUI.ItemCategoryOptionData
// Size: 0x120 (Inherited: 0x110)
struct FItemCategoryOptionData : FRadialOptionData {
	struct FString TemplatePrefix; // 0x108(0x10)
	enum class EBuildingAttachmentType BuildingAttachmentType; // 0x118(0x01)
};

// ScriptStruct FortniteUI.ChatOptionData
// Size: 0x120 (Inherited: 0x110)
struct FChatOptionData : FRadialOptionData {
	struct FText ChatText; // 0x108(0x18)
};

// ScriptStruct FortniteUI.SquadChatOptionData
// Size: 0x120 (Inherited: 0x110)
struct FSquadChatOptionData : FRadialOptionData {
	struct FText ChatText; // 0x108(0x18)
};

// ScriptStruct FortniteUI.MapNoteOptionData
// Size: 0x120 (Inherited: 0x110)
struct FMapNoteOptionData : FRadialOptionData {
	struct FText MapNoteText; // 0x108(0x18)
};

// ScriptStruct FortniteUI.EmoteOptionData
// Size: 0x110 (Inherited: 0x110)
struct FEmoteOptionData : FRadialOptionData {
	struct FName EmoteCommand; // 0x108(0x04)
};

// ScriptStruct FortniteUI.ItemDefOptionData
// Size: 0x110 (Inherited: 0x110)
struct FItemDefOptionData : FRadialOptionData {
	struct UObject* ItemDef; // 0x108(0x08)
};

// ScriptStruct FortniteUI.SquadQuickChatOptionData
// Size: 0x120 (Inherited: 0x110)
struct FSquadQuickChatOptionData : FRadialOptionData {
	struct FAthenaQuickChatActiveEntry ChatEntry; // 0x108(0x14)
	bool bEnabled; // 0x11c(0x01)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSCustomTextReplacement
// Size: 0x20 (Inherited: 0x00)
struct FFortPlayerSurveyCMSCustomTextReplacement {
	struct FString TextReplacementTag; // 0x00(0x10)
	struct TArray<struct FFortPlayerSurveyLocalizableText> TextReplacementValues; // 0x10(0x10)
};

// ScriptStruct FortniteUI.FortPlayerSurveyLocalizableText
// Size: 0x20 (Inherited: 0x00)
struct FFortPlayerSurveyLocalizableText {
	struct FString TextID; // 0x00(0x10)
	struct FString LocalizedText; // 0x10(0x10)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSQuestion
// Size: 0x50 (Inherited: 0x00)
struct FFortPlayerSurveyCMSQuestion {
	struct FFortPlayerSurveyLocalizableText QuestionText; // 0x00(0x20)
	struct FString Type; // 0x20(0x10)
	uint32_t NumberOfOptions; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FFortPlayerSurveyLocalizableText> Responses; // 0x38(0x10)
	bool bRandomizeResponseOrder; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSFrequentlyAskedQuestion
// Size: 0x60 (Inherited: 0x00)
struct FFortPlayerSurveyCMSFrequentlyAskedQuestion {
	struct FString FrequentlyAskedQuestionID; // 0x00(0x10)
	struct FFortPlayerSurveyCMSQuestion Question; // 0x10(0x50)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSFrequentlyAskedQuestionID
// Size: 0x10 (Inherited: 0x00)
struct FFortPlayerSurveyCMSFrequentlyAskedQuestionID {
	struct FString ID; // 0x00(0x10)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSQuestionContainer
// Size: 0x60 (Inherited: 0x00)
struct FFortPlayerSurveyCMSQuestionContainer {
	struct FFortPlayerSurveyCMSFrequentlyAskedQuestionID FrequentlyAskedQuestionID; // 0x00(0x10)
	struct FFortPlayerSurveyCMSQuestion Question; // 0x10(0x50)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSCondition
// Size: 0x50 (Inherited: 0x00)
struct FFortPlayerSurveyCMSCondition {
	struct FString Type; // 0x00(0x10)
	struct FString Operation; // 0x10(0x10)
	struct FString ComparisonValue; // 0x20(0x10)
	struct TArray<struct FString> ConditionInfo; // 0x30(0x10)
	struct TArray<struct FJsonObjectWrapper> ChildConditions; // 0x40(0x10)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSConditionGroup
// Size: 0x20 (Inherited: 0x00)
struct FFortPlayerSurveyCMSConditionGroup {
	struct FString ConditionGroupID; // 0x00(0x10)
	struct TArray<struct FFortPlayerSurveyCMSCondition> Conditions; // 0x10(0x10)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSSurvey
// Size: 0x78 (Inherited: 0x00)
struct FFortPlayerSurveyCMSSurvey {
	struct FString SurveyID; // 0x00(0x10)
	struct TArray<struct FString> SurveyTags; // 0x10(0x10)
	struct FString Title; // 0x20(0x10)
	struct TArray<struct FString> ConditionGroupIDs; // 0x30(0x10)
	struct TArray<struct FFortPlayerSurveyCMSCondition> Conditions; // 0x40(0x10)
	struct TArray<struct FFortPlayerSurveyCMSQuestionContainer> Questions; // 0x50(0x10)
	struct TArray<struct FFortPlayerSurveyCMSCustomTextReplacement> TextReplacementOverrides; // 0x60(0x10)
	bool bRandomizeQuestionOrder; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSData
// Size: 0x58 (Inherited: 0x00)
struct FFortPlayerSurveyCMSData {
	struct TArray<struct FFortPlayerSurveyCMSConditionGroup> ConditionGroups; // 0x00(0x10)
	struct TArray<struct FFortPlayerSurveyCMSFrequentlyAskedQuestion> FrequentlyAskedQuestions; // 0x10(0x10)
	struct TArray<struct FFortPlayerSurveyCMSCustomTextReplacement> CustomTextReplacements; // 0x20(0x10)
	struct TArray<struct FFortPlayerSurveyCMSCustomTextReplacement> WhitelistedTextReplacements; // 0x30(0x10)
	struct TArray<struct FFortPlayerSurveyCMSSurvey> Surveys; // 0x40(0x10)
	bool bSurveysEnabled; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct FortniteUI.ProgressiveStageItemInfo
// Size: 0x70 (Inherited: 0x00)
struct FProgressiveStageItemInfo {
	struct TArray<struct UFortVariantTokenType*> VariantTokens; // 0x00(0x10)
	char pad_10[0x10]; // 0x10(0x10)
	struct FText OverrideName; // 0x20(0x18)
	struct TSoftObjectPtr<UMaterialInterface> TileMaterial; // 0x38(0x28)
	bool bHidden; // 0x60(0x01)
	bool bAllowPreviewStyles; // 0x61(0x01)
	bool bIsLocked; // 0x62(0x01)
	char pad_63[0x1]; // 0x63(0x01)
	int32_t AdditionalMonthsRequired; // 0x64(0x04)
	int32_t StageIndex; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct FortniteUI.ProgressiveSetInfo
// Size: 0x68 (Inherited: 0x00)
struct FProgressiveSetInfo {
	struct FText SetName; // 0x00(0x18)
	struct TSoftObjectPtr<UMaterialInterface> TileMaterial; // 0x18(0x28)
	enum class EProgressiveSetProgress SetProgress; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32_t UnlockedStagesCount; // 0x44(0x04)
	int32_t TotalStagesCount; // 0x48(0x04)
	char pad_4C[0x1c]; // 0x4c(0x1c)
};

// ScriptStruct FortniteUI.ReviewYourSettingsData
// Size: 0x40 (Inherited: 0x00)
struct FReviewYourSettingsData {
	struct FText Title; // 0x00(0x18)
	struct FText Description; // 0x18(0x18)
	struct TArray<struct UFortSetting*> Settings; // 0x30(0x10)
};

// ScriptStruct FortniteUI.FortRichTextStyleData
// Size: 0x330 (Inherited: 0x08)
struct FFortRichTextStyleData : FTableRowBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTextBlockStyle TextStyle; // 0x10(0x310)
	bool bHyperlinkStyle; // 0x320(0x01)
	char pad_321[0xf]; // 0x321(0x0f)
};

// ScriptStruct FortniteUI.PluginUIStateWidgetEntry
// Size: 0x30 (Inherited: 0x00)
struct FPluginUIStateWidgetEntry {
	struct FName EntryName; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TSoftClassPtr<UObject> WidgetClass; // 0x08(0x28)
};

// ScriptStruct FortniteUI.FortSettingClassExtensions
// Size: 0x10 (Inherited: 0x00)
struct FFortSettingClassExtensions {
	struct TArray<struct TSoftClassPtr<UObject>> Extensions; // 0x00(0x10)
};

// ScriptStruct FortniteUI.FortSettingNameExtensions
// Size: 0x18 (Inherited: 0x00)
struct FFortSettingNameExtensions {
	bool bIncludeClassDefaultExtensions; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct TSoftClassPtr<UObject>> Extensions; // 0x08(0x10)
};

// ScriptStruct FortniteUI.FortShowdownEventBestResultsSummary
// Size: 0x1c (Inherited: 0x00)
struct FFortShowdownEventBestResultsSummary {
	int32_t TotalScore; // 0x00(0x04)
	int32_t MatchesPlayed; // 0x04(0x04)
	int32_t NumVictoryRoyales; // 0x08(0x04)
	int32_t PlacementPoints; // 0x0c(0x04)
	int32_t EliminationPoints; // 0x10(0x04)
	int32_t EntryFeePoints; // 0x14(0x04)
	bool bIsValidSummary; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct FortniteUI.FortTournamentDisplayInfo
// Size: 0x1d0 (Inherited: 0x08)
struct FFortTournamentDisplayInfo : FTableRowBase {
	struct FText TitleLine1; // 0x08(0x18)
	struct FText TitleLine2; // 0x20(0x18)
	struct FText ScheduleInfo; // 0x38(0x18)
	struct FText FlavorDescription; // 0x50(0x18)
	struct FText DetailsDescription; // 0x68(0x18)
	struct FText ShortFormatTitle; // 0x80(0x18)
	struct FText LongFormatTitle; // 0x98(0x18)
	struct FText BackgroundTitle; // 0xb0(0x18)
	int32_t PinScoreRequirement; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct FText PinEarnedText; // 0xd0(0x18)
	struct FLinearColor BaseColor; // 0xe8(0x10)
	struct FLinearColor PrimaryColor; // 0xf8(0x10)
	struct FLinearColor SecondaryColor; // 0x108(0x10)
	struct FLinearColor HighlightColor; // 0x118(0x10)
	struct FLinearColor TitleColor; // 0x128(0x10)
	struct FLinearColor ShadowColor; // 0x138(0x10)
	struct FLinearColor BackgroundLeftColor; // 0x148(0x10)
	struct FLinearColor BackgroundRightColor; // 0x158(0x10)
	struct FLinearColor BackgroundTextColor; // 0x168(0x10)
	struct FLinearColor PosterFadeColor; // 0x178(0x10)
	struct FText AlertText; // 0x188(0x18)
	struct FText SeriesPointLeaderboardName; // 0x1a0(0x18)
	enum class EFortTournamentAlertType AlertType; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)
	struct TArray<struct FText> RoundDisplayNames; // 0x1c0(0x10)
};

// ScriptStruct FortniteUI.FortEventStyleInfo
// Size: 0xa8 (Inherited: 0x08)
struct FFortEventStyleInfo : FTableRowBase {
	struct FLinearColor BaseColor; // 0x08(0x10)
	struct FLinearColor PrimaryColor; // 0x18(0x10)
	struct FLinearColor SecondaryColor; // 0x28(0x10)
	struct FLinearColor HighlightColor; // 0x38(0x10)
	struct FLinearColor TitleColor; // 0x48(0x10)
	struct FLinearColor ShadowColor; // 0x58(0x10)
	struct FLinearColor BackgroundLeftColor; // 0x68(0x10)
	struct FLinearColor BackgroundRightColor; // 0x78(0x10)
	struct FLinearColor BackgroundTextColor; // 0x88(0x10)
	struct FLinearColor PosterFadeColor; // 0x98(0x10)
};

// ScriptStruct FortniteUI.PlatformPrefixIcon
// Size: 0x18 (Inherited: 0x00)
struct FPlatformPrefixIcon {
	struct FString Platform; // 0x00(0x10)
	struct UTexture2D* PrefixIcon; // 0x10(0x08)
};

// ScriptStruct FortniteUI.PlatformPrefixIconList
// Size: 0x10 (Inherited: 0x00)
struct FPlatformPrefixIconList {
	struct TArray<struct FPlatformPrefixIcon> PlatformPrefixIcons; // 0x00(0x10)
};

// ScriptStruct FortniteUI.FortUserListHeaderInfo
// Size: 0x18 (Inherited: 0x00)
struct FFortUserListHeaderInfo {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct FortniteUI.PotentialSpectatorTarget
// Size: 0x10 (Inherited: 0x00)
struct FPotentialSpectatorTarget {
	int32_t Rank; // 0x00(0x04)
	struct TWeakObjectPtr<struct AFortPlayerStateAthena> PlayerState; // 0x04(0x08)
	bool bCurrentViewTarget; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct FortniteUI.SquadComsNPCCommandEntry
// Size: 0xf0 (Inherited: 0x00)
struct FSquadComsNPCCommandEntry {
	struct UAthenaEmojiItemDefinition* EmojiItemDefinition; // 0x00(0x08)
	struct FText Label; // 0x08(0x18)
	struct FSlateBrush Brush; // 0x20(0xc0)
	enum class PingCommandType CommandType; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
	struct USoundBase* ConfirmSound; // 0xe8(0x08)
};

// ScriptStruct FortniteUI.SquadComsQuickChatEntry
// Size: 0xf0 (Inherited: 0x00)
struct FSquadComsQuickChatEntry {
	struct UAthenaEmojiItemDefinition* EmojiItemDefinition; // 0x00(0x08)
	struct FText Label; // 0x08(0x18)
	struct FSlateBrush Brush; // 0x20(0xc0)
	enum class EFortWorldMarkerType MarkerType; // 0xe0(0x01)
	char pad_E1[0xf]; // 0xe1(0x0f)
};

// ScriptStruct FortniteUI.FortSquadComsPickerCategory
// Size: 0x28 (Inherited: 0x00)
struct FFortSquadComsPickerCategory {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct FortniteUI.FortSquadComsPickerSubCategoryIdentifier
// Size: 0x20 (Inherited: 0x00)
struct FFortSquadComsPickerSubCategoryIdentifier {
	struct FGameplayTag tag; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText Name; // 0x08(0x18)
};

// ScriptStruct FortniteUI.StandaloneItemShopTabInfo
// Size: 0x30 (Inherited: 0x00)
struct FStandaloneItemShopTabInfo {
	struct FText TabTitle; // 0x00(0x18)
	struct FName TabNameID; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UObject* TabIcon; // 0x20(0x08)
	struct UCommonActivatableWidget* TabWidget; // 0x28(0x08)
};

// ScriptStruct FortniteUI.StoreCallout
// Size: 0xa0 (Inherited: 0x00)
struct FStoreCallout {
	struct FFortToastDisplayInfo ToastDisplayInfo; // 0x00(0x60)
	struct FText ItemName; // 0x60(0x18)
	struct FText ItemSet; // 0x78(0x18)
	struct FString OfferDisplayAssetPath; // 0x90(0x10)
};

// ScriptStruct FortniteUI.FortToastDisplayInfo
// Size: 0x60 (Inherited: 0x00)
struct FFortToastDisplayInfo {
	struct FText Header; // 0x00(0x18)
	struct FText Body; // 0x18(0x18)
	struct TSoftObjectPtr<UTexture2D> Image; // 0x30(0x28)
	enum class EFortToastType Type; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// ScriptStruct FortniteUI.CardPackOffer
// Size: 0x78 (Inherited: 0x00)
struct FCardPackOffer {
	struct FText Title; // 0x00(0x18)
	struct FText Description; // 0x18(0x18)
	int32_t MtxPrice; // 0x30(0x04)
	enum class ECatalogSaleType SaleType; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct FText SaleText; // 0x38(0x18)
	int32_t Price; // 0x50(0x04)
	int32_t RegularPrice; // 0x54(0x04)
	struct UFortAccountItemDefinition* CurrencyType; // 0x58(0x08)
	int32_t QuantityRemaining; // 0x60(0x04)
	bool bTimedOffer; // 0x64(0x01)
	char pad_65[0x13]; // 0x65(0x13)
};

// ScriptStruct FortniteUI.Card
// Size: 0x18 (Inherited: 0x00)
struct FCard {
	int32_t QuantityReceived; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UFortItem* Item; // 0x08(0x08)
	enum class EPauseType PauseType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct FortniteUI.OpenedCardPack
// Size: 0x10 (Inherited: 0x00)
struct FOpenedCardPack {
	struct UFortCardPackItemDefinition* CardPackDefinition; // 0x00(0x08)
	int32_t DisplayLevel; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FortniteUI.BundledItemInfo
// Size: 0x18 (Inherited: 0x00)
struct FBundledItemInfo {
	struct FString TemplateId; // 0x00(0x10)
	int32_t Quantity; // 0x10(0x04)
	bool bOwned; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct FortniteUI.OfferPopUpData
// Size: 0x20 (Inherited: 0x08)
struct FOfferPopUpData : FTableRowBase {
	struct FText FormatedText; // 0x08(0x18)
};

// ScriptStruct FortniteUI.FortSwipeDetector
// Size: 0x90 (Inherited: 0x00)
struct FFortSwipeDetector {
	struct FVector2D SwipeThreshold; // 0x00(0x10)
	char pad_10[0x80]; // 0x10(0x80)
};

// ScriptStruct FortniteUI.CachedComponentMaterials
// Size: 0x18 (Inherited: 0x00)
struct FCachedComponentMaterials {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct UMaterialInterface*> OriginalMaterials; // 0x08(0x10)
};

// ScriptStruct FortniteUI.TouchMove
// Size: 0x18 (Inherited: 0x00)
struct FTouchMove {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct FortniteUI.TouchInteractionIconOverride
// Size: 0x30 (Inherited: 0x00)
struct FTouchInteractionIconOverride {
	struct TSoftObjectPtr<UTexture2D> IconOverride; // 0x00(0x28)
	float IconScale; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct FortniteUI.ButtonInteractionPair
// Size: 0x10 (Inherited: 0x00)
struct FButtonInteractionPair {
	struct AActor* TrackedInteraction; // 0x00(0x08)
	struct UFortTouchInteractionButton* TrackedButton; // 0x08(0x08)
};

// ScriptStruct FortniteUI.RewardsDataIds
// Size: 0x30 (Inherited: 0x00)
struct FRewardsDataIds {
	struct TArray<struct UFortTournamentPayoutThresholdEntry*> ThresholdEntries; // 0x00(0x10)
	char pad_10[0x20]; // 0x10(0x20)
};

// ScriptStruct FortniteUI.StateWidgetEntry
// Size: 0x30 (Inherited: 0x00)
struct FStateWidgetEntry {
	struct TSoftClassPtr<UObject> Class; // 0x00(0x28)
	enum class EFortNamedBundle Bundle; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct FortniteUI.LoadedUIManagerEntry
// Size: 0x20 (Inherited: 0x00)
struct FLoadedUIManagerEntry {
	char pad_0[0x18]; // 0x00(0x18)
	struct UFortUIManager* UIManagerClass; // 0x18(0x08)
};

// ScriptStruct FortniteUI.RegisteredUIManagerEntry
// Size: 0x30 (Inherited: 0x00)
struct FRegisteredUIManagerEntry {
	char pad_0[0x8]; // 0x00(0x08)
	struct TSoftClassPtr<UObject> UIManagerClass; // 0x08(0x28)
};

// ScriptStruct FortniteUI.TagStateWidgetEntry
// Size: 0x30 (Inherited: 0x00)
struct FTagStateWidgetEntry {
	struct TSoftClassPtr<UObject> Class; // 0x00(0x28)
	enum class EFortNamedBundle Bundle; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct FortniteUI.FortRootViewportLayoutInfo
// Size: 0x18 (Inherited: 0x00)
struct FFortRootViewportLayoutInfo {
	struct TWeakObjectPtr<struct UFortLocalPlayer> LocalPlayer; // 0x00(0x08)
	struct UUserWidget* RootLayout; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct FortniteUI.FortUIManager_Campaign_Player
// Size: 0x18 (Inherited: 0x00)
struct FFortUIManager_Campaign_Player {
	struct UFortLocalPlayer* Player; // 0x00(0x08)
	struct TScriptInterface<IFortUIManagerInterface> Manager; // 0x08(0x10)
};

// ScriptStruct FortniteUI.UINavigationEntry
// Size: 0x40 (Inherited: 0x00)
struct FUINavigationEntry {
	struct FUINavigationData Data; // 0x00(0x28)
	struct FDelegate NavigateToDelegate; // 0x28(0x0c)
	struct FDelegate NavigateFromDelegate; // 0x34(0x0c)
};

// ScriptStruct FortniteUI.FortUINavigationOperation
// Size: 0x28 (Inherited: 0x00)
struct FFortUINavigationOperation {
	enum class EFortUINavigationOp Operation; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName SquadId; // 0x04(0x04)
	int32_t SquadSlotIndex; // 0x08(0x04)
	struct FName PageId; // 0x0c(0x04)
	struct FName NodeId; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UFortItem* Item; // 0x18(0x08)
	enum class EFortUIFeature Feature; // 0x20(0x01)
	enum class EFortFrontendInventoryFilter ItemManagementFilter; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct FortniteUI.FortUINavigationRequest
// Size: 0x10 (Inherited: 0x00)
struct FFortUINavigationRequest {
	struct TArray<struct FFortUINavigationOperation> Operations; // 0x00(0x10)
};

// ScriptStruct FortniteUI.FortUIPickerTrapSortScores
// Size: 0x14 (Inherited: 0x00)
struct FFortUIPickerTrapSortScores {
	float UniqueTrapBonus; // 0x00(0x04)
	float SlottedBonus; // 0x04(0x04)
	float FavoriteBonus; // 0x08(0x04)
	float MaxTrackedTrapBonusTime; // 0x0c(0x04)
	float TrackedTrapBonusMultiplier; // 0x10(0x04)
};

// ScriptStruct FortniteUI.FortUIPickerTrapSortModifier
// Size: 0x58 (Inherited: 0x08)
struct FFortUIPickerTrapSortModifier : FTableRowBase {
	struct FGameplayTagQuery ItemTagQuery; // 0x08(0x48)
	float ScoreBonus; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct FortniteUI.ExternalDynamicTabParams
// Size: 0x160 (Inherited: 0x00)
struct FExternalDynamicTabParams {
	struct TSoftClassPtr<UObject> TabScreenClass; // 0x00(0x28)
	char pad_28[0x8]; // 0x28(0x08)
	struct FFortTopBarTabButtonInfo TabButtonInfo; // 0x30(0x130)
};

// ScriptStruct FortniteUI.FortUIXpInfo
// Size: 0x2c (Inherited: 0x00)
struct FFortUIXpInfo {
	int32_t InitialLevel; // 0x00(0x04)
	int32_t InitialDisplayXp; // 0x04(0x04)
	struct FFortExperienceDelta ChangeInXp; // 0x08(0x24)
};

// ScriptStruct FortniteUI.UIStateTag
// Size: 0x04 (Inherited: 0x04)
struct FUIStateTag : FUITag {
};

// ScriptStruct FortniteUI.UIStateTag_FortStartup
// Size: 0x04 (Inherited: 0x04)
struct FUIStateTag_FortStartup : FUIStateTag {
};

// ScriptStruct FortniteUI.UIStateTag_Athena
// Size: 0x04 (Inherited: 0x04)
struct FUIStateTag_Athena : FUIStateTag {
};

// ScriptStruct FortniteUI.UIStateTag_STW
// Size: 0x04 (Inherited: 0x04)
struct FUIStateTag_STW : FUIStateTag {
};

// ScriptStruct FortniteUI.ContentPushState
// Size: 0x03 (Inherited: 0x00)
struct FContentPushState {
	bool bHideHeader; // 0x00(0x01)
	bool bHideFooter; // 0x01(0x01)
	bool bHideChatWidget; // 0x02(0x01)
};

// ScriptStruct FortniteUI.FortUIStyleWindowButtons
// Size: 0xec0 (Inherited: 0x00)
struct FFortUIStyleWindowButtons {
	struct FButtonStyle Close; // 0x00(0x3b0)
	struct FButtonStyle Minimize; // 0x3b0(0x3b0)
	struct FButtonStyle Maximize; // 0x760(0x3b0)
	struct FButtonStyle Restore; // 0xb10(0x3b0)
};

// ScriptStruct FortniteUI.FortUIStyleDefinition
// Size: 0xec0 (Inherited: 0x00)
struct FFortUIStyleDefinition {
	struct FFortUIStyleWindowButtons WindowButtons; // 0x00(0xec0)
};

// ScriptStruct FortniteUI.FortUITutorialData
// Size: 0x58 (Inherited: 0x08)
struct FFortUITutorialData : FTableRowBase {
	struct FName TutorialWidgetName; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText Title; // 0x10(0x18)
	struct FString DevComment; // 0x28(0x10)
	struct TArray<struct FText> Descriptions; // 0x38(0x10)
	struct TArray<struct TSoftObjectPtr<UTexture2D>> PreviewImages; // 0x48(0x10)
};

// ScriptStruct FortniteUI.FortErrorInfo
// Size: 0x70 (Inherited: 0x00)
struct FFortErrorInfo {
	struct FText Operation; // 0x00(0x18)
	struct FText ErrorMessage; // 0x18(0x18)
	struct FString ErrorCode; // 0x30(0x10)
	enum class EFortErrorSeverity ErrorSeverity; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FText ContinueButtonText; // 0x48(0x18)
	char pad_60[0x10]; // 0x60(0x10)
};

// ScriptStruct FortniteUI.FortDisplayModifier
// Size: 0x38 (Inherited: 0x00)
struct FFortDisplayModifier {
	struct FText Label; // 0x00(0x18)
	struct FText Value; // 0x18(0x18)
	enum class EFortStatValueDisplayType DisplayType; // 0x30(0x01)
	enum class EFortBuffState BuffState; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// ScriptStruct FortniteUI.FortDisplayAttribute
// Size: 0x88 (Inherited: 0x00)
struct FFortDisplayAttribute {
	struct FGameplayAttribute Attribute; // 0x00(0x38)
	struct FText Label; // 0x38(0x18)
	struct FText Value; // 0x50(0x18)
	struct FText HoverText; // 0x68(0x18)
	float NumericValue; // 0x80(0x04)
	enum class EFortStatValueDisplayType DisplayType; // 0x84(0x01)
	enum class EFortBuffState BuffState; // 0x85(0x01)
	enum class EFortClampState ClampState; // 0x86(0x01)
	enum class EFortComparisonType ComparisonType; // 0x87(0x01)
};

// ScriptStruct FortniteUI.FortSquadIconData
// Size: 0x490 (Inherited: 0x08)
struct FFortSquadIconData : FTableRowBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FFortMultiSizeBrush Brush; // 0x10(0x480)
};

// ScriptStruct FortniteUI.FortHealthyGamingData
// Size: 0x90 (Inherited: 0x08)
struct FFortHealthyGamingData : FTableRowBase {
	float HealthWarningToastInterval; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText HealthWarningToastDescriptionFormat; // 0x10(0x18)
	struct FText HealthWarningScreenText; // 0x28(0x18)
	struct FText GameplayRestrictionText; // 0x40(0x18)
	float GameplayRestrictionWarningTimeOffset; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FText AntiAddictionTotalDescriptionFormat; // 0x60(0x18)
	bool bUsePlayerTimeLimitSystem; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct TArray<struct TSoftObjectPtr<UTexture2D>> RatingIcons; // 0x80(0x10)
};

// ScriptStruct FortniteUI.MatchmakingUIOverride
// Size: 0x78 (Inherited: 0x00)
struct FMatchmakingUIOverride {
	struct TSoftClassPtr<UObject> SoftMatchmakingOptionsClass; // 0x00(0x28)
	struct TSoftClassPtr<UObject> SoftMatchmakingOptionsClassV2; // 0x28(0x28)
	struct TSoftClassPtr<UObject> SoftLobbyMatchmakingWidgetClass; // 0x50(0x28)
};

// ScriptStruct FortniteUI.BasicDeviceInstanceInfosLookupCallbackPair
// Size: 0x20 (Inherited: 0x00)
struct FBasicDeviceInstanceInfosLookupCallbackPair {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct FortniteUI.FortVariantFilterContext
// Size: 0x30 (Inherited: 0x00)
struct FFortVariantFilterContext {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct FortniteUI.FortVideoInfo
// Size: 0x30 (Inherited: 0x00)
struct FFortVideoInfo {
	struct FName ID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UTexture2D* PreviewImage; // 0x08(0x08)
	struct UMediaSource* VideoSource; // 0x10(0x08)
	struct ULocalizedOverlays* SubtitleOverlays; // 0x18(0x08)
	struct FName QuestObjectiveName; // 0x20(0x04)
	struct FPrimaryAssetId RequiredActiveQuest; // 0x24(0x08)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct FortniteUI.FortWeaponBoardDisplaySlot
// Size: 0x90 (Inherited: 0x00)
struct FFortWeaponBoardDisplaySlot {
	struct FGameplayTag RequiredTag; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
	struct FTransform MeshRelativeTransform; // 0x10(0x60)
	struct FVector LocalOffsetMultiplier; // 0x70(0x18)
	char pad_88[0x8]; // 0x88(0x08)
};

// ScriptStruct FortniteUI.FortWeaponBoardDisplaySlotItem
// Size: 0xa0 (Inherited: 0x00)
struct FFortWeaponBoardDisplaySlotItem {
	struct FFortWeaponBoardDisplaySlot DisplaySlot; // 0x00(0x90)
	char pad_90[0x10]; // 0x90(0x10)
};

// ScriptStruct FortniteUI.GGCenterDisplayEntry
// Size: 0x18 (Inherited: 0x01)
struct FGGCenterDisplayEntry : FFortChangeMonitoringStruct {
	char pad_1[0x7]; // 0x01(0x07)
	struct UFortWeaponItemDefinition* WeaponAt; // 0x08(0x08)
	int32_t PlayersAtWeapon; // 0x10(0x04)
	bool bIsEnabled; // 0x14(0x01)
	bool bShowHarvestingTool; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
};

// ScriptStruct FortniteUI.HeistBlingIconData
// Size: 0x08 (Inherited: 0x00)
struct FHeistBlingIconData {
	int32_t IconIndex; // 0x00(0x04)
	enum class EHeistBlingIconState IconState; // 0x04(0x01)
	enum class EHeistBlingIconState PrevIconState; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
};

// ScriptStruct FortniteUI.HeistExitCraftIconData
// Size: 0x10 (Inherited: 0x00)
struct FHeistExitCraftIconData {
	int32_t IconIndex; // 0x00(0x04)
	enum class EHeistExitCraftIconState IconState; // 0x04(0x01)
	enum class EHeistExitCraftIconState PrevIconState; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	int32_t SecondsUntilIncoming; // 0x08(0x04)
	bool bTeamHasBling; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct FortniteUI.HUDLayoutToolV2_ButtonStateColor
// Size: 0x38 (Inherited: 0x00)
struct FHUDLayoutToolV2_ButtonStateColor {
	struct FSlateColor TextColor; // 0x00(0x14)
	struct FLinearColor IconColor; // 0x14(0x10)
	struct FLinearColor BackgroundColor; // 0x24(0x10)
	float IconAngle; // 0x34(0x04)
};

// ScriptStruct FortniteUI.LinkAcrossNumericalIndicatorActionSymbol
// Size: 0x30 (Inherited: 0x00)
struct FLinkAcrossNumericalIndicatorActionSymbol {
	enum class ENumericalIndicatorActionType ActionType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText ActionSymbol; // 0x08(0x18)
	struct FLinearColor ActionColor; // 0x20(0x10)
};

// ScriptStruct FortniteUI.SimpleActionMessages
// Size: 0x38 (Inherited: 0x00)
struct FSimpleActionMessages {
	enum class ELinkAcrossSimpleAction SimpleActionType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText SimpleActionTitle; // 0x08(0x18)
	struct FText SimpleActionBody; // 0x20(0x18)
};

// ScriptStruct FortniteUI.HUDLayoutToolV2_PopupContent
// Size: 0x68 (Inherited: 0x00)
struct FHUDLayoutToolV2_PopupContent {
	enum class EHUDLayoutToolPopupType PopupType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText TitleText; // 0x08(0x18)
	struct FText DescriptionText; // 0x20(0x18)
	struct FText ButtonConfirmText; // 0x38(0x18)
	struct FText ButtonCancelText; // 0x50(0x18)
};

// ScriptStruct FortniteUI.QuickbarProxySlotIconContainer
// Size: 0x10 (Inherited: 0x00)
struct FQuickbarProxySlotIconContainer {
	struct TArray<struct UPaperSprite*> SlotIcons; // 0x00(0x10)
};

// ScriptStruct FortniteUI.HUDLayoutToolV2_TextInputPopupContent
// Size: 0x68 (Inherited: 0x00)
struct FHUDLayoutToolV2_TextInputPopupContent {
	enum class EHUDLayoutToolTextInputPopupType PopupType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText TitleText; // 0x08(0x18)
	struct FText DescriptionText; // 0x20(0x18)
	struct FText ButtonConfirmText; // 0x38(0x18)
	struct FText ButtonCancelText; // 0x50(0x18)
};

// ScriptStruct FortniteUI.HUDLayoutToolV2_ToastNotificationContent
// Size: 0x38 (Inherited: 0x00)
struct FHUDLayoutToolV2_ToastNotificationContent {
	enum class EHUDLayoutToolToasterType ToasterType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText TitleText; // 0x08(0x18)
	struct FText DescriptionText; // 0x20(0x18)
};

// ScriptStruct FortniteUI.FortCountdownSounds
// Size: 0x20 (Inherited: 0x00)
struct FFortCountdownSounds {
	struct USoundBase* sound; // 0x00(0x08)
	int32_t StartTime; // 0x08(0x04)
	int32_t StopTime; // 0x0c(0x04)
	float FadeOutTime; // 0x10(0x04)
	bool bPlayed; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct UAudioComponent* PlayInstance; // 0x18(0x08)
};

// ScriptStruct FortniteUI.PerkPipData
// Size: 0x10 (Inherited: 0x00)
struct FPerkPipData {
	struct UFortAccoladeItemDefinition* AccoladeItemDef; // 0x00(0x08)
	int32_t NumOfPips; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FortniteUI.PickupStreamEntry
// Size: 0x18 (Inherited: 0x00)
struct FPickupStreamEntry {
	struct UUserWidget* PickupWidget; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct FortniteUI.FortFeedbackDropdownCategoryHotfix_Add
// Size: 0x08 (Inherited: 0x00)
struct FFortFeedbackDropdownCategoryHotfix_Add {
	struct FName ParentInternalName; // 0x00(0x04)
	struct FName InternalName; // 0x04(0x04)
};

// ScriptStruct FortniteUI.FortFeedbackDropdownCategoryHotfix_Modify
// Size: 0x08 (Inherited: 0x00)
struct FFortFeedbackDropdownCategoryHotfix_Modify {
	struct FName InternalName; // 0x00(0x04)
	bool bAddFlag; // 0x04(0x01)
	enum class EFortPlayerFeedbackFlags Flag; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
};

// ScriptStruct FortniteUI.FortPrioritizedWidgetData
// Size: 0x02 (Inherited: 0x00)
struct FFortPrioritizedWidgetData {
	enum class EFortPrioritizedWidgetPriority Priority; // 0x00(0x01)
	enum class EFortPrioritizedWidgetContestedBehavior WhenContesting; // 0x01(0x01)
};

// ScriptStruct FortniteUI.SoundThreshold
// Size: 0x10 (Inherited: 0x00)
struct FSoundThreshold {
	struct USoundCue* SoundCue; // 0x00(0x08)
	float Threshold; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FortniteUI.AthenaSpatialCustomizationCategoryGroup
// Size: 0x10 (Inherited: 0x00)
struct FAthenaSpatialCustomizationCategoryGroup {
	struct TArray<struct UAthenaSpatialCustomizationCategoryEntry*> CategoryEntryList; // 0x00(0x10)
};

// ScriptStruct FortniteUI.SpatialCustomizationCategoryStateData
// Size: 0x30 (Inherited: 0x00)
struct FSpatialCustomizationCategoryStateData {
	enum class ESpatialCustomizationCategoryState State; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FLinearColor Color; // 0x04(0x10)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText CategorySelectionHeaderText; // 0x18(0x18)
};

// ScriptStruct FortniteUI.AthenaStyleMissionData
// Size: 0x28 (Inherited: 0x00)
struct FAthenaStyleMissionData {
	struct UFortVariantTokenType* StyleDefinition; // 0x00(0x08)
	struct TArray<struct UFortVariantTokenType*> OptionalAdditionalStyleDefinitions; // 0x08(0x10)
	struct UFortQuestItemDefinition* Mission; // 0x18(0x08)
	struct UAnimationAsset* OverrideIdleAnimation; // 0x20(0x08)
};

// ScriptStruct FortniteUI.AthenaSpatialStyleCharacterData
// Size: 0x30 (Inherited: 0x00)
struct FAthenaSpatialStyleCharacterData {
	struct UAthenaCharacterItemDefinition* Character; // 0x00(0x08)
	struct TArray<struct FAthenaStyleMissionData> Styles; // 0x08(0x10)
	struct TArray<enum class ESpatialStyleCharacterUnlockPrerequisite> CharacterPrerequisites; // 0x18(0x10)
	struct UAnimationAsset* CharacterIdleAnimation; // 0x28(0x08)
};

// ScriptStruct FortniteUI.TDMTeamScoreData
// Size: 0x20 (Inherited: 0x00)
struct FTDMTeamScoreData {
	struct FText CurrScoreText; // 0x00(0x18)
	float CurrScorePercent; // 0x18(0x04)
	int32_t CurrScore; // 0x1c(0x04)
};

// ScriptStruct FortniteUI.WaxPlacementData
// Size: 0x20 (Inherited: 0x00)
struct FWaxPlacementData {
	int32_t Placement; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString PlayerName; // 0x08(0x10)
	int32_t CoinCount; // 0x18(0x04)
	bool bIsPlayer; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

