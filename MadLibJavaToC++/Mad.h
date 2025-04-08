#pragma once
#include <string>
#include <iostream>

using namespace std;

class Mad {
public:
	std::string getName() {
		return name;
	}
	void setName(std::string nameA) {
		if (!nameA.empty()) {
			name = nameA;
		}
		else {
			cout << "Invalid name" << endl;
		}
	}

	short getAge() {
		return age;
	}
	void setAge(short ageA) {
		if (ageA > 0 && ageA < 130) {
			age = ageA;
		}
		else {
			age = 0;
		}
	}
	bool getIsWeird() {
		return isWeird;
	}
	void setIsWeird(bool isA) {
		isWeird = isA;
	}

private:
	std::string name;
	signed short age;
	bool isWeird;
};
