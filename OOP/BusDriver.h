#pragma once
#include "Human.h"
using namespace std;

using busDriver_t = unsigned short;

class BusDriver : public Human {
public:
	BusDriver() {}
	BusDriver(string name, age_t age, string busName, busDriver_t busNumber) {
		Human(name, age);
		m_busName = busName;
		m_busNumber = busNumber;
	}

private:
	string m_busName;
	busDriver_t m_busNumber;
};
