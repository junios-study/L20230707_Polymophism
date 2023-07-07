#pragma once
#include <vector>
#include "Actor.h"

using namespace std;

class Engine
{
public:
	Engine();
	virtual ~Engine();

	void Run();

	void SpawnActor(AActor* NewActor);

protected:
	void Input();
	void Tick();
	void Render();

	vector<AActor*> Actors;

	bool bIsRunning = true;


};

