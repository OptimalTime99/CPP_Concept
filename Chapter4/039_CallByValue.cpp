#include <iostream>

using namespace std;

void changeValue(int x)
{
	x = 999;
}

void CallByValue() {
	int num = 10;
	cout << "Before changeValue, num = " << num << endl;

	changeValue(num);

	cout << "After changeValue, num = " << num << endl;
}