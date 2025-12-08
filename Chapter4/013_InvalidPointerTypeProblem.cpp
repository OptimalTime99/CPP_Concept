#include <iostream>
using namespace std;

void InvalidPointerTypeProblem() {
    int x = 3;
    char y = 'A';

    int* ptr = &x; // 정상적인 포인터 할당
    // ptr = &y; // 오류 발생: char형 변수를 int* 포인터에 저장 불가능
}
