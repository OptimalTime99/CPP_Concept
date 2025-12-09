#include <iostream>
using namespace std;

class Person1 {
public:
    string name;
    int age;

    // 기본 생성자
    Person1() {
        name = "Unknown";
        age = 0;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

void DefaultConstructor() {
    Person1 p; // 기본 생성자 호출
    p.display();
}