// John Apale, Julian Saldana, Melissa Gaines, Matthew Chen
// CECS 282-06
// 2/11/21
// Time Demoed: 7:53 P.M.

#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

int sort6(int &one, int &two, int &three, int &four, int &five, int &six) {
    int list[6] = {one, two, three, four, five, six};
    sort(begin(list), end(list));
    one = list[0];
    two = list[1];
    three = list[2];
    four = list[3];
    five = list[4];
    six = list[5];

    int sum = 0;
    for (auto x : list) {
        sum += x;
    }
    return sum;
}

int main() {
// create six random ints, from 100 to 500
    srand(time(0));
    int one = (rand() % (500 - 100 + 1)) + 100; // (max - min + 1) + min
    int two = (rand() % (500 - 100 + 1)) + 100;
    int three = (rand() % (500 - 100 + 1)) + 100;
    int four = (rand() % (500 - 100 + 1)) + 100;
    int five = (rand() % (500 - 100 + 1)) + 100;
    int six = (rand() % (500 - 100 + 1)) + 100;

    cout << "BEFORE   " << "one: " << one << ", two: " << two << ", three: " << three << ", four: " << four
         << ", five: " << five << ", six: " << six << endl;
    cout << "Sum: " << sort6(one, two, three, four, five, six) << endl;
    cout << "AFTER   " << "one: " << one << ", two: " << two << ", three: " << three << ", four: " << four << ", five: "
         << five << ", six: " << six << endl;
}
