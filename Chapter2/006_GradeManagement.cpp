#include <iostream>

using namespace std;

void GradeManagement() {
	int student[5];
	int tot = 0, avg = 0;

	for (int i = 0; i < 5; i++) {
		cout << i + 1 << "번째 학생의 점수를 입력하세요: ";
		cin >> student[i];
	}

	for (int i = 0; i < 5; i++) {
		tot += student[i];
	}

	avg = tot / 5;

	cout << "총점: " << tot << endl;
	cout << "평균: " << avg << endl;
}