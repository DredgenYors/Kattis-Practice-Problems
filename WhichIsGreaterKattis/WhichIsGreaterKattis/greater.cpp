#include <iostream>
using namespace std;

int main() {
	int num1 = 0; //declares two variables to hold two variables. variables must also be initialized here to hold values until they are assigned new values later.
	int num2 = 0;

	cout << "Enter two positive numbers: " << endl; //asking for user input
	cin >> num1 >> num2; //user inputs two numbers, replacing the placeholder 0s that were initialized with the decleration

	if (num1 < num2) //if statement to test which number is bigger
		cout << "0";
	else //else statement if one number is not bigger than the other. 
		cout << "1";
	//could also be completed with bool? unsure how yet, revisit later
}