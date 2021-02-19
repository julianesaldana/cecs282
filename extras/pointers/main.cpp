#include <iostream>

using namespace std;

int main() {
//    int x = 10;
//    int *xptr = &x;
//    cout << xptr << endl;


    int *iptr;
    int nums[10];
    int n2[] = {2,4,6,8};
    char ca[] = {'5', 'H', 'G'};
    iptr = &n2[0];
    iptr = n2;
    for (int i = 0; i < 4; i++)
        cout << iptr++ << endl;
    return 0;
}
