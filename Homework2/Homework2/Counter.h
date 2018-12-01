#pragma once

#include <iostream>

using namespace std;

class Counter
{

	int minValue;
	int maxValue;
	int start;
	double count = 0;

public:


	bool tick();
	Counter();
	Counter(int min, int max);
	Counter(int min, int max, int start);
	~Counter();

	void set_max(unsigned int const);
	void set_min(unsigned int const);
	void set_start(unsigned int const);

	int get_max()const;
	int get_min()const;
	int get_start()const;



	inline void get_value()
	{

		cout << count << endl;

	}

};

