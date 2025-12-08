#include <iostream>
using namespace std;

// 잘못된 레퍼런스 사용 예제
void WrongReferenceExamples() {
    int* ptr = nullptr; // 포인터는 nullptr 가능
    // int& ref = nullptr; // ❌ 오류 발생: 레퍼런스는 NULL을 가질 수 없음
}

/*
컴파일 오류 메시지 예시:
error: invalid initialization of non-const reference of type ‘int&’ from an rvalue of type ‘std::nullptr_t’
*/
