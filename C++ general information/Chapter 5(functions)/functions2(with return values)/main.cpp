#include <iostream>

void Print(int n)
voidPrintMenu();
int GetLastDigit(const int n);

int main()
{
    int n;
    std::cout<< "Enter num: ";
    std::cin >> n;

    int last_digit = GetLastDigit(n)

    std::cout << "Last Digit of:" << n << "is:" << last_digit << std::endl;
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
    std::cout << "3. multiplication\n";<<std::endl;

}
