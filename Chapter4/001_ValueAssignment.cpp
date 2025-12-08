#include <iostream>
using namespace std;

void ValueAssignment() {
    int a = 10;  // 변수 a 선언 및 초기화
    int b = a;   // 변수 b에 a의 값을 복사

    cout << "초기값 - a: " << a << ", b: " << b << endl;

    b = 20; // b의 값 변경

    cout << "변경 후 - a: " << a << ", b: " << b << endl;
}

/*
출력 결과:
초기값 - a: 10, b: 10
변경 후 - a: 10, b: 20
*/
