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

void populate(Student **ptr) {
    for (int i = 0; i < 10; i++) {
        ptr[i]->studentID = 01234567;
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
