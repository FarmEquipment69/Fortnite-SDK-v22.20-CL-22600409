// BlueprintGeneratedClass B_Melee_Blade_Real.B_Melee_Blade_Real_C
// Size: 0x11a8 (Inherited: 0x1180)
struct AB_Melee_Blade_Real_C : AB_Melee_Generic_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1180(0x08)
	struct USceneComponent* SwordPos; // 0x1188(0x08)
	struct FVector ImpactTipLocation; // 0x1190(0x18)

	void OnPlayImpactFX(struct FHitResult& HitResult, enum class EPhysicalSurface ImpactPhysicalSurface, struct UFXSystemComponent* SpawnedPSC); // Function B_Melee_Blade_Real.B_Melee_Blade_Real_C.OnPlayImpactFX // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_B_Melee_Blade_Real(int32_t EntryPoint); // Function B_Melee_Blade_Real.B_Melee_Blade_Real_C.ExecuteUbergraph_B_Melee_Blade_Real // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

