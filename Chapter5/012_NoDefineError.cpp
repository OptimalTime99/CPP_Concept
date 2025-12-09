#include <iostream>
using namespace std;

class Person5 {
public:
    string name;
    int age;

    // 생성자를 선언만 하고 정의하지 않음
    //Person5(string n, int a);
};

void NoDefineError() {
    //Person5 p("Alice", 25); // 선언된 생성자의 정의가 없으므로 컴파일 에러 발생
    //cout << "Name: " << p.name << ", Age: " << p.age << endl;
}