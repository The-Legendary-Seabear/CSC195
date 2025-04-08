#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <list>
#include <map>

using namespace std;

int main() {
	int i = 0xff;
	array<int, 5> arr = { 1, 2, 3, 4, 5};
	cout << arr.size() << endl;

	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << endl;
	}

	//VECTOR!!! DIRECTION AND MAGNITUDE
	vector<int> vec = { 1, 2, 3, 4, 5 };
	vec.push_back(6);
	cout << vec.size() << endl;
	cout << vec.capacity() << endl;

	//list
	list<int> lst = { 1, 2, 3, 4, 5 };
	lst.push_back(6);
	lst.insert(lst.begin(), 0);

	//map
	map<string, int>m;
	m["Alex"] = 69;
	m["Chris"] = 2;

	cout << m["Alex"] << endl;
	
	//cout << &i << endl;
	//cout <<  (void*)(&arr[0])  << endl;
	//cout <<  (void*)(&arr[1])  << endl;

	//cout << "OH NOOO ITS THE HAMMER" << endl;

	return 0;
}
