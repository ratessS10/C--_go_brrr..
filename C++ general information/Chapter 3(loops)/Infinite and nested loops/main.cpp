#include <iostream>

int main()
{
    int sum = 0;

    for (int i =1 ; ; ++i)
    {
        int number;
        std::cout << "Enter number(or -1 to end):";
        std::cin >> number;

        if (number == -1)
            break;
        sum +=number;

    }
    std::cout << "Sum is:" << sum;

    return 0;
}


/* while(true)
{
    some code...
    if(condition)
        break;

}

while(227)
{

}

*/


//nested loops:
int main()
{
    int M, N;
    std::cout << "Enter M and N, separated by space:";
    std::cin >> M >> N;

    for(int i = 1 ; i <= M ; ++i)
    {
        for(int j = 1; j= N ; ++J)
            std::cout << "*";

        std::cout<< std::endl;
    }
}

