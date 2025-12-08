#include <iostream>
using namespace std;

void CopyCost_Primitive() {
    int a = 10;   // 4바이트 크기의 변수
    int b = a;    // 변수 a의 값을 b에 복사 (4바이트 비용 발생)

    cout << "a: " << a << ", b: " << b << endl;

    b = 20; // b의 값만 변경

    cout << "변경 후 a: " << a << ", b: " << b << endl;
}

/*
출력 결과:
a: 10, b: 10
변경 후 a: 10, b: 20
*/
