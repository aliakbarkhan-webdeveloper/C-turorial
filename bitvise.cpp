#include <iostream>
using namespace std;
int main(){
    int a=5;
    int b=9;
    int c=a&b;
    int d=a^c;
    int e=~a;
std::cout << c << std::endl;
std::cout << d << std::endl;
std::cout << e << std::endl;
return 0;
}