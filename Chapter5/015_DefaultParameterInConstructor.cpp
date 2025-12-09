#include <iostream>
#include <algorithm> //max 함수 사용
#include <string>

using namespace std;

class Student8
{
public:
    //값이 주어지지 않을경우 기본값을 할당하는 생성자
    Student8(int math = 32, int eng = 17, int kor = 52)
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

double Student8::getAvg()
{
    return (kor + eng + math) / 3.0;
}

int Student8::getMaxScore()
{
    return max(max(kor, eng), math);
}


void DefaultParameterInConstructor()
{
    Student8 s;
    //아래와 같이 사용할 수도 있음
    //Student s(1);
    //Student s(1, 2);
    //Student s(32, 52, 74);

    //평균 최대점수 출력
    cout << s.getAvg() << endl;
    cout << s.getMaxScore() << endl;
}