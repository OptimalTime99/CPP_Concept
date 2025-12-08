#include <iostream>
using namespace std;

// 배열의 선언, 초기화 및 인덱스를 통한 접근 예제
void ArrayBasics_IndexAccess() {
    int arr[5] = { 10, 20, 30, 40, 50 }; // 크기가 5인 배열 선언 및 초기화

    // 배열 요소 접근 (인덱스를 이용한 접근)
    cout << "arr[0]: " << arr[0] << endl; // 10
    cout << "arr[2]: " << arr[2] << endl; // 30
    cout << "arr[4]: " << arr[4] << endl; // 50

    // 배열의 시작 주소 확인
    cout << "배열의 시작 주소: " << arr << endl;
    cout << "첫 번째 요소의 주소: " << &arr[0] << endl;
}

/*
출력 결과 예시:
arr[0]: 10
arr[2]: 30
arr[4]: 50
배열의 시작 주소: 0x... (메모리 주소)
첫 번째 요소의 주소: 0x... (메모리 주소)
*/
