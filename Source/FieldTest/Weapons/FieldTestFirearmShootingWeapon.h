#pragma once

#include "FieldTestShootingWeapon.h"
#include "FieldTestFirearmShootingWeapon.generated.h"

class USceneComponent;
class USoundBase;

UCLASS(Blueprintable)
class FIELDTEST_API AFieldTestFirearmShootingWeapon : public AFieldTestShootingWeapon
{
	GENERATED_BODY()

public:
	AFieldTestFirearmShootingWeapon();

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Firearm|Ammo", meta = (ToolTip = "Maximum number of rounds the magazine can hold."))
	int32 MagazineSize = 0;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Weapon|Firearm|Ammo", meta = (ToolTip = "Number of rounds currently loaded in the magazine."))
	int32 CurrentAmmo = 0;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Weapon|Firearm|Ammo", meta = (ToolTip = "Total number of reserve rounds. Divide by Magazine Size to determine the number of full spare magazines."))
	int32 ReserveAmmo = 0;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Firearm", meta = (ToolTip = "Weapon fire rate in rounds fired per minute."))
	float FireRate = 0.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Weapon|Firearm")
	USceneComponent* LeftHandGrip;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Weapon|Firearm|ADS")
	USceneComponent* WeaponADSAnchor;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Firearm|Audio")
	USoundBase* FireSound;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Firearm|Audio")
	USoundBase* ReloadSound;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Firearm|Audio")
	USoundBase* ADSInSound;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Firearm|Audio")
	USoundBase* ADSOutSound;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Firearm|Audio")
	USoundBase* EmptySound;
};
