
#include <iostream>
//#include "static_apple.h"
#include <string>
#include <fstream>
#include "stdlib.h"

struct Book
{
    std::string isbn;
    std::string name;
    double price;
    std::string author;
};

bool GetBookFromFile(const std::string& filePath, Book*& book)
{
    //要判断指针
    if (!book)
        return false;
    else{
        std::fstream fileInput(filePath);
        fileInput >> book->isbn >> book->name >> book->price;
        return true;
    }
}

int main ()
{
    Book* book1 = new Book();
    if (false == GetBookFromFile("book_sea.txt", book1))
        exit(0);
    else{
        std::cout<<book1->isbn <<std::endl;
        std::cout<<book1->name <<std::endl;
        std::cout<<book1->price <<std::endl;
        delete book1;
    }
    return 0;
}