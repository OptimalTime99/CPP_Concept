#include <iostream>

int main() {
	int n; // 입력값이 int의 범위를 넘으면 while문이 무한반복한다.

	while (true) {
		std::cout << "양의 정수를 입력하세요 (0 입력 시 종료): ";
		std::cin >> n;
		if (n == 0) {
			break; // n이 0 이하이면 반복문 종료
		}
		std::cout << "입력한 양의 정수: " << n << std::endl;
	}
}