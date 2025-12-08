#include <iostream>
using namespace std;

// 레퍼런스를 활용하여 변수에 별명을 부여하는 예제
void BasicReference() {
    int var = 10;
    int& ref = var; // var의 레퍼런스 선언

    cout << "초기 값:" << endl;
    cout << "var: " << var << endl; // 10
    cout << "ref: " << ref << endl; // 10

    ref = 20; // ref를 변경하면 var도 변경됨

    cout << "ref 값을 변경한 후:" << endl;
    cout << "var: " << var << endl; // 20
    cout << "ref: " << ref << endl; // 20

}

/*
출력 결과:
초기 값:
var: 10
ref: 10
ref 값을 변경한 후:
var: 20
ref: 20
*/
