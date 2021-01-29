//
// Created by Julian on 1/21/2021.
//

#include <iostream>
#include "Can.h"    // works with ALL compilers, do this, transfers over any of the "includes" statements in the file referenced
#include "SixPack.h"
#include "SixPack.cpp"
using namespace std;

int main() {
    Can c1;
    Can c2("Venom", 16);
    c1.display();
    cout << endl;
    c2.display();
    SixPack sp1(c2);
    cout << endl;
    sp1.display();

//    int n[10];
//    cout << sizeof(n);

//    // how to declare and reference an array in c++
//    int nums[10];
//    nums[3] = 35;

//    // creates array of cans
//    Can sixPack[6];
//    sixPack[14].setVolume(45);
    return 0;   // don't need to do this but it doesn't affect if you do
}