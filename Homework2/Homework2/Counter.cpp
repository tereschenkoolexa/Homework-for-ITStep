#include "Counter.h"

Counter::Counter() :Counter(0, 59, 0)
{



}

Counter::Counter(int min, int max) :Counter(min, max, min)
{


}

Counter::Counter(int min, int max, int start)
{

	if (min > max)
		swap(min, max);

	minValue = min;
	maxValue = max;
	this->start = start;

	if (start<min || start>max)
	{
		cout << "Error ,start<min or start>max " << endl;
		start = min;
	}
	count = start - 1;

}

void Counter :: set_max(unsigned int const max)
{

	maxValue = max;

}

void Counter::set_start(unsigned int const start)
{

	this->start = start;

}

void Counter::set_min(unsigned int const min)
{


	minValue = min;

}

int Counter::get_max()const
{

	return maxValue;

}

int Counter::get_start()const
{

	return this->start;

}

int Counter::get_min()const
{


	return minValue ;

}

bool Counter::tick()
{
	if (count == maxValue)
	{
		count = minValue;
		
	}
	else
		count++;
	return true;
}

Counter::~Counter()
{
}

