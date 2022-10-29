#include "birthday.h"

Birthday::Birthday()
{
    month = 0;
    day = 0;
    year = 0;

}

void Birthday::printdate()
{
    std::cout<< "month: " << month << " day: " << day << " year: " << year << std::endl;   
}

void Birthday::setdate(int m, int d, int y)
{
    month = m;
    day = d;
    year = y;
}

