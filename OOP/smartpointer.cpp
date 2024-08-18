#include <iostream>
#include <memory>
#include <string>
using namespace std;

class User
{
public:
    User() { std::cout << "constructor" << std::endl; };
    ~User() { std::cout << "destructor" << std::endl; };
    void testFunc() { std::cout << "I am a test func" << std::endl; };
};


int main()
{
    //unique pointer
    // {
    //     unique_ptr<User> ali = make_unique<User>();
    //     ali->testFunc();
    //     std::cout << "inside the scope" << std::endl;
    // }
    // std::cout << "outside the scope (unique pointer)" << std::endl;

//Shared pointer
    {
        shared_ptr <User>ali=make_shared<User>();
        shared_ptr <User>akbar=ali;
        std::cout << akbar << std::endl;
    }

    
    return 0;
}