#include <iostream>
#include "004_VariableOperations.h"
using namespace std;

void VariableOperations() {
    // 변수 선언 및 초기화
    int a = 10, b = 5;
    float x = 15.5, y = 4.2;

    // 산술 연산
    cout << "산술 연산:" << endl;
    cout << "a + b = " << a + b << endl; // 덧셈
    cout << "a - b = " << a - b << endl; // 뺄셈
    cout << "a * b = " << a * b << endl; // 곱셈
    cout << "a / b = " << a / b << endl; // 나눗셈
    cout << "a % b = " << a % b << endl; // 나머지

    // 대입 연산
    cout << "\n대입 연산:" << endl;
    a += 3;  // a = a + 3
    cout << "a += 3 -> a = " << a << endl;
    a -= 2;  // a = a - 2
    cout << "a -= 2 -> a = " << a << endl;
    a *= 2;  // a = a * 2
    cout << "a *= 2 -> a = " << a << endl;
    a /= 2;  // a = a / 2
    cout << "a /= 2 -> a = " << a << endl;

    // 관계 연산
    cout << "\n관계 연산:" << endl;
    cout << "a == b: " << (a == b) << endl; // 같음
    cout << "a != b: " << (a != b) << endl; // 다름
    cout << "a > b: " << (a > b) << endl;   // 큼
    cout << "a < b: " << (a < b) << endl;   // 작음
    cout << "a >= b: " << (a >= b) << endl; // 크거나 같음
    cout << "a <= b: " << (a <= b) << endl; // 작거나 같음
}
