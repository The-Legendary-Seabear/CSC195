#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <list>
#include <map>
#include <iterator>
#include <stack>
#include <unordered_map>

using namespace std;

unsigned int GetHash(std::string str) {
	unsigned int hash = 0;
	// "AL"
	for (char c : str) {
		hash = hash * 31 + (int)c;
	}
	return hash;
}

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
	vec[0] = 5;
	cout << vec.size() << endl;
	cout << vec.capacity() << endl;

	stack <int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.pop();
	cout << s.top() << endl;


	//list
	list<int> lst = { 1, 2, 3, 4, 5 };
	//vector<int> lst = { 1, 2, 3, 4, 5 };
	lst.push_back(6);
	lst.insert(lst.begin(), 0);

	for (auto iter = lst.begin(); iter != lst.end(); iter++) {
		cout << *iter << endl;
	}

	auto iter = lst.begin();
	//list<int>::iterator iter = lst.begin();

	cout << *iter << endl;
	iter++;
	cout << *iter << endl;

	//map (ordered map)
	map<string, int>m;
	m["Alex"] = 34;
	m["Chris"] = 2;
	m["The forbidden name"] = 69;

	cout << m["Alex"] << endl;

	for (auto iter = m.begin(); iter != m.end(); iter++) {
		cout << iter->first << " " << iter->second << endl;
	}

	//unordered map
	unordered_map<string, string> erm;
	erm["Mococo"] = "BAU BAU";
	erm["oxymoron"] = "i don't remember, im just a silly little guy :p";
	cout << erm["oxymoron"] << endl;

	string name = "The Alpha Wolf";//The alpha wolf was too powerful and gave me a negative number
	int hash = GetHash(name);
	cout << hash << endl;

	int data[10];
	data[hash % 10] = 54166;
	//bunch of stuff
	hash = GetHash("The Alpha Wolf");
	cout << data[hash % 10] << endl;
	
	//cout << &i << endl;
	//cout <<  (void*)(&arr[0])  << endl;
	//cout <<  (void*)(&arr[1])  << endl;

	//cout << "OH NOOO ITS THE HAMMER" << endl;

	return 0;
}
