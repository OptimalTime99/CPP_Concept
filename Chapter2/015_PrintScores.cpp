#include <iostream>
#include "015_PrintScores.h"
using namespace std;

/**
 * @brief 네 개의 점수를 받아 합계를 계산하고 출력하는 함수
 * @param score1 첫 번째 점수
 * @param score2 두 번째 점수
 * @param score3 세 번째 점수
 * @param score4 네 번째 점수
 */
void printTotalScore(int score1, int score2, int score3, int score4) {
    int total = score1 + score2 + score3 + score4; // 점수 합계 계산
    cout << "점수 합계: " << total << endl;
}

void PrintScores() {
    printTotalScore(80, 90, 85, 70); // 합계 출력
}
