#include <iostream>

using namespace std;

struct Stats
{
	int HP;
	int MP;
};

// Call by Value: 
// IncreaseHP_Value 함수의 매개변수인 Stat 구조체 값 복사.
// 원본에 영향 없음.
void IncreaseHP_Value(Stats Stat)
{
	Stat.HP += 10;
}

// Call by Pointer:
// IncreaseHP_Ptr 함수의 매개변수인 Stat 구조체의 주소 복사하여 직접 제어.
// 원본에 영향 있음.
void IncreaseHP_Ptr(Stats* Stat)
{
	(*Stat).HP += 20;
}

//Call by Ref:
// IncreaseHP_Ref 함수의 매개변수인 Stat 구조체에 대한 레퍼런스 전달.
// 원본에 영향 있음.
void IncreaseHP_Ref(Stats& Stat)
{
	Stat.HP += 30;
}

void Challenge3()
{
	Stats stat{};
	stat.HP = 10;
	stat.MP = 0;

	IncreaseHP_Value(stat);
	cout << "Value - HP: %d\n" << stat.HP << endl;

	IncreaseHP_Ptr(&stat);
	cout << "Ptr - HP: %d\n" << stat.HP << endl;

	IncreaseHP_Ref(stat);
	cout << "Stat - HP: %d\n" << stat.HP << endl;
}