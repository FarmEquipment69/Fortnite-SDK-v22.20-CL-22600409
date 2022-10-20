// WidgetBlueprintGeneratedClass NPCConvertedIndicatorMarker.NPCConvertedIndicatorMarker_C
// Size: 0x630 (Inherited: 0x610)
struct UNPCConvertedIndicatorMarker_C : UAthenaMarkedActorIndicator {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x610(0x08)
	struct UImage* IrwinIndicator; // 0x618(0x08)
	struct UConvertedMarkerInfo_C* RidingMarkerInfo; // 0x620(0x08)
	struct AFortPlayerStateAthena* CachedPlayerState; // 0x628(0x08)

	void OnSetMarkerData(struct FFortWorldMarkerData& FortWorldMarkerData); // Function NPCConvertedIndicatorMarker.NPCConvertedIndicatorMarker_C.OnSetMarkerData // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xd67374
	void OnPingCommandEvent(enum class PingCommandType CommandType); // Function NPCConvertedIndicatorMarker.NPCConvertedIndicatorMarker_C.OnPingCommandEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_NPCConvertedIndicatorMarker(int32_t EntryPoint); // Function NPCConvertedIndicatorMarker.NPCConvertedIndicatorMarker_C.ExecuteUbergraph_NPCConvertedIndicatorMarker // (Final|UbergraphFunction|HasDefaults) // @ game+0xd67374
};

