#include <iostream>
#include "Engine.h"
#include "Player.h"
#include "Monster.h"
#include <vector>
#include <algorithm>
#include <list>
#include <map>

using namespace std;

int main()
{
	Engine* MyEngine = new Engine();

	MyEngine->SpawnActor(new APlayer());
	MyEngine->SpawnActor(new AMonster());

	MyEngine->Run();

	delete MyEngine;

	return 0;
}
