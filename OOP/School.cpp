#include "School.h"
#include "Student.h"
#include "BusDriver.h"

School::~School()
{
	for (Human* human : m_humans) {
		delete human;
	}
	m_humans.clear();
}

void School::add(Human::Type type)
{
	Human* human = nullptr;
	switch (type
)
	{
	case Human::Type::STUDENT:
		human = new Student;
		break;
	case Human::Type::BUSDRIVER:
		human = new BusDriver;
		break;
	default:
		break;
	}
	human->read();
	m_humans.push_back(human);
}

void School::displayAll()
{
	for (Human* human : m_humans) {
		human->write();
	}
}

void School::displayByType(Human::Type type)
{
}

void School::displayByName(string name)
{
}
