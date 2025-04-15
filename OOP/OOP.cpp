

#include <iostream>
#include "Student.h"
using namespace std;




int main()
{
    {
        Student student1{ "Alex", 19, 2.0f };
        cout << student1.getName() << endl;
        cout << student1.getAge() << endl;
    }
}