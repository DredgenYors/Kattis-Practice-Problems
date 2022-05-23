#include <iostream>
#include <string.h>
using namespace std;

int main() {
	string echoword;

		cout << "Yell into the cave: " << endl;
		cin >> echoword; 

		while (echoword.empty())
			cout << "You didn't yell!";

		string limitecho = echoword.substr(0, 14);

		cout << limitecho << " " << limitecho << " " << limitecho;

}