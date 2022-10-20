// Class VKDownloadOnDemandGameplay.DownloadOnDemandComponent
// Size: 0x1d0 (Inherited: 0xa0)
struct UDownloadOnDemandComponent : UControllerComponent {
	char pad_A0[0x108]; // 0xa0(0x108)
	struct UDownloadOnDemandPlot* Plot; // 0x1a8(0x08)
	struct TArray<struct UDownloadOnDemandProject*> UserOwnedProjects; // 0x1b0(0x10)
	struct TArray<struct UDownloadOnDemandProjectContent*> ShelvedContents; // 0x1c0(0x10)

	void HandleMnemonicsFromValkyriePaletteProviderReceived(struct TArray<struct FString>& Mnemonics); // Function VKDownloadOnDemandGameplay.DownloadOnDemandComponent.HandleMnemonicsFromValkyriePaletteProviderReceived // (Final|Native|Private|HasOutParms) // @ game+0x6ae21fc
};

// Class VKDownloadOnDemandGameplay.DownloadOnDemandPlot
// Size: 0xc0 (Inherited: 0x28)
struct UDownloadOnDemandPlot : UObject {
	char pad_28[0x78]; // 0x28(0x78)
	struct TArray<struct UDownloadOnDemandProject*> ActiveProjects; // 0xa0(0x10)
	struct TArray<struct UDownloadOnDemandProject*> PendingProjects; // 0xb0(0x10)
};

// Class VKDownloadOnDemandGameplay.DownloadOnDemandProject
// Size: 0x128 (Inherited: 0x28)
struct UDownloadOnDemandProject : UObject {
	char pad_28[0x88]; // 0x28(0x88)
	struct UDownloadOnDemandProjectDescriptor* Descriptor; // 0xb0(0x08)
	struct TMap<struct FString, struct UDownloadOnDemandProjectContent*> Contents; // 0xb8(0x50)
	char pad_108[0x20]; // 0x108(0x20)
};

// Class VKDownloadOnDemandGameplay.DownloadOnDemandProjectContent
// Size: 0xa0 (Inherited: 0x28)
struct UDownloadOnDemandProjectContent : UObject {
	char pad_28[0x48]; // 0x28(0x48)
	struct TArray<struct UFortItemDefinition*> ContentItemDefinitions; // 0x70(0x10)
	struct TArray<struct FSoftObjectPath> ContentSoftObjectPaths; // 0x80(0x10)
	struct TArray<struct FSoftObjectPath> LoadFailedContentObjectPaths; // 0x90(0x10)
};

// Class VKDownloadOnDemandGameplay.DownloadOnDemandProjectDescriptor
// Size: 0x80 (Inherited: 0x28)
struct UDownloadOnDemandProjectDescriptor : UObject {
	char pad_28[0x48]; // 0x28(0x48)
	struct UDownloadOnDemandProjectImage* Image; // 0x70(0x08)
	char pad_78[0x8]; // 0x78(0x08)
};

// Class VKDownloadOnDemandGameplay.DownloadOnDemandProjectImage
// Size: 0x60 (Inherited: 0x28)
struct UDownloadOnDemandProjectImage : UObject {
	char pad_28[0x30]; // 0x28(0x30)
	struct UTexture2DDynamic* PreviewTexture; // 0x58(0x08)
};

