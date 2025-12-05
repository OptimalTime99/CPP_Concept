// 전위 증가 연산 (++a) vs 후위 증가 연산 (a++) 기본 예제
#include <iostream>
#include "007_PrePostIncrement.h"

using namespace std;

void PrePostIncrement() {
    int a = 5;
    int b = a++;  // 후위 증가: b에 먼저 a를 대입한 후 a 증가
    int c = ++a;  // 전위 증가: a를 먼저 증가시킨 후 c에 대입

    cout << "후위 증가 (b = a++):" << endl;
    cout << "b = " << b << ", a = " << a << endl; // b = 5, a = 7

    cout << "전위 증가 (c = ++a):" << endl;
    cout << "c = " << c << ", a = " << a << endl; // c = 7, a = 7
}

/*
출력 예시:
후위 증가 (b = a++):
b = 5, a = 6
전위 증가 (c = ++a):
c = 7, a = 7
*/
