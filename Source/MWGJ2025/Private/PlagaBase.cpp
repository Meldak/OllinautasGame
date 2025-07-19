// Fill out your copyright notice in the Description page of Project Settings.


#include "PlagaBase.h"

// Sets default values
APlagaBase::APlagaBase()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlagaBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlagaBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlagaBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

