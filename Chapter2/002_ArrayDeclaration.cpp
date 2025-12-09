#include <iostream>
#include "002_ArrayDeclaration.h"
using namespace std;

// 배열 선언과 초기화 예제
void ArrayDeclaration() {
    // 선언과 동시에 초기화
    int arr1[3] = { 1, 2, 3 };

    // 선언 후 개별 원소 초기화
    int arr2[3];
    arr2[0] = 10;
    arr2[1] = 20;
    arr2[2] = 30;

    // 배열 출력
    cout << "arr1: " << arr1[0] << ", " << arr1[1] << ", " << arr1[2] << endl;
    cout << "arr2: " << arr2[0] << ", " << arr2[1] << ", " << arr2[2] << endl;
}

/*
출력 예시:
arr1: 1, 2, 3
arr2: 10, 20, 30
*/
