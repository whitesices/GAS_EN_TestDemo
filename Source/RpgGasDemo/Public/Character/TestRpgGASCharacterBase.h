// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TestRpgGASCharacterBase.generated.h"

UCLASS( Abstract )
class RPGGASDEMO_API ATestRpgGASCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATestRpgGASCharacterBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	//因为武器需要被子类继承所以使用protected
	//声明一个网络骨骼体变量
	  UPROPERTY( EditAnywhere , Category = "Combat")
	  TObjectPtr<USkeletalMeshComponent> Weapon;


	//Base方法中暂时不需要这些方法
//public:	
//	// Called every frame
//	virtual void Tick(float DeltaTime) override;
//
//	// Called to bind functionality to input
//	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
