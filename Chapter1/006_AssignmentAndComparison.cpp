// 대입 연산자(=)와 비교 연산자(==) 차이 예제
#include <iostream>
#include "006_AssignmentAndComparison.h"

using namespace std;

void AssignmentAndComparison() {
    int a = 5;   // 변수 a에 5를 대입
    int b = 5;   // 변수 b에 5를 대입

    // 대입 연산 (값을 변경)
    a = 10; // a의 값을 10으로 변경

    // 비교 연산 (참/거짓 결과 반환)
    bool isEqual = (a == b); // a와 b가 같은지 비교

    // 출력
    cout << "a = " << a << ", b = " << b << endl;
    cout << "a == b: " << isEqual << endl; // 비교 결과 출력

}

/*
출력 예시:
a = 10, b = 5
a == b: 0
*/
