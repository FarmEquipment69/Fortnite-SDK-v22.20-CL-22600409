// Enum BattlePassBase.EBattlePassLandingPageSpecialEntryType
enum class EBattlePassLandingPageSpecialEntryType : uint8 {
	None = 0,
	Subscription = 1,
	CharacterCustomizer = 2,
	SpecialCharacter = 3,
	COUNT = 4,
	EBattlePassLandingPageSpecialEntryType_MAX = 5
};

// Enum BattlePassBase.BattlePassTileAvailabilityStates
enum class BattlePassTileAvailabilityStates : uint8 {
	Invalid = 0,
	Available = 1,
	Owned = 2,
	Locked = 3,
	BattlePassTileAvailabilityStates_MAX = 4
};

// ScriptStruct BattlePassBase.BattlePassLandingPageButtonTexts
// Size: 0x48 (Inherited: 0x00)
struct FBattlePassLandingPageButtonTexts {
	struct FText TileText; // 0x00(0x18)
	struct FText LandingPageTitleText; // 0x18(0x18)
	struct FText LandingPageDescriptionText; // 0x30(0x18)
};

// ScriptStruct BattlePassBase.BattlePassLandingPageButtonDisplayDetails
// Size: 0x70 (Inherited: 0x00)
struct FBattlePassLandingPageButtonDisplayDetails {
	struct FBattlePassLandingPageButtonTexts ButtonTexts; // 0x00(0x48)
	bool bIsBPLocked; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FText MissingCosmeticNameText; // 0x50(0x18)
	struct FTimespan DelayTimespan; // 0x68(0x08)
};

// ScriptStruct BattlePassBase.BattlePassLandingPageEntryPreviewInfo
// Size: 0x38 (Inherited: 0x00)
struct FBattlePassLandingPageEntryPreviewInfo {
	enum class EBattlePassLandingPageSpecialEntryType SpecialEntryType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<enum class EFortItemType> SubscriptionItemTypesToDisplay; // 0x08(0x10)
	struct FGameplayTag SpecialCharacterVariantChannelToModify; // 0x18(0x04)
	struct FGameplayTag SpecialCharacterActiveVariantTag; // 0x1c(0x04)
	struct TArray<struct TSoftObjectPtr<UFortItemDefinition>> PreviewItems; // 0x20(0x10)
	float TransitionTime; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct BattlePassBase.BattlePassEntrySelectedParams
// Size: 0x58 (Inherited: 0x00)
struct FBattlePassEntrySelectedParams {
	char pad_0[0x58]; // 0x00(0x58)
};

// ScriptStruct BattlePassBase.SeasonalResourceList
// Size: 0x10 (Inherited: 0x00)
struct FSeasonalResourceList {
	struct TArray<struct UFortPersistentResourceItemDefinition*> SeasonalResources; // 0x00(0x10)
};

