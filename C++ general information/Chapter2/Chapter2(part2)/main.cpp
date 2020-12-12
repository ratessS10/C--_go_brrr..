#include <iostream>

int main ()
{
    int age;
    std::cout << "Enter person's age:" ;
    std::cin >> age;

    if(age >= 18)
        std::cout << "Person is an adult" std::endl;
    else if (age >= 13)
        std::cout <<"Person is a teenager"<<std::endl;
    else if(age >= 3)
        std::cout << "Person is a child"<<std::endl;
    else
        std::cout << "Person is a BABY !" << std::endl;

}



/* int main ()
{
  int x=10;

  if (x > 6)
  {
      std::cout << "X is greater than 6" <<std::endl;
  }



  if(10)
  {
      std::cout << "10 is also true" <<std::endl;
  }



  if(-4)
  {
      std::cout << "-4 is also true" <<std::endl;
  }


  if (1.5)
  {
      std::cout << "everything not zero is true" << std::endl;
  }


  if(10 > 5)
  {
      std::cout << "True" <<std::endl;
  }

  if(0)
  {
      std::cout << "Pointless text that will never be printed out" <<std::endl;
  }

  if (x > 10)
  {
      std::cout << "X is grater than 10" >>std::endl;
  }

  else
  {
      std::cout << "X is not greater than 10" << std::endl;
  }


  if (x > 10)
  {
      std::cout << "X is greater than 10" >>std::endl;
  }
  //int y = 10
  else:
  {
      std::cout << "X is not greater than 10" << std::endl;
  }



  if (x > 2)
    std::cout << "Ok, x > 2" << std::endl;
    std::cout << "X is not greater than 10" << std::endl;

} */


