#include <iostream>
#include <string>
using namespace std;

class Mydata
{
    int _secret_key = 1234;

public:
    string myname = "Default name";
    void name()
    {
        std::cout << "My name is " << myname << std::endl;
    }

void setData(int &data, string &password){
if (password=="aliakbar")
{
    _secret_key=data;
    std::cout << "the new sercret_key is: "<<_secret_key << std::endl;
}else{
    std::cout << "Wrong password" << std::endl;
  
}

}


    int getSecret(string &password)
    {
        if (password == "aliakbar")
        {
            return _secret_key;
        }
        else
        {
            std::cout << "Wrong Password" << std::endl;
            return 0;
        }
    }
};

int main()
{
    Mydata ali;
    ali.myname = "Ali Akbar Khan";
    ali.name();
    string password = "aliakbar";
    int newKey=121314;
    ali.setData(newKey,password);
    std::cout << ali.getSecret(password) << std::endl;
    return 0;
}
