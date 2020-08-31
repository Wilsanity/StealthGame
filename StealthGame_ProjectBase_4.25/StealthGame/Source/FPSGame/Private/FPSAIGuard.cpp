// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSAIGuard.h"
#include "Perception/PawnSensingComponent.h"
#include "DrawDebugHelpers.h"
#include "FPSGameMode.h"
#include "Net/UnrealNetwork.h"
#include "AI/Navigation/NavigationSystem.h"

// Sets default values
AFPSAIGuard::AFPSAIGuard()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PawnSensingComp = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComp"));

	PawnSensingComp->OnSeePawn.AddDynamic(this, &AFPSAIGuard::OnPawnSeen);
	PawnSensingComp->OnHearNoise.AddDynamic(this, &AFPSAIGuard::OnNoiseHeard);
	GuardState = EAIState::Idle;
}

// Called when the game starts or when spawned
void AFPSAIGuard::BeginPlay()
{
	Super::BeginPlay();
	OriginalRotation = GetActorRotation();
	if (bPatrol) {
		moveToNextPatrolPoint();
	}
}

// Called every frame
void AFPSAIGuard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (currentPatrolPoint) {
		FVector delta = GetActorLocation() - currentPatrolPoint->GetActorLocation();
		float distanceToGoal = delta.Size();
		if (distanceToGoal < 50) {
			moveToNextPatrolPoint();
		}
	}
}

void AFPSAIGuard::OnPawnSeen(APawn* SeenPawn) {

	if (SeenPawn == nullptr) {
		return;
	}
	DrawDebugSphere(GetWorld(), SeenPawn->GetActorLocation(), 32.0f, 12, FColor::Red, false, 10.0f);

	AFPSGameMode* GM = Cast<AFPSGameMode>(GetWorld()->GetAuthGameMode());
	if (GM) {
		GM->CompleteMission(SeenPawn, false); // pass in player that completed mission
	}
	SetGuardState(EAIState::Alerted);

	AController* controller = GetController();
	if (controller) {
		controller->StopMovement();																																																																																										
	}
}

void AFPSAIGuard::OnNoiseHeard(APawn* NoiseInstigator, const FVector& Location, float Volume) {

	if (GuardState == EAIState::Alerted) {
		return;
	}

	DrawDebugSphere(GetWorld(), Location, 32.0f, 12, FColor::Green, false, 10.0f);

	FVector Direction = Location - GetActorLocation();
	Direction.Normalize();

	FRotator NewLookAt = FRotationMatrix::MakeFromX(Direction).Rotator();
	NewLookAt.Pitch = 0.0f;
	NewLookAt.Roll = 0.0f;

	SetActorRotation(NewLookAt);

	GetWorldTimerManager().ClearTimer(TimerHandle_ResetOrientation);
	GetWorldTimerManager().SetTimer(TimerHandle_ResetOrientation, this, &AFPSAIGuard::ResetOrientation, 3.0f);

	SetGuardState(EAIState::Suspicious);
	
	AController* controller = GetController();
	if (controller) {
		controller->StopMovement();
	}	
}

void AFPSAIGuard::ResetOrientation() {

	if (GuardState == EAIState::Alerted) {
		return;
	}

	SetActorRotation(OriginalRotation);
	SetGuardState(EAIState::Idle);

	if (bPatrol) {
		moveToNextPatrolPoint();
	}
}

void AFPSAIGuard::OnRep_GuardState() {
	OnStateChanged(GuardState);
}

void AFPSAIGuard::SetGuardState(EAIState NewState) {
	
		if (GuardState == NewState) {
			return;
		}

		GuardState = NewState;
		OnRep_GuardState();
	
}

void AFPSAIGuard::moveToNextPatrolPoint() {
	if (currentPatrolPoint == nullptr || currentPatrolPoint == secondPatrolPoint) {
		currentPatrolPoint = firstPatrolPoint;
	}
	else {
		currentPatrolPoint = secondPatrolPoint;
	}

	UNavigationSystem::SimpleMoveToActor(GetController(), currentPatrolPoint);
}

void AFPSAIGuard::GetLifetimeReplicatedProps(TArray < FLifetimeProperty > & OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AFPSAIGuard, GuardState);
}