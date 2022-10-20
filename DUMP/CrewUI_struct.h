// Enum CrewUI.EBattlePassCrewContentState
enum class EBattlePassCrewContentState : uint8 {
	BattlePass = 0,
	Crew = 1,
	CrewSubscribed = 2,
	EBattlePassCrewContentState_MAX = 3
};

// Enum CrewUI.EBattlePassPurchaseButtonCurrencyType
enum class EBattlePassPurchaseButtonCurrencyType : uint8 {
	None = 0,
	Mtx = 1,
	RealMoney = 2,
	EBattlePassPurchaseButtonCurrencyType_MAX = 3
};

// Enum CrewUI.EBattlePassPurchaseState
enum class EBattlePassPurchaseState : uint8 {
	Purchase = 0,
	Confirm = 1,
	EBattlePassPurchaseState_MAX = 2
};

// Enum CrewUI.ECrewPurchaseButtonState
enum class ECrewPurchaseButtonState : uint8 {
	None = 0,
	Purchase = 1,
	Rejoin = 2,
	ECrewPurchaseButtonState_MAX = 3
};

// Enum CrewUI.EFortProgressiveContentInterfaceCloseReason
enum class EFortProgressiveContentInterfaceCloseReason : uint8 {
	Normal = 0,
	SubscriptionPurchased = 1,
	EFortProgressiveContentInterfaceCloseReason_MAX = 2
};

// Enum CrewUI.EFortProgressiveContentType
enum class EFortProgressiveContentType : uint8 {
	ProgressiveTableOfContentsScreen = 0,
	ProgressiveItemScreen = 1,
	EFortProgressiveContentType_MAX = 2
};

// ScriptStruct CrewUI.CrewSubscriptionContentTabData
// Size: 0x20 (Inherited: 0x00)
struct FCrewSubscriptionContentTabData {
	struct FText TabName; // 0x00(0x18)
	enum class ESubscriptionContentTab TabType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct CrewUI.FortProgressiveVariant
// Size: 0x68 (Inherited: 0x00)
struct FFortProgressiveVariant {
	struct TArray<struct FCosmeticVariantInfo> DefaultVariantPreviewOverrides; // 0x00(0x10)
	struct TSoftObjectPtr<UMaterialInterface> TileMaterial; // 0x10(0x28)
	bool bHidden; // 0x38(0x01)
	bool bAllowPreviewStyles; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct TSoftObjectPtr<UFortVariantTokenType> VariantToken; // 0x40(0x28)
};

// ScriptStruct CrewUI.FortProgressiveStageOverrideDisplayData
// Size: 0x58 (Inherited: 0x00)
struct FFortProgressiveStageOverrideDisplayData {
	struct TArray<struct FCosmeticVariantInfo> DefaultVariantPreviewOverrides; // 0x00(0x10)
	struct FText DisplayName; // 0x10(0x18)
	struct TSoftObjectPtr<UMaterialInterface> TileMaterial; // 0x28(0x28)
	bool bAllowPreviewStyles; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct CrewUI.FortProgressiveUIStage
// Size: 0x70 (Inherited: 0x00)
struct FFortProgressiveUIStage {
	struct TArray<struct FFortProgressiveVariant> Variants; // 0x00(0x10)
	bool bUseOverrideDisplayData; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FFortProgressiveStageOverrideDisplayData OverrideDisplayData; // 0x18(0x58)
};

// ScriptStruct CrewUI.FortProgressiveSet
// Size: 0x60 (Inherited: 0x00)
struct FFortProgressiveSet {
	struct FString FulfillmentId; // 0x00(0x10)
	struct FText SetName; // 0x10(0x18)
	struct TSoftObjectPtr<UMaterialInterface> TileMaterial; // 0x28(0x28)
	struct TArray<struct FFortProgressiveUIStage> Stages; // 0x50(0x10)
};

// ScriptStruct CrewUI.FortProgressiveSetVariantData
// Size: 0x18 (Inherited: 0x00)
struct FFortProgressiveSetVariantData {
	struct UFortVariantTokenType* VariantToken; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

