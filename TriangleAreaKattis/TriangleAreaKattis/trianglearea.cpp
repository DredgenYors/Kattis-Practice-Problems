#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int h = 0;
	int b = 0;
	float triArea = 0;

	cout << "Enter the measured base and height of the triangle: " << endl;
	cin >> b >> h;

	cout << setprecision(1);

	triArea = 0.5 * b * h;

	if (b < 1 || b > 1000) //if statement to ensure the base is between 1 and 1000
		cout << "The base must between 1 and 1000!" << endl;

	else if (h < 1 || h > 1000) //else if statement to ensure the height is between 1 and 1000
		cout << "The height must be between 1 and 1000!" << endl;

	else
		cout << "These measurements are acceptable. The area of the cake is " << triArea << " inches" << endl;
}