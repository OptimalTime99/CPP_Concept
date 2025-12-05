#include <iostream>
#include <string> //string 헤더를 추가
#include "003_VariableDeclaration.h"
using namespace std;

void VariableDeclaration() {
    // 정수형 변수 선언
    int age = 25;  // 초기값 25
    //int year;      // 초기값 없음

    // 실수형 변수 선언
    float pi = 3.14f;
    double largeDecimal = 12345.6789;

    // 문자형 변수 선언
    char grade = 'A';

    // 문자열 변수 (C++ 표준 라이브러리 사용)
    string name = "John";

    // 불리언 변수
    bool isStudent = true;

    cout << "Age: " << age << endl;
    //cout << "Year: " << year << " (uninitialized, may contain garbage value)" << endl;
    cout << "Pi: " << pi << endl;
    cout << "Large Decimal: " << largeDecimal << endl;
    cout << "Grade: " << grade << endl;
    cout << "Name: " << name << endl;
    cout << "Is Student: " << (isStudent ? "true" : "false") << endl;

    // 상수 선언
    const double gravity = 9.8;  // 중력 가속도
    cout << "Gravity: " << gravity << endl;
}