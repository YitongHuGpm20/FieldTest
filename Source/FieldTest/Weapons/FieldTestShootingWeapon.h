#pragma once

#include "FieldTestWeapon.h"
#include "FieldTestShootingWeapon.generated.h"

UCLASS(Blueprintable)
class FIELDTEST_API AFieldTestShootingWeapon : public AFieldTestWeapon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Shooting|Ammo", meta = (ToolTip = "Maximum number of rounds the magazine can hold."))
	int32 MagazineSize = 0;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Weapon|Shooting|Ammo", meta = (ToolTip = "Number of rounds currently loaded in the magazine."))
	int32 CurrentAmmo = 0;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Weapon|Shooting|Ammo", meta = (ToolTip = "Total number of reserve rounds. Divide by Magazine Size to determine the number of full spare magazines."))
	int32 ReserveAmmo = 0;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Shooting", meta = (ToolTip = "Weapon fire rate in rounds fired per minute."))
	float FireRate = 0.0f;
};
