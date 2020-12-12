#include <iostream>
#include <string>

struct Date
    {
        int day;
        int month;
        int year;
    };


struct Book
{
    int ID;
    std::string Name;
    std::string Author;
    Date Published;
    static int Count;
};

int Book::Count;

int main()
{
    Date dt_for_book1 = {05,10,2020};
    Date dt_for_book2 = {24,10,2020};

    Book book1 = {0,"Name of the Book","Unknown",dt_for_book1};
    Book books[100];
    books[0];

    books[2].ID = 10;
    books[14].Author="go brrrr";

    std::cout <<books[2].ID << std::endl;
    std::cout << books[14].Author<<std::endl;


    return 0;
}
