// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Decorator_.h"
#include "ProjectileEnemy.generated.h" 

/**
 * 
 */
UCLASS()
class DECORATOR_API AProjectileEnemy : public ADecorator_
{
	GENERATED_BODY()

public:

/*
 Los decoradores concretos añaden responsabilidades al componente
 (pueden ampliar el estado del componente)
*/

    //Empezar a luchar
    void Fight() override;

    //Devuelve cuánto daño ha recibido este enemigo
    int GetDamage() override;

    //Mata a este enemigo
    void Die() override;

	
};
