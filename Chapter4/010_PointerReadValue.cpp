#include <iostream>
using namespace std;

void PointerReadValue() {
    int a = 10;
    int* p = &a; // 변수 a의 주소를 저장

    cout << "포인터 p가 가리키는 값: " << *p << endl; // p가 가리키는 변수 a의 값 출력
}

/*
출력 결과:
포인터 p가 가리키는 값: 10
*/
