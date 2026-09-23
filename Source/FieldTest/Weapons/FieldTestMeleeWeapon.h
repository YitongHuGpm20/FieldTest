#pragma once

#include "FieldTestWeapon.h"
#include "FieldTestMeleeWeapon.generated.h"

UCLASS(Blueprintable)
class FIELDTEST_API AFieldTestMeleeWeapon : public AFieldTestWeapon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Melee")
	float AttackRange = 0.0f;
};
