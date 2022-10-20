// ScriptStruct ScheduledEvents.EventRecord
// Size: 0x20 (Inherited: 0x00)
struct FEventRecord {
	struct FString EventType; // 0x00(0x10)
	struct FDateTime ActiveUntil; // 0x10(0x08)
	struct FDateTime ActiveSince; // 0x18(0x08)
};

// ScriptStruct ScheduledEvents.EventChannelState
// Size: 0x38 (Inherited: 0x00)
struct FEventChannelState {
	struct FDateTime ValidFrom; // 0x00(0x08)
	struct TArray<struct FEventRecord> ActiveEvents; // 0x08(0x10)
	struct FJsonObjectWrapper State; // 0x18(0x20)
};

// ScriptStruct ScheduledEvents.EventsTimeline
// Size: 0x18 (Inherited: 0x00)
struct FEventsTimeline {
	struct FDateTime CacheExpire; // 0x00(0x08)
	struct TArray<struct FEventChannelState> States; // 0x08(0x10)
};

// ScriptStruct ScheduledEvents.CalendarDownload
// Size: 0x60 (Inherited: 0x00)
struct FCalendarDownload {
	struct FDateTime CurrentTime; // 0x00(0x08)
	double CacheIntervalMins; // 0x08(0x08)
	struct TMap<struct FString, struct FEventsTimeline> Channels; // 0x10(0x50)
};

