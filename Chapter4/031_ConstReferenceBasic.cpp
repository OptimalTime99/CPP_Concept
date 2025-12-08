#include <iostream>
using namespace std;

// 상수 레퍼런스를 사용하여 변수를 보호하는 예제
void ConstReferenceBasic() {
    int x = 100;
    const int& cref = x; // x를 읽기 전용으로 참조

    cout << "cref: " << cref << endl; // 100

    // cref = 200; // ❌ 오류 발생! 상수 레퍼런스는 값을 변경할 수 없음

    x = 200; // 원본 변수 x는 변경 가능
    cout << "x 변경 후 cref: " << cref << endl; // 200
}

/*
출력 결과:
cref: 100
x 변경 후 cref: 200
*/
