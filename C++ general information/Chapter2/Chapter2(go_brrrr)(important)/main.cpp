#include <iostream>
#include <string>

#include <stdlib.h>
#include <cstdlib>

#include <time.h>
#include <ctime>

#include <string>

#include "/path/to/the/file/SomeLib.h"

int main ()
{
    bool A = true,
         B = true,
         C = false
         D = true;

    bool and1 = A && B; //true and true = true
    bool and2 = A && B && C && D ; // true,true,false,true=false

    bool or1 = C || D; //true
    bool or2 = A || D || B; //true

    bool and_or1 =  A && B || C; //true because for or,only one needs to be true
    bool and_or2 = C || A && B && C && D //false because for and,only a needs to be false
                    //  C      (A && B && C && D)
                    //false ||   false  =  false


    // 3+2*5=13 and (3+2)*5 =25   this is process priority

    // || mean or .   && mean and
    //  !A = not A , this function ! mean not
    bool not1 = !A; //false negative like this minus(-)Mean -A or !A same things .So this way A it's true but this time false because this function = !
    bool not2 = !C; //true because -(-C) and this C become true  simple math :)
    bool not3 = A && !C &&D;//true
    bool not4 = A && !C && D && C || B;//true
    bool not5 = A && !C && D && C; //false
    bool not6 = !A || !B ||!C ||!D;//true

}





