// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Enemy.h"
#include "DecoratorGameModeBase.generated.h"
/**
 * 
 */
UCLASS()
class DECORATOR_API ADecoratorGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    ADecoratorGameModeBase();

public:
    //El Actor Enemigo principal
    IEnemy* Enemy;

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

	
};
