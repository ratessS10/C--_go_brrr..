#include <iostream>

int main ()
{

    int n;
    std::cout << "Enter int n:";
    std::cin >> n;

    int sum = 0;

    for(int i = 1; i <= n; ++i) //++i or i++ doesn't matter because same
    {
        int number ;
        std::cout << "Enter:"<< i <<". number: ";
        std:: >>number;

        sum += number;

    }

    std::cout << "Sum of" << a << "entered numbers is : " << sum << std::endl;

    for (initializer; condition; increment)
    {
        Body
    }

    return 0;
}




