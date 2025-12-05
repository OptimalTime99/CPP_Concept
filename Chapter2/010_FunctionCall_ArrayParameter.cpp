#include <iostream>
using namespace std;

// 함수: 포인터를 사용한 값 변경
void modeifyArr(char* ptr) {
    ptr[0] = 'X';  // 포인터가 가리키는 변수의 값을 변경
}

void FunctionCall_ArrayParameter() {
    char str[4] = { 'A', 'B', 'C', 'D' };
    modeifyArr(str); // num의 주소 전달

    cout << "포인터 전달 후 str[0] = " << str[0] << endl;
    // 출력: 포인터 전달 후 str[0] = X
}