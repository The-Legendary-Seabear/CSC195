#pragma once
#include <iostream>
using namespace std;
using age_t = unsigned short;

class Human {
public:
    Human() {
        cout << "constructor\n";
        m_count++;
    }
    Human(string name, age_t age) :
        m_name{ name },
        m_age{ age }
    {
        cout << "constructor\n";
        m_count++;
    }
    ~Human() {
        cout << "Destructor\n";
        m_count--;
    }
    string getName() { return m_name; }
    unsigned short getAge() { return m_age; }
    void setAge(age_t age);
    static int getCount() { return m_count; }
protected:
    string m_name;
    age_t m_age = 0;
    static int m_count;
    static const float m_tax;
};

void func();
