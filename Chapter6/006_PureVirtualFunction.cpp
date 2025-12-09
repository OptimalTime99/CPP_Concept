#include <iostream>
using namespace std;

// 기본 클래스: Animal
class Animal {
public:
    // 순수 가상 함수: 자식 클래스에서 재정의 필수
    virtual void makeSound() = 0;
};

// 파생 클래스: Dog
class Dog : public Animal {
public:
    void makeSound() {
        cout << "Dog barks: Woof! Woof!" << endl;
    }
};

// 파생 클래스: Cat
class Cat : public Animal {
public:
    void makeSound() {
        cout << "Cat meows: Meow! Meow!" << endl;
    }
};

// 파생 클래스: Me
class Me : public Animal {
public:

};

int PureVirtualFunction() {
    // Animal 타입 포인터로 다양한 객체를 가리킴
    Animal* myAnimal;
    Dog myDog;
    Cat myCat;


    // Dog 객체 가리키기
    myAnimal = &myDog;
    myAnimal->makeSound();  // Dog의 makeSound() 호출

    // Cat 객체 가리키기
    myAnimal = &myCat;
    myAnimal->makeSound();  // Cat의 makeSound() 호출

	// Me 객체는 Animal의 순수 가상 함수를 재정의하지 않았으므로 인스턴스를 생성할 수 없다.
    // Me myMe;

    return 0;
}
