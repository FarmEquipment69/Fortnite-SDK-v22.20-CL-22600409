// Class NaniteDisplacedMesh.NaniteDisplacedMesh
// Size: 0x128 (Inherited: 0x28)
struct UNaniteDisplacedMesh : UObject {
	char pad_28[0x100]; // 0x28(0x100)
};

// Class NaniteDisplacedMesh.NaniteDisplacedMeshComponent
// Size: 0x600 (Inherited: 0x5f0)
struct UNaniteDisplacedMeshComponent : UStaticMeshComponent {
	struct UNaniteDisplacedMesh* DisplacedMesh; // 0x5f0(0x08)
	char pad_5F8[0x8]; // 0x5f8(0x08)
};

