//
// Created by Julian on 2/17/2021.
//

#include "myDate.h"

int greg2Julian (int m, int d, int y);

int julian2Greg(int jd, int &month, int &day, int &year);

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
    string months [12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    cout << months[month - 1] << " " << day << ", " << year;
}

void myDate::increaseDate(int n) {
    day += n;
}

void myDate::decreaseDate(int n) {
    day -= n;
}

int myDate::daysBetween(myDate date) {
    return abs(day - date.getDay());
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
    int temp = (month * 30) + day;
    return temp;
}

string myDate::dayName() {
    string days [] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    return days[(day % 7) - 1];
}