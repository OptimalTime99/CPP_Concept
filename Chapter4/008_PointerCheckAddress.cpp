#include <iostream>
using namespace std;

void PointerCheckAddress() {
    int x = 3;
    char y = 'A';

    int* ptr1 = &x;
    char* ptr2 = &y;

    cout << "x의 주소: " << &x << ", ptr1: " << ptr1 << endl;
    cout << "y의 주소: " << (void*)&y << ", ptr2: " << (void*)ptr2 << endl;
}

/*
출력 결과 (주소는 실행할 때마다 다름):
x의 주소: 0x61ff00, ptr1: 0x61ff00
y의 주소: 0x61ff04, ptr2: 0x61ff04
*/
