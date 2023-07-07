#pragma once
#include "Actor.h"


class AWall : public AActor
{
	AWall();
	virtual ~AWall();

	virtual void Tick() override;
};

