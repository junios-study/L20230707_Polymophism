#include "Engine.h"
#include <conio.h>
#include "Player.h"
#include "Monster.h"

Engine* Engine::Instance = nullptr;

Engine::Engine()
{
	Instance = this;
}

Engine::~Engine()
{
	for (auto Current : Actors)
	{
		delete Current;
	}

	Actors.clear();
}

void Engine::Run()
{
//	BeginPlay();
	while (bIsRunning)
	{
		Input();
		Tick();
		Render();
	}
//	EndPlay();
}

void Engine::SpawnActor(AActor* NewActor)
{
	Actors.push_back(NewActor);
}

void Engine::Input()
{
	KeyCode = _getch();
}

void Engine::Tick()
{
	//for (int i = 0; i < Actors.size(); ++i)
	//{
	//	Actors[i].Tick();
	//}

	//ranged for, c++ 11, c++ 14
	for (auto Current : Actors)
	{
		//APlayer* Player = dynamic_cast<APlayer*>(Current);
		//if (Player != nullptr)
		//{
		//	Player->X++;
		//}

		//AMonster* Monster = dynamic_cast<AMonster*>(Current);
		//if (Monster != nullptr)
		//{
		//	Monster->Y++;
		//}

		Current->Tick();
	}
}

void Engine::Render()
{
	//for (int i = 0; i < Actors.size(); ++i)
	//{
	//	Actors[i].Render();
	//}
	system("cls");

	//ranged for, c++ 11, c++ 14
	for (auto Current : Actors)
	{
		Current->Render();
	}
}