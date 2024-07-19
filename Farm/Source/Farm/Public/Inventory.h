#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FSlotStruct.h"
#include "Inventory.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FARM_API UInventory : public UActorComponent
{
	GENERATED_BODY()

public:	
	UInventory();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION()
		void AddItemToInventory(const FString& NewItem);

	UFUNCTION()
		void RemoveItemFromInventory(const FString& NewItem);

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		TArray <FString> Inventory;

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere)
		int InventorySize;
		
	UPROPERTY(EditAnywhere)
		TArray <FSlotStruct> Content;
};