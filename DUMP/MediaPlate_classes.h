// Class MediaPlate.MediaPlate
// Size: 0x298 (Inherited: 0x288)
struct AMediaPlate : AActor {
	struct UMediaPlateComponent* MediaPlateComponent; // 0x288(0x08)
	struct UStaticMeshComponent* StaticMeshComponent; // 0x290(0x08)
};

// Class MediaPlate.MediaPlateComponent
// Size: 0xe0 (Inherited: 0xa0)
struct UMediaPlateComponent : UActorComponent {
	bool bAutoPlay; // 0xa0(0x01)
	bool bLoop; // 0xa1(0x01)
	bool bEnableAudio; // 0xa2(0x01)
	char pad_A3[0x1]; // 0xa3(0x01)
	float StartTime; // 0xa4(0x04)
	struct UMediaComponent* MediaComponent; // 0xa8(0x08)
	struct UMediaSoundComponent* SoundComponent; // 0xb0(0x08)
	struct UMediaPlaylist* MediaPlaylist; // 0xb8(0x08)
	struct FMediaSourceCacheSettings CacheSettings; // 0xc0(0x08)
	enum class EMediaTextureVisibleMipsTiles VisibleMipsTilesCalculations; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float MeshHorizontalRange; // 0xcc(0x04)
	char pad_D0[0x10]; // 0xd0(0x10)

	void Stop(); // Function MediaPlate.MediaPlateComponent.Stop // (Final|Native|Public|BlueprintCallable) // @ game+0x72c4ea0
	void Play(); // Function MediaPlate.MediaPlateComponent.Play // (Final|Native|Public|BlueprintCallable) // @ game+0x72c4e8c
	struct UMediaTexture* GetMediaTexture(); // Function MediaPlate.MediaPlateComponent.GetMediaTexture // (Final|Native|Public|BlueprintCallable) // @ game+0x72c4e6c
	struct UMediaPlayer* GetMediaPlayer(); // Function MediaPlate.MediaPlateComponent.GetMediaPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x72c4e4c
};

