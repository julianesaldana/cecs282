// Melissa Gaines
// Miguel Echeverria
// Giovanni Contreras
// Julian Saldana
// Week 6 Lab 1
// Time demoed - 7:52PM

#include <iostream>
using namespace std;

int main() {
  long value1 = 200000, value2;
  long *longPtr = &value1;
  cout << *longPtr << endl;
  value2 = *longPtr;
  cout << value2 << endl;
  cout << &value1 << endl;
  cout << longPtr << endl;
}

