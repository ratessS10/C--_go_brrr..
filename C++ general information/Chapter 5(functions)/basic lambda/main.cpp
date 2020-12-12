#include <iostream>

void Print(int n)
void PrintMenu();
int GetLastDigit(const int n);

int main()
{
    auto lambda1 = [] (int x)
    {
        return x * x * x ;
    };

    int num = 10;
    int result = lambda1(num);

    auto lambda2 = [] (int x , int y) -> int
    {
        return x * y;
    };
    int result2 = lambda2(10, 5);


    return 0;
}
void Print(int n)
{
    for(int i=1 ;i <= n; ++i)
        std::cout << "*"
    std::cout << std::endl;
}

int GetLastDigit(const int n)
{
    return n%10;

}

void PrintMenu()
{
    std::cout << "1. addition\n";
    std::cout << "2. subtraction\n";
    std::cout << "3. multiplication\n";
    std::cout << "4. division"<<std::endl;
}
