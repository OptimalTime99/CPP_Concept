#include <iostream>
#include <string>

using namespace std;

bool WakeUp(float currentTime) {
	return currentTime <= 8.0f ? true : false;
}

void Stretch(string& condition, int& concentration) {
	condition = "Good";
	concentration += 20;
}

void TakeAShower(string& condition, int& concentration) {
	condition = "Excellent";
	concentration += 30;
}

void GoToWork(string& condition, int& concentration, int& learning, bool isDisease) {
	if (condition == "Excellent" && concentration >= 80 && isDisease == false) {
		learning += 100;
	}
	else if (concentration >= 80) {
		learning += 60;
	}
	else if (condition == "Excellent") {
		learning += 30;
	}
	else {
		learning += 10;
	}

	condition = "Not Good";
	concentration -= 50;
}


bool Eat(string& condition, int& concentration) {
	condition = "Good";
	concentration += 30;

	return (rand() % 100 + 1) % 4 == 0 ? true : false;
}

void Exercise(string& condition, int& concentration) {
	if (condition == "Good") {
		condition = "Excellent";
		concentration += 20;
	}
	else {
		concentration -= 20;
	}

}


void TodayRoutine() {
	string condition = "Not Good"; // 컨디션 상태
	bool isDisease = false; // 식곤증 여부
	int concentration = 50; // 집중력
	int learning = 0; // 학습량
	bool isTILWritten = false; // TIL 작성 여부

	// -하루 일과-
	// 아침 8시에 일어났어요.
	// 스트레칭을 하고 샤워해요.
	// 내일배움캠프 오전 타임을 보내요.
	// 점심 식사 후 운동을 해요.
	// 내일배움캠프 오후 타임을 보내요.
	// 식곤증이 찾아왔어요.
	// 저녁 식사 후 운동을 해요.
	// TIL을 작성해요.

	if (WakeUp(8.0f)) {
		Stretch(condition, concentration);
		TakeAShower(condition, concentration);
	}

	GoToWork(condition, concentration, learning, isDisease);
	isDisease = Eat(condition, concentration);
	if (isDisease == 1) {
		concentration -= 60;
	}
	Exercise(condition, concentration);

	GoToWork(condition, concentration, learning, isDisease);
	isDisease = Eat(condition, concentration);
	if (isDisease == 1) {
		concentration -= 60;
	}
	Exercise(condition, concentration);
	GoToWork(condition, concentration, learning, isDisease);


	if (isTILWritten == false && learning >= 100) {
		isTILWritten = true;
	}
}


