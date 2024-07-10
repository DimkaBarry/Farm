#include "Inventory.h"

UInventory::UInventory()
{
	PrimaryComponentTick.bCanEverTick = true;
}


void UInventory::BeginPlay()
{
	Super::BeginPlay();
}

void UInventory::AddItemToInventory(const FString& NewItem)
{
	Inventory.Add(NewItem);
	UE_LOG(LogTemp, Warning, TEXT("Item added: %s"), *NewItem);
	UE_LOG(LogTemp, Warning, TEXT("Current Inventory:"));
	for (const FString& Item : Inventory)
	{
		UE_LOG(LogTemp, Warning, TEXT(" - %s"), *Item);
	}
}


// Called every frame
void UInventory::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

