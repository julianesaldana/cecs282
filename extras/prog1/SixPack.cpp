#include "SixPack.h"
#include "Can.h"
#include <iostream>
using namespace std

SixPack::SixPack(){
    Can storage[6];
}

SixPack::SixPack(Can can) {
    for (int i = 0; i < 6; i++)
        storage[i] = can
}

void SixPack::display() {
    cout << "Six Pack Contents\n";
    cout << "=================\n";

    for (int i = 0; i < 6; i++) {
        storage[i].display();
        cout << endl;
    }
}
