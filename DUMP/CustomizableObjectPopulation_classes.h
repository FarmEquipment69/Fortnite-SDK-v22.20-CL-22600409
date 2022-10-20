// Class CustomizableObjectPopulation.CustomizableObjectPopulation
// Size: 0x50 (Inherited: 0x28)
struct UCustomizableObjectPopulation : UObject {
	struct FString Name; // 0x28(0x10)
	struct TArray<struct FClassWeightPair> ClassWeights; // 0x38(0x10)
	struct UCustomizableObjectPopulationGenerator* Generator; // 0x48(0x08)

	bool RegeneratePopulation(int32_t Seed, struct TArray<struct UCustomizableObjectInstance*>& OutInstances, int32_t NumInstancesToGenerate); // Function CustomizableObjectPopulation.CustomizableObjectPopulation.RegeneratePopulation // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7244508
	int32_t GeneratePopulation(struct TArray<struct UCustomizableObjectInstance*>& OutInstances, int32_t NumInstancesToGenerate); // Function CustomizableObjectPopulation.CustomizableObjectPopulation.GeneratePopulation // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x724434c
};

// Class CustomizableObjectPopulation.CustomizableObjectPopulationClass
// Size: 0x90 (Inherited: 0x28)
struct UCustomizableObjectPopulationClass : UObject {
	struct FString Name; // 0x28(0x10)
	struct UCustomizableObject* CustomizableObject; // 0x38(0x08)
	struct TArray<struct FString> WhiteList; // 0x40(0x10)
	struct TArray<struct FString> Blacklist; // 0x50(0x10)
	struct TArray<struct FCustomizableObjectPopulationCharacteristic> Characteristics; // 0x60(0x10)
	struct TArray<struct FString> Tags; // 0x70(0x10)
	char pad_80[0x10]; // 0x80(0x10)
};

// Class CustomizableObjectPopulation.CustomizableObjectPopulationGenerator
// Size: 0x48 (Inherited: 0x28)
struct UCustomizableObjectPopulationGenerator : UObject {
	struct TArray<struct UCustomizableObject*> PopulationObjects; // 0x28(0x10)
	char pad_38[0x10]; // 0x38(0x10)
};

