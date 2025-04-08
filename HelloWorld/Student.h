#pragma once
#include <string>

using namespace std;

void f();

class Student
{
public:
	Student() {}
	Student(std::string name) { this->m_name = name; }

	void Write();
	std::string GetName() { return m_name; }
	std::string setName(std::string name) { m_name = name; return 0; }

private:
	std::string m_name;
};
