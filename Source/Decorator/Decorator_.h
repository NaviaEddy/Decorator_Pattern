// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemy.h"
#include "Decorator_.generated.h"

UCLASS()
class DECORATOR_API ADecorator_ : public AActor, public IEnemy
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADecorator_(); //Decorador

	//El decorador del enemigo, que debe ser un Enemy
	void SetEnemy(AActor* _Enemy);

private:

	//Establecer el Enemy Actor
	IEnemy* Enemy;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Empezar a luchar
	void Fight() override;

	//Devuelve cuánto daño ha recibido este enemigo
	int GetDamage() override;

	//Mata a este enemigo
	void Die() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
