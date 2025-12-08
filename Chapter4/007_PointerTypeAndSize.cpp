#include <iostream>
using namespace std;

void PointerTypeAndSize() {
    int x = 3;
    char y = 'A';

    int* ptr1 = &x;  // 정수형 변수 x의 주소 저장
    char* ptr2 = &y; // 문자형 변수 y의 주소 저장

    cout << "ptr1이 가리키는 값: " << *ptr1 << endl;
    cout << "ptr2가 가리키는 값: " << *ptr2 << endl;
}

/*
출력 결과:
ptr1이 가리키는 값: 3
ptr2가 가리키는 값: A
*/
