#ifndef __INCLUDED_STATIC_APPLE__
#define __INCLUDED_STATIC_APPLE__


#include <vector>
#include <string>

class Apple
{
private:
    double Weight;
    static double Totalgewicht;
    static float Totalnumber;
    std::string color;
public:
    Apple(float wt, const std::string& cr);
    ~Apple();
    void print_single_apple_info();
    static void print_total_apple_info();
};


#endif