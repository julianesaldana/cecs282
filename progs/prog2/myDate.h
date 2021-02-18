//
// Created by Julian on 2/17/2021.
//


#ifndef PROG2_MYDATE_H
#define PROG2_MYDATE_H

#include <iostream>
using namespace std;

class myDate {
private:
    int month;
    int day;
    int year;
public:
    myDate();
    myDate(int m, int d, int y);
    void display();
    void increaseDate(int n);
    void decreaseDate(int n);
    int daysBetween(myDate D);
    int getMonth();
    int getDay();
    int getYear();
    int dayOfYear();
    string dayName();
};


#endif //PROG2_MYDATE_H
