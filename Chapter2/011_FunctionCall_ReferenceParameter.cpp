#include <iostream>
#include "011_FunctionCall_ReferenceParameter.h"
using namespace std;

// 함수: 참조를 사용한 값 변경
void modifyValueByReference(int& x) {
    x = 200;  // 참조를 사용하여 원본 값 변경
}

void FunctionCall_ReferenceParameter() {
    int num = 50;
    modifyValueByReference(num); // 참조 전달

    cout << "참조 전달 후 num: " << num << endl;
    // 출력: 참조 전달 후 num: 200
}
