// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle.h"
#include "Animation/AnimInstance.h"
#include "ABAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLE_API UABAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	UABAnimInstance();
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

private:
	UPROPERTY(EditAnyWhere, BlueprintReadOnly, Category = Pawn, Meta =
		(AllowPrivateAccess = true))
		float CurrentPawnSpeed;

	UPROPERTY(EditAnyWhere, BlueprintReadOnly, Category = Pawn, Meta =
		(AllowPrivateAccess = true))
		bool IsInAir;
};
