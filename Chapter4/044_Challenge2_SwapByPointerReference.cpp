//#include <iostream>
//
//// 포인터가 가리키는 값의 교환
//// pA 포인터가 가리키는 값: a
//// pB 포인터가 가리키는 값: b
//void SwapByPointer(int* pA, int* pB) {
//	int temp = *pA;
//	*pA = *pB;
//	*pB = temp;
//}
//
//// 레퍼런스는 별명이므로 변수 그자체를 가리키는 것과 같다.
//void SwapByReference(int& refA, int& refB) {
//	int temp = refA; // temp = a;
//	refA = refB; // a = b;
//	refB = temp; // b = temp;
//
//}
//
//
//int main() {
//	int a = 1, b = 2, c = 3, d = 4;
//
//	SwapByPointer(&a, &b);
//
//	std::cout << "SwapByPointer(a: " << a << " b: " << b << ")" << std::endl; // SwapByPointer(a: 2 b: 1)
//
//	SwapByReference(c, d);
//
//	std::cout << "SwapByReference(c: " << c << " d: " << d << ")" << std::endl; // SwapByReference(c: 4 d: 3)
//
//	return 0;
//}