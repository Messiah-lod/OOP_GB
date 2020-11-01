#pragma once


#include "Bus.h"
#include "PassengerCar.h"

class Minivan :
	public Bus, public PassengerCar
{
public:
	Minivan();
	~Minivan();
};

