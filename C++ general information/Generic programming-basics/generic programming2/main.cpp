#include <iostream>

template <typename TYPE>
void Print(TYPE arr[], int len )
{
    std::cout << "[";
    for(int i = 0; i < len-1 ; ++i)
        std::cout << arr[i] << ", ";
    if(len !=0)
        std::cout << arr[len-1];
    std::cout << "]" << std::endl;

}

int main()
{
    int arr00[] = {2, 3, 4, -5, 1, 1, 0, 4};
    double arr01[] = {-2, 3.11, 4.34,};
    float arr02[] = {-0.2,0.1,0.34};
    char arr03[] = {'q','t','x','t' };

    std::cout << sizeof arr01 << " " << sizeof arr01[0] <<std::endl;

    Print(arr00, 8);
    Print(arr01, 3);
    Print(arr02, 3);
    Print(arr03, 4);


}
