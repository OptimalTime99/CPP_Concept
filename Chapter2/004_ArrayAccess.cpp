#include <iostream>
#include "004_ArrayAccess.h"
using namespace std;

// 배열을 선언하고 [] 연산자로 접근하는 예제
void ArrayAccess() {
    int arr[4] = { 10, 20, 30, 40 };

    // 배열 원소에 임의 접근하여 출력
    cout << "첫 번째 원소: " << arr[0] << endl;
    cout << "두 번째 원소: " << arr[1] << endl;
    cout << "세 번째 원소: " << arr[2] << endl;
    cout << "네 번째 원소: " << arr[3] << endl;

    // 범위를 벗어난 접근 (에러 발생 가능)
    // cout << arr[4] << endl;  // 정의되지 않은 동작 (UB, 오류 가능)
}

/*
출력 예시:
첫 번째 원소: 10
두 번째 원소: 20
세 번째 원소: 30
네 번째 원소: 40
*/
