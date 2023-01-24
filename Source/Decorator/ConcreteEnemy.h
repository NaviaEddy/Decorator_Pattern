// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy.h"
#include "GameFramework/Actor.h"
#include "ConcreteEnemy.generated.h"
UCLASS()
class DECORATOR_API AConcreteEnemy : public AActor, public IEnemy
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AConcreteEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void Fight() override {}
	int GetDamage() override { return 0; }
	void Die() override {}

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
