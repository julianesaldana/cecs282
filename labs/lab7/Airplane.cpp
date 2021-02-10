//
// Created by Julian on 2/9/2021.
//

#include "Airplane.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Airplane::Airplane(string m, int a, int min, int max) {
    model = m;
    altitude = a;
    minAltitude = min;
    maxAltitude = max;
}

void Airplane::setAltitude() {
    srand(time(0));
    altitude = (rand() % (maxAltitude - minAltitude + 1)) + minAltitude;
}

void Airplane::display() {
    cout << "Model: " << model << " Altitude:" << altitude << endl;
}

bool Airplane::crash(Airplane plane) {
    if (abs(altitude - plane.altitude) <= 200) {
        return true;
    }
    return false;
}
