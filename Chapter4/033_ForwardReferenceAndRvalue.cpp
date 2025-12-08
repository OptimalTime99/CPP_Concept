#include <iostream>
#include <utility>
#include <string>

using namespace std;

// rvalue reference를 받는 함수
void Process(string&& s) {
    cout << "[RVALUE] " << s << endl;
}

// lvalue reference를 받는 함수
void Process(const string& s) {
    cout << "[LVALUE] " << s << endl;
}

// Forwarding reference 템플릿 (universal reference 라고도 부름)
template<typename T>
void Forwarding(T&& value) {

    cout << "\n=== Forwarding test ===" << endl;

    // ① value는 지금 lvalue인지 rvalue인지에 따라 다르게 처리됨
    Process(value); // 🔴 ALWAYS LVALUE (forwarding 하지 않음)

    // ② forwarding을 하면 실제 value의 원래 value category가 유지됨
    Process(std::forward<T>(value)); // 🟢 PERFECT FORWARDING

    // ③ move를 하면 강제 이동 (value category 상관없이 rvalue)
    Process(std::move(value)); // ⚠️ After move, value is modified (maybe empty)
}


void forward_reference_and_rvalue() {
    string msg = "Hello";

    cout << "◆ Lvalue 전달" << endl;
    Forwarding(msg);   // Forwarding<string&>(msg)

    cout << "\n◆ Rvalue 전달" << endl;
    Forwarding(string("World"));  // Forwarding<string&&>(temporary)
}
