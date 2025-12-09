#include <iostream>
#include "016_Student.h"

using namespace std;

void DefineStudentClassInMainCPP()
{
    Student9 s;
    Student9 s2(1);
    Student9 s3(1, 2);
    Student9 s4(32, 52, 74);

    //평균 최대점수 출력
    cout << s.getAvg() << endl;
    cout << s.getMaxScore() << endl;
}