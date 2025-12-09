#include <iostream>
using namespace std;

class Person6 {
public:
    string name;
    int age;

    void temp() {}
    Person6(string n, int a) {}
};

void WrongCallDefaultParameterError() {
    Person6 p("a", 30);
    //Person6 p2;

    p.temp();
    //p2.temp();
}