#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <map>

int main()
{
    std::map<int, std::string > numbers;

    numbers[0] = "Zero";
    numbers[1] = "One";
    numbers[2] = "Two";

    std::cout << numbers.at(0)<<std::endl;
    std::cout <<numbers.size()<<std::endl;
    bool emp = numbers.empty();

    auto it = numbers.find(111);
    if(it == numbers.end())
        std::cout << "Key not found! " << std::endl << std::endl;

    else
        std::cout << "Key found!" << std::endl<< std::endl;

    std::map<int, std::string > Days
    {
        {1, "Monday"},
        {2,"Tuesday"},
        {3,"Wednesday"},
        {4,"Thursday"},
        {5,"Friday"},
        {6,"Saturday"},
        {7,"Sunday"}
    };
    for(int i=1; i <= 7; ++i)
        std::cout << Days[i] << std::endl;

    std::map <int, std::string >Months
    {
      {1,"January"},
      {2,"February"},
      {3,"March"},
      {4,"April"},
      {5,"May"}  ,
      {6,"June"},
      {7,"July"},
      {8,"August"},
      {9,"September"},
      {10,"October"},
      {11,"November"},
      {12,"December"}

    };
    for(int i ;i <=12 ; ++i)
        std::cout << Months[i] << std::endl;


    return 0;
}
