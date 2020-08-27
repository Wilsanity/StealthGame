// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSObjectiveActor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "FPSCharacter.h"

// Sets default values
AFPSObjectiveActor::AFPSObjectiveActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp")); // initialize as mesh component
	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision); // disable collision
	RootComponent = MeshComp; // first component in hirarchy (can see in blueprint)

	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp")); // initialize as sphere component
	SphereComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly); // line traces
	SphereComp->SetCollisionResponseToAllChannels(ECR_Ignore); // disable all channels
	SphereComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap); // alow player channel, allow pass through
	SphereComp->SetupAttachment(MeshComp);	

	//SphereComp->OnComponentBeginOverlap.register
}

// Called when the game starts or when spawned
void AFPSObjectiveActor::BeginPlay()
{
	Super::BeginPlay();
	PlayEffects();
}

// Called every frame
//void AFPSObjectiveActor::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//}

void AFPSObjectiveActor::PlayEffects() 
{
	UGameplayStatics::SpawnEmitterAtLocation(this, PickupFX, GetActorLocation()); // stationary, finds the world actor is in, then spawn effect
}

void AFPSObjectiveActor::NotifyActorBeginOverlap(AActor* OtherActor) {

	Super::NotifyActorBeginOverlap(OtherActor); // super is base implementation
	PlayEffects();

	AFPSCharacter* MyCharacter = Cast<AFPSCharacter>(OtherActor); // cast to pawns
	if (MyCharacter) { // not null
		// set obj bool to true, destroy objective actor (as if it is picked up)
		MyCharacter->bIsCarryingObjective = true;
		Destroy();
	}
}