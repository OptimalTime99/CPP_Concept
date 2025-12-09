#include <iostream>
#include <string>
#include "014_NameFormatConversion.h"
using namespace std;

/**
 * @brief 이름과 성을 입력받아 "성 이름" 형식으로 변환하는 함수
 * @param firstName 이름
 * @param lastName 성
 * @return string 변환된 이름
 */
string formatName(string firstName, string lastName) {
    return lastName + " " + firstName; // 문자열 결합
}

void NameFormatConversion() {
    string firstName = "철수";
    string lastName = "김";
    cout << "이름 형식 변환: " << formatName(firstName, lastName) << endl;
}
