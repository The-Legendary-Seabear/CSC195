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


	void read() override;
	void write() override;


	float getGPA() { return m_gpa; }
	void setGPA(float gpa) { m_gpa = gpa; }

	Type getType() override { return Type::STUDENT; }
	void work() override { cout << "student work\n"; }
private:
	float m_gpa = 4.0f;
};
