#include "Clock.h"
#include "Counter.h"

Clock::Clock()
{

	HH.set_max(23);
	HH.set_start(0);
	HH.set_min(0);
	MM.set_max(59);
	MM.set_start(0);
	MM.set_min(0);
	SS.set_max(59);
	SS.set_start(0);
	SS.set_min(0);
	d.set_max(9);
	d.set_start(0);
	d.set_min(0);

}

Clock::Clock(int start_h, int start_m , int start_s , int start_d)
{

	HH.set_max(23);
	HH.set_start(start_h);
	HH.set_min(0);
	MM.set_max(59);
	MM.set_start(start_m);
	MM.set_min(0);
	SS.set_max(59);
	SS.set_start(start_s);
	SS.set_min(0);
	d.set_max(9);
	d.set_start(start_d);
	d.set_min(0);

}

bool Clock::tick()
{

	if (d.get_max() == d.get_start())
	{
		d.set_start(0);
		if (SS.get_max() == SS.get_start())
		{
			SS.set_start(0);
			if (MM.get_max() == MM.get_start())
			{
				MM.set_start(0);
				if (HH.get_max() == HH.get_start())
				{
					HH.set_start(0);
					return true;
				}
				else
				HH.set_start(HH.get_start() + 1);
				return false;
			}
			else
				MM.set_start(MM.get_start() + 1);
			return false;
		}
		else
			SS.set_start(SS.get_start() + 1);
		return false;
	}
	else
		d.set_start(d.get_start() + 1);
	return false;

}

void Clock::Print()const
{

	cout << HH.get_start() << ":"<<  MM.get_start() << ":"  << SS.get_start() << ":"  << d.get_start() << endl;

}

Clock::~Clock()
{
}
