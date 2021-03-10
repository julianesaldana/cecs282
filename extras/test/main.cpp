#include <iostream>
#include <cstring>

using namespace std;

struct Student {
    int age;
};

void display(Student **reference) {
    for (int i = 0; i < 10; i++) {
        cout << reference[i]->age << " ";
    }
}

void populate(Student **reference) {
    for (int i = 0; i < 10; i++) {
        reference[i] = new Student;
        reference[i]->age = i;
    }
}

int sum_array(int arr[]) {
    int sum = 0;
    for (int i = 0; i < 10; i++){
        sum += arr[i];
    }
    return sum;
}

int main() {
    int num[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << sum_array(num);
    return 0;
}
