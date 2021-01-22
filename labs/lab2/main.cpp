// Claudia Fierro, Julian Saldana, Sean Heidari, William Pham
// Submission time:
// Class (CECS 282-06)
// Project Name (Prog 0 – Happy Birthday)
// Due Date (1/21/2021)

#include <iostream>
#include <string>
using namespace std;

int main() {
	string name;
	int age, birthYear;
	char thisYear;
	cout << "What is your name?";
	cin >> name;
	cout << "How old are you " << name << "? ";
	cin >> age;
	cout << name << ", have you had your birthday yet this year?? (y/n)";
	cin >> thisYear;

	if (thisYear == 'y' || thisYear == 'Y')
		birthYear = 2021 - age;
	else
		birthYear = 2021 - age - 1;

	cout << endl;
	cout << "Hi " << name << "!!!\n\n I guess that you were born in " << birthYear << endl;
	cout << "\n\nPress 'Enter' to continue:";

	getchar();
	getchar();

	return 0;
}
