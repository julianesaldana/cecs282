// Group: Alan Marin, Thomson Nguyen, Julian Saldana, Abraham Ungos
// Time demoed: 7:57pm

#include <iostream>
using namespace std;

class Can {

private:
    string contents;
    int size;

    //Getters
public:
    // Constructor
    Can (string c, int s) {
        contents = c;
        size = s;
    }
    // Method gets the name of the can
    string getContents() {
        return contents;
    }
    // Method to get the size (oz.) of the can
    int getSize() {
        return size;
    }
};

int main() {
    string description = " ounce can of ";
    //Creating pepsi can
    Can can1("Pepsi", 12);
    cout << can1.getSize() << description << can1.getContents() << endl;
    //Creating pears can
    Can can2("pears", 16);
    cout << can2.getSize() << description << can2.getContents() << endl;
    //Creating mustard can
    Can can3("mustard",32);
    cout << can3.getSize() << description << can3.getContents() << endl;
    //Creating apple juice can
    Can can4("apple juice", 40);
    cout << can4.getSize() << description << can4.getContents() << endl;

    //Getting total weight
    int totalWeight = 0;
    totalWeight = can1.getSize() + can2.getSize() + can3.getSize() + can4.getSize();
    cout << "Total weight is " << totalWeight << " ounces" << endl;

    return 0;
}