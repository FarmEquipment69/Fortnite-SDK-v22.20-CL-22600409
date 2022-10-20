// Class PictureInPictureDescriptors.PictureInPictureAnalyticsManager
// Size: 0x78 (Inherited: 0x28)
struct UPictureInPictureAnalyticsManager : UObject {
	struct TMap<struct FString, struct FPictureInPictureAnalyticsPayload> PartnerAnalytics; // 0x28(0x50)
};

// Class PictureInPictureDescriptors.PictureInPicturePartnerDataAsset
// Size: 0xf0 (Inherited: 0x30)
struct UPictureInPicturePartnerDataAsset : UPrimaryDataAsset {
	struct FString PartnerName; // 0x30(0x10)
	struct UImage* ClientImage; // 0x40(0x08)
	int32_t MediaHeight; // 0x48(0x04)
	int32_t MediaWidth; // 0x4c(0x04)
	struct UCommonActivatableWidget* MetadataOverlayClass; // 0x50(0x08)
	struct TArray<struct FPictureInPictureActionConfig> Actions; // 0x58(0x10)
	struct FPIPVideoPlayerAssetConfig AssetConfig; // 0x68(0x88)
};

// Class PictureInPictureDescriptors.PictureInPictureActionData
// Size: 0x170 (Inherited: 0x28)
struct UPictureInPictureActionData : UObject {
	struct FString PartnerName; // 0x28(0x10)
	char pad_38[0x8]; // 0x38(0x08)
	struct FSlateBrush ActionBrush; // 0x40(0xc0)
	struct FText ActionText; // 0x100(0x18)
	enum class PictureInPictureAction ActionType; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct FMulticastInlineDelegate ActionEvent; // 0x120(0x10)
	struct FMulticastInlineDelegate ActionFiredEvent; // 0x130(0x10)
	char pad_140[0x18]; // 0x140(0x18)
	struct FMulticastInlineDelegate CallbackEvent; // 0x158(0x10)
	char pad_168[0x8]; // 0x168(0x08)

	void CallEvent(); // Function PictureInPictureDescriptors.PictureInPictureActionData.CallEvent // (Native|Public|BlueprintCallable) // @ game+0x12fee80
};

// Class PictureInPictureDescriptors.PictureInPictureSourceActionData
// Size: 0x190 (Inherited: 0x170)
struct UPictureInPictureSourceActionData : UPictureInPictureActionData {
	struct FString SourceName; // 0x168(0x10)
	struct FMulticastInlineDelegate SourceActionEvent; // 0x178(0x10)
};

