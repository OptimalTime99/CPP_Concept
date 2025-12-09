#include <iostream>
#include <algorithm> //max 함수 사용
#include <string>
using namespace std;
class Student2
{
    //동작 정의(이를 멤버함수라고 합니다)
    double getAvg()
    {
        return (kor + eng + math) / 3.0;
    }
    int getMax()
    {
        return max(max(kor, eng), math);
    }

    //데이터 정의(이를 멤버변수라고 합니다.)
    int kor;
    int eng;
    int math;
};