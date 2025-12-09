#include <iostream>
using namespace std;

class Person3 {
public:
    string name;
    int age;

    // 기본 매개변수가 있는 생성자
    Person3(string n = "DefaultName", int a = 18) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

void HaveDefaultParameter() {
    Person3 p1;              // 기본값 사용
    Person3 p2("Bob", 30);   // 값을 지정
    p1.display();
    p2.display();
}
