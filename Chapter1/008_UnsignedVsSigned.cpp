// 일반 변수(signed int)와 unsigned int의 차이 예제
#include <iostream>
#include "008_UnsignedVsSigned.h"

using namespace std;

void UnsignedVsSigned() {
    int signedVar = -10;      // 일반 int (signed), 음수 가능
    unsigned int unsignedVar = 10; // unsigned int, 음수 불가능

    cout << "signed int: " << signedVar << endl;
    cout << "unsigned int: " << unsignedVar << endl;

}

/*
출력 예시:
signed int: -10
unsigned int: 10
*/
