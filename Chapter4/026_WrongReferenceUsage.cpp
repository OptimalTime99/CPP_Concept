#include <iostream>
using namespace std;

// 잘못된 레퍼런스 선언 예제
void WrongReferenceUsage() {
    //int& ref; // 레퍼런스는 선언과 동시에 초기화해야 함
}

/*
컴파일 오류 메시지 예시:
error: 'ref' declared as reference but not initialized
*/
