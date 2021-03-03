//  Jonathan Truong
//  Julian Saldana
//  James Cho
//  Class (CECS 282-06)
//  Week 7 - Lab 1 (Pass by pointer, pass by reference)
//  Due Date (3/2/2021)
//  Demoed at 7:50PM
#include <iostream>

using namespace std;

void swap(int *x, int &y) {
    cout << "in swap" << endl;
    int z = *x;
    *x = y;
    y = z;
}

int main() {
    int x = 10;
    int y = 20;
    cout << "Before: " << x << " " << y << endl;
    swap(&x, y); // calling the correct function
    cout << "After: " << x << " " << y << endl;
}
