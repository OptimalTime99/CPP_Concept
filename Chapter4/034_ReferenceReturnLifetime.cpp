#include <iostream>
using namespace std;

// ❌ 지역 변수 참조를 반환 (Dangling Reference)
int& DangerousReturn() {
    int local = 10;
    return local;      // ⚠️ 함수가 끝나면 local은 사라짐
}

// 🟢 전역 변수 반환 (Lifetime 문제 없음)
int globalValue = 100;
int& SafeReturnGlobal() {
    return globalValue;
}

// 🟢 static 지역 변수 반환 (Lifetime 문제 없음)
int& SafeReturnStatic() {
    static int value = 200;
    return value;
}

// ❌ 임시 값 참조 반환 (Temporary를 참조하면 위험)
const int& DangerousTemporary() {
    // return 3;     // 컴파일 가능하지만 매우 위험 (temporary lifetime)
    static int x = 3;
    return x;        // 🟢 이렇게 고치면 문제가 사라짐
}

void reference_return_lifetime() {

    cout << "\n=== Dangling Reference Test ===" << endl;
    int& r1 = DangerousReturn();   // ⚠️ undefined behavior!
    cout << r1 << endl;            // 출력 값은 예측 불가

    cout << "\n=== Global Reference Test ===" << endl;
    int& r2 = SafeReturnGlobal();  // OK
    cout << r2 << endl;
    globalValue = 777;
    cout << r2 << " (changed)" << endl;

    cout << "\n=== Static Reference Test ===" << endl;
    int& r3 = SafeReturnStatic();  // OK
    cout << r3 << endl;
    r3 = 888;
    cout << r3 << " (changed)" << endl;

    cout << "\n=== Temporary Reference Test ===" << endl;
    const int& r4 = DangerousTemporary();
    cout << r4 << endl;

}
