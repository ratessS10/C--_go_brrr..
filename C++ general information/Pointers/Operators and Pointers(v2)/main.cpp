#include <iostream>

int main()
{
    double a[3] = {1.1, 2.2, 3.3};
    double *p;
    p= &a[0];

    for (int i = 0; i<3 ; i++)

        std::cout << *p++<< " ";

    std::cout << std::endl <<*p <<std::endl;

    return 0;
}
