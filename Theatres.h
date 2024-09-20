#pragma once
#include <iostream>
#include <string>
using namespace std;

class Theatres {
    int chairs[20][10];
    bool occupied[20][10];
public:
    Theatres();
    void setChairs();
    void showTheatres();
    bool reserveSeats(int row, int col);
   
};
