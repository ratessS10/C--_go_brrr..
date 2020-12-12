#include <iostream>


struct Date
    {
        int day;
        int month;
        int year;
    };
int main()
{
    Date dt;

    std::cout << "Enter day: ";
    std::cin >> dt.day;

    std::cout << "Enter month: ";
    std::cin >> dt.month;

    std::cout << "Enter year: ";
    std::cin >> dt.year;

    std::cout << "Entered date:";
    std::cout << dt.day << "/" << dt.month<< "/" << dt.year << std::endl;


    return 0;
}

/*
int main()
{
    Date dt1,dt2;

    dt1.year = 2019;
    dt2.year = 2020;

    std::cout << "dt1.year:" << dt1.year << std::endl;
    std::cout << "dt2.year:" << dt2.year << std::endl;

    return 0;
}

*/
