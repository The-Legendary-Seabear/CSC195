#pragma once
#include <iostream>
#include "Human.h"
using namespace std;

class Student : public Human{
public:
	Student() {
		cout << "Student constructor\n";
	}
	Student(string name, age_t age, float gpa) :
		Human{name, age },
		m_gpa {gpa}
	{
		cout << "Student constructor\n";

	}

	float getGPA() { return m_gpa; }
	float setGPA(float gpa) { m_gpa = gpa; }
private:
	float m_gpa = 4.0f;
};
