// Class EasyAntiCheatCommon.EasyAntiCheatNetComponent
// Size: 0xa8 (Inherited: 0xa0)
struct UEasyAntiCheatNetComponent : UActorComponent {
	char pad_A0[0x8]; // 0xa0(0x08)

	void ServerMessage(struct TArray<char> message); // Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ServerMessage // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x9b7af64
	void ClientMessage(struct TArray<char> message); // Function EasyAntiCheatCommon.EasyAntiCheatNetComponent.ClientMessage // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x9b7aed0
};

