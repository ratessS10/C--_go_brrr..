#include <windows.h>
#include <iostream>

int main()
{
    char com_name[MAX_COMPUTERNAME_LENGTH + 1];

    unsigned long int arr_len = sizeof(com_name) / sizeof(char);
    bool success = GetComputerName(com_name, & arr_len);
    //bool success = false;
    if(success)
        std::cout << "NetBIOS computer name : " << com_name << std::endl;
    else
    {
        DWORD err = GetLastError();
        std::cout << "Function call failed! ERROR : " << err << std::endl;
    }

    return 0;
}
