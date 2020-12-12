#include <iostream>

int main()
{
    int sum = 0;

    for (int i =1 ; i <= 50; ++i)
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

/*continue;

int main()
{
    for (int i = 20 ; i => 20; --i)
    {
        if (i % 3 != 0)
            continue;
      //else;
        std::cout << i << std::endl;

    }


    return 0;
}
*/

/* goto;

int main()
{
    int i = 1;

    AGAIN:
    std::cout << i << std::endl;

    ++i;

    if (i <= 20)
        goto AGAIN;

    return 0;
}

*/
