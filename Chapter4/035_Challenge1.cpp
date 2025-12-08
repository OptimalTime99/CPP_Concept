#include <iostream>

void Challenge1() {
    // 1. 정수형 변수 value를 선언하고 25라는 값을 할당하세요.
    int value = 25; // <-- 이 부분을 채우세요. value 변수에 초기값 25를 넣으세요.

    // 2. value 변수의 주소를 저장할 포인터 변수 ptr을 선언하세요.
    //    ptr이 value를 가리키도록 value 변수의 주소를 ptr에 저장하세요.
    int* ptr = &value; // <-- 이 부분을 채우세요. value 변수의 주소를 여기에 넣으세요.

    // 3. 포인터 ptr을 사용하여 value 변수의 값을 출력하세요.
    //    (힌트: 포인터가 가리키는 값을 얻으려면 역참조 연산자 '*'를 사용합니다.)
    std::cout << "포인터를 통해 접근한 value의 값: " << *ptr; // <-- 이 부분을 채우세요. ptr이 가리키는 값을 출력하세요.
    std::cout << std::endl;
}