#include "Engine.h"

Engine::Engine()
{
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
		Current->Tick();
	}
}

void Engine::Render()
{
	//for (int i = 0; i < Actors.size(); ++i)
	//{
	//	Actors[i].Render();
	//}

	//ranged for, c++ 11, c++ 14
	for (auto Current : Actors)
	{
		Current->Render();
	}
}
