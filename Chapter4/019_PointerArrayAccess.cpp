#include <iostream>
using namespace std;

// 배열 이름을 포인터처럼 활용하는 예제
void PointerArrayAccess() {
    int arr[3] = { 100, 200, 300 };
    int* ptr = arr; // 배열 이름은 배열의 시작 주소를 가리킴

    cout << "*ptr: " << *ptr << " " << ptr[0] << endl;     // 100 (arr[0] 값)
    cout << "*(ptr+1): " << *(ptr + 1) << " " << ptr[1] <<  endl; // 200 (arr[1] 값)
    cout << "*(ptr+2): " << *(ptr + 2) << " " << ptr[2] << endl; // 300 (arr[2] 값)
}

/*
출력 결과:
*ptr: 100
*(ptr+1): 200
*(ptr+2): 300
*/
