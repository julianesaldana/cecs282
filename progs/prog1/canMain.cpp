//
// Created by Julian on 1/21/2021.
//

#include <iostream>
#include "Can.h"    // works with ALL compilers, do this, transfers over any of the "includes" statements in the file referenced
using namespace std;

int main() {
    Can c1();
    Can c2("Venom", 16);
    cout << endl;
    c1.display();
    c2.display();
    return 0;   // don't need to do this but it doesn't affect if you do
}