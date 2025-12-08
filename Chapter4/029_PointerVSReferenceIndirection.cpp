#include <iostream>
using namespace std;

// 포인터와 레퍼런스의 간접 참조 문법 비교
void PointerVSReferenceIndirection() {
    int x = 5;
    int* ptr = &x;  // 포인터 선언
    int& ref = x;   // 레퍼런스 선언

    cout << "포인터 접근 방법:" << endl;
    cout << "x: " << x << endl;       // 5
    cout << "*ptr: " << *ptr << endl; // 5 (포인터를 통한 간접 참조)
    cout << "ptr: " << ptr << endl;   // x의 주소값

    cout << "레퍼런스 접근 방법:" << endl;
    cout << "ref: " << ref << endl;   // 5 (레퍼런스는 그냥 변수처럼 사용 가능)

    *ptr = 10; // 포인터를 사용하여 값 변경
    cout << "포인터로 변경 후 x: " << x << endl; // 10

    ref = 20; // 레퍼런스로 값 변경
    cout << "레퍼런스로 변경 후 x: " << x << endl; // 20
}

/*
출력 결과:
포인터 접근 방법:
x: 5
*ptr: 5
ptr: 0x... (메모리 주소)
레퍼런스 접근 방법:
ref: 5
포인터로 변경 후 x: 10
레퍼런스로 변경 후 x: 20
*/
