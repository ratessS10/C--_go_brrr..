#include <iostream>
#include <cmath>
#include <stdexcept>

void gobrr(int n)
{
    if(n == 0)
        throw 1;
    if(n == -1)
        throw 'c';
}


int main()
{
    int n;
    std::cout << "Enter number:";
    std::cin >> n ;

    try
    {
        gobrr(n);
    }

    catch(...)
    {
        std::cout << "Error"<<std::endl;
    }

    return 0;
}
