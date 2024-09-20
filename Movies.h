#pragma once
#include <iostream>
#include <string>
using namespace std;

class Movies {
    string name;
    int quantity;
public:
    Movies();
    Movies(string n);
    void displayMovies();
    string getName() { return name; }
    void setName(string n);
    int getQuantity() { return quantity; }
    void setQuantity(int q) { quantity = q; }
    void chooseMovies();
};
