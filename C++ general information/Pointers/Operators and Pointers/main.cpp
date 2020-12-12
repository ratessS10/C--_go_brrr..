#include <iostream>

int main()
{
    double a[5] = {1, 2, 3, 4, 5};
    double *p = a;

    for(int i = 0; i < 5 ; i++)
    {
        std::cout << *p << " " ;
        p++;
    }

    return 0;
}
