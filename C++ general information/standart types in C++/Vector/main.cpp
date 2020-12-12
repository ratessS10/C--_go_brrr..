#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec1(10);
    std::vector <double> vec2(5);
    std::vector<int> vec3;
    std::vector<int> vec4(3, 7);

    unsigned int vec1_size = vec1.size();

    for(int i = 0;i <vec4.size(); ++i)
        std::cout << vec4[i] << " ";

    int el = vec1.at(0);

    bool emp1 = vec2.empty();
    bool emp2 = vec3.empty();

    std::cout << vec3.size() << std::endl;
    vec3.push_back(100);
    std::cout << vec3.size() << std::endl;

    std::vector<int> vec5 {5, 4, 3, 2, 1};

    for(int i : vec5)
        std::cout << i << " ";
    vec5.pop_back();
    std::cout <<std::endl;

    for(int i : vec5)
        std::cout << i << " ";

    return 0;
}

/*
std::vector
std::string
std::map
std::function
std::deque
*/
