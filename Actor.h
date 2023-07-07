#pragma once

//Abstract Class
class AActor 
{
public:
	AActor();
	virtual ~AActor();

	int X;
	int Y;
	char Shape;


	void Input(); 
	virtual void Tick() = 0; //pure virtual function
	void Render();
};

