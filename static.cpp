#include <iostream>
using namespace std;
int life(){
  static int life=5;
    return ++life;
}


int main()
{
    std::cout << life() << std::endl;
     std::cout << life() << std::endl;
      std::cout << life() << std::endl;

    return 0;
}