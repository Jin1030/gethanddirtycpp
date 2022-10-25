#ifndef __BIRTHDAY_H__
#define __BIRTHDAY_H__


#include <iostream>



class Birthday
{
    public:
        Birthday();
        Birthday(int m, int d, int y);
        void printdate();
        void setdate(int m, int d, int y);

    private:
        int month;
        int day;
        int year;
};



#endif