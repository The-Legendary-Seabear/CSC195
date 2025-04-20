#include "BusDriver.h"

void BusDriver::read()
{
	cout << "BUSDRIVER" << endl;
	Human::read();
	cout << "Bus name: ";
	cin >> m_busName;

	cout << "Bus Num: ";
	cin >> m_busNumber;
}

void BusDriver::write()
{
	Human write();
	cout << "Bus name: " << m_busName << endl;
	cout << "Bus num: " << m_busNumber << endl;
}
