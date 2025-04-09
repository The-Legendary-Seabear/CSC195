
#include <iostream>
#include <array>
#include <string>
#include <vector>
#include <list>
#include <stack>
#include <map>

using namespace std;

void arrayMethod() {
    //This method creates a array and prints out each value inside of it
    array<string, 7> arr = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
    for (int i = 0; i < 7; i++) {
        cout << arr[i] << endl;
    }
}

 void vectorMethod() {
     //this method creates a vector and stores 5 values, it then creates 2 new ones and then deletes the last one. Finally it prints out all stored values
    vector<int> vec = { 1, 2, 3, 4, 5 };
    vec.push_back(6);
    vec.push_back(7);
    vec.pop_back();

    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << endl;
    }
}

 void listMethod() {
     //This method creates a list with 3 values, then it creates a new value at the front and at back. It then deletes a value and finally printing out all values.
    list<string> lst = { "Strawberry", "Blueberry", "Raspberry" };
    lst.push_front("Banana");
    lst.push_back("Orange");
    lst.remove("Strawberry");
    for (auto iter = lst.begin(); iter != lst.end(); iter++) {
        cout << *iter << endl;
    }
    
}

void mapMethod() {
    //This method creates a map with 3 keys that each have a value. it then searches up a key and modifies its value. finally it prints out all keys and their values
    map<string, int> m;
    m["Bread"] = 5;
    m["Coffee"] = 20;
    m["Soup"] = 50;

    m["Soup"] -= 20;

    for (auto iter = m.begin(); iter != m.end(); iter++) {
        cout << iter->first << " " << iter->second << endl;
    }
}

int main()
{
    arrayMethod();
    vectorMethod();
    listMethod();
    mapMethod();
    return 0;
}

