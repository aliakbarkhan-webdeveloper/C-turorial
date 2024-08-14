#include <iostream>
using namespace std;
struct Car
{
    const int tyre;
    char colour;
};

int main()
{

    Car honda = {};

    //creating pointer
honda.colour="r";
    // Car *cp=&honda;
    // cp->colour="black";
    return 0;
}