#include <iostream>
using namespace std;

// 잘못된 상수 레퍼런스 사용 예제
void BadConstReferenceUsage() {
    //const int& cref; // ❌ 오류 발생! 레퍼런스는 반드시 초기화해야 함
}

/*
컴파일 오류 메시지 예시:
error: ‘cref’ declared as reference but not initialized
*/
