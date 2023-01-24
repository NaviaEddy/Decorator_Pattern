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

    //Spawn a Concrete Enemy
    AConcreteEnemy* ConcreteEnemy = GetWorld()->SpawnActor<AConcreteEnemy>(AConcreteEnemy::StaticClass());

    //Spawn a Melee Enemy and set its Enemy to the Concrete one
    AMeleeEnemy* MeleeEnemy = GetWorld()->SpawnActor <AMeleeEnemy>(AMeleeEnemy::StaticClass());
    MeleeEnemy->SetEnemy(ConcreteEnemy);
    
    //Spawn a Projectile Enemy and set its Enemy to the Melee one
    AProjectileEnemy* ProjectileEnemy = GetWorld()->SpawnActor <AProjectileEnemy>(AProjectileEnemy::StaticClass());
    ProjectileEnemy->SetEnemy(MeleeEnemy);

    GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Melee Enemies are on the horizon")));
    Enemy = MeleeEnemy;
    Enemy->Fight();
    GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Melee Enemies cause %i damage."), Enemy->GetDamage()));
    Enemy->Die();

    GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Enemies are now armed with guns")));
    Enemy = ProjectileEnemy;
    Enemy->Fight();
    GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Projectile Enemies cause %i damage."), Enemy->GetDamage()));
    Enemy->Die();


}

void ADecoratorGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
