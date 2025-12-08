#include <iostream>
using namespace std;

void WeatherGoOutDecision() {
    string weather;
    int temperature;

    cout << "Enter weather (sunny/rainy): ";
    cin >> weather;
    cout << "Enter temperature: ";
    cin >> temperature;

    // 조건: 맑은 날씨(sunny)이고 온도가 20도 이상일 때 외출
    if (weather == "sunny" && temperature >= 20) {
        cout << "It's a nice day to go out!\n";
    }
    // 조건: 비가 오거나 너무 추운 날씨
    else if (weather == "rainy" || temperature < 10) {
        cout << "Better stay indoors.\n";
    }
    // 나머지 경우
    else {
        cout << "You can go out, but dress appropriately.\n";
    }
}
