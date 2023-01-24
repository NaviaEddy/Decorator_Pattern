// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Decorator_.h"
#include "MeleeEnemy.generated.h"

/**
 * 
 */
UCLASS()
class DECORATOR_API AMeleeEnemy : public ADecorator_
{
	GENERATED_BODY()
	

public:
    //Start Fighting
    void Fight() override;

    //Returns how much damage this enemy has taken
    int GetDamage() override;

    //Kill this enemy
    void Die() override;


};
