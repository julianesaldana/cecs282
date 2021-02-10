//
// Created by Julian on 2/9/2021.
//

#ifndef LAB7_AIRPLANE_H
#define LAB7_AIRPLANE_H

#include <iostream>

using namespace std;


class Airplane {
public:
    Airplane(string, int, int, int);

    void display();

    void setAltitude();

    bool crash(Airplane);

private:
    string model;
    int altitude;
    int minAltitude;
    int maxAltitude;

};


#endif //LAB7_AIRPLANE_H
