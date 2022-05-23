#include <iostream>
#include <string.h>
using namespace std;

int main() {
	string echoword; //declares variable of type string

		cout << "Yell into the cave: " << endl; //prompts user to enter input
		cin >> echoword; //accepts user string input

		while (echoword.empty()) //while statement to ensure that there is an input, or that the string value will be greater than "0"
			cout << "You didn't yell!";

		string limitecho = echoword.substr(0, 14); //new string that limits the size of user string input echoword to no more than 15 characters

		cout << limitecho << " " << limitecho << " " << limitecho; //output of the new string 3 times

}
