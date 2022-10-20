// Class ForwardingChannels.ForwardingChannelFactory
// Size: 0x28 (Inherited: 0x28)
struct UForwardingChannelFactory : UInterface {
};

// Class ForwardingChannels.ForwardingChannelsSubsystem
// Size: 0x98 (Inherited: 0x30)
struct UForwardingChannelsSubsystem : UGameInstanceSubsystem {
	struct TArray<struct TScriptInterface<IForwardingChannelFactory>> ForwardingChannelFactories; // 0x30(0x10)
	char pad_40[0x58]; // 0x40(0x58)
};

