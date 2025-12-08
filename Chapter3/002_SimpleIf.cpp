#include <iostream>
using namespace std;

void SimpleIf() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    // if 문: 조건이 true일 때만 실행됩니다.
    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    }

    // 조건이 false인 경우 아무것도 실행되지 않습니다.
    cout << "Program finished." << endl;
}
