#include "016_Student.h"
#include <algorithm> // max ÇÔ¼ö

using namespace std;

double Student9::getAvg()
{
    return (kor + eng + math) / 3.0;
}

int Student9::getMaxScore()
{
    return max(max(kor, eng), math);
}
