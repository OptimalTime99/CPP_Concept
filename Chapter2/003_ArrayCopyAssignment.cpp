#include <iostream>
#include "003_ArrayCopyAssignment.h"
using namespace std;

// 배열의 복사 및 대입 불가능한 예제
void ArrayCopyAssignment() {
    int arr1[3] = { 1, 2, 3 };
    int arr2[3];

    // 개별 원소를 복사하는 것은 가능
    for (int i = 0; i < 3; i++) {
        arr2[i] = arr1[i];
    }

    // 배열 통째로 대입 (불가능, 주석 처리)
    // arr2 = arr1;  // 컴파일 오류 발생

    // 복사된 배열 출력
    cout << "arr2: " << arr2[0] << ", " << arr2[1] << ", " << arr2[2] << endl;
}

/*
출력 예시:
arr2: 1, 2, 3
*/
