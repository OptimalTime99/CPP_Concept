#include <iostream>
#include <vector>

using namespace std;

// ===== 기본 클래스: 캐릭터 =====
class Character {
public:
    // 공격이 들어왔을 때의 공통 인터페이스
    virtual void Act() = 0;   // 순수가상함수 → 반드시 자식이 구현해야 함

    virtual ~Character() = default; // 다형성에서 안전한 소멸자
};

// ===== 파생 클래스 1: 법사 =====
class Wizard : public Character {
public:
    void Act() override {
        cout << "[법사] 마법 실드로 공격을 막습니다!" << endl;
    }
};

// ===== 파생 클래스 2: 도적 =====
class Rogue : public Character {
public:
    void Act() override {
        cout << "[도적] 빠른 민첩성으로 공격을 회피합니다!" << endl;
    }
};

// ===== 파생 클래스 3: 전사 =====
class Warrior : public Character {
public:
    void Act() override {
        cout << "[전사] 강력한 반격으로 응수합니다!" << endl;
    }
};

// ===== 외부 함수: 공격 처리 =====
void HandleAttack(Character& character)
{
    cout << "적의 공격이 들어왔습니다!" << endl;
    // 여기서는 타입을 몰라도 됨. 오직 Act()만 호출.
    character.Act();
    cout << endl;
}

int Polymorphism2()
{
    // 각 직업 캐릭터를 생성
    Wizard wizard;
    Rogue rogue;
    Warrior warrior;

    // 기본 클래스 포인터로 한 배열에 모은다
    Character* party[] = { &wizard, &rogue, &warrior };

    // 파티원 전원에게 같은 방식으로 공격 처리
    for (Character* member : party) {
        HandleAttack(*member);
    }

    return 0;
}
