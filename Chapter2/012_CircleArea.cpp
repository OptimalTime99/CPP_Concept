#include <iostream>
#include "012_CircleArea.h"
using namespace std;

/**
 * @brief 반지름을 입력받아 원의 넓이를 계산하는 함수
 * @param radius 원의 반지름
 * @return double 원의 넓이
 */
double calculateCircleArea(double radius) {
    return 3.14 * radius * radius;
}

void CircleArea() {
    double radius = 5.0;
    cout << "원의 넓이: " << calculateCircleArea(radius) << endl;
}
