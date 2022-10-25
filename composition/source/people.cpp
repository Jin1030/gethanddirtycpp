#include "people.h"

People::People(const std::string& nm): name(nm){};

void People::printInfo()
{
    std::cout << "name: " << name << std::endl;
    btd.printdate();
};