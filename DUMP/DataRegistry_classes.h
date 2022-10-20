// Class DataRegistry.DataRegistry
// Size: 0xb8 (Inherited: 0x28)
struct UDataRegistry : UObject {
	struct FName RegistryType; // 0x28(0x04)
	struct FDataRegistryIdFormat IdFormat; // 0x2c(0x04)
	struct UScriptStruct* ItemStruct; // 0x30(0x08)
	struct TArray<struct UDataRegistrySource*> DataSources; // 0x38(0x10)
	struct TArray<struct UDataRegistrySource*> RuntimeSources; // 0x48(0x10)
	float TimerUpdateFrequency; // 0x58(0x04)
	struct FDataRegistryCachePolicy DefaultCachePolicy; // 0x5c(0x14)
	char pad_70[0x48]; // 0x70(0x48)
};

// Class DataRegistry.DataRegistrySettings
// Size: 0x48 (Inherited: 0x30)
struct UDataRegistrySettings : UDeveloperSettings {
	struct TArray<struct FDirectoryPath> DirectoriesToScan; // 0x30(0x10)
	bool bInitializeAllLoadedRegistries; // 0x40(0x01)
	bool bIgnoreMissingCookedAssetRegistryData; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
};

// Class DataRegistry.DataRegistrySource
// Size: 0x38 (Inherited: 0x28)
struct UDataRegistrySource : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UDataRegistrySource* ParentSource; // 0x30(0x08)
};

// Class DataRegistry.MetaDataRegistrySource
// Size: 0x108 (Inherited: 0x38)
struct UMetaDataRegistrySource : UDataRegistrySource {
	enum class EMetaDataRegistrySourceAssetUsage AssetUsage; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FAssetManagerSearchRules SearchRules; // 0x40(0x50)
	struct TMap<struct FName, struct UDataRegistrySource*> RuntimeChildren; // 0x90(0x50)
	char pad_E0[0x28]; // 0xe0(0x28)
};

// Class DataRegistry.DataRegistrySource_CurveTable
// Size: 0xa0 (Inherited: 0x38)
struct UDataRegistrySource_CurveTable : UDataRegistrySource {
	struct TSoftObjectPtr<UCurveTable> SourceTable; // 0x38(0x28)
	struct FDataRegistrySource_DataTableRules TableRules; // 0x60(0x08)
	struct UCurveTable* CachedTable; // 0x68(0x08)
	struct UCurveTable* PreloadTable; // 0x70(0x08)
	char pad_78[0x28]; // 0x78(0x28)
};

// Class DataRegistry.MetaDataRegistrySource_CurveTable
// Size: 0x118 (Inherited: 0x108)
struct UMetaDataRegistrySource_CurveTable : UMetaDataRegistrySource {
	struct UDataRegistrySource_CurveTable* CreatedSource; // 0x108(0x08)
	struct FDataRegistrySource_DataTableRules TableRules; // 0x110(0x08)
};

// Class DataRegistry.DataRegistrySource_DataTable
// Size: 0xa0 (Inherited: 0x38)
struct UDataRegistrySource_DataTable : UDataRegistrySource {
	struct TSoftObjectPtr<UDataTable> SourceTable; // 0x38(0x28)
	struct FDataRegistrySource_DataTableRules TableRules; // 0x60(0x08)
	struct UDataTable* CachedTable; // 0x68(0x08)
	struct UDataTable* PreloadTable; // 0x70(0x08)
	char pad_78[0x28]; // 0x78(0x28)
};

// Class DataRegistry.MetaDataRegistrySource_DataTable
// Size: 0x118 (Inherited: 0x108)
struct UMetaDataRegistrySource_DataTable : UMetaDataRegistrySource {
	struct UDataRegistrySource_DataTable* CreatedSource; // 0x108(0x08)
	struct FDataRegistrySource_DataTableRules TableRules; // 0x110(0x08)
};

// Class DataRegistry.DataRegistrySubsystem
// Size: 0xc8 (Inherited: 0x30)
struct UDataRegistrySubsystem : UEngineSubsystem {
	char pad_30[0x98]; // 0x30(0x98)

	bool NotEqual_DataRegistryType(struct FDataRegistryType A, struct FDataRegistryType B); // Function DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryType // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5f33f68
	bool NotEqual_DataRegistryId(struct FDataRegistryId A, struct FDataRegistryId B); // Function DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryId // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5f33e9c
	bool IsValidDataRegistryType(struct FDataRegistryType DataRegistryType); // Function DataRegistry.DataRegistrySubsystem.IsValidDataRegistryType // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5f33dd8
	bool IsValidDataRegistryId(struct FDataRegistryId DataRegistryId); // Function DataRegistry.DataRegistrySubsystem.IsValidDataRegistryId // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5f33cf8
	bool GetCachedItemFromLookupBP(struct FDataRegistryId ItemId, struct FDataRegistryLookup& ResolvedLookup, struct FTableRowBase& OutItem); // Function DataRegistry.DataRegistrySubsystem.GetCachedItemFromLookupBP // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5f33adc
	bool GetCachedItemBP(struct FDataRegistryId ItemId, struct FTableRowBase& OutItem); // Function DataRegistry.DataRegistrySubsystem.GetCachedItemBP // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5f33950
	void FindCachedItemBP(struct FDataRegistryId ItemId, enum class EDataRegistrySubsystemGetItemResult& OutResult, struct FTableRowBase& OutItem); // Function DataRegistry.DataRegistrySubsystem.FindCachedItemBP // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5f33788
	void EvaluateDataRegistryCurve(struct FDataRegistryId ItemId, float InputValue, float DefaultValue, enum class EDataRegistrySubsystemGetItemResult& OutResult, float& OutValue); // Function DataRegistry.DataRegistrySubsystem.EvaluateDataRegistryCurve // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x5f335f4
	bool EqualEqual_DataRegistryType(struct FDataRegistryType A, struct FDataRegistryType B); // Function DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryType // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5f33538
	bool EqualEqual_DataRegistryId(struct FDataRegistryId A, struct FDataRegistryId B); // Function DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryId // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5f3346c
	struct FString Conv_DataRegistryTypeToString(struct FDataRegistryType DataRegistryType); // Function DataRegistry.DataRegistrySubsystem.Conv_DataRegistryTypeToString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5f332e4
	struct FString Conv_DataRegistryIdToString(struct FDataRegistryId DataRegistryId); // Function DataRegistry.DataRegistrySubsystem.Conv_DataRegistryIdToString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x5f33240
	bool AcquireItemBP(struct FDataRegistryId ItemId, struct FDelegate AcquireCallback); // Function DataRegistry.DataRegistrySubsystem.AcquireItemBP // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x5f33164
};

