#include <iostream>
#include <string>

using namespace std;

class Lion
{
public:
	Lion(string word) :m_word(word) {}
	void bark() { cout << "Lion" << " " << m_word << endl; }
private:
	string m_word;
};

class Wolf
{
public:
	Wolf(string word) :m_word(word) {}
	void bark() { cout << "Wolf" << " " << m_word << endl; }

private:
	string m_word;
};

class Dog
{
public:
	Dog(string word) :m_word(word) {}
	void bark() { cout << "Dog" << " " << m_word << endl; }

private:
	string m_word;
};

void print(Lion lion)
{
	lion.bark();
}

void print(Wolf wolf)
{
	wolf.bark();
}

void print(Dog dog)
{
	dog.bark();
}


int NoPolymorphism()
{
	Lion lion("ahaaaaaa!");
	Wolf wolf("ohhhhh");
	Dog dog("oooooooooooooops");

	print(lion);
	print(wolf);
	print(dog);

	return 0;
}

/*
다형성을 적용하지 않으면 같은 기능을 수행하는 함수를 여러 개 만들 수 밖에 없다.
다형성은 "함수 호출 방식은 하나, 동작 구현은 여러 개"를 지원하기 위한 객체지향 핵심 장치이다.

*/