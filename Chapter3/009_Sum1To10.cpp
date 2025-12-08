#include <iostream>
using namespace std;

void Sum1To10() {
    int sum = 0; // 합을 저장할 변수 초기화
    for (int i = 1; i <= 10; i++) { // 초기화: i = 1
        // 종료 조건: i <= 10
        // 사후 동작: i++
        sum += i; // 실제 동작: sum에 i를 더함
    }
    cout << "Sum: " << sum << endl; // 출력: 합계 출력
    // 출력값: Sum: 55
}