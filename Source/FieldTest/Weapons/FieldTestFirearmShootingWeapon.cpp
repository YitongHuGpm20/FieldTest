#include "FieldTestFirearmShootingWeapon.h"
#include "Components/SceneComponent.h"

AFieldTestFirearmShootingWeapon::AFieldTestFirearmShootingWeapon()
{
	LeftHandGrip = CreateDefaultSubobject<USceneComponent>(TEXT("LeftHandGrip"));
	LeftHandGrip->SetupAttachment(WeaponMesh);

	ADSAnchor = CreateDefaultSubobject<USceneComponent>(TEXT("ADSAnchor"));
	ADSAnchor->SetupAttachment(WeaponMesh);
}
