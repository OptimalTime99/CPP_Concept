#include <iostream>
using namespace std;

/**
 * @brief 4개의 점수를 입력받아 평균 점수를 계산하는 함수
 * @param score1 첫 번째 점수
 * @param score2 두 번째 점수
 * @param score3 세 번째 점수
 * @param score4 네 번째 점수
 * @return int 평균 점수 (소수점 제외)
 */
int calculateAverage(int score1, int score2, int score3, int score4) {
    int sum = score1 + score2 + score3 + score4;
    return sum / 4; // 정수 나눗셈으로 소수점 없이 계산
}

void CalculateAverage() {
    int score1 = 80, score2 = 90, score3 = 85, score4 = 70;
    cout << "평균 점수: " << calculateAverage(score1, score2, score3, score4) << endl;
}
