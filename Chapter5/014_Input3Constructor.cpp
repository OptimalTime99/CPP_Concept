#include <iostream>
#include <algorithm> //max 함수 사용
#include <string>

using namespace std;

class Student7
{
public:
    //생성자
    Student7(int math, int eng, int kor)

    {
        this->math = math;
        this->eng = eng;
        this->kor = kor;
    }
    double getAvg();
    int getMaxScore();

    //동작 정의(이를 멤버함수라고 합니다)
    void setMathScore(int math)
    {
        this->math = math;
        //this.math = math;와 동일
    }
    void setEngScore(int eng)
    {
        this->eng = eng;
        //this.eng = eng;와 동일
    }
    void setKorScore(int kor)
    {
        this->kor = kor;
        //this.kor = kor;와 동일
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

double Student7::getAvg()
{
    return (kor + eng + math) / 3.0;
}

int Student7::getMaxScore()
{
    return max(max(kor, eng), math);
}

void Input3Constructor()
{
    Student7 s(32, 52, 74);

    //평균 최대점수 출력
    cout << s.getAvg() << endl;
    cout << s.getMaxScore() << endl;
}