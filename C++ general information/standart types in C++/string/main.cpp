#include <iostream>
#include <vector>
#include <deque>
#include <string>

int main()
{
    std::string s1 = "How's it going";
    std::cout << s1 << std::endl;

    std::string s2 = "Heyyy,I'm good but you looking so sad";
    std::cout << s2 <<std::endl;

    std::string s3;
    std::string s4 = "";

    unsigned int s1_size = s1.size();
    std::cout << s1_size << std::endl;

    bool emp = s1.empty();

    char c1 = s1[0];
    char c2  = s1.at(0);
    std::cout << c1 << " " << c2 << std::endl;

    if(s1 == s1){}
    if(s2 != s1){}
    if(s1 == "Hello"){}

    if(s1 > s2){}
    if(s1 < s2){}

    s3.push_back('E');
    std::cout << s3 << std::endl;

    s1 += " gobrrr";
    std::string s5 = s1 + "  ,  " + s2;
    std::cout << s5 << std::endl;

    std::string s6;
    std::cin >>s6;
    std::cout << s6 << std::endl;

    std::string s7;
    std::getline(std::cin, s7);
    std::cout << s7 << std::endl;

    return 0;

}
