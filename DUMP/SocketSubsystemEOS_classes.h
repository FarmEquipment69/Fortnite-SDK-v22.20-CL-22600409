// Class SocketSubsystemEOS.NetDriverEOSBase
// Size: 0x818 (Inherited: 0x810)
struct UNetDriverEOSBase : UIpNetDriver {
	bool bIsPassthrough; // 0x810(0x01)
	bool bIsUsingP2PSockets; // 0x811(0x01)
	char pad_812[0x6]; // 0x812(0x06)
};

// Class SocketSubsystemEOS.NetConnectionEOS
// Size: 0x3330 (Inherited: 0x3320)
struct UNetConnectionEOS : UIpConnection {
	char pad_3320[0x10]; // 0x3320(0x10)
};

