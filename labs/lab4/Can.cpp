#include "Can.h"
#include <iostream>

using namespace std;

// Constructor
Can::Can() {
    contents = "empty";
    volume = 0;
}

Can::Can(string c, int v) {
    contents = c;
    volume = v;
}

// Method gets the name of the can
string Can::getContents() {
    return contents;
}

// Method to get the volume (oz.) of the can
int Can::getVolume() {
    return volume;
}

void Can::display() {
    cout << contents << ":" << volume << endl;
}