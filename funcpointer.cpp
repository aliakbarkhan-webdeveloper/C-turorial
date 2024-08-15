#include <iostream>
using namespace std;

void val()
{
    std::cout << "Data from val" << std::endl;
}

int main()
{
    void (*val_pointer)() = val;
    val_pointer();
    return 0;
}
