// 3.14 Prinuditielnoje izmienienije tipow.cpp  новий запис

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	int auks, bats, coots;  	//sliedujuczij operator sumirujet znaczienije tipa double,
	                            //a poluczienyj rezultat prieobrazujet w tip int
	auks = 19.99 + 11.99;   	//eti operatory sumirujut celoczisliennyje znaczienija
	bats = (int)19.99 + (int)11.99;          //sintaksis C
	coots = int(19.99) + int(11.99);         //sintaksis C++
	cout << "auks = " << auks << ", bats = " << bats;
	cout << ", coots = " << coots << endl;
	char ch = 'Z';
	cout << "The code for " << ch << " is "; //wywod w formatie char
	cout << int(ch) << endl;                 //wywod w formatie int
	cout << "Yes, the code is ";
	cout << static_cast<int>(ch) << endl;    //ispolzowanije static_cast
	system("pause");
    return 0;
}

