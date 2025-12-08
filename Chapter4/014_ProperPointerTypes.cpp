#include <iostream>
using namespace std;

void ProperPointerTypes() {
    int x = 3;
    char y = 'A';

    int* intPtr = &x; // 정수형 포인터
    char* charPtr = &y; // 문자형 포인터

    cout << "*intPtr: " << *intPtr << endl;
    cout << "*charPtr: " << *charPtr << endl;
}

/*
출력 결과:
*intPtr: 3
*charPtr: A
*/
