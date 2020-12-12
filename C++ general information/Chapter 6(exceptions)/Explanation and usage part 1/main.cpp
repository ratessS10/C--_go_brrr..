#include <iostream>
#include <cmath>
#include <stdexcept>

void something(int n)
{
    if(n == 0)
        throw 1;
    if(n > 0 && n < 100)
        throw "brrrrrrrrrr";
    if(n == -1)
        throw 'c';
    if(n < -1 )
        throw std::domain_error("some std exception");

}


int main()
{
    int num;

    std::cout << "Enter number";
    std::cin >> num;


    try
    {
        something(num);
    }

    catch(char c)
    {
        std::cout << " Caught: CHAR " << std::endl;
    }
    catch(int i )
    {
        std::cout << "Cought : INT" << std::endl;
    }

    catch(const char * txt)
    {
        std::cout << "Caught Text:" << txt << std::endl;
    }

    catch(std::domain_error de)
    {
        std::cout<< "Caught domain_error with text:" << de.what() << std::endl;
    }

    return 0;
}

