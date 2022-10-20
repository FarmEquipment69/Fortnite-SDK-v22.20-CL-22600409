// Class MediaMovieStreamer.MediaMovieAssets
// Size: 0x50 (Inherited: 0x28)
struct UMediaMovieAssets : UObject {
	struct UMediaPlayer* MediaPlayer; // 0x28(0x08)
	struct UMediaSoundComponent* MediaSoundComponent; // 0x30(0x08)
	struct UMediaSource* MediaSource; // 0x38(0x08)
	struct UMediaTexture* MediaTexture; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)

	void OnMediaEnd(); // Function MediaMovieStreamer.MediaMovieAssets.OnMediaEnd // (Final|Native|Private) // @ game+0x27368c0
};

