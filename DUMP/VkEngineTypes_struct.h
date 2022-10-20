// Enum VkEngineTypes.EValkyrieProjectDescriptorFileVersion
enum class EValkyrieProjectDescriptorFileVersion : uint8 {
	Invalid = 0,
	Initial = 1,
	AddProjectMetadata = 2,
	AddedCompatibilityLabel = 3,
	AddBindings = 4,
	AddEditorPermissions = 5,
	AddEpicApp = 6,
	LatestPlusOne = 7,
	Latest = 6,
	EValkyrieProjectDescriptorFileVersion_MAX = 8
};

// Enum VkEngineTypes.EConsumerRole
enum class EConsumerRole : uint8 {
	Server = 0,
	Client = 1,
	Editor = 2,
	EConsumerRole_MAX = 3
};

// Enum VkEngineTypes.EVkLinkPublishMode
enum class EVkLinkPublishMode : uint8 {
	Live = 0,
	Playtest = 1,
	EVkLinkPublishMode_MAX = 2
};

// Enum VkEngineTypes.EVkModuleAccess
enum class EVkModuleAccess : uint8 {
	Private = 0,
	Protected = 1,
	Public = 2,
	EVkModuleAccess_MAX = 3
};

// Enum VkEngineTypes.EVkOwnerType
enum class EVkOwnerType : uint8 {
	Account = 0,
	Team = 1,
	EVkOwnerType_MAX = 2
};

// Enum VkEngineTypes.EVkValidationFlags
enum class EVkValidationFlags : uint8 {
	None = 0,
	VF_IgnoreValidation = 1,
	VF_AllowMissingGameFeatureDataAsset = 2,
	VF_AllowEngineContent = 4,
	VF_AllowGameContent = 8,
	VF_NoPreCheckVerse = 16,
	EVkValidationFlags_MAX = 17
};

