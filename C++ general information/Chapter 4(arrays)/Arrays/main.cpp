#include <iostream>

int main()
{
    const int nor = 10;
    int arr[10];

    for(int i = 0; i < noe ; ++i)
    {
        std::cout << "Enter"<< i + 1 << ". number:";
        std::cin >> arr[i];
    }

    int MAX = arr[0];
    for(int i = 1 ; i < noe ; ++i)
        if(arr[i] > MAX)
            MAX = arr[i];

    int MIN = arr[0];
    for(int i = 1; i < noe ; ++ 1)
        if(arr[i] < MIN)
            MIN = arr[i]
    std::cout <<  "MIN = " << MIN << ": MAX="<<MAX << std::endl;



    return 0;
}
/* C string
int main()
{
    char str[6] = {'H','E','L','L','O','\0'}
    std::cout << str << std::endl;

    return 0;
}
*/








/*
int main()
{
    int arr1[100] = {0};

    for(int i = 0 ; i < 100;++i)
     {
        arr1[i]= i;
        std::cout <<arr1[i] << std::endl;
     }


    int num = 5
    //std::cin >> arr1[num + 3 * num -5];

    #define SIZE 20

    int arr2[SIZE];


    return 0;
}
*/
