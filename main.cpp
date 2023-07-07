#include <iostream>
#include <vector>
using namespace std;

class Character
{
public:
	virtual void Move() = 0;
};

class Player : public Character
{
public:
	virtual void Move() override
	{
		cout << "�÷��̾� �̵�" << endl;
	}
};

class Slime : public Character
{
public:
	virtual void Move() override
	{
		cout << "������ �̵�" << endl;
	}
};



int main()
{
	vector<Character*> Data;
	Data.push_back(new Player());

	srand((unsigned int)time(nullptr));
	
	for (int i = 0; i < (rand() % 5) + 1; ++i)
	{
		Data.push_back(new Slime());
	}

	for (int i = 0; i < Data.size(); ++i)
	{
		Data[i]->Move();
	}

}
