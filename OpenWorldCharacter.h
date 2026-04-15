#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "OpenWorldCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;

UCLASS()
class MINECRAFTY_API AOpenWorldCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AOpenWorldCharacter();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	virtual void BeginPlay() override;

	/** Handles input for moving forward and backward */
	void MoveForward(float Value);

	/** Handles input for moving right and left */
	void MoveRight(float Value);
	
	/** Handler for when the interact key (F) is pressed */
	void OnInteract();

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	UCameraComponent* FollowCamera;
    
    /** Max distance to interact with a vehicle */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction")
    float InteractDistance;

    /** Trace channel used for vehicle detection */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction")
    TEnumAsByte<ECollisionChannel> VehicleTraceChannel;

public:
    /** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
};
