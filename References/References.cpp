

#include <iostream>

using namespace std;
	void swap(int* a, int* b) {
		int temp = *a;
		*a = *b;
		*b = temp;
	}

	void swap(int& a, int& b) {
		int temp = a;
		a = b;
		b = temp;
	}

int main()
{

	int i1 = 5;
	int i2 = 20;
	int* p1 = &i1;
	//p1 = nullptr;

	int& r1 = i1;
	r1 = 10;

	cout << i1 << " and " << i2 << endl;
	swap(&i1, &i2);
	cout << i1 << " and " << i2 << endl;
	swap(i1, i2);
	cout << i1 << " and " << i2 << endl;

	cout << i1 << endl;
	/*cout << &r1 << endl;
	cout << &i1 << endl;*/

	for (int i = 0; i < 1000; i++) {
		cout << *p1++ << endl;
	}
}
