// Efrain Miranda
// Julian Saldana
// Juan Anaya
// Miguel Echeverria
// Demo Time: 7:58 PM
// Class: CECS 282-06
// Project Name: Week 2, Lab 2 (Can Class Separate Files)
// Due Date: 1/28/21


#include <iostream>
#include "Can.h"
using namespace std;

void displayArray(Can arr[6]) {
    int sum = 0;
    for (int i = 0; i < 6; i++) {
        sum += arr[i].getVolume();
        cout << arr[i].getVolume() << " ounce can of " << arr[i].getContents() << endl;
    }
    cout << "Total weight: " << sum << " ounces" << endl;

}

int main() {
    Can soda[6];
    soda[0] = Can("Coke", 12);
    soda[1] = Can("Mango Monster", 16);
    soda[2] = Can("Red Bull", 8);
    soda[3] = Can("Bang!", 16);
    soda[4] = Can("Venom Energy", 16);
    soda[5] = Can("Jolt Cola", 12);
    displayArray(soda);
}