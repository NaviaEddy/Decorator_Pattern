// Fill out your copyright notice in the Description page of Project Settings.


#include "Decorator_.h"

// Sets default values
ADecorator_::ADecorator_()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ADecorator_::SetEnemy(AActor* _Enemy)
{
	//Lanza el actor pasado y fija al enemigo
	Enemy = Cast<IEnemy>(_Enemy);

	if (!Enemy) { //Lanzamos un error si la conversion falla
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("¡Elenco no válido! Consulte Registro de salida para obtener más detalles."));
		UE_LOG(LogTemp, Error, TEXT("SetEnemy(): ¡El actor no es un Enemy! ¿Está seguro de que el actor implementa esa interfaz?"));
	}

	
}

// Called when the game starts or when spawned
void ADecorator_::BeginPlay()
{
	Super::BeginPlay();
	
}

void ADecorator_::Fight()
{
	if (!Enemy) {
		UE_LOG(LogTemp, Error, TEXT("Fight(): Enemy es NULL, asegúrese de que este inicializado."));
		return;
	}
	else {
		Enemy->Fight();
	}
	
}

int ADecorator_::GetDamage()
{
	if (!Enemy) {
		UE_LOG(LogTemp, Error, TEXT("GetDamage(): Enemy es NULL, asegúrese de que este inicializado."));
		return 0;
	}
	else {
		return Enemy->GetDamage();
	}
}

void ADecorator_::Die()
{
	if (!Enemy) {
		UE_LOG(LogTemp, Error, TEXT("Die(): Enemy es NULL, asegúrese de que este inicializado."));
		return;
	}
	else {
		return Enemy->Die();
	}
}

// Called every frame
void ADecorator_::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

