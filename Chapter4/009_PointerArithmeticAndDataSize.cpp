#include <iostream>
using namespace std;

void PointerArithmeticAndDataSize() {
    int x = 3;
    char y = 'A';

    int* ptr1 = &x;
    char* ptr2 = &y;

    cout << "ptr1: " << ptr1 << ", ptr1 + 1: " << ptr1 + 1 << endl;
    cout << "ptr2: " << ptr2 << ", ptr2 + 1: " << ptr2 + 1 << endl;
}

/*
출력 결과 (주소는 실행할 때마다 다름):
ptr1: 0x61ff00, ptr1 + 1: 0x61ff04  (int는 4바이트)
ptr2: 0x61ff04, ptr2 + 1: 0x61ff05  (char는 1바이트)
*/
