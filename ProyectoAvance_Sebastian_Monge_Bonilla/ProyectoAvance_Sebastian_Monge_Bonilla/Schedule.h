#pragma once
#include <stdio.h>
#include <string>
#include "Movies.h"
#include <time.h>

using namespace std;
class Schedule : public Movies
{
	string billboard;
	int hours;

public:

	Schedule();
	void makeBillboard();
	int getHours() { return hours; }
	void setHours(int h) { hours = h; }
	void order(int h) { hours = h; }
	void quantity();

	

};

