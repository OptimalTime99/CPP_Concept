#include <iostream>
#include "005_ArrayInputOutput.h"
using namespace std;

// 배열 원소를 개별적으로 입력 및 출력하는 예제 (반복문 없이)
void ArrayInputOutput() {
    int arr[3]; // 크기 3의 배열 선언

    // 각 원소에 대해 개별적으로 입력 받기
    cout << "첫 번째 정수를 입력하세요: ";
    cin >> arr[0];

    cout << "두 번째 정수를 입력하세요: ";
    cin >> arr[1];

    cout << "세 번째 정수를 입력하세요: ";
    cin >> arr[2];

    // 각 원소 개별 출력
    cout << "입력한 값: " << arr[0] << ", " << arr[1] << ", " << arr[2] << endl;
}

/*
입력 예시:
첫 번째 정수를 입력하세요: 10
두 번째 정수를 입력하세요: 20
세 번째 정수를 입력하세요: 30

출력 예시:
입력한 값: 10, 20, 30
*/
