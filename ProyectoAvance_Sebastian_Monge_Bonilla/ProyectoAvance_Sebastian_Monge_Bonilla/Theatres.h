#pragma once
#include <stdio.h>
#include <string>
#include "Movies.h"

class Theatres
{
	int theatresNumber [3];
	int sits[20][10];

public:
	Theatres(){}
	int getSits() { return sits[20][10]; }
	void setSits(int s) { sits[20][10] = s; }
	void showTheatres() { }
};

