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
