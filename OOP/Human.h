#pragma once
#include <iostream>
using namespace std;
using age_t = unsigned short;

class Human {
public:
    enum class Type : unsigned short {
        STUDENT,
        BUSDRIVER
    };

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

    
    virtual void read();
    virtual void write();

    string getName() { return m_name; }
    unsigned short getAge() { return m_age; }
    void setAge(age_t age);
    static int getCount() { return m_count; }
    virtual Type getType() { return Type::STUDENT; }
    virtual void work() = 0;
protected:
    string m_name;
    age_t m_age = 0;
    static int m_count;
    static const float m_tax;
};

void func();
