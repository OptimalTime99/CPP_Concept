#include <iostream>
using namespace std;

void PointerAndVariableRelation() {
    int x = 3;    // 정수형 변수 x 선언
    int* ptr = &x; // 포인터 ptr에 x의 주소 저장

    cout << "x의 값: " << x << endl;
    cout << "x의 주소: " << &x << endl;
    cout << "ptr의 값(저장된 주소): " << ptr << endl;
    cout << "*ptr이 가리키는 값: " << *ptr << endl;
}

/*
출력 결과:
x의 값: 3
x의 주소: 0x61ff00 (주소는 실행할 때마다 다름)
ptr의 값(저장된 주소): 0x61ff00
*ptr이 가리키는 값: 3
*/
