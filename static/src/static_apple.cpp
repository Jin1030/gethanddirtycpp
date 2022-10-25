#include <vector>
#include <iostream>
#include "static_apple.h"

//init static
double Apple :: Totalgewicht = 0;
float Apple :: Totalnumber = 0;

void Apple::print_single_apple_info()
{
    std::cout << "Weight: " << Weight << std::endl;
    std::cout << "color: " << color << std::endl;
    std::cout << "========" << std::endl;
}

void Apple::print_total_apple_info()
{
    std::cout << "Totalgewicht: "<<Totalgewicht << std::endl;
    std::cout << "Totalnumber: "<<Totalnumber << std::endl;
    std::cout << "========" << std::endl;
}

Apple::Apple(float wt, const std::string& cr)
{
    Totalgewicht += wt;
    Weight += wt;
    Totalnumber ++;
    color = cr;
}

Apple::~Apple()
{
    Totalgewicht -= Weight;
    Totalnumber --;
}