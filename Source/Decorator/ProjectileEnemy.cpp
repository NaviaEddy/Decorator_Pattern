// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileEnemy.h"

void AProjectileEnemy::Fight()
{
	//Call the parent Fight function and log a message
	Super::Fight();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("The enemy blows a kiss and fires a gun")));

}

int AProjectileEnemy::GetDamage()
{
	//Returns the base Damage + 95
	return Super::GetDamage() + 95;

}

void AProjectileEnemy::Die()
{
	//Call the parent Die function and log a message
	Super::Die();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("The enemy writhes in agony and disintegrates even more")));

}
