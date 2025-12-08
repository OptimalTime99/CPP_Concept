#include <iostream>
using namespace std;

void PointerWriteValue() {
    int a = 10;
    int* p = &a; // a의 주소 저장

    cout << "변경 전 a: " << a << endl;

    *p = 20; // 포인터를 이용하여 값 변경

    cout << "변경 후 a: " << a << endl;
}

/*
출력 결과:
변경 전 a: 10
변경 후 a: 20
*/
