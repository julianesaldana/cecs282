// Melissa Gaines, James Cho, Sean Heidari, Julian Saldana
// Week 7 Lab 2
// Time demoed: 7:46 PM

// sorts person objects using array of pointers
#include <iostream>
#include <string>                 //for string class

using namespace std;

////////////////////////////////////////////////////////////////
class person                      //class of persons
{
protected:
    string name;                //person's name
public:
    void setName()              //set the name
    {
        cout << "Enter name: ";
        cin >> name;
    }

    void printName()            //display the name
    { cout << endl << name; }

    string getName()            //return the name
    { return name; }
};

////////////////////////////////////////////////////////////////
int main() {
    void bsort(person **, int);     //prototype
    person *persPtr[100];          //array of pointers to persons
    int n = 0;                     //number of persons in array
    char choice;                   //input char

    do {                           //put persons in array
        persPtr[n] = new person;    //make new object
        persPtr[n]->setName();      //set person's name
        n++;                        //count new person
        cout << "Enter another (y/n)? "; //enter another
        cin >> choice;              //   person?
    } while (choice == 'y');          //quit on 'n'

    cout << "\nUnsorted list:";
    for (int j = 0; j < n; j++)         //print unsorted list
    { persPtr[j]->printName(); }

    bsort(persPtr, n);             //sort pointers

    cout << "\nSorted list:";
    for (int j = 0; j < n; j++)             //print sorted list
    { persPtr[j]->printName(); }
    cout << endl;
    return 0;
}  //end main()
//--------------------------------------------------------------
void bsort(person **pp, int n)    //sort pointers to persons
{
    // void order(person**, person**);  //prototype
    int j, k;                      //indexes to array

    for (long j = 0; j < n - 1; j++)           //outer loop
        for (long k = j + 1; k < n; k++)        //inner loop starts at outer
//	      order(pp+j, pp+k);
            //order the pointer contents
        {
            person **p1 = pp + j;
            person **p2 = pp + k;

            if ((*p1)->getName() < (*p2)->getName()) {
                person *tempptr = *p1;     //swap the pointers
                *p1 = *p2;
                *p2 = tempptr;
            }
        }
}

