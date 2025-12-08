#include <iostream>
using namespace std;

void PointerAccess_Array() {
    int arr[3] = { 10, 20, 30 };
    int* p = arr; // 배열의 시작 주소를 포인터에 저장

    cout << "p가 가리키는 값: " << *p << endl;
    cout << "p+1이 가리키는 값: " << *(p + 1) << endl;
    cout << "p+2이 가리키는 값: " << *(p + 2) << endl;
}

/*
출력 결과:
p가 가리키는 값: 10
p+1이 가리키는 값: 20
p+2이 가리키는 값: 30
*/
