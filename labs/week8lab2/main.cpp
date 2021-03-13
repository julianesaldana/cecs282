// Denise Paredes, Julian Saldana, Sze Man Tang
// CECS 282-06
// Due Date: 03/11/21
// Week 8, Lab2 (array of pointers)
// Time demoed: 8:13 pm

#include <iostream>

using namespace std;

const int SIZE = 5;

int main() {
    int grade[SIZE] = {10, 20, 30, 40, 50};
    int average = 0;
    for (int i = 0; i < SIZE; i++) {
        cout << "Value of grade[" << i << "] = " << grade[i] << endl;
        average += grade[i];
    }

    cout << "Average: " << average / SIZE << endl;

    // aptr[i] prints content
    cout << endl;
    int *aptr[SIZE];
    for (int i = 0; i < SIZE; i++) {
        aptr[i] = &grade[i];
        cout << "Value of aptr[" << i << "] = " << *aptr[i] << endl;
    }

    // where i is NOT a loop variant
    // aptr + i prints address
    cout << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Value of aptr[" << i << "] = " << aptr + i << endl;
    }
    return 0;
}
