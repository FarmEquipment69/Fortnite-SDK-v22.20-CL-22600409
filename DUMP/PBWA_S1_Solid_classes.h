// BlueprintGeneratedClass PBWA_S1_Solid.PBWA_S1_Solid_C
// Size: 0x1048 (Inherited: 0x1020)
struct APBWA_S1_Solid_C : ABuildingWall {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1020(0x08)
	int32_t GnomeWallChance; // 0x1028(0x04)
	int32_t GnomeWallMax; // 0x102c(0x04)
	bool Gnomed; // 0x1030(0x01)
	char pad_1031[0x7]; // 0x1031(0x07)
	struct UMaterialInstanceConstant* GnomeMaterial; // 0x1038(0x08)
	struct UStaticMesh* GnomeWall; // 0x1040(0x08)

	void UserConstructionScript(); // Function PBWA_S1_Solid.PBWA_S1_Solid_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function PBWA_S1_Solid.PBWA_S1_Solid_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_PBWA_S1_Solid(int32_t EntryPoint); // Function PBWA_S1_Solid.PBWA_S1_Solid_C.ExecuteUbergraph_PBWA_S1_Solid // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

