// WidgetBlueprintGeneratedClass LocalUserEntry.LocalUserEntry_C
// Size: 0x1548 (Inherited: 0x14e0)
struct ULocalUserEntry_C : UFortSocialEventRSVPLocalUserEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x14e0(0x08)
	struct UWidgetAnimation* Hovered; // 0x14e8(0x08)
	struct UBorder* Border_OnlineStatusIndicator; // 0x14f0(0x08)
	struct UFortMobileImage* FortMobileImage_enforzer; // 0x14f8(0x08)
	struct UImage* Image_MicIcon; // 0x1500(0x08)
	struct UBorder* LocalUserEntryBorder; // 0x1508(0x08)
	struct UFortMobileImage* SettingsIcon; // 0x1510(0x08)
	struct FLinearColor Online; // 0x1518(0x10)
	struct FLinearColor Offline; // 0x1528(0x10)
	struct FLinearColor Away; // 0x1538(0x10)

	void HandleOnlineIndicatorView(enum class ELocalUserOnlineStatus InLocalUserOnlineStatus); // Function LocalUserEntry.LocalUserEntry_C.HandleOnlineIndicatorView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void BP_OnHovered(); // Function LocalUserEntry.LocalUserEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void BP_OnUnhovered(); // Function LocalUserEntry.LocalUserEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void OnOnlineStatusChanged(enum class ELocalUserOnlineStatus OnlineStatus); // Function LocalUserEntry.LocalUserEntry_C.OnOnlineStatusChanged // (Event|Protected|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_LocalUserEntry(int32_t EntryPoint); // Function LocalUserEntry.LocalUserEntry_C.ExecuteUbergraph_LocalUserEntry // (Final|UbergraphFunction) // @ game+0xd67374
};

