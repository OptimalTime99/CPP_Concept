#include <iostream>
using namespace std;

// 포인터는 NULL을 가질 수 있지만, 레퍼런스는 반드시 변수와 연결되어야 함
void ReferenceNullptrAvailability() {
    int a = 42;
    int* ptr = nullptr; // 포인터는 nullptr이 가능
    ptr = &a; // 이후에 a를 가리키도록 설정 가능

    // int& ref; // ❌ 오류! 레퍼런스는 반드시 선언과 동시에 초기화해야 함
    int& ref = a; // 올바른 선언 방식

    cout << "포인터 사용:" << endl;
    cout << "ptr이 가리키는 값: " << *ptr << endl; // 42

    cout << "레퍼런스 사용:" << endl;
    cout << "ref: " << ref << endl; // 42
}

/*
출력 결과:
포인터 사용:
ptr이 가리키는 값: 42
레퍼런스 사용:
ref: 42
*/
