#include <iostream>
using namespace std;

void Print5To1() {
    for (int i = 5; i >= 1; i--) { // 초기화: i = 5
        // 종료 조건: i >= 1
        // 사후 동작: i--
        cout << i << " "; // 실제 동작: i를 출력
    }
    cout << endl; // 줄 바꿈
    // 출력값: 5 4 3 2 1
}
