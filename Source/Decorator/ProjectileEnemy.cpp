// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileEnemy.h" //Enemigo Proyectil

void AProjectileEnemy::Fight()
{
	//Llamar a la funci�n principal Fight y registrar un mensaje
	Super::Fight();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El enemigo lanza un beso y dispara un arma")));

}

int AProjectileEnemy::GetDamage()
{
	//Devuelve el Da�o base + 95
	return Super::GetDamage() + 95;

}

void AProjectileEnemy::Die()
{
	//Devuelve cu�nto da�o ha recibido este enemigo
	Super::Die();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El enemigo se retuerce en agon�a y se desintegra aun mas")));

}
