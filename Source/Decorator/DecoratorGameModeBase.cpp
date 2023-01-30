// Copyright Epic Games, Inc. All Rights Reserved.


#include "DecoratorGameModeBase.h"
#include "ConcreteEnemy.h"
#include "MeleeEnemy.h"
#include "ProjectileEnemy.h"


ADecoratorGameModeBase::ADecoratorGameModeBase()
{
	//Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ADecoratorGameModeBase::BeginPlay()
{
    Super::BeginPlay();

    //Engendrar un enemigo concreto
    AConcreteEnemy* ConcreteEnemy = GetWorld()->SpawnActor<AConcreteEnemy>(AConcreteEnemy::StaticClass());

    //Engendra un enemigo cuerpo a cuerpo y fija su enemigo en el concreto
    AMeleeEnemy* MeleeEnemy = GetWorld()->SpawnActor <AMeleeEnemy>(AMeleeEnemy::StaticClass());
    MeleeEnemy->SetEnemy(ConcreteEnemy);

    //Crea un enemigo proyectil y establece su enemigo como cuerpo a cuerpo.
    AProjectileEnemy* ProjectileEnemy = GetWorld()->SpawnActor <AProjectileEnemy>(AProjectileEnemy::StaticClass());
    ProjectileEnemy->SetEnemy(MeleeEnemy);

    GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Enemigos cuerpo a cuerpo en el horizonte")));
    Enemy = MeleeEnemy;
    Enemy->Fight();
    GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Los enemigos cuerpo a cuerpo causan %i de dano."), Enemy->GetDamage()));
    Enemy->Die();

    GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Los enemigos están ahora armados con pistolas")));
    Enemy = ProjectileEnemy;
    Enemy->Fight();
    GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Los enemigos de proyectil causan %i de dano."), Enemy->GetDamage()));
    Enemy->Die();

}

void ADecoratorGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
