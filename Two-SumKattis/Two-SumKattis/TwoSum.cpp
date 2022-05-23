#include <iostream>
using namespace std;

int main() {
	int a = 0; //declares and initiliazes three variables. Two will be overriden by user input, the third will be overriden when the previous two are added. 
	int b = 0;
	int sum = 0;

	cout << "Enter two numbers between 0 and 1000 to add: " << endl; //prompts user to input two numbers 
	cin >> a >> b; //accepts the user input

	sum = a + b; //adds the two integers that were input

	if (a < 0 || a > 1000) //if statement to ensure the first number is between 0 and 1000
		cout << "The numbers must be between 0 and 1000!" << endl;

	else if (b < 0 || b > 1000) //else if statement to ensure the second number is between 0 and 1000
		cout << "The numbers must be between 0 and 1000!" << endl;

	else // else statement that outputs the sum of the two numbers if they are both between 0 and 1000
		cout << "These numbers are acceptable. The sum of these two numbers is: " << sum << endl;
}