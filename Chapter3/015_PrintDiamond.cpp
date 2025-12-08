#include <iostream>

using namespace std;

void PrintDiamond() {
	int num, height;
	cout << "입력:\n";
	cin >> num;
	height = num * 2 - 1;

	cout << "출력:\n";
	for (int i = 0; i < height; i++) {
		int spaces = abs(num - 1 - i);
		int stars = height - 2 * spaces;
		for (int j = 0; j < spaces; j++) {
			cout << " ";
		}
		for (int j = 0; j < stars; j++) {
			cout << "*";
		}
		cout << "\n";
	}
}
/*
#include <iostream>
using namespace std;

int main() {
	int n;

	// 사용자로부터 입력 받기
	cout << "다이아몬드의 크기를 입력하세요 (양의 정수): ";
	cin >> n;

	// 입력값 검증
	if (n <= 0) {
		cout << "잘못된 입력입니다. 양의 정수를 입력하세요." << endl;
		return 1;
	}

	// 다이아몬드 상단 출력
	for (int i = 1; i <= n; ++i) {
		// 공백 출력
		for (int j = 1; j <= n - i; ++j) {
			cout << " ";
		}
		// 별 출력
		for (int k = 1; k <= 2 * i - 1; ++k) {
			cout << "*";
		}
		cout << endl; // 줄 바꿈
	}

	// 다이아몬드 하단 출력
	for (int i = n - 1; i >= 1; --i) {
		// 공백 출력
		for (int j = 1; j <= n - i; ++j) {
			cout << " ";
		}
		// 별 출력
		for (int k = 1; k <= 2 * i - 1; ++k) {
			cout << "*";
		}
		cout << endl; // 줄 바꿈
	}

	return 0;
}


*/
/*
#include <iostream>

using namespace std;

void PrintDiamond() {
	int num, height;
	cout << "입력:\n";
	cin >> num;
	height = num * 2 - 1;

	cout << "출력:\n";
	for (int i = 0; i < height; ++i) {
		if (height / 2 >= i) {

			for (int j = num - i - 1; j > 0; --j) {
				cout << " ";
			}

			for (int j = i * 2 + 1; j > 0; --j) {
				cout << "*";
			}

			for (int j = num - i + 1; j > 0; --j) {
				cout << " ";
			}
		}
		else {
			for (int j = 0; j < i - num + 1; ++j) {
				cout << " ";
			}
			for (int j = (height - i - 1) * 2 + 1; j > 0; --j) {
				cout << "*";
			}
			for (int j = 0; j < i - num + 3; ++j) {
				cout << " ";
			}
		}

		cout << "\n";
	}
}

*/