#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cstring>
#include "myDate.h"

using namespace std;


struct Student {
    char name[20];
    int studentID;
    char grade;
    myDate birthday;
    string homeTown;
};

myDate randomBirthday() {   // sets random birthday between 1/1/1995 and 12/31/2005
    int randomMonth = (rand() % (12 - 1 + 1)) + 1;    // following (max - min + 1) + min rule, extra numbers but im keeping them for future reference
    int randomDay = (rand() % (31 - 1 + 1)) + 1;
    int randomYear = (rand() % (2005 - 1995 + 1)) + 1995;
    myDate result(randomMonth, randomDay, randomYear);
    return result;
}

void populate(Student **doublePointer) {    // populating pointer pointer student array
    string names[10] = {"name0", "name1", "name2", "name3", "name4", "name5", "name6", "name7", "name8", "name9"};
    string homeTowns[10] = {"homeTown0", "homeTown1", "homeTown2", "homeTown3", "homeTown4", "homeTown5", "homeTown6", "homeTown7", "homeTown8", "homeTown9"};
    char grades[5] = {'A', 'B', 'C', 'D', 'F'};

    srand(time(NULL));
    for (int i = 0; i < 10 ; i++) {
        doublePointer[i] = new Student;
        strcpy(doublePointer[i]->name, names[rand() % 10].c_str());   // using strcpy and .c_str() to convert string into a char array
        doublePointer[i]->studentID = (rand() % 9999 - 9000 + 1) + 9000;
        doublePointer[i]->grade = grades[rand() % 5];
        doublePointer[i]->birthday = randomBirthday();
        doublePointer[i]->homeTown = homeTowns[rand() % 10];
    }
}

void display(Student **doublePointer) {   // left justified, using setw
    cout << setw(10) << left << "Name" << setw(15) << "Student ID" << setw(10) << "Grade" << setw(20) << "Birthday" << setw(20) << "Hometown" << endl;
    cout << setw(10) << left << "_____" << setw(15) << "__________" << setw(10) << "_____" << setw(20) << "_________________" << setw(20) << "_________" << endl;
    for(int j = 0; j < 10; j++){
        cout << setw(10) << left << doublePointer[j]->name << setw(15) << doublePointer[j]->studentID << setw(10) << doublePointer[j]->grade << setw(20) << doublePointer[j]->birthday.toString() << setw(20) << doublePointer[j]->homeTown << endl;
    }
    cout << endl;
}

void swap(Student *x, Student *y) {
    Student *temp = x;
    x = y;
    y = temp;
}

void sortByName(Student **doublePointer, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (strcmp(doublePointer[j]->name, doublePointer[j + 1]->name) > 0){
                swap(*doublePointer[j], *doublePointer[j + 1]);
            }
        }
    }
}

void sortByStudentID(Student **doublePointer, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (doublePointer[j]->studentID > doublePointer[j + 1]->studentID > 0){
                swap(*doublePointer[j], *doublePointer[j + 1]);
            }
        }
    }
}

void sortByGrade(Student **doublePointer, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (doublePointer[j]->grade < doublePointer[j + 1]->grade){
                swap(*doublePointer[j], *doublePointer[j + 1]);
            }
        }
    }
}

void sortByBirthday(Student **doublePointer, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (doublePointer[j]->birthday.daysBetween(doublePointer[j + 1]->birthday) < 0){
                swap(*doublePointer[j], *doublePointer[j + 1]);
            }
        }
    }
}

void sortByHomeTown(Student **doublePointer, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (doublePointer[j]->homeTown > doublePointer[j + 1]->homeTown){
                swap(*doublePointer[j], *doublePointer[j + 1]);
            }
        }
    }
}

int main() {
    cout << "Generating 10 student pointers...\nStarting list:\n" << endl;

    Student *tenStudents[10];
    Student **doublePointer = tenStudents;
    populate(doublePointer);

    bool run = true;
    while (run) {
        display(doublePointer);
        cout << "1. Display list sorted by Name\n2. Display list sorted by Student ID\n3. Display list sorted by Grade\n4. Display list sorted by Birthday\n5. Display list sorted by Home Town\n6. Exit" << endl;
        int option; cin >> option;
        if (option == 1)
            sortByName(doublePointer, 10);
        else if (option == 2)
            sortByStudentID(doublePointer, 10);
        else if (option == 3)
            sortByGrade(doublePointer, 10);
        else if (option == 4)
            sortByBirthday(doublePointer, 10);
        else if (option == 5)
            sortByHomeTown(doublePointer, 10);
        else
            run = false;
    }
    return 0;
}
