#include <iostream>
using namespace std;

// 포인터 배열: 포인터를 원소로 갖는 배열
void PointerArray() {
    int a = 10, b = 20, c = 30;
    int* ptrArr[3] = { &a, &b, &c }; // 포인터 배열 선언 및 초기화

    // 포인터 배열을 이용하여 값 출력
    cout << "*ptrArr[0]: " << *ptrArr[0] << endl; // 10
    cout << "*ptrArr[1]: " << *ptrArr[1] << endl; // 20
    cout << "*ptrArr[2]: " << *ptrArr[2] << endl; // 30
}

/*
출력 결과:
*ptrArr[0]: 10
*ptrArr[1]: 20
*ptrArr[2]: 30
*/
