#include <iostream>
#include <string>
using namespace std;

class Mydata
{

public:
    string myname = "Default name";
    void name()
    {
        std::cout << "My name is " << myname << std::endl;
    }
};

int main(int argc, char const *argv[])
{
    Mydata ali;
    ali.myname="Ali Akbar Khan";

   ali.name();

    return 0;
}
