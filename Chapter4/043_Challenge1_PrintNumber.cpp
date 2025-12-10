//#include <iostream>
//
//void PrintNumber(int* pNumber) {
//	for (int i = 0; i < 10; i++) 
//	{
//		std::cout << *(pNumber + i) << "\n";
//	}
//}
//
//int main() {
//	int numbers[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	PrintNumber(numbers);
//
//	return 0;
//}

#include <iostream>

void PrintNumber(int* pNumber) {
	std::cout << *pNumber << "\n";
}

int main() {
	int numbers[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int i = 0; i < 10; i++)
	{
		PrintNumber(&numbers[i]); // (== numbers + i)
	}

	return 0;
}


//#include <iostream>
//
//void PrintNumber(int* pNumber) {
//	std::cout << *pNumber << "\n";
//}
//
//int main() {
//	int numbers[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (int num : numbers)
//	{
//		PrintNumber(&num);
//	}
//
//	return 0;
//}


