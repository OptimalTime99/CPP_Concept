#include <iostream>
using namespace std;

class Person2 {
public:
    string name;
    int age;

    // 매개변수가 있는 생성자
    Person2(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

void HaveParameter() {
    Person2 p("Alice", 25); // 매개변수가 있는 생성자 호출
    p.display();
}
