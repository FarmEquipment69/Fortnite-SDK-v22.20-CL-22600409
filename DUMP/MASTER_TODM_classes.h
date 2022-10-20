// BlueprintGeneratedClass MASTER_TODM.MASTER_TODM_C
// Size: 0x12e0 (Inherited: 0xff0)
struct AMASTER_TODM_C : AFortTimeOfDayManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xff0(0x08)
	struct UPostProcessComponent* HeavySSAO_Postprocess; // 0xff8(0x08)
	struct UPostProcessComponent* EditorPostProcessMaterial(HackToWorkAroundTheOutlineShaderBeingInjectedByCodeAtRuntime); // 0x1000(0x08)
	float New_Storm_Timeline_Wind_Strength_5E5E494B489306ED044096A143F228CF; // 0x1008(0x04)
	float New_Storm_Timeline_RainInt_5E5E494B489306ED044096A143F228CF; // 0x100c(0x04)
	float New_Storm_Timeline_Lightning_Modulator_5E5E494B489306ED044096A143F228CF; // 0x1010(0x04)
	float New_Storm_Timeline_Storm_Ramp_In_Value_5E5E494B489306ED044096A143F228CF; // 0x1014(0x04)
	enum class ETimelineDirection New_Storm_Timeline__Direction_5E5E494B489306ED044096A143F228CF; // 0x1018(0x01)
	char pad_1019[0x7]; // 0x1019(0x07)
	struct UTimelineComponent* New Storm Timeline; // 0x1020(0x08)
	float FlashLightning_LightningColorLERP_FA5447C54EBAE729F521C3B243BEC285; // 0x1028(0x04)
	float FlashLightning_lightning_alpha_FA5447C54EBAE729F521C3B243BEC285; // 0x102c(0x04)
	float FlashLightning_Lightning_Intensity_FA5447C54EBAE729F521C3B243BEC285; // 0x1030(0x04)
	enum class ETimelineDirection FlashLightning__Direction_FA5447C54EBAE729F521C3B243BEC285; // 0x1034(0x01)
	char pad_1035[0x3]; // 0x1035(0x03)
	struct UTimelineComponent* FlashLightning; // 0x1038(0x08)
	double WindSpeed; // 0x1040(0x08)
	double RandomWeatherWaitTime; // 0x1048(0x08)
	double CurrentAmountOfRandomWeatherTimeLeft; // 0x1050(0x08)
	double NewWeatherLerpAmount; // 0x1058(0x08)
	double WindStrength; // 0x1060(0x08)
	double FutureWindStrength; // 0x1068(0x08)
	double FutureWindSpeed; // 0x1070(0x08)
	bool bPickNewWindConditions; // 0x1078(0x01)
	char pad_1079[0x7]; // 0x1079(0x07)
	double LightningStrength; // 0x1080(0x08)
	double ThreatCloudStormAmount; // 0x1088(0x08)
	bool UseRainWithStorms; // 0x1090(0x01)
	bool Play a Particle Effect Near the players Feet; // 0x1091(0x01)
	bool WindEffects Should be Active; // 0x1092(0x01)
	char pad_1093[0x5]; // 0x1093(0x05)
	struct UParticleSystemComponent* Storm Foot Particle Outdoor; // 0x1098(0x08)
	struct UParticleSystem* Storm Foot Particle While on Terrain; // 0x10a0(0x08)
	struct UParticleSystemComponent* Storm Foot Particle Indoor; // 0x10a8(0x08)
	struct UParticleSystem* Storm Foot Particle While NOT on Terrain; // 0x10b0(0x08)
	double Storm Wind Strength; // 0x10b8(0x08)
	bool Generate Foliage Wind Gusts; // 0x10c0(0x01)
	char pad_10C1[0x7]; // 0x10c1(0x07)
	struct FTimerHandle LightningStrikeTimerHandle; // 0x10c8(0x08)
	struct FLinearColor PreviousDirectionalLightColor; // 0x10d0(0x10)
	struct FLinearColor Lightning Flash Color; // 0x10e0(0x10)
	double Lightning Flash Timeline Min; // 0x10f0(0x08)
	double Lightning Flash Timeline Max; // 0x10f8(0x08)
	struct FLinearColor SkyboxFogMorningColor; // 0x1100(0x10)
	struct FLinearColor SkyboxFogMorningLitColor; // 0x1110(0x10)
	double SkyboxFogMorningDistance; // 0x1120(0x08)
	double SkyboxFogMorningDiffuseAmount; // 0x1128(0x08)
	double SkyboxFogMorningEmissiveAmount; // 0x1130(0x08)
	double SkyboxFogMorningLitLength; // 0x1138(0x08)
	double SkyboxFogMorningLitRotation; // 0x1140(0x08)
	double SkyboxFogMorningLitOffset; // 0x1148(0x08)
	struct FLinearColor SkyboxFogDayColor; // 0x1150(0x10)
	struct FLinearColor SkyboxFogDayLitColor; // 0x1160(0x10)
	double SkyboxFogDayDistance; // 0x1170(0x08)
	double SkyboxFogDayDiffuseAmount; // 0x1178(0x08)
	double SkyboxFogDayEmissiveAmount; // 0x1180(0x08)
	double SkyboxFogDayLitLength; // 0x1188(0x08)
	double SkyboxFogDayLitRotation; // 0x1190(0x08)
	double SkyboxFogDayLitOffset; // 0x1198(0x08)
	struct FLinearColor SkyboxFogEveningColor; // 0x11a0(0x10)
	struct FLinearColor SkyboxFogEveningLitColor; // 0x11b0(0x10)
	double SkyboxFogEveningDistance; // 0x11c0(0x08)
	double SkyboxFogEveningDiffuseAmount; // 0x11c8(0x08)
	double SkyboxFogEveningEmissiveAmount; // 0x11d0(0x08)
	double SkyboxFogEveningLitLength; // 0x11d8(0x08)
	double SkyboxFogEveningLitRotation; // 0x11e0(0x08)
	double SkyboxFogEveningLitOffset; // 0x11e8(0x08)
	struct FLinearColor SkyboxFogNightColor; // 0x11f0(0x10)
	struct FLinearColor SkyboxFogNightLitColor; // 0x1200(0x10)
	double SkyboxFogNightDistance; // 0x1210(0x08)
	double SkyboxFogNightDiffuseAmount; // 0x1218(0x08)
	double SkyboxFogNightEmissiveAmount; // 0x1220(0x08)
	double SkyboxFogNightLitLength; // 0x1228(0x08)
	double SkyboxFogNightLitRotation; // 0x1230(0x08)
	double SkyboxFogNightLitOffset; // 0x1238(0x08)
	double World Border Cloud Base Color Brightness; // 0x1240(0x08)
	struct FLinearColor World Border Cloud Sub Surface Color and Opacity; // 0x1248(0x10)
	bool EnableCometDynamicPlacement; // 0x1258(0x01)
	char pad_1259[0x7]; // 0x1259(0x07)
	struct FVector4 Night; // 0x1260(0x20)
	struct FVector4 Evening; // 0x1280(0x20)
	struct FVector4 Day; // 0x12a0(0x20)
	struct FVector4 Morning; // 0x12c0(0x20)

	void EmptyTransform(struct FTransform& Transform); // Function MASTER_TODM.MASTER_TODM_C.EmptyTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xd67374
	void SetHeavySSAO(); // Function MASTER_TODM.MASTER_TODM_C.SetHeavySSAO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UserConstructionScript(); // Function MASTER_TODM.MASTER_TODM_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void FlashLightning__FinishedFunc(); // Function MASTER_TODM.MASTER_TODM_C.FlashLightning__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void FlashLightning__UpdateFunc(); // Function MASTER_TODM.MASTER_TODM_C.FlashLightning__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void New Storm Timeline__FinishedFunc(); // Function MASTER_TODM.MASTER_TODM_C.New Storm Timeline__FinishedFunc // (BlueprintEvent) // @ game+0xd67374
	void New Storm Timeline__UpdateFunc(); // Function MASTER_TODM.MASTER_TODM_C.New Storm Timeline__UpdateFunc // (BlueprintEvent) // @ game+0xd67374
	void New Storm Timeline__FireOffRain__EventFunc(); // Function MASTER_TODM.MASTER_TODM_C.New Storm Timeline__FireOffRain__EventFunc // (BlueprintEvent) // @ game+0xd67374
	void StartStorm(); // Function MASTER_TODM.MASTER_TODM_C.StartStorm // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void OnStormStart(); // Function MASTER_TODM.MASTER_TODM_C.OnStormStart // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnStormEnd(); // Function MASTER_TODM.MASTER_TODM_C.OnStormEnd // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xd67374
	void LightningStrike(); // Function MASTER_TODM.MASTER_TODM_C.LightningStrike // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ReceiveBeginPlay(); // Function MASTER_TODM.MASTER_TODM_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void DisableLightAndFog(bool Enable); // Function MASTER_TODM.MASTER_TODM_C.DisableLightAndFog // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void EnableHDRRendering(); // Function MASTER_TODM.MASTER_TODM_C.EnableHDRRendering // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void UpdateSSAO(); // Function MASTER_TODM.MASTER_TODM_C.UpdateSSAO // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_MASTER_TODM(int32_t EntryPoint); // Function MASTER_TODM.MASTER_TODM_C.ExecuteUbergraph_MASTER_TODM // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

