#include <iostream>

int main()
{
    double a[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double *p;
    double *q;

    p= &a[0];
    q= &a[4];

    while(q>=p) std::cout << *q-- << " ";

    /*for(int i = 0; i<5; i++)
        std::cout << *p++ << " ";

    std::cout << std::endl << *p << std::endl;
    */

    return 0;
}

/*
//Introduction to pointers;

int main()
{
    int *p;
    int x;
    p = &x;

    cout << "Hello world!" << endl;
    return 0;
}
*/
