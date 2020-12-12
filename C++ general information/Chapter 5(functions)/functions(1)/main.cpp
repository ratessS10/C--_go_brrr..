#include <iostream>

void Print(int n)
{
    for(int i=1 ;i <= n; ++i)
        std::cout << "*"
    std::cout << std::endl;

}

int main()
{
    while(1)
    {
        std::cout << "Enter number (0 for end):"
        int num;
        std::cin >> num;
        if (num == 0)
            break;
        Print(n);

    }


    return 0;
}

