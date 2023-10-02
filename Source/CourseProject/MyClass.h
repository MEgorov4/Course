// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MyClass.generated.h"

/**
 * 
 */
UCLASS()
class COURSEPROJECT_API UMyClass : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void PrintString(const FString& Message);


	virtual void PostInitProperties() override;

	//Числовые типы 
	uint8 Byte;
	int32 Int;
	int64 Int64;
	float Float;

	
	bool Bool;
	// Строковые типы
	FName Name;
	FText Text;
	FString String;

	FVector	Vector;
	FRotator Rotator;
	FTransform Transform;

	
	
	UObject* Object;
};

USTRUCT(BlueprintType)
struct FMyVector2D
{
	GENERATED_BODY()
	int X;
	int Y;
};

UENUM(BlueprintTYpe)
enum class EPlayerState : uint8
{
		EPS_Idle = 0 UMETA(DisplayName = "Idle"),
		EPS_Walking = 1 UMETA(DisplayName = "Walking"),
        EPS_Running = 2 UMETA(DisplayName = "Running"),
        EPS_Jumping = 3 UMETA(DisplayName = "Jumping"),
        EPS_Falling = 4 UMETA(DisplayName = "Falling"),
        EPS_Swimming = 5 UMETA(DisplayName = "Swimming"),
};
