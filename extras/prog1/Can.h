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