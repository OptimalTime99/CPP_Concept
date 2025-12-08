#include <iostream>
using namespace std;

void MultiplesOf3() {
    for (int i = 1; i <= 20; i++) { // 초기화: i = 1
        // 종료 조건: i <= 20
        // 사후 동작: i++
        if (i % 3 == 0) { // 조건: i가 3의 배수인지 확인
            cout << i << " "; // 3의 배수일 때 i를 출력
        }
    }
    cout << endl; // 줄 바꿈
    // 출력값: 3 6 9 12 15 18
}
