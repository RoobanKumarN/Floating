#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FloatingActor.generated.h"

UCLASS()
class MYPROJECT_API AFloatingActor : public AActor
{
	GENERATED_BODY()

public:
	AFloatingActor();

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent *VisualMesh;

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
};
