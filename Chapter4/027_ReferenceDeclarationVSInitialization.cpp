#include <iostream>
using namespace std;

// 포인터와 레퍼런스의 선언 및 초기화 차이
void ReferenceDeclarationVSInitialization() {
    int a = 10, b = 20;

    // 포인터는 선언 후 나중에 다른 변수를 가리킬 수 있음
    int* ptr = &a; // 포인터 선언 및 초기화
    ptr = &b; // 포인터가 다른 변수를 가리킬 수 있음

    // 레퍼런스는 선언과 동시에 초기화해야 함
    int& ref = a;
    // ref = &b; // ❌ 오류! 레퍼런스는 다른 변수에 재할당할 수 없음

    cout << "포인터 사용:" << endl;
    cout << "*ptr: " << *ptr << endl; // 20 (포인터가 b를 가리키고 있음)

    cout << "레퍼런스 사용:" << endl;
    cout << "ref: " << ref << endl; // 10 (a를 가리키고 있음)
}

/*
출력 결과:
포인터 사용:
*ptr: 20
레퍼런스 사용:
ref: 10
*/
