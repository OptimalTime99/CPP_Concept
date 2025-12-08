#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void GameLoop() {
    srand(time(0)); // 랜덤 시드 초기화
    int secretNumber = rand() % 100 + 1; // 1부터 100 사이의 랜덤 숫자
    int guess;

    cout << "Guess the number (1 to 100): ";
    cin >> guess; // 초기 동작: 첫 번째 추측 입력 받기

    while (guess != secretNumber) { // 종료 조건: 추측이 정답과 다를 경우 반복
        if (guess < secretNumber) {
            cout << "Too low! Try again: ";
        }
        else {
            cout << "Too high! Try again: ";
        }
        cin >> guess; // 사후 동작: 새로운 추측 입력 받기
    }

    cout << "Congratulations! You guessed the number!" << endl;
    // 출력 예시:
    // Guess the number (1 to 100): 50
    // Too low! Try again: 75
    // Too high! Try again: 60
    // Congratulations! You guessed the number!
}
