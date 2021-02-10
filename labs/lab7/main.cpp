//Alan Marin, Julian Aldana, Matthew Chen
//Class(CECS 282-06)
//Due Date 02/09/21
//Demoed at 8:05 PM

#include <iostream>
#include "Airplane.h"

using namespace std;

int main() {
    Airplane plane1("Boeing 747", 4000, 1000, 8000);
    Airplane plane2("Lear Jet", 3000, 1000, 8000);

    int counter = 0;
    for (int i = 0; i < 10; i++) {
        plane1.setAltitude();
        plane2.setAltitude();
        if (plane1.crash(plane2)) {
            plane1.display();
            plane2.display();
            counter++;
        }
    }
    cout << "amount of times crashed: " << counter << endl;
}