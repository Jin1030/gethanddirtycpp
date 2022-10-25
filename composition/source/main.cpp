#include"people.h"
//#include <string>

int main()
{
    People p1("sven");
    People* p1_p = &p1;
    p1_p -> btd.setdate(3,22,1999);
    p1.printInfo();


    People p2("mark");
    People* p2_p = &p2;
    p2_p -> btd.setdate(9,11,1994);
    p2.printInfo();
}