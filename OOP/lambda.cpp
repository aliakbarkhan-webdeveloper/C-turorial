#include <iostream>
using namespace std;

int main()
{

    //IIFE Lambda
    []{std::cout << "Ali Akbar Khan" << std::endl;}();

//arrow Lambda
auto sum= [](auto a,auto b){return a+b;};
std::cout << sum(4,6) << std::endl;
    return 0;
}
