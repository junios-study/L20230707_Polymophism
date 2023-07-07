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

	static Engine* Instance;

	inline int GetKeyCode() { return KeyCode; }

protected:
	int KeyCode;
	void Input();
	void Tick();
	void Render();

	vector<AActor*> Actors;

	bool bIsRunning = true;
};



#define GEngine			Engine::Instance


