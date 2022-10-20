// WidgetBlueprintGeneratedClass LockerBuiltInEmoteWidget.LockerBuiltInEmoteWidget_C
// Size: 0x14b8 (Inherited: 0x1490)
struct ULockerBuiltInEmoteWidget_C : UFortLockerBuiltInEmoteWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1490(0x08)
	struct UWidgetAnimation* WarningPulse; // 0x1498(0x08)
	struct UWidgetSwitcher* IconSwitcher; // 0x14a0(0x08)
	struct UImage* LockedFill; // 0x14a8(0x08)
	struct UOverlay* LockedOvr; // 0x14b0(0x08)

	void OnUpdateAccessRestrictionWarning(bool bShouldShow, enum class EAthenaLockerInfoRestrictionWarning WarningType); // Function LockerBuiltInEmoteWidget.LockerBuiltInEmoteWidget_C.OnUpdateAccessRestrictionWarning // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_LockerBuiltInEmoteWidget(int32_t EntryPoint); // Function LockerBuiltInEmoteWidget.LockerBuiltInEmoteWidget_C.ExecuteUbergraph_LockerBuiltInEmoteWidget // (Final|UbergraphFunction) // @ game+0xd67374
};

