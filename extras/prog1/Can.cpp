#include "Can.h"
#include <iostream>

Can::Can() {
    content = "empty";
    volume = 0;
}

Can::Can(string c, int v) {
    content = c;
    volume = v;
}

void Can::display() {       // Can:: is the scope operator
    cout << content << ":" << volume << "\n";
}