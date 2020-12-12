#include <iostream>

void Print(int arr[],int len);
void Print(double arr[], int len);



int main()
{
    int arr00[] = {2, 3, 4, -5, 1, 1, 0, 4};
    double arr01[] = {-2, 3.11, 4.34,};

    const int len = sizeof arr01 / sizeof arr01[0];

    std::cout << sizeof arr01 << " " << sizeof arr01[0] <<std::endl;

    Print(arr01, len);
    Print(arr00, len);
    Print(arr01, len);

    return 0;
}

void Print(int arr[],int len)
{
    std::cout << "[";

    for(int i = 0; i < len-1; ++i)
        std::cout << arr[i] << ", ";

    if(len !=0)
        std::cout << arr[len-1];
    std::cout << "] INT " << std::endl;
}

void Print(double arr[], int len)
{
    std::cout << "[";

    for(int i = 0; i < len-1; ++i)
        std::cout << arr[i] << ", ";

    if(len !=0)
        std::cout << arr[len-1];
    std::cout << "] DOUBLE " << std::endl;

}
/*
template <typename TYPE>

void Print(TYPE arr[], int len )
*/

