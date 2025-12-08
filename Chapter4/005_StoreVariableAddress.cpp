#include <iostream>
using namespace std;

void StoreVariableAddress() {
    int a = 10;
    int* p = &a; // 변수 a의 주소를 포인터 p에 저장

    cout << "변수 a의 값: " << a << endl;
    cout << "변수 a의 주소: " << &a << endl;
    cout << "포인터 p의 값(저장된 주소): " << p << endl;
}

/*
출력 결과:
변수 a의 값: 10
변수 a의 주소: 0x61ff08 (주소는 실행할 때마다 다를 수 있음)
포인터 p의 값(저장된 주소): 0x61ff08
*/
