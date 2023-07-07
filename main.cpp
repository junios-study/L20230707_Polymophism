#include <iostream>
#include "Engine.h"
#include "Player.h"
#include "Monster.h"

using namespace std;

int main()
{
	Engine* MyEngine = new Engine();
	APlayer MyPlayer;
	MyEngine->SpawnActor(new APlayer());
	MyEngine->SpawnActor(new AMonster());

	MyEngine->Run();

	delete MyEngine;



	return 0;
}