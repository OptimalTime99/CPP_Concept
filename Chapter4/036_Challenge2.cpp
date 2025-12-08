#include <iostream>

void Challenge2() {
    // 1. 정수형 변수 score를 선언하고 80이라는 값을 할당하세요.
    int score = 80; // <-- 이 부분을 채우세요. score 변수에 초기값 80을 넣으세요.

    // 2. score 변수를 참조(Reference)하는 레퍼런스 변수 score_ref를 선언하세요.
    int& score_ref = score; // <-- 이 부분을 채우세요. score_ref가 score를 참조하게 만드세요.

    // 3. 레퍼런스 score_ref를 사용하여 score 변수의 값을 출력하세요.
    std::cout << "레퍼런스를 통해 접근한 score의 값: " << score_ref; // <-- 이 부분을 채우세요. score_ref를 사용하세요.
    std::cout << std::endl;

    // 4. 레퍼런스 score_ref를 사용하여 score 변수의 값을 95로 변경하세요.
    score_ref = 95; // <-- 이 부분을 채우세요. score_ref에 새 값 95를 할당하세요.

    // 5. score 변수의 값이 실제로 변경되었는지 확인하기 위해 score 변수 자체를 출력하세요.
    std::cout << "레퍼런스 변경 후 score의 값: " << score; // <-- 이 부분을 채우세요. score 변수 자체를 사용하세요.
    std::cout << std::endl;
}