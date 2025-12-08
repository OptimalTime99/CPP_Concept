#include <iostream>
using namespace std;

void ArrayAssignment() {
    int arr1[3] = { 1, 2, 3 };
    int arr2[3];

    // 배열 전체를 한 번에 대입하는 것은 불가능
    // arr2 = arr1;  // 컴파일 오류 발생

    // 개별 요소 복사
    for (int i = 0; i < 3; i++) {
        arr2[i] = arr1[i];
    }

    // arr2 변경 후 확인
    arr2[0] = 100;

    cout << "arr1[0]: " << arr1[0] << ", arr2[0]: " << arr2[0] << endl;
}

/*
출력 결과:
arr1[0]: 1, arr2[0]: 100
*/
