#include <iostream>
using namespace std;

// 포인터 배열과 배열 포인터의 차이점 확인
void PointerArrayVsArrayPointer() {
    int x = 1, y = 2, z = 3;
    int* ptrArr[3] = { &x, &y, &z }; // 포인터 배열 (각 원소가 int* 타입)

    int arr[3] = { 10, 20, 30 };
    int (*ptr)[3] = &arr; // 배열 포인터 (배열 전체를 가리킴)

    // 포인터 배열을 통한 접근
    cout << "*ptrArr[0]: " << *ptrArr[0] << endl; // 1
    cout << "*ptrArr[1]: " << *ptrArr[1] << endl; // 2
    cout << "*ptrArr[2]: " << *ptrArr[2] << endl; // 3

    // 배열 포인터를 통한 접근
    cout << "(*ptr)[0]: " << (*ptr)[0] << endl; // 10
    cout << "(*ptr)[1]: " << (*ptr)[1] << endl; // 20
    cout << "(*ptr)[2]: " << (*ptr)[2] << endl; // 30
}

/*
출력 결과:
*ptrArr[0]: 1
*ptrArr[1]: 2
*ptrArr[2]: 3
(*ptr)[0]: 10
(*ptr)[1]: 20
(*ptr)[2]: 30
*/
