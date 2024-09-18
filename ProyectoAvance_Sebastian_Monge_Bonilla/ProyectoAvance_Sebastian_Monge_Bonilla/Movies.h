#pragma once
#include <stdio.h>
#include <string>
using namespace std;

class Movies{
private:
	string name;
	int quantity;
public:
	Movies();
	Movies(string n);

	virtual void number() = 0;

	virtual void number(int quantity) = 0;

	string getName() { return name; }

	void setName(string n) { name = n; }

	int getQuantity() { return quantity; }

	void setQuantity(int q) { quantity = q; }
};

