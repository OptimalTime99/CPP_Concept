#include <iostream>
using namespace std;

// 배열 이름을 변경할 수 없는 이유를 보여주는 예제
void ArrayNameImmutability() {
    int arr[3] = { 1, 2, 3 };
    int* ptr = arr;  // 정상: 포인터 변수에 배열의 시작 주소 저장

    // arr 자체를 변경하려고 시도 (컴파일 오류 발생)
    // arr = ptr + 1; // 배열 이름은 주소 상수를 저장하므로 변경 불가!

    cout << "배열 시작 주소: " << arr << endl;
    cout << "포인터 값: " << ptr << endl;
}

/*
컴파일 오류 메시지 예시:
error: assignment of read-only variable 'arr'
*/
