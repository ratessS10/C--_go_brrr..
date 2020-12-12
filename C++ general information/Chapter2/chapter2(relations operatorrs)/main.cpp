#include <iostream>

int main()
{

    int x =10, y=5, z=15, w=10;

    bool rel1=x > y;
         rel1 = true;
    bool rel2 = y > x;
         rel2 = false;

    bool rel3 = x == z; //false,not equals
    bool rel4 = x != z; // true

    bool rel5 = x >= w; //true

    bool rel6 = !(x > w); //true

    bool rel7 = (12 > x) > 7; //will have the final value of,false
                //true   > 7
                //   1 >  7
                //    false

    bool rel9 = 12 > x && x > 7;
              //true and true > true
              //finally true
}
