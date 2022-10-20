// Enum GiftingUI.EGiftingPresentationMode
enum class EGiftingPresentationMode : uint8 {
	ConfirmPurchase = 0,
	WrapOptions = 1,
	GiftingProcess = 2,
	GiftingError = 3,
	GiftConfirmed = 4,
	None = 5,
	EGiftingPresentationMode_MAX = 6
};

// Enum GiftingUI.EGiftingPricePresentationMode
enum class EGiftingPricePresentationMode : uint8 {
	MtxCurrency = 0,
	RealMoney = 1,
	Hidden = 2,
	EGiftingPricePresentationMode_MAX = 3
};

// Enum GiftingUI.EFilterType
enum class EFilterType : uint8 {
	All = 0,
	Party = 1,
	EFilterType_MAX = 2
};

// Enum GiftingUI.EGiftingScreenPresentationMode
enum class EGiftingScreenPresentationMode : uint8 {
	ItemList = 0,
	NoContent = 1,
	EGiftingScreenPresentationMode_MAX = 2
};

// Enum GiftingUI.ERecipientPresentationMode
enum class ERecipientPresentationMode : uint8 {
	Loading = 0,
	GiftPrice = 1,
	AlreadyOwned = 2,
	Unavailable = 3,
	ERecipientPresentationMode_MAX = 4
};

// ScriptStruct GiftingUI.FortGiftingRecipientState
// Size: 0x88 (Inherited: 0x00)
struct FFortGiftingRecipientState {
	struct FCatalogItemPrice Price; // 0x00(0x50)
	struct TArray<struct FItemQuantity> Items; // 0x50(0x10)
	char pad_60[0x28]; // 0x60(0x28)
};

