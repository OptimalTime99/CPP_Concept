#include <iostream>
#include <string>

using namespace std;

class Vehicle {
protected:
    string color;
    int speed;

public:
    // 3-2단계 멤버 초기화: color와 speed는 멤버 초기화 리스트에 의해 생성과 동시에 각각 "Yellow"와 30으로 초기화된다.
	// 5단계 기본 클래스 생성자 본문 실행: 생성자 본문이 실행되지만, 비어 있으므로 아무 작업도 수행하지 않는다.
    Vehicle(string c, int s) : color(c), speed(s) {}

    void move() {
        cout << "The vehicle is moving at " << speed << " km/h." << endl;
    }

    void setColor(string c) {
        color = c;
    }

    string getColor() {
        return color;
    }
};

// 파생 클래스 1: 자전거
class Bicycle : public Vehicle {
private:
    bool hasBasket;

public:
	// 3-1단계 먼저 기본 클래스 초기화: Vehicle(c, s) 부분이 실행되어 Vehicle 클래스의 멤버들이 초기화된다.
	// 4단계 파생 클래스 멤버 초기화: hasBasket는 멤버 초기화 리스트에 의해 생성과 동시에 true로 초기화된다.
	// 6단계 파생 클래스 생성자 본문 실행: 생성자 본문이 실행되지만, 비어 있으므로 아무 작업도 수행하지 않는다.
    Bicycle(string c, int s, bool basket) : Vehicle(c, s), hasBasket(basket) {}

    void ringBell() {
        cout << "Bicycle bell: Ring Ring!" << endl;
    }

};

// 파생 클래스 2: 트럭
class Truck : public Vehicle {
private:
    int cargoCapacity;

public:
    Truck(string c, int s, int capacity)
        : Vehicle(c, s), cargoCapacity(capacity) {
    }

    void loadCargo() {
        cout << "Truck loading cargo. Capacity: " << cargoCapacity << " tons."
            << endl;
    }
};

int Inheritance()
{

    // 1단계 매개변수 초기화: 전달된 인자 "Yellow", 30, true 가 Bicycle 생성자의 매개변수(c, s, basket)에 초기화된다.
	// 2단계 객체 생성 시작: 클래스 선언부를 보고 Bicycle 객체를 담을 메모리가 할당한다. 그 안에는 Vehicle의 color, speed 멤버 공간, Bicycle의 hasBasket 멤버 공간이 포함된다.
	// 7단계 객체 생성 완료: Bicycle 객체가 완전히 생성되어 b 변수에 바인딩된다.
    Bicycle b("Yellow", 30, true);
    Truck t("Blue", 40, 95);

    b.ringBell();
    t.loadCargo();


	cout << b.getColor() << " bicycle is moving." << endl;

    return 0;
}

/*
Allocation (메모리 확보): 객체 크기만큼 공간을 OS/런타임에서 확보한다.
Construction (객체 생성): 확보된 공간 안에서 객체를 usable 상태로 만든다.
Initialization (초기화): 생성된 객체에 초깃값을 설정한다.
Assignment(할당): 이미 존재하는 객체에 값을 덮어쓴다.

Usage (사용): 객체가 프로그램에서 사용된다.
Deallocation (메모리 해제): 객체가 더 이상 필요 없을 때 메모리를 OS/런타임에 반환한다.
Destruction (객체 소멸): 소멸자가 호출되어 객체가 정리된다.

상속 여부와 무관하게 멤버 초기화 리스트는 생성과 동시에 값을 설정하고, 생성자 본문의 대입은 이미 생성된 멤버에 값을 덮어쓴다.
생성자 본문의 대입은 불필요한 메모리 연산도 발생해 성능 저하를 유발할 수 있다.
따라서 객체 타입 멤버는 반드시 초기화 리스트를 쓰는 것이 의미적으로도 맞고 성능적으로도 더 좋다.
*/