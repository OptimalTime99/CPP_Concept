#include <iostream>
using namespace std;

void IfElseIfElse() {
    int score;

    cout << "Enter your score (0-100): ";
    cin >> score;

    // if/else if/else 문: 여러 조건을 순차적으로 검사합니다.
    if (score >= 90) { // 90 이상인 경우
        cout << "Grade: A" << endl;
    }
    else if (score >= 80) { // 80 이상 90 미만인 경우
        cout << "Grade: B" << endl;
    }
    else if (score >= 70) { // 70 이상 80 미만인 경우
        cout << "Grade: C" << endl;
    }
    else if (score >= 60) { // 60 이상 70 미만인 경우
        cout << "Grade: D" << endl;
    }
    else { // 60 미만인 경우
        cout << "Grade: F" << endl;
    }

    cout << "Program finished." << endl;
}