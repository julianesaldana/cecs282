// below, this first checks if exists, if not then creates it
//#ifndef CAN_H
//#define CAN_H

#include <string>
using namespace std;

class Can {
private:
    string content;
    int volume;
public:
    Can();
    Can(string, int);
    void display();
};

//#endif    ends the creation

//#pragma once  this does the same as ifndef and endif inside of visual studio