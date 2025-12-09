#include <iostream>
#include <algorithm> //max 함수 사용
#include <string>
using namespace std;
class Student3
{
    //동작 정의(이를 멤버함수라고 합니다)
    double getAvg();
    int getMaxNum();
    //데이터 정의(이를 멤버변수라고 합니다.)
    int kor;
    int eng;
    int math;
};

double Student3::getAvg()
{
    return (kor + eng + math) / 3.0;
}
int Student3::getMaxNum()
{
    return max(max(kor, eng), math);
    // 다른 방법 return max({ kor, eng, math });
}