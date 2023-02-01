// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileEnemy.h" //Enemigo Proyectil

void AProjectileEnemy::Fight()
{
	//Llamar a la función principal Fight y registrar un mensaje
	Super::Fight();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El enemigo lanza un beso y dispara un arma")));

}

int AProjectileEnemy::GetDamage()
{
	//Devuelve el Daño base + 95
	return Super::GetDamage() + 95;

}

void AProjectileEnemy::Die()
{
	//Devuelve cuánto daño ha recibido este enemigo
	Super::Die();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El enemigo se retuerce en agonía y se desintegra aun mas")));

}
