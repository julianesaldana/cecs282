#include <iostream>
using namespace std;

struct Student {
    char name[20];
    int SID;
    string homeTown;
    char grade;
};

int main() {
    Student s1;
    Student * sptr = new Student;
    sptr -> grade = 'A';
    cout << "Compiles" << endl;
}
