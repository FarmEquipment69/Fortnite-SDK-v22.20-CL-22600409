// VerseClass VerseAssets.$SolarisSignatureFunctionOuter
// Size: 0x28 (Inherited: 0x28)
struct U$SolarisSignatureFunctionOuter : UObject {
};

// VerseClass VerseAssets.Asset
// Size: 0xb0 (Inherited: 0x68)
struct UAsset : UVerseAssetPtr {
	char pad_68[0x38]; // 0x68(0x38)
	VerseStringProperty __verse_0xD636D109_AssetPath; // 0xa0(0x10)
	struct FDelegate __verse_0x9702F5DA__L_2fVerse_2eorg_2fAssets_2fasset_N_RAsync__Load; // 0x74(0x0c)
	struct FDelegate __verse_0xE0CBA11B__L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAssetType; // 0x8c(0x0c)
	struct FDelegate __verse_0x78F21562__L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAsyncLoadEvent; // 0x80(0x0c)
	struct FDelegate __verse_0xFD8E69AC__L_2fVerse_2eorg_2fAssets_2fasset_N_RSyncLoad; // 0x68(0x0c)

	char _L_2fVerse_2eorg_2fAssets_2fasset_N_RSyncLoad(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAssets.Asset._L_2fVerse_2eorg_2fAssets_2fasset_N_RSyncLoad // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5f95414
	OptionProperty _L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAsyncLoadEvent(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAssets.Asset._L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAsyncLoadEvent // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5f9540c
	OptionProperty _L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAssetType(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAssets.Asset._L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAssetType // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5f95404
	OptionProperty _L_2fVerse_2eorg_2fAssets_2fasset_N_RAsync__Load(struct Ftuple_L_R __verse_0xB2CDDD72_Argument); // Function VerseAssets.Asset._L_2fVerse_2eorg_2fAssets_2fasset_N_RAsync__Load // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x5f953fc
	void $InitInstance(); // Function VerseAssets.Asset.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseAssets.Asset.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseAssets.Asset.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseAssets.Animation
// Size: 0xb0 (Inherited: 0xb0)
struct UAnimation : UAsset {

	void $InitInstance(); // Function VerseAssets.Animation.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseAssets.Animation.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseAssets.Animation.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseAssets.animation_blueprint
// Size: 0xb0 (Inherited: 0xb0)
struct Uanimation_blueprint : UAsset {

	void $InitInstance(); // Function VerseAssets.animation_blueprint.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseAssets.animation_blueprint.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseAssets.animation_blueprint.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseAssets.animation_instance
// Size: 0xb0 (Inherited: 0xb0)
struct Uanimation_instance : UAsset {

	void $InitInstance(); // Function VerseAssets.animation_instance.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseAssets.animation_instance.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseAssets.animation_instance.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseAssets.client_asset
// Size: 0xb0 (Inherited: 0xb0)
struct Uclient_asset : UAsset {

	void $InitInstance(); // Function VerseAssets.client_asset.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseAssets.client_asset.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseAssets.client_asset.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseAssets.Font
// Size: 0xb0 (Inherited: 0xb0)
struct UFont : Uclient_asset {

	void $InitInstance(); // Function VerseAssets.Font.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseAssets.Font.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseAssets.Font.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseAssets.Level
// Size: 0xb0 (Inherited: 0xb0)
struct ULevel : UAsset {

	void $InitInstance(); // Function VerseAssets.Level.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseAssets.Level.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseAssets.Level.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseAssets.Material
// Size: 0xb0 (Inherited: 0xb0)
struct UMaterial : UAsset {

	void $InitInstance(); // Function VerseAssets.Material.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseAssets.Material.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseAssets.Material.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseAssets.particle_system
// Size: 0xb0 (Inherited: 0xb0)
struct Uparticle_system : Uclient_asset {

	void $InitInstance(); // Function VerseAssets.particle_system.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseAssets.particle_system.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseAssets.particle_system.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseAssets.skeletal_mesh
// Size: 0xb0 (Inherited: 0xb0)
struct Uskeletal_mesh : UAsset {

	void $InitInstance(); // Function VerseAssets.skeletal_mesh.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseAssets.skeletal_mesh.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseAssets.skeletal_mesh.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseAssets.sound
// Size: 0xb0 (Inherited: 0xb0)
struct Usound : Uclient_asset {

	void $InitInstance(); // Function VerseAssets.sound.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseAssets.sound.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseAssets.sound.$InitCDO // (None) // @ game+0xd67374
};

// VerseClass VerseAssets.static_mesh
// Size: 0xb0 (Inherited: 0xb0)
struct Ustatic_mesh : UAsset {

	void $InitInstance(); // Function VerseAssets.static_mesh.$InitInstance // (None) // @ game+0xd67374
	void $Block(); // Function VerseAssets.static_mesh.$Block // (None) // @ game+0xd67374
	void $InitCDO(); // Function VerseAssets.static_mesh.$InitCDO // (None) // @ game+0xd67374
};

