// Class UACCommon.UACNetworkComponent
// Size: 0x220 (Inherited: 0xa0)
struct UUACNetworkComponent : UActorComponent {
	int32_t PlayerId; // 0xa0(0x04)
	char pad_A4[0x17c]; // 0xa4(0x17c)

	void SendPacketToServer(char Type, struct TArray<char> Packet); // Function UACCommon.UACNetworkComponent.SendPacketToServer // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x6fdc878
	void SendPacketToClient(char Type, struct TArray<char> Packet); // Function UACCommon.UACNetworkComponent.SendPacketToClient // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x6fdc7a0
	void SendClientHello(uint32_t SessionKey); // Function UACCommon.UACNetworkComponent.SendClientHello // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x6fdc71c
};

