#include <iostream>
#include "myDate.h"
#include <cstdlib>

using namespace std;

struct Student {
    char name[20];
    int studentID;
    char grade;
    myDate birthday;
    string homeTown;
};

void populate(Student *ptr[]) {
    for (int i = 0; i < 10; i++) {

    }
}

int main() {
    Student students[10];
    Student *studentsPtr;
    studentsPtr = students;
    for (int i = 0; i < 10; i++) {
        studentsPtr[i].grade = 'A';
        cout << studentsPtr[i].grade << endl;
    }
    return 0;
}
