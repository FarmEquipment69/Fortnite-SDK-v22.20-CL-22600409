// ScriptStruct XpEverywhereUI.XpEverywhereNotificationWidgetClass
// Size: 0x20 (Inherited: 0x00)
struct FXpEverywhereNotificationWidgetClass {
	struct UFortNotificationEntry* NotificationWidgetClass; // 0x00(0x08)
	int32_t InitialPoolSize; // 0x08(0x04)
	bool bCanIncreasePoolSizeAtRunTime; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct TArray<struct UFortNotificationEntry*> WidgetPool; // 0x10(0x10)
};

