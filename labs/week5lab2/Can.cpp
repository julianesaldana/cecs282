#include <iostream>
using namespace std;
#include "Can.h"

Can::Can(){
    name = "Blank";
    weight = 0;
}
Can::Can(string a, int b)
{
    name = a;
    weight = b;
}
int Can::get_weight()
{
    return weight;
}

string Can::get_name()
{
    return name;
}

void Can::display()
{
    cout << name << " : " << weight << endl;
}

void Can::setWeight(int n) {
    weight = n;
}

void Can::setName(string s) {
    name = s;
}