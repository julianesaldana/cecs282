// John Apale, Julian Saldana, Sze Man Tang, Efrain Miranda
// Week 6 Lab 2
// Time Demoed: 7:58PM

#include <iostream>

using namespace std;

struct Car {
    string make;
    string model;
    int year;
    string color;
    int mileage;
    int mpg;
    float price;
};

void displayCar(Car *c) {
    for (int i = 0; i < 5; i++)
        cout << c[i].make << " " << c[i].model << " " << c[i].year << " " << c[i].color << " " << c[i].mileage
             << " miles " << c[i].mpg << " mpg $" << c[i].price << endl;
}

int main() {
    Car carLot[5];

    carLot[0] = {"Audi", "R20", 2020, "black", 0, 27, 40000};

    carLot[1] = {"Toyota", "Camry", 2019, "blue", 20000, 30, 20000};

    carLot[2] = {"BMW", "x5", 2015, "white", 30000, 31, 40000};

    carLot[3] = {"Lamborghini", "Aventador", 2017, "Black", 0, 65, 100000};

    carLot[4] = {"Mazda", "RX7", 1997, "orange", 329050, 18, 60000.00};

    displayCar(carLot);
}