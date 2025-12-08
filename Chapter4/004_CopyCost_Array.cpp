#include <iostream>
using namespace std;

void CopyCost_Array() {
    const int SIZE = 1000000; // 1,000,000개의 정수 (약 4MB)
    int arr1[SIZE];
    int arr2[SIZE];

    // 배열 복사 (매우 높은 복사 비용)
    for (int i = 0; i < SIZE; i++) {
        arr2[i] = arr1[i];
    }

    cout << "배열 복사 완료" << endl;
}
