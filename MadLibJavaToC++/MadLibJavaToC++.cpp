

#include <iostream>
#include <string>
#include "Mad.h"
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	Mad madLib;

	std::string namePlaceHolder;
	signed short agePlaceHolder;
	bool weirdPlaceHolder;
	std::string weirdIntoAString;

	cout << "Enter a name " << endl;
	cin >> namePlaceHolder;
	madLib.setName(namePlaceHolder);

	cout << "Enter your age " << endl;
	cin >> agePlaceHolder;
	madLib.setAge(agePlaceHolder);

	cout << "Are you weird? Please type Y or N" << endl;
	std::string placeHolder;
	cin >> placeHolder;
	if (placeHolder == "N") {
		weirdPlaceHolder = false;
	}
	else if (placeHolder == "Y") {
		weirdPlaceHolder = true;
	}
	else {
		weirdPlaceHolder = true; //Because if you type it in wrong you are automatically weird
	}
	madLib.setIsWeird(weirdPlaceHolder);

	srand(time(0));
	int randNum = rand() % 100 + 1;


	//Since i do not feel like it is important to write a story Im just going to print out the variables and a few things in between

	cout << "You are " << madLib.getName() << endl;
	cout << "Your age is " << madLib.getAge() << endl;
	if (madLib.getIsWeird() == true) {
		weirdIntoAString = "True ";
	}
	else {
		weirdIntoAString = "False ";
	}
	cout << "Is this person weird? the answer is: " << weirdIntoAString << endl;
	cout << "Here is a random number, enjoy: " << randNum << endl;

	return 0;
}
