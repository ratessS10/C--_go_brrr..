#include <iostream>

int main()
{
    int number;
    std::cout << "Enter an inLeger:" ;
    std::cin >> number;

    int squared = number * number;

    std::cout << "This number squared" << " is " << squared << std::endl;

    std::cout << " This number " << number << " squared is " << number * number
                                                        <<std::endl;
    return 0;
}


