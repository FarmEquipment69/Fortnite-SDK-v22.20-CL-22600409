// Class GameplayStreaming.GameplayStreamingService
// Size: 0x30 (Inherited: 0x28)
struct UGameplayStreamingService : UObject {
	struct UBaseGameplayStreamingHandler* ActiveHandler; // 0x28(0x08)
};

// Class GameplayStreaming.BaseGameplayStreamingHandler
// Size: 0x78 (Inherited: 0x28)
struct UBaseGameplayStreamingHandler : UObject {
	char pad_28[0x50]; // 0x28(0x50)
};

// Class GameplayStreaming.GFNGameplayStreamingHandler
// Size: 0x78 (Inherited: 0x78)
struct UGFNGameplayStreamingHandler : UBaseGameplayStreamingHandler {
};

// Class GameplayStreaming.GameplayStreamingClassLoader
// Size: 0x48 (Inherited: 0x28)
struct UGameplayStreamingClassLoader : UObject {
	struct FSoftClassPath GameplayStreamingServiceClassName; // 0x28(0x18)
	char pad_40[0x8]; // 0x40(0x08)
};

