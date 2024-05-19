// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/TestRpgGASCharacterBase.h"

// Sets default values
ATestRpgGASCharacterBase::ATestRpgGASCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	//创建一个网络骨骼体
	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");

	//通过Sokcet将网络骨骼体添加到我们的player上
	Weapon->SetupAttachment(GetMesh(), "WeaponHandSocket" );

	//设置武器的碰撞为无碰撞
	Weapon->SetCollisionEnabled( ECollisionEnabled::NoCollision );

}

// Called when the game starts or when spawned
void ATestRpgGASCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

//// Called every frame
//void ATestRpgGASCharacterBase::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//}
//
//// Called to bind functionality to input
//void ATestRpgGASCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
//{
//	Super::SetupPlayerInputComponent(PlayerInputComponent);
//
//}

