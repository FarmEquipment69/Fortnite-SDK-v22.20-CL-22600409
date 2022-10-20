// ScriptStruct PurchaseFlow.PurchaseFlowItem
// Size: 0x30 (Inherited: 0x00)
struct FPurchaseFlowItem {
	struct FString ItemId; // 0x00(0x10)
	struct FString EntitlementId; // 0x10(0x10)
	struct FString ValidationInfo; // 0x20(0x10)
};

// ScriptStruct PurchaseFlow.PurchaseFlowOffer
// Size: 0x38 (Inherited: 0x00)
struct FPurchaseFlowOffer {
	struct FString OfferNamespace; // 0x00(0x10)
	struct FString OfferId; // 0x10(0x10)
	int32_t Quantity; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FPurchaseFlowItem> Items; // 0x28(0x10)
};

// ScriptStruct PurchaseFlow.PurchaseFlowReceiptParam
// Size: 0x30 (Inherited: 0x00)
struct FPurchaseFlowReceiptParam {
	struct FString TransactionId; // 0x00(0x10)
	struct FString TransactionState; // 0x10(0x10)
	struct TArray<struct FPurchaseFlowOffer> Offers; // 0x20(0x10)
};

