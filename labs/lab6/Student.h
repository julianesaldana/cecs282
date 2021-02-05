//
// Created by Julian on 2/4/2021.
//

#ifndef LAB6_STUDENT_H
#define LAB6_STUDENT_H

#include <string>
using namespace std;

class Student {
private:
    string name;
    int score;
    char grade;

public:
    Student();
    Student(string name, int score);
    void print();
};

#endif
