#include <iostream>
using namespace std;

void GradeClassification() {
    int score;

    cout << "Enter your score: ";
    cin >> score;

    // Á¶°Ç: 0 <= score <= 100
    if (score >= 0 && score <= 100) {
        if (score >= 90) {
            cout << "Grade: A\n";
        }
        else if (score >= 80) {
            cout << "Grade: B\n";
        }
        else if (score >= 70) {
            cout << "Grade: C\n";
        }
        else if (score >= 60) {
            cout << "Grade: D\n";
        }
        else {
            cout << "Grade: F\n";
        }
    }
    else {
        cout << "Invalid score. Please enter a value between 0 and 100.\n";
    }
}
