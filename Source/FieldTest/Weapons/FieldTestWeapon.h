#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FieldTestWeapon.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class FIELDTEST_API AFieldTestWeapon : public AActor
{
	GENERATED_BODY()

public:
	AFieldTestWeapon();

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Weapon")
	FText WeaponName;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Weapon")
	USkeletalMeshComponent* WeaponMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Damage")
	float BaseDamage = 0.0f;
};
