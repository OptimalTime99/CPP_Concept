#include <iostream>
#include "008_FunctionCall_ValueParameter.h"
using namespace std;

// 함수: 값 전달 (Call by Value)
void modifyValue(int x) {
    x = 100;  // 함수 내부에서 값 변경
}

void FunctionCall_ValueParameter() {
    int num = 50;
    modifyValue(num); // 값 전달 (복사됨)

    cout << "값 전달 후 num: " << num << endl;
    // 출력: 값 전달 후 num: 50
}
