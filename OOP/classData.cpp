#include <iostream>
#include <string>
using namespace std;

class Student{
private:
   int _private_key=0000;
   string _name="ali";
public:
    string getname(){
        return _name;
    }
    void punjabschool();
};

void Student::punjabschool(){
  std::cout << "message" << std::endl;
}

int main(int argc, char const *argv[])
{
    Student ali;
    ali.punjabschool();
    return 0;
}
