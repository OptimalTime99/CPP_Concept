#include <iostream>
using namespace std;

void UserInputExit() {
    int number; // 사용자 입력값을 저장할 변수

    cout << "Enter numbers (negative number to stop): ";
    cin >> number; // 초기 동작: 첫 번째 입력 받기

    while (number >= 0) { // 종료 조건: 입력값이 음수가 아니면 반복
        cout << "You entered: " << number << endl; // 실제 동작: 입력값 출력
        cin >> number; // 사후 동작: 다음 입력 받기
    }

    cout << "Program terminated." << endl;
    // 출력 예시:
    // Enter numbers (negative number to stop): 5
    // You entered: 5
    // 10
    // You entered: 10
    // -1
    // Program terminated.
}
