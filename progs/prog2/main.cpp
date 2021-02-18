#include "myDate.h"

int main() {
    myDate test;
    myDate test2;
    cout << "Displaying... "; test.display();
    cout << "\nIncreasing date by 3... "; test.increaseDate(3); test.display();
    cout << "\nDecreasing date by 3... "; test.decreaseDate(4); test.display();
    cout << "\nDays between first date and second date... " << test.daysBetween(test2) << endl;
    cout << "Getting month of first date... " << test.getMonth() << endl;
    cout << "Getting day of first date... " << test.getDay() << endl;
    cout << "Getting year of first date... " << test.getYear() << endl;
    cout << "Getting day of year of first date... " << test.dayOfYear() << endl;
    cout << "Getting day name of first date... " << test.dayName() << endl;
    return 0;
}
