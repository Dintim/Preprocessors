#include <string>
#include <iostream>
#include <fstream>
using namespace std;


ifstream in_file("in.txt");
#ifndef  _CAPITAL_
#define _CAPITAL_



struct capital
{
	string cap_name;
	int cap_population;
	string major;

	void enter() {
		//cout << "enter info about capital: " << endl;
		in_file >> cap_name >> cap_population >> major;
	}

	void print() {
		cout << cap_name << " " << cap_population << " " << major << endl;
	}
};

#endif
