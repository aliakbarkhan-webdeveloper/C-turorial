#include <iostream>
using namespace std;

enum Colour : int64_t
{
    COLOR = 135,
    TYPE,
    SIZE
};
int main()
{
    std::cout << "The Enum value: " << COLOR << std::endl;
    std::cout << "The Enum value: " << TYPE << std::endl;
    std::cout << "The Enum value: " << SIZE << std::endl;
    return 0;
}