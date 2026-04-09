// Fill out your copyright notice in the Description page of Project Settings.


#include "SerialReader.h"

// Sets default values
ASerialReader::ASerialReader()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASerialReader::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASerialReader::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

