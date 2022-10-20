// WidgetBlueprintGeneratedClass WebLogin.WebLogin_C
// Size: 0x550 (Inherited: 0x538)
struct UWebLogin_C : UFortWebLoginWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x538(0x08)
	struct UCircularThrobber* Throbber; // 0x540(0x08)
	struct UBorder* WebContent; // 0x548(0x08)

	void DisplayWidget(struct UWidget* WebWidget); // Function WebLogin.WebLogin_C.DisplayWidget // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void DismissWidget(); // Function WebLogin.WebLogin_C.DismissWidget // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_WebLogin(int32_t EntryPoint); // Function WebLogin.WebLogin_C.ExecuteUbergraph_WebLogin // (Final|UbergraphFunction) // @ game+0xd67374
};

