#include <iostream>
#include "birthday.h"
#include "height.h"
//#include <string>

//class Birthday;
// class Height;
class People
{
    public:
        People(const std::string& nm);
        void printInfo(Height *ht);
        Birthday *btd;

    private:
    std::string name;

};