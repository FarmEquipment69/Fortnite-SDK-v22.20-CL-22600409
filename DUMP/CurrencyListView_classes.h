// WidgetBlueprintGeneratedClass CurrencyListView.CurrencyListView_C
// Size: 0x2c8 (Inherited: 0x2b8)
struct UCurrencyListView_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UCommonListView* DataListView; // 0x2c0(0x08)

	void AddDataToList(struct FCurrencyData CurrencyData); // Function CurrencyListView.CurrencyListView_C.AddDataToList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void RunClearListView(); // Function CurrencyListView.CurrencyListView_C.RunClearListView // (BlueprintCallable|BlueprintEvent) // @ game+0xd67374
	void ExecuteUbergraph_CurrencyListView(int32_t EntryPoint); // Function CurrencyListView.CurrencyListView_C.ExecuteUbergraph_CurrencyListView // (Final|UbergraphFunction) // @ game+0xd67374
};

