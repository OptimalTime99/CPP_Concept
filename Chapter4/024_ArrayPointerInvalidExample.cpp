#include <iostream>
using namespace std;

// 배열 포인터의 잘못된 사용 예제
void ArrayPointerInvalidExample() {
    int arr[3] = { 10, 20, 30 };
    int (*ptr)[3] = &arr; // 배열 포인터 선언

    // 배열 포인터는 단일 요소를 직접 가리킬 수 없음
    // ptr = arr; // 오류 발생: 배열의 첫 번째 요소 주소와 다름
}

/*
컴파일 오류 메시지 예시:
error: invalid conversion from 'int*' to 'int (*)[3]'
*/
