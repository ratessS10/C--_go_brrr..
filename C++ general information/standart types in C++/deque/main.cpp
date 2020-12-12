#include <iostream>
#include <vector>
#include <deque>

int main()
{
    std::deque<int> dq1(10);
    std::deque <double> dq2(5);
    std::deque<int> dq3;
    std::deque<int> dq4(3, 7);

    for(int i  = 0 ; i < dq4.size(); ++i)
        std::cout << dq4[i] << " ";


    int el = dq1.at(0);

    bool emp1 = dq2.empty();
    bool emp2 = dq3.empty();

    std::cout << std::endl << dq3.size() << std::endl;
    dq3.push_back(100);
    std::cout << std::endl << dq3.size() << " " << dq3.at(0) << std::endl;

    std::deque<int> dq5{5, 4, 3, 2, 1};

    for(int i : dq5)
        std::cout << i << " ";

    dq5.pop_back();
    std::cout <<std::endl;
    for(int i :dq5)
        std::cout << i << " ";

    dq5.push_front(100);

    std::cout << std::endl;

    for(int i : dq5)
        std::cout << i << " ";


    return 0 ;
}
