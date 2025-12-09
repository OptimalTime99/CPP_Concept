#include <iostream>
using namespace std;

class Person4 {
public:
    string name;
    int age;

    // 매개변수가 있는 생성자
    Person4(string n, int a) {
        name = n;
        age = a;
    }
};

void WrongDeliverParameterError() {
    //Person p("Tom"); // 에러: 생성자에 필요한 매개변수 부족
    // 컴파일 에러: "no matching function for call to 'Person::Person(const char [4])'"
    // 매개변수 두 개를 요구하는 생성자에 하나의 매개변수만 전달하여 매칭되지 않음
    //p.display();
}
