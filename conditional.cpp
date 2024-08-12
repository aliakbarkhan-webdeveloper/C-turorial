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
    // int age = 17;
    // age >= 18 ? cout << "you are eligible for marriage" : cout << "sorry you have to wait for " << 18 - age << " years for marriage";

    // Switch case

    int rating = 2;
    switch (rating)
    {
    case 1:
        cout << "so bad to know you don't like our product" << "";
        break;
    case 2:
        cout << "so bad to know you don't like our product" << "";
        break;
    case 3:
        cout << "your feedback will be good to improve our product" << "";
        break;
    case 4:
        cout << "good to know you like our product we will be improve our product according to your feedback" << "";
        break;

    default:
        cout << "Good hogya, done hogya te chass agae" << "";
        break;
    }

    return 0;
}