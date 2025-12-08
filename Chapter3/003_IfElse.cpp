#include <iostream>
using namespace std;

void IfElse() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    // if/else 문: 조건이 true일 때와 false일 때 다른 작업을 수행합니다.
    if (number % 2 == 0) { // 입력값이 짝수인지 확인합니다.
        cout << "The number is even." << endl;
    }
    else { // 위 조건이 false라면 (즉, 홀수라면) 실행됩니다.
        cout << "The number is odd." << endl;
    }

    cout << "Program finished." << endl;
}