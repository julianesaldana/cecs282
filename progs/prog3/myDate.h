//
// Created by Julian on 3/8/2021.
//

#ifndef PROG3_MYDATE_H
#define PROG3_MYDATE_H


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

    string toString();
};


#endif //PROG3_MYDATE_H
