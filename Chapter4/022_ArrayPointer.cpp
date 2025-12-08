#include <iostream>
using namespace std;

// 배열 포인터: 배열 전체를 가리키는 포인터
void ArrayPointer() {
    int arr[3] = { 100, 200, 300 };
    int (*ptr)[3] = &arr; // 배열 포인터 선언

    // 배열 포인터를 이용하여 배열 요소 접근
    cout << "(*ptr)[0]: " << (*ptr)[0] << endl; // 100
    cout << "(*ptr)[1]: " << (*ptr)[1] << endl; // 200
    cout << "(*ptr)[2]: " << (*ptr)[2] << endl; // 300
}

/*
출력 결과:
(*ptr)[0]: 100
(*ptr)[1]: 200
(*ptr)[2]: 300
*/
