#pragma once
#include <stdio.h>
#include <string>
#include "Movies.h"
class Information : public Movies 
{

public:
	Information();
	Information(string n): Movies(n) {};
	void Info();
	void cinema();	
	
	
};

