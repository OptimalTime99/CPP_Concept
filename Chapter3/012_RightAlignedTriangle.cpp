#include <iostream>
using namespace std;

void RightAlignedTriangle() {
    int n = 5; // 삼각형의 높이
    for (int i = 1; i <= n; i++) { // 초기화: i = 1
        // 종료 조건: i <= n
        // 사후 조건: i++
        for (int j = 1; j <= n - i; j++) { // 초기화: j = 1
            // 종료 조건: j <= n - i
            // 사후 동작: j++
            cout << " "; // 실제 동작: 공백 출력
        }
        for (int j = 1; j <= i; j++) { // 초기화: j = 1
            // 종료 조건: j <= i
            // 사후 조건: j++
            cout << "*"; // 실제 동작: 별 출력
        }
        cout << endl; // 줄 바꿈
    }
    // 출력값:
    //     *
    //    **
    //   ***
    //  ****
    // *****
}
