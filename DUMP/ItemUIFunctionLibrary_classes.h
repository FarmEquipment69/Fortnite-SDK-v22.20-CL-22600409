// BlueprintGeneratedClass ItemUIFunctionLibrary.ItemUIFunctionLibrary_C
// Size: 0x28 (Inherited: 0x28)
struct UItemUIFunctionLibrary_C : UBlueprintFunctionLibrary {

	void IsNullItem(struct UObject* ItemObject, struct UObject* __WorldContext, bool& Is Null Item); // Function ItemUIFunctionLibrary.ItemUIFunctionLibrary_C.IsNullItem // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void Truncate Integer Value(int32_t Value, int32_t Min Fractional Digits, int32_t Max Fractional Digits, struct UObject* __WorldContext, struct FText& Formatted Value); // Function ItemUIFunctionLibrary.ItemUIFunctionLibrary_C.Truncate Integer Value // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void Convert Tier To Integer(enum class EFortItemTier Tier, struct UObject* __WorldContext, int32_t& Numeric Tier); // Function ItemUIFunctionLibrary.ItemUIFunctionLibrary_C.Convert Tier To Integer // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void ParseLevelRequiredFromString(struct FString InString, struct UObject* __WorldContext, int32_t& outInt); // Function ItemUIFunctionLibrary.ItemUIFunctionLibrary_C.ParseLevelRequiredFromString // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
};

