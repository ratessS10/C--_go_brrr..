#include <iostream>

int main ()
{
    int n;

    std::cout << "Enter n:";
    std::cin >> n;

    int sum = 0;
    int i = 1;

    while ( i<=n )
    {
        int number;
        std::cout << "Enter" << i << ". number:";
        std::cin >> number;

        sum +=number;
        ++i


    }
    std::cout << "Sum of" << n << "entered numbers is" << sum << std::endl;

    return 0;
}


/* int main ()
{
    while(true)

    for (i; c; inc)
    {
        BODY
    }
    i
    while(c)
    {
        BODY;
        inc;
    }


    return 0;
} */

