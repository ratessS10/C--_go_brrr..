#include <windows.h>
#include <iostream>

int main()
{
    DWORD ms = GetTickCount();
    std::cout << "Milliseconds passed after computer started:" << ms << std::endl;

    unsigned int hours  = ms/3600000;
    unsigned int minutes = (ms/6000) % 60;
    unsigned int seconds = (ms/1000) % 60;

    std::cout << "And this is : " << hours << "h, " << minutes << "m and " << seconds
                                                                      << "s"
                                                                      <<std::endl;

    /*
    std::cout << "We have got 'SW_SHOW' constant : " <<SW_SHOW << std::endl;
    std::cout << GetLastError();
    */
    return 0;
}
