

#include <iostream>
#include <string>

using namespace std;

void fun1() {
    bool b = true;
}

void fun2() {
    bool b = false;
    float f = 10;

    fun1();
}

void fun3() {
    int i[100000];
    fun3();
}

class Animal {
public:
    Animal(string name) {
        m_name = name;
    }

    string getName() {
        return m_name;
    }

private:
    string m_name;
};

void setValue(int* v) {
    *v = 5;
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int i = 5;
    float f = 4.5f;

    //fun2();
    //fun3();
    {
        int* pointer = new int(5);
        cout << *pointer << endl;
        delete pointer;
    }

    Animal* dog = new Animal("Dog");
    cout << dog->getName() << endl;
    delete dog;
    dog = nullptr;
    if (dog) {
    cout << dog->getName() << endl;
    }

    int* block = (int*)malloc(sizeof(int) * 1000);
    block[0] = 3;
    block[1] = 4;
    block[2] = 5;
    block[3] = 6;
    block++;
    cout << *(block + 2) << endl;
    free(--block);
 

    
    int v1 = 10;
    int v2 = 20;

    int* p = nullptr;
    cout << p << endl;
    p = &v1;
    *p = 5;
    cout << p << endl;
    cout << v1 << endl;

    p = &v2;
    *p = 69;
    cout << v2 << endl;

    //To pass the address use &
    //setValue(p);
    // v1 = 5, v2 = 69;
    swap(&v1, &v2);
    cout << v1 << " " << v2 << endl;
  
}

