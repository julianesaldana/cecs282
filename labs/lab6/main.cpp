// John Apale
// Julian Saldana
// Claudia Fierro
// Sean Heidari
// Time demoed = 7:57 PM

#include <iostream>
#include "Student.h"

using namespace std;

int main() {
    Student student[5];

    student[0] = Student("Tom", 85);
    student[1] = Student("Alice", 71);
    student[2] = Student("Jack", 93);
    student[3] = Student("Mary", 65);
    student[4] = Student("Sue", 54);

    for (int i = 0; i < 5; i++) {
        student[i].print();
    }

    return 0;
}
