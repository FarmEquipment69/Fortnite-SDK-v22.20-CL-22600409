// ScriptStruct DeploymentConsole.DeploymentConsoleAircraftData
// Size: 0x10 (Inherited: 0x00)
struct FDeploymentConsoleAircraftData {
	char Team; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct AFortAthenaAircraft* Aircraft; // 0x08(0x08)
};

// ScriptStruct DeploymentConsole.DeploymentConsoleTeamData
// Size: 0x18 (Inherited: 0x00)
struct FDeploymentConsoleTeamData {
	char Team; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FVector2D> SpawnLocations; // 0x08(0x10)
};

