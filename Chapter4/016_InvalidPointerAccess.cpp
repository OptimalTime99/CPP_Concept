#include <iostream>
using namespace std;

void InvalidPointerAccess() {
    int* p; // 초기화되지 않은 포인터

    // *p = 10;  // 실행 시 오류 발생 가능: 메모리 접근 오류
}
