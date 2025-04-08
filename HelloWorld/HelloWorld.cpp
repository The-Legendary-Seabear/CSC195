// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Student.h"
#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
std::string name;
float weight;
int age;


};

int main()
{
    //Student student("Alex");
    //student.setName("Bob");
    //student.Write();

    Person person;
    person.age = 19;
    
    unsigned int i = 82;
    //printf("%d\n", i)
    std::cout << i << std::endl;
    std::cout << sizeof(int) << std::endl;
    std::cout << sizeof(Person) << std::endl;

    char c = 'A';

    cout << ++i << endl;

    cout << &i << endl;

    f();
    cout << "Hello, World!" << endl;
    cout << "Git is now tracking this project!" << endl;
    return 0;
}
