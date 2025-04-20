#include "Human.h"
#include "Console.h"

int Human::m_count = 0;
const float Human::m_tax = 0.0825f;

void func() {
    cout << "funky\n";
}

void Human::read()
{
    cout << "Name: " << endl;
    //cin >> m_name;
    m_name = getData<string>();
    cout << "\nAge: " << endl;
    m_age = getData<age_t>();
    //cin >> m_age;
}

void Human::write()
{
    cout << "Name: " << m_name << endl;
    cout << "Age: " << m_age << endl;
}

void Human::setAge(age_t age) {
    m_age = age;
}