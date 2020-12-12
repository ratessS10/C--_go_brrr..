#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ofstream f("TestFile", std::ios::app);
    if(!f)
        std::cout << "File Does not exist"
                     "or you don't have a permission to write to it"<<std::endl;

// you'll have to always check permission
// We don't see on the screen(cmd) because not exist and file don't use permission you must have to give file permission :)

     else
        f  << "Hi there";

// again don't see actually that above on same problem


    f.close();

    return 0;
}

/*
int main()
{
    std::string s;
    std::cout << "Enter some text: ";
    std::getline(std::cin, s);

    int n;

    std::cout << "If you want number write some number n  : )  ";
    std::cin >> n;

    std::ofstream f("test.txt");

    for(int i = 1; i <= n ; ++i)
        std::cout << i << s << std::endl;

    f.close();

    return 0;

//std::ofstream file(path_to_the_file);
//like this mean; std::ofstream file("C:\anyfolders\your.txt");

//f << something;
}
*/
