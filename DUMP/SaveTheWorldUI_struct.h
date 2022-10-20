// Enum SaveTheWorldUI.EViewerNavigationDirection
enum class EViewerNavigationDirection : uint8 {
	Previous = 0,
	Next = 1,
	EViewerNavigationDirection_MAX = 2
};

// Enum SaveTheWorldUI.EFortCollectionBookPopupButtonType
enum class EFortCollectionBookPopupButtonType : uint8 {
	Invalid = 0,
	SelectItem = 1,
	Preview = 2,
	Purchase = 3,
	Unslot = 4,
	Back = 5,
	EFortCollectionBookPopupButtonType_MAX = 6
};

// Enum SaveTheWorldUI.ECollectionBookSectionNavTarget
enum class ECollectionBookSectionNavTarget : uint8 {
	SlotSelect = 0,
	SlotPicker = 1,
	ECollectionBookSectionNavTarget_MAX = 2
};

// Enum SaveTheWorldUI.EHeroLoadoutSlotType
enum class EHeroLoadoutSlotType : uint8 {
	CommanderSlot = 0,
	TeamPerkSlot = 1,
	CrewSlot = 2,
	GadgetSlot = 3,
	EHeroLoadoutSlotType_MAX = 4
};

// Enum SaveTheWorldUI.ESquadSlotSortType
enum class ESquadSlotSortType : uint8 {
	ByRating = 0,
	ByLevel = 1,
	ByRarity = 2,
	ByBonus = 3,
	ByMatch = 4,
	ESquadSlotSortType_MAX = 5
};

// Enum SaveTheWorldUI.EFortAlterationOptionType
enum class EFortAlterationOptionType : uint8 {
	Upgrade = 0,
	Replacement = 1,
	Max_NONE = 2,
	EFortAlterationOptionType_MAX = 3
};

// Enum SaveTheWorldUI.ECollectionBookRewardStatus
enum class ECollectionBookRewardStatus : uint8 {
	Unknown = 0,
	Available = 1,
	Claimed = 2,
	ECollectionBookRewardStatus_MAX = 3
};

// Enum SaveTheWorldUI.ECollectionBookPrimaryNavTarget
enum class ECollectionBookPrimaryNavTarget : uint8 {
	Overview = 0,
	SectionTileView = 1,
	ECollectionBookPrimaryNavTarget_MAX = 2
};

// Enum SaveTheWorldUI.EFortExpeditionListSort
enum class EFortExpeditionListSort : uint8 {
	ByRating = 0,
	ByDuration = 1,
	ByName = 2,
	EFortExpeditionListSort_MAX = 3
};

// Enum SaveTheWorldUI.EFrontEndRewardType
enum class EFrontEndRewardType : uint8 {
	Mission = 0,
	Quest = 1,
	EpicNewQuest = 2,
	Expedition = 3,
	CollectionBook = 4,
	MissionAlert = 5,
	DifficultyIncrease = 6,
	GiftBox = 7,
	ItemCache = 8,
	PhoenixLevelUp = 9,
	EFrontEndRewardType_MAX = 10
};

// Enum SaveTheWorldUI.EFortHeroPerkDisplayType
enum class EFortHeroPerkDisplayType : uint8 {
	CommanderPerk = 0,
	TeamPerk = 1,
	ClassPerk = 2,
	StandardPerk = 3,
	Max_None = 4,
	EFortHeroPerkDisplayType_MAX = 5
};

// Enum SaveTheWorldUI.ECalloutNavigationDirection
enum class ECalloutNavigationDirection : uint8 {
	Previous = 0,
	Next = 1,
	ECalloutNavigationDirection_MAX = 2
};

// Enum SaveTheWorldUI.EFortUISurvivorSquadMatchType
enum class EFortUISurvivorSquadMatchType : uint8 {
	Multi = 0,
	Single = 1,
	Summary = 2,
	Max_None = 3,
	EFortUISurvivorSquadMatchType_MAX = 4
};

// Enum SaveTheWorldUI.EUpgradeInfoImageSize
enum class EUpgradeInfoImageSize : uint8 {
	Small = 0,
	Large = 1,
	EUpgradeInfoImageSize_MAX = 2
};

