//
// Created by Julian on 2/4/2021.
//

#include "Student.h"
#include <iostream>

Student::Student() {
    name = "name";
    score = 0;
    grade = 'F';
}

Student::Student(string n, int s) {
    name = n;
    score = s;

    if (score <= 100 && score >= 90) {
        grade = 'A';
    }
    else if (score <= 89 && score >= 80) {
        grade = 'B';
    }
    else if (score <= 79 && score >= 70) {
        grade = 'C';
    }
    else if (score <= 69 && score >= 60) {
        grade = 'D';
    }
    else {
        grade = 'F';
    }
}

void Student::print() {
    cout << name << "  \t" << score << "    " << grade << endl;
}