#include "FieldTestWeapon.h"
#include "Components/SkeletalMeshComponent.h"

AFieldTestWeapon::AFieldTestWeapon()
{
	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh"));
	RootComponent = WeaponMesh;
}
