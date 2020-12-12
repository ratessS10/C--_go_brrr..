#include <iostream>
#include <cmath>
#include <stdexcept>


int main()
{
    std::logic_error
    std::domain_error
    std::invalid_argument
    std::length_error
    std::out_of_range
    std::range_error
    std::overflow_error
    std::underflow_error

    catch(std::range_error re)
    {
        std::cout << "Error:" <<re.what;
    }


    return 0;
}
