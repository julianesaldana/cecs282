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

myDate birthday() {
    srand(time(NULL));
    int randomMonth = rand() % 12 + 1;
    int randomDay = rand() % 31 + 1;
    int randomYear = rand() % 11 + 1995;
    myDate result(randomMonth, randomDay, randomYear);
    return result;
}

void populate(Student **ptr) {
    string names[10] = {"Name1", "Name2", "Name3", "Name4", "Name5", "Name6", "Name7", "Name8", "Name9", "Name10"};
    char grades[5] = {'A', 'B', 'C', 'D', 'F'};
    string homeTown[5] = {"Town1", "Town2", "Town3", "Town4", "Town5"};
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        ptr[i]->studentID = rand() % 1000 + 9000;
        ptr[i]->grade = 'A';
    }
}

// fixme: USE FANCY FORMATTING TRICKS
void display(Student **ptr) {
    cout << setw(14) << left << "Name" <<setw(20) << "Student ID" << setw(15) << "Grade" << setw(20) << "Birthday" << setw(20) << "Hometown" << endl;
    cout << setw(14) << left << "_____" << setw(20) << "___________" << setw(15) << "______" << setw(20) << "_________" << setw(20) << "_________" << endl;
    for(int j = 0; j < 10; j++){
        cout << setw(14) << left << ptr[j]->name << setw(20) << ptr[j]->studentID << setw(15) << ptr[j]->grade << setw(20) << ptr[j]->birthday.toString() << setw(20) << ptr[j]->homeTown << endl;
    }
}

int main() {
    Student *tenStudents[10];
    Student **first = tenStudents;
    populate(first);
//    display(first);
//    sortByName(first);
//    display(first);

    cout << "Generating 10 student pointers..." << endl;
    bool run = true;
    while (run) {
        cout << "1) Display list sorted by Name\n2. Display list sorted by Student ID\n3. Display list sorted by Grade\n4. Display list sorted by Birthday\n5. Display list sorted by Home Town\n6. Exit" << endl;
        int option;
        cin >> option;
        if (option == 1) {
            populate(first);
            display(first);
        } else if (option == 2) {

        } else if (option == 3) {

        } else if (option == 4) {

        } else if (option == 5) {

        } else {
            run = false;
        }
    }
    return 0;
}
