// Aryan Sanyal
// Denise Paredes
// Julian Saldana
// Class (CECS 282-06)
// Due Date : 02/16/2021
// Week 5 Lab 1
// Time Demoed:

#include <iostream>
using namespace std;

int Greg2Julian(int month, int day, int year) {
    int I = year;
    int J = month;
    int K = day;

    int JD2 = K - 32075 + 1461 * (I + 4800 + (J - 14) / 12) / 4 + 367 * (J - 2 - (J - 14) / 12 * 12) / 12 -
              3 * ((I + 4900 + (J - 14) / 12) / 100) / 4;
    return JD2;
}

void Julian2Greg(int JD, int &month, int &day, int &year) {
    int I;
    int J;
    int K;

    int L = JD + 68569;
    int N = 4 * L / 146097;
    L = L - (146097 * N + 3) / 4;
    I = 4000 * (L + 1) / 1461001;
    L = L - 1461 * I / 4 + 31;
    J = 80 * L / 2447;
    K = L - 2447 * J / 80;
    L = J / 11;
    J = J + 2 - 12 * L;
    I = 100 * (N - 49) + I + L;

    year = I;
    month = J;
    day = K;
}

int main() {
    int startJD = Greg2Julian(1, 1, 1000);
    int endJD = Greg2Julian(12, 31, 1500);
    int month = 1;
    int day = 1;
    int year = 1000;
    for (int i = startJD; i < endJD; i++) {
        Julian2Greg(i, month, day, year);
        if (month == 2 && day == 29) {
            cout << year << " is a leap year" << endl;
        }
    }
}