// ScriptStruct SaveTheWorldUI.SquadSlotSortTypes
// Size: 0x10 (Inherited: 0x00)
struct FSquadSlotSortTypes {
	struct TArray<enum class ESquadSlotSortType> SortTypes; // 0x00(0x10)
};

// ScriptStruct SaveTheWorldUI.FortDailyRewardsData
// Size: 0x18 (Inherited: 0x00)
struct FFortDailyRewardsData {
	int32_t CurrentLoginDays; // 0x00(0x04)
	bool bCanClaim; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct TArray<struct FFortDailyRewardsScheduleData> Schedules; // 0x08(0x10)
};

// ScriptStruct SaveTheWorldUI.FortDailyRewardsScheduleData
// Size: 0x98 (Inherited: 0x00)
struct FFortDailyRewardsScheduleData {
	struct FText ScheduleTitle; // 0x00(0x18)
	struct FText ScheduleDescription; // 0x18(0x18)
	struct FText ScheduleItemDescription; // 0x30(0x18)
	struct FText ScheduleEpicItemDescription; // 0x48(0x18)
	int32_t WeekOffset; // 0x60(0x04)
	int32_t RewardsGiven; // 0x64(0x04)
	int32_t RewardsAllowed; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct FFortDailyRewardsItemData> CalendarItems; // 0x70(0x10)
	struct TArray<struct FFortDailyRewardsItemData> HighValueItems; // 0x80(0x10)
	bool ClaimedToday; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// ScriptStruct SaveTheWorldUI.FortDailyRewardsItemData
// Size: 0x10 (Inherited: 0x00)
struct FFortDailyRewardsItemData {
	struct UFortItem* RewardItem; // 0x00(0x08)
	int32_t RewardDay; // 0x08(0x04)
	bool IsCurrentReward; // 0x0c(0x01)
	bool IsClaimed; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct SaveTheWorldUI.ExpeditionTabInfo
// Size: 0xf0 (Inherited: 0x00)
struct FExpeditionTabInfo {
	struct FName TabNameID; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
	struct FFortTabButtonLabelInfo TabLabelInfo; // 0x10(0xe0)
};

// ScriptStruct SaveTheWorldUI.ConsumedCriteriaData
// Size: 0x18 (Inherited: 0x00)
struct FConsumedCriteriaData {
	float PowerMod; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FName> CriteriaNames; // 0x08(0x10)
};

// ScriptStruct SaveTheWorldUI.FortHeroLoadoutHeroPickerTabConfiguration
// Size: 0xb0 (Inherited: 0x00)
struct FFortHeroLoadoutHeroPickerTabConfiguration {
	struct FFortItemFilterDefinition Filter; // 0x00(0x60)
	struct FFortItemSorterDefinition Sorter; // 0x60(0x50)
};

// ScriptStruct SaveTheWorldUI.FortInGamePerkDisplayData
// Size: 0x10 (Inherited: 0x00)
struct FFortInGamePerkDisplayData {
	enum class EFortHeroPerkDisplayType PerkDisplayType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Index; // 0x04(0x04)
	int32_t Row; // 0x08(0x04)
	int32_t Column; // 0x0c(0x04)
};

// ScriptStruct SaveTheWorldUI.FortRefundDescriptionsData
// Size: 0x40 (Inherited: 0x08)
struct FFortRefundDescriptionsData : FTableRowBase {
	struct FString SearchString; // 0x08(0x10)
	struct FString TargetReleaseVersion; // 0x18(0x10)
	struct FText RefundDescriptionText; // 0x28(0x18)
};

// ScriptStruct SaveTheWorldUI.OfferGroup
// Size: 0x18 (Inherited: 0x00)
struct FOfferGroup {
	struct FString Name; // 0x00(0x10)
	int32_t MaxNumberToShow; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct SaveTheWorldUI.FortQuestMapEventQuestSideBarData
// Size: 0x28 (Inherited: 0x08)
struct FFortQuestMapEventQuestSideBarData : FTableRowBase {
	struct UFortQuestItemDefinition* QuestItemDefinition; // 0x08(0x08)
	struct TArray<struct FString> EventFlags; // 0x10(0x10)
	bool bShowAlways; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float CycleTime; // 0x24(0x04)
};

// ScriptStruct SaveTheWorldUI.FortLandingPageDefenderSummaryInfo
// Size: 0x30 (Inherited: 0x00)
struct FFortLandingPageDefenderSummaryInfo {
	struct FName SquadId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText TheaterDisplayName; // 0x08(0x18)
	struct FString TheaterUniqueId; // 0x20(0x10)
};

// ScriptStruct SaveTheWorldUI.FortAttributeModifierAccumulation
// Size: 0x48 (Inherited: 0x00)
struct FFortAttributeModifierAccumulation {
	struct FGameplayTag GameplayTag; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FGameplayAttribute Attribute; // 0x08(0x38)
	enum class EGameplayModOp ModifierOp; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float Magnitude; // 0x44(0x04)
};

// ScriptStruct SaveTheWorldUI.FortSurvivorSquadSlottingFeedbackData
// Size: 0xb0 (Inherited: 0x00)
struct FFortSurvivorSquadSlottingFeedbackData {
	bool HadLeaderMatch; // 0x00(0x01)
	bool HasLeaderMatch; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TMap<struct FGameplayTag, int32_t> PreviousSetBonusCounts; // 0x08(0x50)
	struct TMap<struct FGameplayTag, int32_t> CurrentSetBonusCounts; // 0x58(0x50)
	int32_t PreviousPersonalityMatchCount; // 0xa8(0x04)
	int32_t CurrentPersonalityMatchCount; // 0xac(0x04)
};

// ScriptStruct SaveTheWorldUI.FortSurvivorSquadSelectorButtonSummaryStats
// Size: 0xa0 (Inherited: 0x00)
struct FFortSurvivorSquadSelectorButtonSummaryStats {
	struct FName SquadId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FGameplayAttribute FortAttribute; // 0x08(0x38)
	float FortAttributeValue; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FGameplayAttribute FortTeamAttribute; // 0x48(0x38)
	float TeamFortAttributeValue; // 0x80(0x04)
	float SquadPowerValue; // 0x84(0x04)
	struct FText FortAttributeName; // 0x88(0x18)
};

// ScriptStruct SaveTheWorldUI.FortSurvivorSquadSelectorButtonPersonalityMatches
// Size: 0x490 (Inherited: 0x00)
struct FFortSurvivorSquadSelectorButtonPersonalityMatches {
	int32_t NumPersonalityMatches; // 0x00(0x04)
	int32_t TotalNonLeaderSquadMembers; // 0x04(0x04)
	bool HavePersonalityIcons; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FFortMultiSizeBrush PersonalityIcons; // 0x10(0x480)
};

// ScriptStruct SaveTheWorldUI.FortUISurvivorSquadStatMatch
// Size: 0x4c0 (Inherited: 0x00)
struct FFortUISurvivorSquadStatMatch {
	struct FFortMultiSizeBrush Icons; // 0x00(0x480)
	struct FText MagnitudeText; // 0x480(0x18)
	struct FText AttributeDisplayName; // 0x498(0x18)
	int32_t NumMembersMeetingCriteria; // 0x4b0(0x04)
	int32_t NumMembersRequired; // 0x4b4(0x04)
	enum class EFortUISurvivorSquadMatchType MatchType; // 0x4b8(0x01)
	enum class EFortBuffState PreviewEffect; // 0x4b9(0x01)
	char pad_4BA[0x6]; // 0x4ba(0x06)
};

// ScriptStruct SaveTheWorldUI.HomebaseNodeDisplayData
// Size: 0x90 (Inherited: 0x08)
struct FHomebaseNodeDisplayData : FTableRowBase {
	struct FText Title; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	struct TSoftObjectPtr<UTexture2D> LargePreviewImage; // 0x38(0x28)
	struct TSoftObjectPtr<UTexture2D> SmallPreviewImage; // 0x60(0x28)
	struct UMediaSource* PreviewVideoMediaSource; // 0x88(0x08)
};

