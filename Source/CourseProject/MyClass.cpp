// Fill out your copyright notice in the Description page of Project Settings.


#include "MyClass.h"

void UMyClass::PostInitProperties()
{
	UObject::PostInitProperties();

	TArray<int> Array = {1, 2, 3, 4, 5, 6}; // Init
	Array.Add(7); // Add element
	Array.Insert(0, 0); // Insert element
	Array.RemoveAt(0); // Remove element
	size_t ArrayNum = Array.Num(); // Get the number of elements
	Array.SetNum(ArrayNum + 1); // Set the number of elements

	for (int i = 0; i < Array.Num(); i++) // With counter
	{
		UE_LOG(LogTemp, Warning, TEXT("Array[%d] = %d"), i, Array[i]);
	}

	for (auto element : Array) // For each element
	{
		UE_LOG(LogTemp, Warning, TEXT("Array[%d] = %d"), element);
	}
	
	for (auto it = Array.begin(); it != Array.end(); ++it) // With iterators
	{
		UE_LOG(LogTemp, Warning, TEXT("Array[%d] = %d"), *it);
	}
}

class Human
{
	short phoneNumber; // скрытые поля
	int age; // скрытые поля
	void CalculateNextBusinessDay(); // скрытые методы
public:
	Human(short phoneNumber, int age);
};