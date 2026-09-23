#include "FieldTestFirearmShootingWeapon.h"
#include "Components/SceneComponent.h"

AFieldTestFirearmShootingWeapon::AFieldTestFirearmShootingWeapon()
{
	PrimaryActorTick.bStartWithTickEnabled = false;

	LeftHandGrip = CreateDefaultSubobject<USceneComponent>(TEXT("LeftHandGrip"));
	LeftHandGrip->SetupAttachment(WeaponMesh);

	WeaponADSAnchor = CreateDefaultSubobject<USceneComponent>(TEXT("WeaponADSAnchor"));
	WeaponADSAnchor->SetupAttachment(WeaponMesh);
}
