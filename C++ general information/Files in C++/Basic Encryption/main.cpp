#include <iostream>
#include <fstream>
#include <string>


std::string ROT13(std::string s);

int main()
{
    std::string text, s, file_path;

    std::cout << "Enter text (--- in newline to end): "<< std::endl;

    while(std::getline(std::cin, s))
    {
        if(s != "---" )
            text += s+ "\n";
        else break ;

    }

    std::cout << "Enter name of the file: ";
    std::getline(std::cin, file_path);

    std::ofstream file(file_path);
    if(!file)
    {
        std::cout << "Error! Cannot write to " << file_path << std::endl;
        return 1;
    }

    file << ROT13(text);
    file .close();

    return 0;
}

std::string ROT13(std::string s)
{
    for(char &c : s)
        if ( c >= 'a' && c <= 'z' || c >= 'A' && c<= 'Z' )
        {
            if(c < 'a' +13 || c < 'A' + 13 )
                c = c+ 13;
            else
                c = c - 13;
        }

    return s;
}
