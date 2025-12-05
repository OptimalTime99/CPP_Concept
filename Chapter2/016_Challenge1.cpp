#include <iostream>
using namespace std;

float calculate(int a, int b, int mode) {
	switch (mode) {
		case 1: return a + b;
		case 2: return a - b;
		case 3: return a * b;
		case 4: return static_cast<float>(a) / b;
		default: return 0.0;
	}
}

int main() {
	cout << "»çÄ¢ ¿¬»ê ¸ðµå¸¦ ¼³Á¤ÇØÁÖ¼¼¿ä.\n";
	cout << "1) µ¡¼À\n2) »¬¼À\n3) °ö¼À\n4) ³ª´°¼À\n";

	int num1, num2, mode;
	float result = 0.0;
	cin >> mode;

	cout << "µÎ ¼ö¸¦ ÀÔ·ÂÇØÁÖ¼¼¿ä: ";
	cin >> num1 >> num2;

	result = calculate(num1, num2, mode);

	cout << "°á°ú: " << result;

	return 0;
}

