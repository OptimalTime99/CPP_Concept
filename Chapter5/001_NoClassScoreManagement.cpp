#include <iostream>
#include <string>
using namespace std;

//3 과목의 평균을 구하는 함수
double getAvg(int kor, int eng, int math)
{
    return (kor + eng + math) / 3.0f;
}
//두 개의 수중 최대값을 반환하는 함수
int maxNum(int num1, int num2)
{
    if (num1 >= num2) return num1;
    else return num2;
}
//3과목중 가장 높은 점수를 반환하는 함수
int getMax(int kor, int eng, int math)
{
    return maxNum(maxNum(kor, eng), math);
}

void NoClassScoreManagement()
{
    int kor[3];
    int eng[3];
    int math[3];

    //점수 입력
    for (int i = 0; i < 3; i++)
    {
        cin >> kor[i] >> eng[i] >> math[i];
    }
    //각 학생의 평균 점수와 과목 최대 점수를 출력
    for (int i = 0; i < 3; i++)
    {
        cout << getAvg(kor[i], eng[i], math[i]) << endl;
        cout << getMax(kor[i], eng[i], math[i]) << endl;
    }
}