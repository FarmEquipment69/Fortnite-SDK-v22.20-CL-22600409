// WidgetBlueprintGeneratedClass SidebarProfileLoading.SidebarProfileLoading_C
// Size: 0x2f0 (Inherited: 0x2e0)
struct USidebarProfileLoading_C : UFortSocialProfileSubPanel_Loading {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UImage* ProgressSpinner; // 0x2e8(0x08)

	void OnLoadingStarted(); // Function SidebarProfileLoading.SidebarProfileLoading_C.OnLoadingStarted // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void OnLoadingFinished(); // Function SidebarProfileLoading.SidebarProfileLoading_C.OnLoadingFinished // (Event|Public|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_SidebarProfileLoading(int32_t EntryPoint); // Function SidebarProfileLoading.SidebarProfileLoading_C.ExecuteUbergraph_SidebarProfileLoading // (Final|UbergraphFunction) // @ game+0xd67374
};

