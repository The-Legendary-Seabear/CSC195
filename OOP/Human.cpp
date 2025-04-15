#include "Human.h"

int Human::m_count = 0;
const float Human::m_tax = 0.0825f;

void func() {
    cout << "funky\n";
}

void Human::setAge(age_t age) {
    m_age = age;
}