#include <iostream>
using namespace std;

void changeValue(int& ref)
{
	ref = 999;
}

void CallByReference()
{
	int value = 100;
	cout << "Before changeValue, value = " << value << endl;

	changeValue(value);

	cout << "After changeValue, value = " << value << " (¿øº» º¯°æµÊ)" << endl;
}