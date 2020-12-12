#include <iostream>
using namespace std;

int main()
{
    int *p;
    int x = 7;
    p = &x;

    *p = 100;

    cout << "This is p: "<< p << endl;
    cout << "This is different but true *p: "<<*p << endl;
    cout << "This is x: " << x << endl;


    return 0;
}
