#pragma once

#include "Counter.h"

class Clock
{

	Counter HH;
	Counter MM;
	Counter SS;
	Counter d;

public:
	Clock();
	Clock(int, int, int, int);
	~Clock();

	void Print()const;

	bool tick();

};

