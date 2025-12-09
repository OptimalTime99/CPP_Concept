//#include <iostream>
//using namespace std;
//
//// 기본 클래스: Animal
//class Animal {
//public:
//    // 가상 함수: 자식 클래스에서 재정의 가능
//    virtual void makeSound() {
//        cout << "Animal makes a sound." << endl;
//    }
//};
//
//// 파생 클래스: Dog
//class Dog : public Animal {
//public:
//    void makeSound() {
//        cout << "Dog barks: Woof! Woof!" << endl;
//    }
//};
//
//// 파생 클래스: Cat
//class Cat : public Animal {
//public:
//    void makeSound() {
//        cout << "Cat meows: Meow! Meow!" << endl;
//    }
//};
//
//// 파생 클래스: Me
//class Me : public Animal {
//public:
//};
//
//int Polymorphism3() {
//    // Animal 타입 포인터로 다양한 객체를 가리킴
//    Animal* myAnimal;
//    Dog myDog;
//    Cat myCat;
//	Me myMe;
//
//    // Dog 객체 가리키기
//    myAnimal = &myDog;
//    myAnimal->makeSound();  // Dog의 makeSound() 호출
//
//    // Cat 객체 가리키기
//    myAnimal = &myCat;
//    myAnimal->makeSound();  // Cat의 makeSound() 호출
//
//	// Me 객체 가리키기
//    myAnimal = &myMe;
//	myAnimal->makeSound();  // Animal의 makeSound() 호출
//
//
//    return 0;
//}

/*
기본 클래스의 순수 가상 함수는 파생 클래스에서 재정의해서 사용할 수 있다. 단, 재정의하지 않으면 해당 파생 클래스도 추상 클래스가 되어 인스턴스를 생성할 수 없다.
virtual 키워드가 있고 구현이 있는 함수는 순수 가상 함수가 아닌 가상 함수이다. 따라서 파생 클래스에서의 재정의는 선택 사항이며, 재정의하지 않으면 기본 클래스의 구현이 사용된다.

*/