#include <iostream>
using namespace std;

void changeValue(int* ptr)
{
	*ptr = 999;
}

void CallByPointer() {
	int num = 10;
	cout << "Before changeValue, num = " << num << endl;

	changeValue(&num);

	cout << "After changeValue, num = " << num << " (¿øº» º¯°æµÊ)"  << endl;
}