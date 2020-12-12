#include <iostream>

void Print(int n)
void PrintMenu();
int GetLastDigit(const int n);

int main()
{
    int n1 , n2;
    std::cout << "Enter number 1 :";
    std::cin >> n1;
    std::cout << "Enter number 2 :";
    std::cin >> n2;
    PrintMenu();

    int choice;
    int result;

    std::cin >> choice;

    if (choice == 1)
        result = n1+n2;
    else if (choice == 2)
        result = n1-n2;
    else if (choice == 3)
        result = n1*n2;
    else if (choice == 4)
        result = n1/n2;
    else
    {
        std::cout << "Error! Wrong choice!" << std::endl;
        return 1;
    }
    std::cout << "The result is:" << result << std::endl;

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
