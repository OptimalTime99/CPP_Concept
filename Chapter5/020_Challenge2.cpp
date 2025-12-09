// 두 분수의 곱셈을 할 수 있는 클래스
#include <iostream>
using namespace std;

// Fraction 클래스 정의
// 분수를 표현하고 곱셈 및 단순화 기능을 제공합니다.
class Fraction {
private:
    int numerator;   // 분자
    int denominator; // 분모

    // 최대공약수를 계산하는 유클리드 호제법 구현
    // gcd 함수는 Fraction 클래스 내부에서만 사용되므로 private으로 설정
    int gcd(int a, int b) const {
        while (b != 0) {
            int temp = b; // 현재 b 값을 저장
            b = a % b;    // a를 b로 나눈 나머지를 새로운 b로 설정
            a = temp;     // 이전 b 값을 새로운 a로 설정
        }
        return a; // b가 0이 되었을 때 a가 최대공약수
    }

public:
    // 기본 생성자
    // 분자를 0, 분모를 1로 초기화합니다. (0/1은 0을 나타냄)
    Fraction() : numerator(0), denominator(1) {}

    // 매개변수가 있는 생성자
    // 사용자로부터 분자와 분모를 입력받아 초기화합니다.
    // 분모가 0일 경우 자동으로 1로 설정합니다. (분모가 0이면 정의되지 않음)
    Fraction(int num, int denom) {
        numerator = num;
        denominator = (denom != 0) ? denom : 1; // 분모가 0이면 1로 설정
    }

    // 분수를 간단한 형태로 변환하는 함수
    // 최대공약수(gcd)를 이용해 분자와 분모를 나눕니다.
    void simplify() {
        int gcdValue = gcd(numerator, denominator); // 분자와 분모의 최대공약수 계산
        numerator /= gcdValue;   // 분자를 최대공약수로 나누기
        denominator /= gcdValue; // 분모를 최대공약수로 나누기
    }

    // 두 분수를 곱하는 함수
    // 두 분수를 곱한 새로운 분수를 반환합니다.
    Fraction multiply(const Fraction& other) const {
        // 새로운 분자 = 현재 분수의 분자 * 다른 분수의 분자
        int newNumerator = numerator * other.numerator;

        // 새로운 분모 = 현재 분수의 분모 * 다른 분수의 분모
        int newDenominator = denominator * other.denominator;

        // 새로운 Fraction 객체 생성
        Fraction result(newNumerator, newDenominator);

        // 결과를 간단히 만들기
        result.simplify();

        return result;
    }

    // 분수를 출력하는 함수
    // 분자를 '/' 기호와 함께 출력합니다.
    void display() const {
        cout << numerator << "/" << denominator;
    }
};

int main() {
    // 두 분수 생성
    Fraction f1(1, 2); // 첫 번째 분수: 1/2
    Fraction f2(3, 4); // 두 번째 분수: 3/4

    // 두 분수를 곱하기
    Fraction product = f1.multiply(f2); // f1 * f2

    // 결과 출력
    cout << "곱한 결과: ";
    product.display(); // 결과 분수 출력
    cout << endl;

    return 0;
}
