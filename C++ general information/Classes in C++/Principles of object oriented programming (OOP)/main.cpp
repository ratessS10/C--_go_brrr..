#include <iostream>



/* class ClassName
{
    something code
};
*/

class Date
{
        int day;
        int month;
        int year;
    public:

        void SetDate(int d, int m, int y)
        {
            this -> day = d;
            this -> month = m;
            this -> year = y;
        }

        void Print() const
        {
            std::cout << this -> day << "/"
                    << this -> month<<"/"
                    << this -> year << std::endl;
        }
        //Getters
        int GetDay() const
        {
            return this-> day;
        }
        int GetMonth() const {return this ->  month;}
        int GetYear () const {return this->  year;}

        //setters
        void SetDay(int d){this ->day = d;}
        void SetMonth(int m){this ->month = m;}
        void SetYear(int y){this -> year = y;}
};

int main()
{
    int m, d, y;

    std::cout << " Enter Date:";
    std::cin >> d >>m >> y;
    Date dt;
    dt.SetDate(d, m, y);
    std::cout << "Entered Date:";

    dt.Print();

    std::cout << "Day:" << dt.GetDay();


    return 0;
}
