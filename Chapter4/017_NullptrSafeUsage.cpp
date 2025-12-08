#include <iostream>
using namespace std;

void NullptrSafeUsage() {
    int* p = nullptr; // 포인터를 안전하게 초기화

    if (p == nullptr) {
        cout << "포인터가 아직 어떤 변수도 가리키지 않습니다." << endl;
    }
}

/*
출력 결과:
포인터가 아직 어떤 변수도 가리키지 않습니다.
*/
