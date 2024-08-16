#include <iostream>
#include <string>
using namespace std;
class Phone
{
    string _name = "mobile";
    string _os = "ololo";
    int _price = 0;

public:
    Phone();                                  // default constructor, invoke authomatically at object creation
    Phone(string name, string os, int price); // parameterize constructor
    Phone(Phone &);                           // copy constructor, copy the data of another object of same type of class.
    ~Phone();                                 // destructor, delete the constructor automatically
    void getData() { std::cout << _os << std::endl; }
};

// Defination of default constructor
Phone::Phone() : _name("Samsung"), _os("andrios 14"), _price(60000) { std::cout << "Default constructor is working" << std::endl; };
// Defination of parametrize constructor
Phone::Phone(string name, string os, int price) : _name(name), _os(os), _price(price) { std::cout << "parametrize constructor is working\n"
                                                                                                  << std::endl; };
// copy Constructor
Phone::Phone(Phone &data) : _name(), _os(), _price()
{
    _name = "new" + data._name;
    _os = "new" + data._os;
    _price = data._price;
    printf("copy constructor\n");
};
// destructor: it invoked automatically to free upspace
Phone::~Phone() { printf("the destructor is working for %s\n", _name.c_str()); };
int main(int argc, char const *argv[])
{
    // Default constructor
    //  Phone samsung;
    //  samsung.getData();

    // Parametrize constructor usage
    Phone oppo("A57", "Andriod 9", 40000);
    oppo.getData();

    // Copy Constructor
    Phone nokia(oppo);
    nokia.getData();

    

    return 0;
}
