// Class CreativeDataChannelTriggerRuntime.CreativeDataChannelAnalytics
// Size: 0x28 (Inherited: 0x28)
struct UCreativeDataChannelAnalytics : UObject {
};

// Class CreativeDataChannelTriggerRuntime.CreativeDataChannelTarget
// Size: 0x350 (Inherited: 0x300)
struct ACreativeDataChannelTarget : AElectraDataChannelTarget {
	char pad_300[0x8]; // 0x300(0x08)
	int8_t VersionByte; // 0x308(0x01)
	char pad_309[0x7]; // 0x309(0x07)
	struct FCreativeDataChannelEvents Events; // 0x310(0x10)
	struct FMulticastInlineDelegate OnEventsRep; // 0x320(0x10)
	struct FCreativeDataChannelEvents EventsCache; // 0x330(0x10)
	char pad_340[0x10]; // 0x340(0x10)

	void TestCreativeDataChannelTarget(struct FCreativeDataChannelEvents TestEvents); // Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTarget.TestCreativeDataChannelTarget // (Final|Native|Public|BlueprintCallable) // @ game+0x6766ebc
	void OnRep_Events(); // Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTarget.OnRep_Events // (Final|Native|Public) // @ game+0x24841e4
	void FireEvent(struct FName EventName); // Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTarget.FireEvent // (Event|Public|BlueprintEvent) // @ game+0xd67374
};

// Class CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetFN
// Size: 0x5b8 (Inherited: 0x300)
struct ACreativeDataChannelTargetFN : AElectraDataChannelTarget {
	char pad_300[0x8]; // 0x300(0x08)
	int32_t VersionByte; // 0x308(0x04)
	struct FCDCInt VersionByteTracker; // 0x30c(0x04)
	struct FMulticastInlineDelegate VersionByteEvent; // 0x310(0x10)
	struct FString LeaderBoard; // 0x320(0x10)
	int64_t StormCircleSize; // 0x330(0x08)
	struct FCDCLargeInt StormCircleSizeTracker; // 0x338(0x08)
	struct FMulticastInlineDelegate StormCircleSizeEvent; // 0x340(0x10)
	struct TArray<float> StormCircleLocation; // 0x350(0x10)
	struct FCDCFloatArray StormCircleLocationTracker; // 0x360(0x10)
	struct FMulticastInlineDelegate StormCircleLocationEvent; // 0x370(0x10)
	struct FString PlayerLocation; // 0x380(0x10)
	struct FCDCStringFloatArrayMap PlayerLocationTracker; // 0x390(0x50)
	struct FMulticastInlineDelegate PlayerLocationEvent; // 0x3e0(0x10)
	struct FString ArenaPointLeaderBoard; // 0x3f0(0x10)
	struct FCDCStringStringMap ArenaPointLeaderBoardTracker; // 0x400(0xa0)
	struct FMulticastInlineDelegate ArenaPointLeaderBoardEvent; // 0x4a0(0x10)
	struct FString CashCupDataAllTimeEarners; // 0x4b0(0x10)
	struct FCDCStringFloatMap CashCupDataAllTimeEanersTracker; // 0x4c0(0x50)
	struct FMulticastInlineDelegate CashCupDataAllTimeEarnersEvent; // 0x510(0x10)
	struct FString MythicBossEliminatedPlayer; // 0x520(0x10)
	struct FCDCString MythicBossEliminatedPlayerTracker; // 0x530(0x10)
	struct FMulticastInlineDelegate MythicBossEliminatedPlayerEvent; // 0x540(0x10)
	struct FString MythicWeaponPlayer; // 0x550(0x10)
	struct FCDCString MythicWeaponPlayerTracker; // 0x560(0x10)
	struct FMulticastInlineDelegate MythicWeaponPlayerEvent; // 0x570(0x10)
	struct FString PlayerInfo; // 0x580(0x10)
	struct FCDCStringArray PlayerInfoTracker; // 0x590(0x18)
	struct FMulticastInlineDelegate PlayerInfoEvent; // 0x5a8(0x10)
};

