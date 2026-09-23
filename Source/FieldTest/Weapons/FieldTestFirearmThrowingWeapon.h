#pragma once

#include "FieldTestThrowingWeapon.h"
#include "FieldTestFirearmThrowingWeapon.generated.h"

UCLASS(Blueprintable)
class FIELDTEST_API AFieldTestFirearmThrowingWeapon : public AFieldTestThrowingWeapon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Throwing")
	float FuseTime = 0.0f;
};
