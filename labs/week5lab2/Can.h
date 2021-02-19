//
// Created by Julian on 2/18/2021.
//

#ifndef WEEK5LAB2_CAN_H
#define WEEK5LAB2_CAN_H
#include <string>
using namespace std;
class Can
{
private:
    int weight;
    string name;
public:
    Can();
    Can(string, int);
    int get_weight();
    string get_name();
    void display();
    void setWeight(int);
    void setName(string);
};
#endif