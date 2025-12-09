#include <iostream>
#include <algorithm> //max 함수 사용
#include <string>

using namespace std;

class Student6
{
public:
    //동작 정의(이를 멤버함수라고 합니다)
    double getAvg();
    int getMaxScore();

    void setMathScore(int math)
    {
        this->math = math;
    }
    void setEngScore(int eng)
    {
        this->eng = eng;

    }
    void setKorScore(int kor)
    {
        this->kor = kor;
    }

    int  getMathScore() { return math; }
    int  getEngScore() { return eng; }
    int  getKorScore() { return kor; }

private:
    //데이터 정의(이를 멤버변수라고 합니다.)
    int kor;
    int eng;
    int math;
};

double Student6::getAvg()
{
    return (kor + eng + math) / 3.0;
}

int Student6::getMaxScore()
{
    return max(max(kor, eng), math);
}

void GetterSetter()
{
    Student6 s;

    s.setEngScore(32);
    s.setKorScore(52);
    s.setMathScore(74);

    //평균 최대점수 출력
    cout << s.getAvg() << endl;
    cout << s.getMaxScore() << endl;

}