#pragma once

#include "FieldTestWeapon.h"
#include "FieldTestThrowingWeapon.generated.h"

UCLASS(Blueprintable)
class FIELDTEST_API AFieldTestThrowingWeapon : public AFieldTestWeapon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Throwing")
	float ThrowSpeed = 0.0f;
};
