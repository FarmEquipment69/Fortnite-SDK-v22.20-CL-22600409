// BlueprintGeneratedClass SunDirectionandColorSet.SunDirectionandColorSet_C
// Size: 0x2b0 (Inherited: 0x288)
struct ASunDirectionandColorSet_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct USceneComponent* Scene; // 0x290(0x08)
	struct UArrowComponent* Arrow; // 0x298(0x08)
	struct FLinearColor SunLightColor; // 0x2a0(0x10)

	void UserConstructionScript(); // Function SunDirectionandColorSet.SunDirectionandColorSet_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function SunDirectionandColorSet.SunDirectionandColorSet_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ReceiveTick(float DeltaSeconds); // Function SunDirectionandColorSet.SunDirectionandColorSet_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SunDirectionandColorSet(int32_t EntryPoint); // Function SunDirectionandColorSet.SunDirectionandColorSet_C.ExecuteUbergraph_SunDirectionandColorSet // (Final|UbergraphFunction) // @ game+0xd67374
};

