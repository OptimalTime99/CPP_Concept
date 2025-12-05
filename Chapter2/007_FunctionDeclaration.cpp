#include <iostream>
using namespace std;

int Add(int a, int b) {
    return a + b; // 결과 반환
}

void PrintMessage() {
    cout << "Hello, Function!" << endl;
}

void incorrectFunction() {
    // return 42; // 오류 발생: void 함수는 값을 반환할 수 없음
}