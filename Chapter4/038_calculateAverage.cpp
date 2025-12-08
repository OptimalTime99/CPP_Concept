/*
#include <cstdarg>
using namespace std;

int calculateAverage(int score, ...) {
	int total = 0;

	va_list args;
	va_start(args, score);

	for (int i = 0; i < score; ++i) {
		total += va_arg(args, int);
	}

	va_end(args);

	return static_cast<double>(total) / score;
}
*/

#include <cstdarg>

int calculateAverage(int score1, int score2, ...)
{
	// 가변 인자 목록 초기화: score2 다음부터 가변 인자 시작
    va_list scores;
    va_start(scores, score2);

	// 첫 두 점수 더하기
    int total = score1 + score2;
    int count = 2;

    while (true)
    {
		// 다음 점수 가져오기
        int next = va_arg(scores, int);

		// 음수 점수가 나오면 종료
        if (next < 0)
            break;

		// 점수 더하기
        total += next;

		// 점수 개수 증가
        count++;
    }

	// 가변 인자 목록 정리
    va_end(scores);

	// 평균 계산 및 반환
    return total / count;
}
