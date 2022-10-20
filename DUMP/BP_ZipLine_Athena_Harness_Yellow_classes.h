// BlueprintGeneratedClass BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C
// Size: 0x3d8 (Inherited: 0x390)
struct ABP_ZipLine_Athena_Harness_Yellow_C : ABP_ZipLine_Athena_Harness_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x390(0x08)
	struct UNiagaraComponent* NS_Zipline_Pulley_SpeedLines_Converted; // 0x398(0x08)
	struct UNiagaraComponent* NS_Zipline_Speedline; // 0x3a0(0x08)
	float Alpha_NewTrack_0_AF34CA1D47D28FE19CCA3C98688125DE; // 0x3a8(0x04)
	enum class ETimelineDirection Alpha__Direction_AF34CA1D47D28FE19CCA3C98688125DE; // 0x3ac(0x01)
	char pad_3AD[0x3]; // 0x3ad(0x03)
	struct UTimelineComponent* Alpha; // 0x3b0(0x08)
	float Spark_NewTrack_0_A812B2F04CB78DDF352B84A578861501; // 0x3b8(0x04)
	enum class ETimelineDirection Spark__Direction_A812B2F04CB78DDF352B84A578861501; // 0x3bc(0x01)
	char pad_3BD[0x3]; // 0x3bd(0x03)
	struct UTimelineComponent* spark; // 0x3c0(0x08)
	double BeginLocation_z; // 0x3c8(0x08)
	double Location; // 0x3d0(0x08)

	void Spark__FinishedFunc(); // Function BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.Spark__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void Spark__UpdateFunc(); // Function BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.Spark__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void Alpha__FinishedFunc(); // Function BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.Alpha__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void Alpha__UpdateFunc(); // Function BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.Alpha__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void UpdateZiplineFX(); // Function BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.UpdateZiplineFX // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void Update Begin Z(); // Function BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.Update Begin Z // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ResetBlue(); // Function BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.ResetBlue // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_BP_ZipLine_Athena_Harness_Yellow(int32_t EntryPoint); // Function BP_ZipLine_Athena_Harness_Yellow.BP_ZipLine_Athena_Harness_Yellow_C.ExecuteUbergraph_BP_ZipLine_Athena_Harness_Yellow // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

