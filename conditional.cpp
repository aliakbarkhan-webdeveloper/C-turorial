#include <iostream>
#include <cstdint>
#include <string>
using namespace std;

int main()
{

    // ifelse

    //    int a= 7;
    //    if (a>=18)
    //    {
    //    cout<<"congratulation! your are eligible for marriage";
    //    }else{
    //     int remaining_year=18-a;
    //     cout<<"sorry! you have to wait "<<remaining_year<<" years for marriage";
    //    }

    // Ternary operator
    int age = 17;
    age >= 18 ? cout << "you are eligible for marriage" : cout << "sorry you have to wait for " << 18 - age << " years for marriage";

    return 0;
}