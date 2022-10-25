#include <iostream>
#include "birthday.h"
//#include <string>


class People
{
    public:
        People(const std::string& nm);
        void printInfo();
        Birthday btd;

    private:
    std::string name;

};