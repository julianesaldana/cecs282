//
// Created by Julian on 2/17/2021.
//

#include "myDate.h"

int Greg2Julian(int month, int day, int year) {
    int I = year;
    int	J = month;
    int K = day;

    int JD2 = K - 32075 + 1461 * (I + 4800 + (J - 14) / 12) / 4 + 367 * (J - 2 - (J - 14) / 12 * 12) / 12 - 3 * ((I + 4900 + (J - 14) / 12) / 100) / 4;
    return JD2;
}

void Julian2Greg(int JD, int& month, int& day, int& year) {
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

myDate::myDate() {
    month = 5;
    day = 11;
    year = 1959;
}

myDate::myDate(int m, int d, int y) {
    month = m;
    day = d;
    year = y;
}

void myDate::display() {
    string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September",
                         "October", "November", "December"};
    cout << months[month - 1] << " " << day << ", " << year;
}

void myDate::increaseDate(int n) {
    return Julian2Greg(Greg2Julian(month, day, year) + n, month, day, year);
}

void myDate::decreaseDate(int n) {
    return Julian2Greg(Greg2Julian(month, day, year) - n, month, day, year);
}

int myDate::daysBetween(myDate date) {
    return Greg2Julian(date.getMonth(), date.getDay(), date.getYear()) - Greg2Julian(month, day, year);
}

int myDate::getMonth() {
    return month;
}

int myDate::getDay() {
    return day;
}

int myDate::getYear() {
    return year;
}

int myDate::dayOfYear() {
    // FIXME, this is just a place holder for the actual code
    int temp = (month * 30) + day;
    return temp;
}

string myDate::dayName() {
    // FIXME, this is just a place holder for the actual code
    string days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    return days[(day % 7) - 1];
}