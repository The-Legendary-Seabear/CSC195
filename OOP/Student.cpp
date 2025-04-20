#include "Student.h"
#include <iostream>
#include "Console.h"

void Student::read()
{
	Human::read();
	cout << "GPA: " << endl;
	//cin >> m_gpa;
	m_gpa = getData<float>();
}

void Student::write()
{
	Human::write();
	cout << "GPA: " << m_gpa << endl;
}
