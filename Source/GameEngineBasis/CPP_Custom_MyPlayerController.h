// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CPP_Custom_MyPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class GAMEENGINEBASIS_API ACPP_Custom_MyPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	ACPP_Custom_MyPlayerController();

protected:
	virtual void BeginPlay() override;

private:
	void PossessNextCharacter();

	//필요한 변수들
	TArray<ACharacter*> Characters;
	FTimerHandle TimerHandle;
	int32 Index;


};

