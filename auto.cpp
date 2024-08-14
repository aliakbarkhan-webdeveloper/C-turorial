#include <iostream>
#include <string>
using namespace std;

int API_CALL(){
    return 10;
}
string API_CALL2(){
    return "API";
}
int main()
{
auto API_1=API_CALL();
auto API_2=API_CALL2();
    std::cout << API_1 << std::endl;
    std::cout << API_2 << std::endl;
    return 0;
}