// ScriptStruct VkEngineTypes.ValkyriePluginReferenceDescriptor
// Size: 0x18 (Inherited: 0x00)
struct FValkyriePluginReferenceDescriptor {
	struct FString Name; // 0x00(0x10)
	bool bIsRoot; // 0x10(0x01)
	bool bIsPublic; // 0x11(0x01)
	bool bEnabled; // 0x12(0x01)
	bool bOptional; // 0x13(0x01)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct VkEngineTypes.ValkyrieProjectDependencyDescriptor
// Size: 0x18 (Inherited: 0x00)
struct FValkyrieProjectDependencyDescriptor {
	struct FString ID; // 0x00(0x10)
	bool bEnabled; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct VkEngineTypes.ValkyrieProjectBindingsDescriptor
// Size: 0x60 (Inherited: 0x00)
struct FValkyrieProjectBindingsDescriptor {
	struct FString ProjectID; // 0x00(0x10)
	struct TMap<struct FString, struct FString> Modules; // 0x10(0x50)
};

// ScriptStruct VkEngineTypes.ValkyrieProjectDescriptor
// Size: 0x150 (Inherited: 0x00)
struct FValkyrieProjectDescriptor {
	char FileVersion; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Title; // 0x08(0x10)
	struct FString Description; // 0x18(0x10)
	struct FString CompatibilityVersion; // 0x28(0x10)
	struct TArray<struct FString> EditorPermissions; // 0x38(0x10)
	struct FString EpicApp; // 0x48(0x10)
	struct FString KeyArt; // 0x58(0x10)
	float SortPriority; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct FValkyriePluginReferenceDescriptor> Plugins; // 0x70(0x10)
	struct TArray<struct FValkyrieProjectDependencyDescriptor> Dependencies; // 0x80(0x10)
	char pad_90[0x60]; // 0x90(0x60)
	struct FValkyrieProjectBindingsDescriptor Bindings; // 0xf0(0x60)
};

// ScriptStruct VkEngineTypes.VkNamedId
// Size: 0x20 (Inherited: 0x00)
struct FVkNamedId {
	struct FString Name; // 0x00(0x10)
	struct FString ID; // 0x10(0x10)
};

// ScriptStruct VkEngineTypes.VkContentFilter
// Size: 0x10 (Inherited: 0x00)
struct FVkContentFilter {
	struct FString Platform; // 0x00(0x10)
};

// ScriptStruct VkEngineTypes.VkArtifactOption
// Size: 0x28 (Inherited: 0x00)
struct FVkArtifactOption {
	struct FString ArtifactId; // 0x00(0x10)
	enum class EConsumerRole Role; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FVkContentFilter Filter; // 0x18(0x10)
};

// ScriptStruct VkEngineTypes.VkFoundMatchingArtifact
// Size: 0x30 (Inherited: 0x00)
struct FVkFoundMatchingArtifact {
	struct FString ArtifactId; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct FVkContentFilter Filter; // 0x20(0x10)
};

// ScriptStruct VkEngineTypes.VkModuleVersionRef
// Size: 0x18 (Inherited: 0x00)
struct FVkModuleVersionRef {
	struct FString ModuleId; // 0x00(0x10)
	int32_t Version; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct VkEngineTypes.VkModuleVersion
// Size: 0x18 (Inherited: 0x00)
struct FVkModuleVersion {
	struct FString ModuleId; // 0x00(0x10)
	int32_t Version; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct VkEngineTypes.VkModuleVersionWithArtifacts
// Size: 0x28 (Inherited: 0x18)
struct FVkModuleVersionWithArtifacts : FVkModuleVersion {
	struct TArray<struct FVkArtifactOption> Artifacts; // 0x18(0x10)
};

// ScriptStruct VkEngineTypes.VkModuleDoc
// Size: 0xf8 (Inherited: 0x00)
struct FVkModuleDoc {
	struct FString ModuleId; // 0x00(0x10)
	struct FDateTime Created; // 0x10(0x08)
	struct FDateTime Updated; // 0x18(0x08)
	struct FVkNamedId Author; // 0x20(0x20)
	struct FString ProjectID; // 0x40(0x10)
	struct FString ModuleName; // 0x50(0x10)
	struct FString ContentType; // 0x60(0x10)
	struct TMap<enum class EConsumerRole, bool> Relevance; // 0x70(0x50)
	struct FString AliasForModuleId; // 0xc0(0x10)
	struct FJsonObjectWrapper Meta; // 0xd0(0x20)
	int32_t LatestVersion; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// ScriptStruct VkEngineTypes.VkContentPackage
// Size: 0x70 (Inherited: 0x00)
struct FVkContentPackage {
	struct FString ProjectID; // 0x00(0x10)
	struct TMap<struct FString, struct FString> ProjectFlags; // 0x10(0x50)
	struct TArray<struct FVkModuleVersionWithArtifacts> Content; // 0x60(0x10)
};

// ScriptStruct VkEngineTypes.VkModuleBinaries
// Size: 0x50 (Inherited: 0x00)
struct FVkModuleBinaries {
	struct FString BaseUrl; // 0x00(0x10)
	struct FString manifest; // 0x10(0x10)
	struct TArray<struct FString> Files; // 0x20(0x10)
	double TotalSizeKb; // 0x30(0x08)
	double ManifestSizeKb; // 0x38(0x08)
	double ManifestDiskSizeKb; // 0x40(0x08)
	double ManifestDownloadSizeKb; // 0x48(0x08)
};

// ScriptStruct VkEngineTypes.VkResolvedModule
// Size: 0x88 (Inherited: 0x00)
struct FVkResolvedModule {
	struct FString ModuleId; // 0x00(0x10)
	int32_t Version; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString ArtifactId; // 0x18(0x10)
	struct FString CookJobId; // 0x28(0x10)
	struct FVkModuleBinaries Binaries; // 0x38(0x50)
};

// ScriptStruct VkEngineTypes.VkContentManifest
// Size: 0x10 (Inherited: 0x00)
struct FVkContentManifest {
	struct TArray<struct FVkResolvedModule> Content; // 0x00(0x10)
};

// ScriptStruct VkEngineTypes.VkBuildVersion
// Size: 0x18 (Inherited: 0x00)
struct FVkBuildVersion {
	struct FString Major; // 0x00(0x10)
	int32_t Minor; // 0x10(0x04)
	int32_t Patch; // 0x14(0x04)
};

// ScriptStruct VkEngineTypes.VkJobOutput
// Size: 0x38 (Inherited: 0x00)
struct FVkJobOutput {
	struct FString BaseUrl; // 0x00(0x10)
	int32_t TotalSizeKb; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FString> Files; // 0x18(0x10)
	struct FString manifest; // 0x28(0x10)
};

// ScriptStruct VkEngineTypes.VkModuleVersionDoc
// Size: 0x168 (Inherited: 0x00)
struct FVkModuleVersionDoc {
	struct FString ModuleId; // 0x00(0x10)
	int32_t Version; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString ProjectID; // 0x18(0x10)
	enum class EVkModuleAccess Access; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FDateTime Created; // 0x30(0x08)
	struct FVkNamedId Author; // 0x38(0x20)
	struct FJsonObjectWrapper Meta; // 0x58(0x20)
	struct TArray<struct FVkModuleVersionRef> Dependencies; // 0x78(0x10)
	struct FVkJobOutput StagedFiles; // 0x88(0x38)
	struct FVkBuildVersion SourceVersion; // 0xc0(0x18)
	struct FString ContentType; // 0xd8(0x10)
	struct TMap<enum class EConsumerRole, bool> Relevance; // 0xe8(0x50)
	struct FString ArtifactKey; // 0x138(0x10)
	struct FString Checksum; // 0x148(0x10)
	struct TArray<struct FVkArtifactOption> Artifacts; // 0x158(0x10)
};

// ScriptStruct VkEngineTypes.VkPublishedLink
// Size: 0x40 (Inherited: 0x00)
struct FVkPublishedLink {
	struct FString LinkCode; // 0x00(0x10)
	int32_t LinkVersion; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FDateTime LastPublished; // 0x18(0x08)
	struct FString Base; // 0x20(0x10)
	struct FString CommitMessage; // 0x30(0x10)
};

// ScriptStruct VkEngineTypes.VkProjectDoc
// Size: 0xe0 (Inherited: 0x00)
struct FVkProjectDoc {
	struct FString ProjectID; // 0x00(0x10)
	struct FDateTime Created; // 0x10(0x08)
	struct FVkNamedId Author; // 0x18(0x20)
	enum class EVkOwnerType OwnerType; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FVkNamedId Owner; // 0x40(0x20)
	struct FJsonObjectWrapper Meta; // 0x60(0x20)
	struct FJsonObjectWrapper SysMeta; // 0x80(0x20)
	struct FVkPublishedLink LiveLink; // 0xa0(0x40)
};

// ScriptStruct VkEngineTypes.VkProjectUserInfo
// Size: 0xd8 (Inherited: 0x00)
struct FVkProjectUserInfo {
	struct FString ProjectID; // 0x00(0x10)
	struct FString AccountId; // 0x10(0x10)
	struct FString Title; // 0x20(0x10)
	bool HasStar; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TMap<struct FString, bool> Access; // 0x38(0x50)
	struct FVkPublishedLink PlaytestLink; // 0x88(0x40)
	struct TArray<struct FString> Permissions; // 0xc8(0x10)
};

// ScriptStruct VkEngineTypes.VkCreateProjectRequest
// Size: 0x50 (Inherited: 0x00)
struct FVkCreateProjectRequest {
	struct FString DesiredProjectId; // 0x00(0x10)
	struct FJsonObjectWrapper Meta; // 0x10(0x20)
	struct FJsonObjectWrapper SysMeta; // 0x30(0x20)
};

// ScriptStruct VkEngineTypes.VkTransferProjectRequest
// Size: 0x10 (Inherited: 0x00)
struct FVkTransferProjectRequest {
	struct FString TeamId; // 0x00(0x10)
};

// ScriptStruct VkEngineTypes.VkCreateModuleRequest
// Size: 0xa0 (Inherited: 0x00)
struct FVkCreateModuleRequest {
	struct FString ModuleName; // 0x00(0x10)
	struct FJsonObjectWrapper Meta; // 0x10(0x20)
	struct FString ContentType; // 0x30(0x10)
	struct TMap<enum class EConsumerRole, bool> Relevance; // 0x40(0x50)
	struct FString DesiredModuleId; // 0x90(0x10)
};

// ScriptStruct VkEngineTypes.VkCreateModuleVersionRequest
// Size: 0x90 (Inherited: 0x00)
struct FVkCreateModuleVersionRequest {
	struct TMap<struct FString, struct FString> RawFiles; // 0x00(0x50)
	struct TArray<struct FVkModuleVersionRef> Dependencies; // 0x50(0x10)
	struct FJsonObjectWrapper Meta; // 0x60(0x20)
	struct FString Checksum; // 0x80(0x10)
};

// ScriptStruct VkEngineTypes.VkResolvedContent
// Size: 0x68 (Inherited: 0x00)
struct FVkResolvedContent {
	struct FVkModuleVersionRef Root; // 0x00(0x18)
	struct TMap<struct FString, int32_t> Resolutions; // 0x18(0x50)
};

// ScriptStruct VkEngineTypes.VkVersionedLinkCode
// Size: 0x18 (Inherited: 0x00)
struct FVkVersionedLinkCode {
	struct FString Mnemonic; // 0x00(0x10)
	int32_t Version; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct VkEngineTypes.VkSnapshotSaveRequest
// Size: 0x88 (Inherited: 0x00)
struct FVkSnapshotSaveRequest {
	struct FVkResolvedContent Content; // 0x00(0x68)
	struct TArray<struct FVkVersionedLinkCode> Palette; // 0x68(0x10)
	struct FString MapPath; // 0x78(0x10)
};

// ScriptStruct VkEngineTypes.VkProjectSnapshot
// Size: 0xc8 (Inherited: 0x00)
struct FVkProjectSnapshot {
	struct FString UniqueId; // 0x00(0x10)
	struct FString ProjectID; // 0x10(0x10)
	struct FString AccountId; // 0x20(0x10)
	struct FDateTime CreatedAt; // 0x30(0x08)
	int32_t DeltaFileIndex; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FVkResolvedContent Content; // 0x40(0x68)
	struct TArray<struct FVkVersionedLinkCode> Palette; // 0xa8(0x10)
	struct FString MapPath; // 0xb8(0x10)
};

// ScriptStruct VkEngineTypes.VkGenerateTestcodeRequest
// Size: 0x88 (Inherited: 0x00)
struct FVkGenerateTestcodeRequest {
	struct FVkResolvedContent Content; // 0x00(0x68)
	struct FString MatchmakingScheme; // 0x68(0x10)
	struct FString CommitMessage; // 0x78(0x10)
};

// ScriptStruct VkEngineTypes.VkProjectSearchResult
// Size: 0x70 (Inherited: 0x00)
struct FVkProjectSearchResult {
	struct FString ProjectID; // 0x00(0x10)
	struct FDateTime Created; // 0x10(0x08)
	struct FDateTime Accessed; // 0x18(0x08)
	struct FJsonObjectWrapper Meta; // 0x20(0x20)
	struct FJsonObjectWrapper SysMeta; // 0x40(0x20)
	struct FString LinkCode; // 0x60(0x10)
};

// ScriptStruct VkEngineTypes.VkTeamMembershipResult
// Size: 0xc8 (Inherited: 0x00)
struct FVkTeamMembershipResult {
	struct FString Name; // 0x00(0x10)
	struct TMap<struct FString, bool> Access; // 0x10(0x50)
	struct FString Status; // 0x60(0x10)
	struct FString MembershipId; // 0x70(0x10)
	struct FVkNamedId Team; // 0x80(0x20)
	struct FVkNamedId Account; // 0xa0(0x20)
	struct FDateTime Updated; // 0xc0(0x08)
};

// ScriptStruct VkEngineTypes.VkLaunchData_LaunchLinkCode
// Size: 0x18 (Inherited: 0x00)
struct FVkLaunchData_LaunchLinkCode {
	struct FString LinkCode; // 0x00(0x10)
	int32_t Version; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct VkEngineTypes.VkLaunchData_JoinMatchmakingSession
// Size: 0x10 (Inherited: 0x00)
struct FVkLaunchData_JoinMatchmakingSession {
	struct FString SessionId; // 0x00(0x10)
};

// ScriptStruct VkEngineTypes.VkProjectPlaytestAccessRequest
// Size: 0x20 (Inherited: 0x00)
struct FVkProjectPlaytestAccessRequest {
	struct TArray<struct FString> Users; // 0x00(0x10)
	struct FString PlaytestGroupId; // 0x10(0x10)
};

// ScriptStruct VkEngineTypes.VkProjectAccessControl
// Size: 0x05 (Inherited: 0x00)
struct FVkProjectAccessControl {
	bool Read; // 0x00(0x01)
	bool Edit; // 0x01(0x01)
	bool Operate; // 0x02(0x01)
	bool Publish; // 0x03(0x01)
	bool Admin; // 0x04(0x01)
};

// ScriptStruct VkEngineTypes.VkProjectPlaytestAccessResult
// Size: 0x80 (Inherited: 0x00)
struct FVkProjectPlaytestAccessResult {
	struct FVkNamedId Owner; // 0x00(0x20)
	struct FString OwnerType; // 0x20(0x10)
	struct TMap<struct FString, struct FVkProjectAccessControl> Playtesters; // 0x30(0x50)
};

// ScriptStruct VkEngineTypes.VkSnapshotDeltaFiles
// Size: 0x60 (Inherited: 0x00)
struct FVkSnapshotDeltaFiles {
	struct FString SnapshotId; // 0x00(0x10)
	struct TMap<struct FString, struct FString> DeltaFileLinks; // 0x10(0x50)
};

// ScriptStruct VkEngineTypes.VkMetaDataFlags
// Size: 0x50 (Inherited: 0x00)
struct FVkMetaDataFlags {
	struct TMap<struct FString, struct FString> _validation_flags; // 0x00(0x50)
};

