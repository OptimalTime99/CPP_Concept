#include <iostream>
#include "002_Calculation.h"

void Calculation() {
	int num1, num2;
	std::cout << "첫 번째 숫자 : ";
	std::cin >> num1;

	std::cout << "두 번째 숫자 : ";
	std::cin >> num2;
	
	std::cout << num1 << "과 " << num2 << "의 합은 : " << num1 + num2;
}