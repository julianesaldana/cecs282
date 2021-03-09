#include <iostream>
#include <cstring>

using namespace std;

struct Student {
    int age;
};

void display(Student **reference) {
    for (int i = 0; i < 10; i++) {
        cout << reference[i]->age << " ";
    }
}

void populate(Student **reference) {
    for (int i = 0; i < 10; i++) {
        reference[i] = new Student;
        reference[i]->age = i;
    }
}

int main() {
//    Student *students[10];
//    Student **reference = students;
//    populate(reference);
//    display(reference);
}
