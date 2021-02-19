// Edward Kuoch, Colin Creasman, Julian Saldana, Claudia Fierro
// Class (CECS 282-06)
// Project Name (Week 5 - Lab 2 (Strech can))
// Due Date (2/18/2021)
// Demoed at 7:59pm
#include <iostream>
#include "Can.h"
using namespace std;

void pour(Can &c1, Can &c2){
    cout << "Pouring " << c2.get_name() << " into " << c1.get_name() << endl;
    c1.setWeight(c1.get_weight() + c2.get_weight());
    c1.setName(c1.get_name()+","+c2.get_name());
    c2.setWeight(0);
    c2.setName("empty");
}

Can mix(Can c1, Can c2) {
    cout << "Mixing " << c2.get_name() << " and " << c1.get_name() << endl;
    Can newCan(c1.get_name() + ", " + c2.get_name(), c1.get_weight() + c2.get_weight());
    return newCan;
}

void stretch(Can &c1, int expand) {
    cout << "Stretching " << c1.get_name() << " by " << expand << endl;
    c1.setWeight(c1.get_weight()+expand);
}

int main() {
    Can c1("Peaches", 15);
    Can c2("Peas", 20);
    Can c3("soup", 24);
    Can c4 = mix(c1,c3); // c4 will have a mixture of c1 and c2. c1 and c3 remain unchanged
    pour(c2,c1); // pour c1 into c2. c1 will be empty
    stretch(c3,20); // stretch c3 by 20 ounces
    cout << "C1 - ";
    c1.display(); // empty:0
    cout << "C2 - ";
    c2.display(); // Peas,Peaches:35
    cout << "C3 - ";
    c3.display(); // soup:44
    cout << "C4 - ";
    c4.display(); // Peaches, soup:39

    return 0;
}