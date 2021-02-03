#include <iostream>
using namespace std;

void func1(int n1[]) {
    cout << "address of array n:" << &n1 << endl;
    cout << "In func1\n";
    cout << sizeof(n1);
}

int main() {
    srand(time(NULL));
    cout << time(NULL) << endl;
    int n[5] = {2, 4, 8, 16, 32};

    int max = 20;
    int min = 15;

    for (int i = 0; i < 10; i++) {
        int x = rand(); // 0 - 32767
        int target = x % (max - min + 1);
        cout << target << endl;
    }

    cout << sizeof(n) << endl;
    cout << "address of array n:" << &n[0] << endl;

    func1(n);
    return 0;
}
