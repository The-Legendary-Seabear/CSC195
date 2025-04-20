#pragma once
#include "Human.h"
using namespace std;

using busDriver_t = unsigned short;

class BusDriver : public Human {
public:
	BusDriver() {}
	BusDriver(string name, age_t age, string busName, busDriver_t busNumber) {
		//Human(name, age);
		m_busName = busName;
		m_busNumber = busNumber;
	}

	void setBusName(string name) {
		m_busName = name;
	}

	void setBusNumber(busDriver_t num) {
		if (num <= 300 || num >= 400) return;
		m_busNumber = num;
	}

	string getBusName() {
		return m_busName;
	}

	busDriver_t getBusNum() {
		return m_busNumber;
	}


	void read() override;
	void write() override;

	Type getType() override { return Type::BUSDRIVER; }
	void work() override { cout << "bus driver work\n"; }
private:
	string m_busName;
	busDriver_t m_busNumber;
};
