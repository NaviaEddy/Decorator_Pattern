// Fill out your copyright notice in the Description page of Project Settings.


#include "MeleeEnemy.h" //Enemigo cuerpo a cuerpo

void AMeleeEnemy::Fight()
{
	//Llamar a la funci�n principal Fight y registrar un mensaje
	Super::Fight();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El enemigo lanza fuertes golpes")));

}

int AMeleeEnemy::GetDamage()
{
	//Devuelve el Da�o base + 5
	return Super::GetDamage() + 5;
}

void AMeleeEnemy::Die()
{
	//Llamar a la funci�n matriz Die y registrar un mensaje
	Super::Die();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El enemigo se retuerce en agon�a y se desintegra")));

}

