#include <iostream>
using namespace std;

int age(int birthyear){
return 2024-birthyear;
}

int main(){
    std::cout << "my birth year is:" << std::endl;
    cout<<"                   "<<age(2001);
    return 0;
}