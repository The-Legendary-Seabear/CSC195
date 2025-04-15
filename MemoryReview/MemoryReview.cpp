

#include <iostream>
using namespace std;

void square(int& i) {
	i = i * i;
}

void Double(int* i) {
	*i = *i * 2;
}

int main()
{

	int firstVal = 10;
	int& ref = firstVal;
	//cout << ref << firstVal << endl;;

	// what happened to the int variable when the reference was changed? (The value was changed for firstVal)

	//cout << ref << endl;
	ref = 3;
	cout << firstVal << endl;

	// are the addresses the same or different? (yes they are the same)

	cout << "firstVal: " << &firstVal << endl;
	cout << "ref: " << &ref << endl;

	square(firstVal);
	cout << "value of firstVal after going through square: " << firstVal << endl;

	// what is this address that the pointer is pointing to? (it is pointing to the address of firstVal)

	int* point = nullptr;
	point = &firstVal;
	cout << "point val: " << point << endl;
	cout << "Dereference: " << *point << endl;

	Double(point);
	cout << "Dereference pointer: " << * point << endl;
	cout << "variable in the reference section: " << firstVal << endl;
	//Yes the value did change

}


