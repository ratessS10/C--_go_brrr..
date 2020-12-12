#include <iostream>
using namespace std;

int main()
{
    /*
    double x =3.14;
    double y = 10.24;
    double *p = &x;

    cout << "This is p for x = " << *p <<endl;
    p = &y;
    cout << "This is p for y = " << *p <<endl;
    */

    /*
    int x = 7;
    int y = 6;
    int *p1 = &x;
    int *p2 = &y;

    //p1 = p2;

    cout << *p1+*p2 <<endl; // result is 12 why; because we were do p1(6)=p2(7) and p1 = p2 i mean p1 = 6, p2 = 6 result is 12 that's really simple
    */

    int x = 7;
    double y = 6.21;
    int *p1 = &x;
    double *p2 = &y;


     *p1 = *p2;

    cout << *p1 << endl;

    return 0;
}
