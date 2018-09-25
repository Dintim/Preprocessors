#include "capital.h"

#ifndef _COUNTRY_
#define _COUNTRY_



struct country
{
	string c_name;
	int c_population;
	capital c_cap;

	void c_enter() {
		//cout << "enter info about country: " << endl;
		in_file >> c_name >> c_population;
		c_cap.enter();
	}

	void c_print() {
		cout << c_name << " " << c_population << " ";
		c_cap.print();
	}
};

#endif