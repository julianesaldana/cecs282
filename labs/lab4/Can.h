#ifndef LAB4_CAN_H
#define LAB4_CAN_H

#include <string>
using namespace std;

class Can {
private:
    string contents;
    int volume;

public:
    Can();
    Can(string, int);
    void display();
    int getVolume();
    string getContents();
};

#endif