// Class CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL
// Size: 0x7c0 (Inherited: 0x300)
struct ACreativeDataChannelTargetRL : AElectraDataChannelTarget {
	char pad_300[0x8]; // 0x300(0x08)
	int32_t VersionByte; // 0x308(0x04)
	struct FCDCInt VersionByteTracker; // 0x30c(0x04)
	struct FMulticastInlineDelegate VersionByteEvent; // 0x310(0x10)
	int32_t ScoreTeam; // 0x320(0x04)
	char pad_324[0x4]; // 0x324(0x04)
	struct FCDCString ScoreTeamTracker; // 0x328(0x10)
	struct FMulticastInlineDelegate ScoreTeamEvent; // 0x338(0x10)
	struct FString ScoreTotal; // 0x348(0x10)
	struct FCDCStringIntMap ScoreTotalTracker; // 0x358(0x50)
	struct FMulticastInlineDelegate ScoreTotalEvent; // 0x3a8(0x10)
	int64_t ScoreboardTimeLeft; // 0x3b8(0x08)
	struct FCDCLargeInt ScoreboardTimeLeftTracker; // 0x3c0(0x08)
	struct FMulticastInlineDelegate ScoreboardTimeLeftEvent; // 0x3c8(0x10)
	struct FString ScoreboardBestOf; // 0x3d8(0x10)
	struct FCDCStringIntMap ScoreboardBestOfTracker; // 0x3e8(0x50)
	struct FMulticastInlineDelegate ScoreboardBestOfEvent; // 0x438(0x10)
	int32_t OverTime; // 0x448(0x04)
	struct FCDCInt OvertimeTracker; // 0x44c(0x04)
	struct FMulticastInlineDelegate OvertimeEvent; // 0x450(0x10)
	struct FString TeamNames; // 0x460(0x10)
	struct FCDCStringArray TeamNamesTracker; // 0x470(0x18)
	struct FMulticastInlineDelegate TeamNamesEvent; // 0x488(0x10)
	struct FString PlayerNames; // 0x498(0x10)
	struct FCDCStringArray PlayerNamesTracker; // 0x4a8(0x18)
	struct FMulticastInlineDelegate PlayerNamesEvent; // 0x4c0(0x10)
	struct FString PlayerBoost; // 0x4d0(0x10)
	struct FCDCStringIntMap PlayerBoostTracker; // 0x4e0(0x50)
	struct FMulticastInlineDelegate PlayerBoostEvent; // 0x530(0x10)
	struct FString PlayerBoostCollected; // 0x540(0x10)
	struct FCDCStringStringMap PlayerBoostCollectedTracker; // 0x550(0xa0)
	struct FMulticastInlineDelegate PlayerBoostCollectedEvent; // 0x5f0(0x10)
	struct FString PlayerCoords; // 0x600(0x10)
	struct FCDCStringFloatArrayMap PlayerCoordsTracker; // 0x610(0x50)
	struct FMulticastInlineDelegate PlayerCoordsEvent; // 0x660(0x10)
	struct FString BallCoords; // 0x670(0x10)
	struct FCDCFloatArray BallCoordsTracker; // 0x680(0x10)
	struct FMulticastInlineDelegate BallCoordsEvent; // 0x690(0x10)
	struct FString MediaStart; // 0x6a0(0x10)
	struct FCDCStringStringMap MediaStartTracker; // 0x6b0(0xa0)
	struct FMulticastInlineDelegate MediaStartEvent; // 0x750(0x10)
	int32_t MediaStop; // 0x760(0x04)
	struct FCDCInt MediaStopTracker; // 0x764(0x04)
	struct FMulticastInlineDelegate MediaStopEvent; // 0x768(0x10)
	int32_t SeriesState; // 0x778(0x04)
	struct FCDCInt SeriesStateTracker; // 0x77c(0x04)
	struct FMulticastInlineDelegate SeriesStateEvent; // 0x780(0x10)
	int32_t MatchState; // 0x790(0x04)
	struct FCDCInt MatchStateTracker; // 0x794(0x04)
	struct FMulticastInlineDelegate MatchStateEvent; // 0x798(0x10)
	int32_t FinaleState; // 0x7a8(0x04)
	struct FCDCInt FinaleStateTracker; // 0x7ac(0x04)
	struct FMulticastInlineDelegate FinaleStateEvent; // 0x7b0(0x10)

	void ReportServerStateStreamError(struct FString Error, struct FString UID, struct FString URL); // Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.ReportServerStateStreamError // (Final|Native|Public|BlueprintCallable) // @ game+0x6766b54
	void OnRep_VersionByte(); // Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_VersionByte // (Final|Native|Public) // @ game+0x6766b1c
	void OnRep_TeamNames(); // Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_TeamNames // (Final|Native|Public) // @ game+0x6766aa0
	void OnRep_SeriesState(); // Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_SeriesState // (Final|Native|Public) // @ game+0x6766a68
	void OnRep_ScoreTotal(); // Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_ScoreTotal // (Final|Native|Public) // @ game+0x6766a04
	void OnRep_ScoreTeam(); // Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_ScoreTeam // (Final|Native|Public) // @ game+0x67669f0
	void OnRep_ScoreboardTimeLeft(); // Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_ScoreboardTimeLeft // (Final|Native|Public) // @ game+0x6766a2c
	void OnRep_ScoreboardBestOf(); // Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_ScoreboardBestOf // (Final|Native|Public) // @ game+0x6766a18
	void OnRep_PlayerNames(); // Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_PlayerNames // (Final|Native|Public) // @ game+0x67669dc
	void OnRep_PlayerCoords(); // Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_PlayerCoords // (Final|Native|Public) // @ game+0x67669c8
	void OnRep_PlayerBoostCollected(); // Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_PlayerBoostCollected // (Final|Native|Public) // @ game+0x67669b4
	void OnRep_PlayerBoost(); // Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_PlayerBoost // (Final|Native|Public) // @ game+0x67669a0
	void OnRep_Overtime(); // Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_Overtime // (Final|Native|Public) // @ game+0x6766968
	void OnRep_MediaStop(); // Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_MediaStop // (Final|Native|Public) // @ game+0x6766930
	void OnRep_MediaStart(); // Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_MediaStart // (Final|Native|Public) // @ game+0x676691c
	void OnRep_MatchState(); // Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_MatchState // (Final|Native|Public) // @ game+0x67668e4
	void OnRep_FinaleState(); // Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_FinaleState // (Final|Native|Public) // @ game+0x67668ac
	void OnRep_BallCoords(); // Function CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_BallCoords // (Final|Native|Public) // @ game+0x6766898
};

