// 배터리 관리 클래스 생성
#include <iostream>
using namespace std;

class Battery {
private:
	int charge;

public:
	// 생성자: 초기 잔량 설정 (기본값 100)
	Battery(int initialCharge = 100) : charge(initialCharge) {
		if (charge < 0) charge = 0;
		else if (charge > 100) charge = 100;
	
	};

	// 현재 잔량 조회
	int getCharge() const {
		return charge;
	};

	// 배터리 사용: 잔량 5% 감소
	void useBattery() {
		if (charge >= 5) {
			charge -= 5;
		}
		else {
			charge = 0;
		}
		cout << "Battery used. Current charge: " << charge << "%\n";
		
	}

	// 배터리 충전: 잔량 7% 증가
	void chargeBattery() {
		if (charge <= 93) {
			charge += 7;
		}
		else {
			charge = 100;
		}
		std::cout << "Battery charged. Current charge: " << charge << "%\n";
	}
};


int Challenge1() {
	// 배터리 객체 생성 (초기 잔량 100)
	Battery battery;

	std::cout << "Initial charge: " << battery.getCharge() << "%\n";

	// 배터리 사용 및 충전 테스트
	battery.useBattery(); // 잔량 95%
	battery.useBattery(); // 잔량 90%
	battery.chargeBattery(); // 잔량 97%
	battery.useBattery(); // 잔량 92%

	return 0;
}