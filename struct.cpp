#include <iostream>
using namespace std;
struct Car{
    const int id;
    int age;
};

int main()
{

    Car honda = {001,24};

    //creating pointer
std::cout << honda.age << std::endl;
    // Car *cp=&honda;
    // cp->colour="black";
    return 0;
}