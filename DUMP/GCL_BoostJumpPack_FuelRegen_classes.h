// BlueprintGeneratedClass GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C
// Size: 0x4a0 (Inherited: 0x488)
struct AGCL_BoostJumpPack_FuelRegen_C : AGameplayCueNotify_Jetpack_FuelRegen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x488(0x08)
	float FullBlinkTimeline_Blink_108772B949790E60DC9BE1BAC70C2EA1; // 0x490(0x04)
	enum class ETimelineDirection FullBlinkTimeline__Direction_108772B949790E60DC9BE1BAC70C2EA1; // 0x494(0x01)
	char pad_495[0x3]; // 0x495(0x03)
	struct UTimelineComponent* FullBlinkTimeline; // 0x498(0x08)

	void FullBlinkTimeline__FinishedFunc(); // Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.FullBlinkTimeline__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void FullBlinkTimeline__UpdateFunc(); // Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.FullBlinkTimeline__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void ResetBlink(struct AFortPlayerPawn* PlayerPawn); // Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.ResetBlink // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_GCL_BoostJumpPack_FuelRegen(int32_t EntryPoint); // Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.ExecuteUbergraph_GCL_BoostJumpPack_FuelRegen // (Final|UbergraphFunction) // @ game+0xd67374
};

