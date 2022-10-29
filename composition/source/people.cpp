#include "people.h"

People::People(const std::string& nm): name(nm){};

void People::printInfo(Height *ht)
{
    std::cout << "name: " << name << std::endl;
    btd->printdate();
    ht->printHeight();
};